// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B30
// Name:            .get_next_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B30 jmp     cs:off_2C79580
//
// Resolved target: get_next_fcref_from
// Target address:  0x3E1F80
// GOT/IAT slot:    0x2C79580
// Slot symbol:     off_2C79580
// Target type:     <no type info>
// ============================================================

void .get_next_fcref_from(/* see target signature */)
{
    // Tail-call to get_next_fcref_from via GOT/IAT indirection
    return get_next_fcref_from(/* forwarded args */);
}

