// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_290F0
//
// Resolved target: setinf_flag
// Target address:  0x294A0
// GOT/IAT slot:    0x290F0
// Slot symbol:     off_290F0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

