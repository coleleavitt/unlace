// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42D0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42D0 jmp     cs:off_23150
//
// Resolved target: setinf_flag
// Target address:  0x23570
// GOT/IAT slot:    0x23150
// Slot symbol:     off_23150
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

