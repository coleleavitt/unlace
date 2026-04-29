// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20580
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20580 jmp     cs:off_952A8
//
// Resolved target: setinf_flag
// Target address:  0x95CE0
// GOT/IAT slot:    0x952A8
// Slot symbol:     off_952A8
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

