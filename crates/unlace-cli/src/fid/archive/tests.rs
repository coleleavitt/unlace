use super::*;

#[test]
fn staged_objects_have_independent_lifetimes() {
    let first = stage_object(b"first member").unwrap();
    let second = stage_object(b"second member").unwrap();
    assert_ne!(first.as_os_str(), second.as_os_str());
    assert_eq!(first.extension().unwrap(), "o");
    assert_eq!(std::fs::read(&first).unwrap(), b"first member");
    assert_eq!(std::fs::read(&second).unwrap(), b"second member");
    #[cfg(unix)]
    {
        use std::os::unix::fs::PermissionsExt;
        assert_eq!(
            std::fs::metadata(&first).unwrap().permissions().mode() & 0o077,
            0
        );
    }
    let first_path = first.to_path_buf();
    let second_path = second.to_path_buf();
    drop(first);
    assert!(!first_path.exists());
    assert_eq!(std::fs::read(&second).unwrap(), b"second member");
    drop(second);
    assert!(!second_path.exists());
}

#[test]
fn staged_objects_are_removed_on_unwind() {
    let mut path = None;
    let result = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
        let staged = stage_object(b"member").unwrap();
        path = Some(staged.to_path_buf());
        panic!("stop before loading");
    }));
    assert!(result.is_err());
    assert!(!path.unwrap().exists());
}

#[test]
fn concurrent_staging_keeps_each_members_bytes() {
    let objects: Vec<_> = std::thread::scope(|scope| {
        let workers: Vec<_> = (0..8u8)
            .map(|byte| scope.spawn(move || (byte, stage_object(&[byte; 32]).unwrap())))
            .collect();
        workers
            .into_iter()
            .map(|worker| worker.join().unwrap())
            .collect()
    });
    let paths: std::collections::BTreeSet<_> =
        objects.iter().map(|(_, path)| path.to_path_buf()).collect();
    assert_eq!(paths.len(), objects.len());
    for (byte, path) in &objects {
        assert_eq!(std::fs::read(path).unwrap(), [*byte; 32]);
    }
    drop(objects);
    assert!(paths.iter().all(|path| !path.exists()));
}
