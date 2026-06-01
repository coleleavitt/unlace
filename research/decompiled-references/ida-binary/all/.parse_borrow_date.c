// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B8F0
// Name:            .parse_borrow_date
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B8F0 jmp     cs:parse_borrow_date_ptr
//
// Resolved target: parse_borrow_date
// Target address:  0x8D9BD8
// GOT/IAT slot:    0x8A4918
// Slot symbol:     parse_borrow_date_ptr
// Target type:     <no type info>
// ============================================================

void .parse_borrow_date(/* see target signature */)
{
    // Tail-call to parse_borrow_date via GOT/IAT indirection
    return parse_borrow_date(/* forwarded args */);
}

