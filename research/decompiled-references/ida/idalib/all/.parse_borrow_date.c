// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD920
// Name:            .parse_borrow_date
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD920 jmp     cs:off_2C7C478
//
// Resolved target: parse_borrow_date
// Target address:  0x8A2030
// GOT/IAT slot:    0x2C7C478
// Slot symbol:     off_2C7C478
// Target type:     <no type info>
// ============================================================

void .parse_borrow_date(/* see target signature */)
{
    // Tail-call to parse_borrow_date via GOT/IAT indirection
    return parse_borrow_date(/* forwarded args */);
}

