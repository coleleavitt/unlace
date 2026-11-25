use super::*;

#[test]
fn parses_ids_versions_classes_and_idrefs() {
    let xml = r#"<?xml version="1.0"?><plist version="1.0"><dict>
            <key>_PrelinkInfoDictionary</key><array>
              <dict><key>CFBundleIdentifier</key><string>com.example.A</string>
                <key>CFBundleVersion</key><string ID="1">1.0</string>
                <key>_PrelinkExecutableLoadAddr</key><integer size="64">0xfffffff007004000</integer>
                <key>IOKitPersonalities</key><dict>
                  <key>p1</key><dict><key>IOClass</key><string ID="2">AService</string></dict>
                  <key>p2</key><dict><key>IOClass</key><string IDREF="2"/><key>IOProbeScore</key><integer>5</integer></dict>
                </dict>
                <key>OSBundleLibraries</key><dict/>
                <key>Blob</key><data>AAAA</data>
              </dict>
              <dict><key>CFBundleIdentifier</key><string>com.example.B</string>
                <key>CFBundleVersion</key><string IDREF="1"/></dict>
            </array></dict></plist>"#;
    let mut p = Parser {
        text: xml,
        pos: 0,
        ids: HashMap::new(),
    };
    while p.tag() != Some(r#"plist version="1.0""#) {}
    let root = p.value(0).unwrap();
    let Some(Value::Array(items)) = root.get("_PrelinkInfoDictionary") else {
        panic!()
    };
    assert_eq!(items.len(), 2);
    let bare = &xml[xml.find("<dict>").unwrap()..xml.rfind("</plist>").unwrap()];
    let mut p = Parser {
        text: bare,
        pos: 0,
        ids: HashMap::new(),
    };
    let tag = p.tag().unwrap();
    assert!(
        p.value_from(tag, 0)
            .unwrap()
            .get("_PrelinkInfoDictionary")
            .is_some()
    );
    assert_eq!(
        items[1].get("CFBundleVersion").and_then(Value::str),
        Some("1.0")
    );
    let ps = items[0].get("IOKitPersonalities").unwrap();
    assert_eq!(
        ps.get("p2")
            .and_then(|d| d.get("IOClass"))
            .and_then(Value::str),
        Some("AService")
    );
}

/// Each level holds ten references to the level below: copying the shared
/// values would grow to 10^39 nodes, sharing them keeps the parse linear.
#[test]
fn idref_expansion_shares_values_instead_of_copying_them() {
    let mut xml = String::from(r#"<dict ID="v0"><key>k</key><string>x</string></dict>"#);
    for level in 1..40 {
        let refs: String = (0..10)
            .map(|_| format!(r#"<array IDREF="v{}"/>"#, level - 1))
            .collect();
        xml += &format!(r#"<array ID="v{level}">{refs}</array>"#);
    }
    xml += r#"<array IDREF="v39"/>"#;
    let text = format!("<array>{xml}</array>");
    let mut p = Parser {
        text: &text,
        pos: 0,
        ids: HashMap::new(),
    };
    let tag = p.tag().unwrap();
    let Some(Value::Array(items)) = p.value_from(tag, 0) else {
        panic!()
    };
    assert_eq!(items.len(), 41);
}
