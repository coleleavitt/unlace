// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB70
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB70 jmp     cs:off_4DA5A0
//
// Resolved target: setinf_flag
// Target address:  0x4DCF90
// GOT/IAT slot:    0x4DA5A0
// Slot symbol:     off_4DA5A0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

