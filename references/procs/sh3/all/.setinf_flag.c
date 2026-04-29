// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5260
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5260 jmp     cs:off_15118
//
// Resolved target: setinf_flag
// Target address:  0x161A8
// GOT/IAT slot:    0x15118
// Slot symbol:     off_15118
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

