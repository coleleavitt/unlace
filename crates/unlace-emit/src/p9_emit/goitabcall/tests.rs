use super::pointer_receiver_type;

#[test]
fn pointer_methods_name_their_receiver_struct() {
    assert_eq!(
        pointer_receiver_type("bufio.(*Writer).Flush").as_deref(),
        Some("bufio.Writer")
    );
    assert_eq!(
        pointer_receiver_type("compress/flate.(*huffmanBitWriter).flush").as_deref(),
        Some("compress/flate.huffmanBitWriter")
    );
    assert_eq!(pointer_receiver_type("io.nopCloserWriterTo.WriteTo"), None);
    assert_eq!(pointer_receiver_type("main.describe"), None);
    assert_eq!(pointer_receiver_type("p.(*Box[go.shape.int]).Get"), None);
}
