// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_20120
//
// Resolved target: get_first_fcref_from
// Target address:  0x21A30
// GOT/IAT slot:    0x20120
// Slot symbol:     off_20120
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

