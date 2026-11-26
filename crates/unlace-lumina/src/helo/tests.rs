use super::*;

fn sample(v: u32) -> Helo {
    Helo {
        protocol_version: v,
        license_blob: b"license-blob".to_vec(),
        license_id: [0xde, 0xad, 0xbe, 0xef, 0x12, 0x34],
        record_conv: false,
        username: (v > 2).then(|| "alice".to_string()),
        password: (v > 2).then(|| "s3cr3t".to_string()),
    }
}

#[test]
fn helo_roundtrips_at_every_version() {
    for v in [2, 3, 5, 6] {
        let h = sample(v);
        assert_eq!(Helo::decode(&h.encode().unwrap()).unwrap(), h, "v{v}");
    }
}

#[test]
fn helo_v2_carries_no_credentials() {
    let mut h = sample(2);
    h.username = Some("ignored".into());
    let back = Helo::decode(&h.encode().unwrap()).unwrap();
    assert!(back.username.is_none() && back.password.is_none());
}

#[test]
fn helo_layout_is_byte_exact() {
    let h = Helo {
        protocol_version: 6,
        license_blob: vec![0xAA],
        license_id: [1, 2, 3, 4, 5, 6],
        record_conv: true,
        username: Some("u".into()),
        password: Some("p".into()),
    };
    assert_eq!(
        h.encode().unwrap(),
        vec![6, 1, 0xAA, 1, 2, 3, 4, 5, 6, 1, b'u', 0, b'p', 0]
    );
}

#[test]
fn helo_short_buffer_errors() {
    assert!(Helo::decode(&[]).is_err());
    assert!(Helo::decode(&[6, 0, 1, 2]).is_err());
}

#[test]
fn helo_result_roundtrips() {
    let r = HeloResult {
        license: LicenseInfo {
            id: "48-0000-0000-00".into(),
            name: "unlace".into(),
            email: String::new(),
        },
        username: "alice".into(),
        karma: 7,
        last_active: 0x1_0000_0002,
        features: FEATURE_ADMIN,
    };
    let back = HeloResult::decode(&r.encode().unwrap()).unwrap();
    assert_eq!(back, r);
    assert!(back.is_admin());
}
