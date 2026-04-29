// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_8088
//
// Resolved target: setinf_flag
// Target address:  0x8278
// GOT/IAT slot:    0x8088
// Slot symbol:     off_8088
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

