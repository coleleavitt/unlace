// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA1F0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA1F0 jmp     cs:off_2C7A8E0
//
// Resolved target: setinf_flag
// Target address:  0x633300
// GOT/IAT slot:    0x2C7A8E0
// Slot symbol:     off_2C7A8E0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

