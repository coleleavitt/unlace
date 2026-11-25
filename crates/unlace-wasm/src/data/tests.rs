use super::declare;

#[test]
fn declarations_put_the_name_where_c_does() {
    assert_eq!(declare("int", "count"), "int count");
    assert_eq!(declare("char *", "banner"), "char *banner");
    assert_eq!(declare("int [8]", "primes"), "int primes[8]");
    assert_eq!(declare("char [12]", "greeting"), "char greeting[12]");
    assert_eq!(declare("int (*)(int)", "op"), "int (*op)(int)");
    assert_eq!(declare("struct point", "origin"), "struct point origin");
    assert_eq!(declare("char *[4]", "names"), "char *names[4]");
    assert_eq!(declare("int (*)[4]", "rows"), "int (*rows)[4]");
}
