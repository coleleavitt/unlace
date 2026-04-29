// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29C30
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29C30 jmp     cs:off_4B9600
//
// Resolved target: get_first_fcref_from
// Target address:  0x4BBFF8
// GOT/IAT slot:    0x4B9600
// Slot symbol:     off_4B9600
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

