// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_7098
//
// Resolved target: setinf_flag
// Target address:  0x7250
// GOT/IAT slot:    0x7098
// Slot symbol:     off_7098
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

