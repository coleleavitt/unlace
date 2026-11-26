use super::*;

#[test]
fn records_name_their_compiler_and_release() {
    let gcc = record_runtime(b"GCC: (GNU) 15.2.0").expect("gcc record");
    assert_eq!(
        (gcc.compiler, gcc.version.as_str()),
        (CCompiler::Gcc, "15.2.0")
    );
    let ubuntu = record_runtime(b"GCC: (Ubuntu 13.2.0-23ubuntu4) 13.2.0").expect("gcc");
    assert_eq!(ubuntu.version, "13.2.0");
    let clang = record_runtime(b"Ubuntu clang version 18.1.3 (1ubuntu1)").expect("clang");
    assert_eq!(
        (clang.compiler, clang.version.as_str()),
        (CCompiler::Clang, "18.1.3")
    );
    assert_eq!(record_runtime(b"GCC: (https://example)"), None);
    assert_eq!(record_runtime(b"rustc version 1.94.0"), None);
}
