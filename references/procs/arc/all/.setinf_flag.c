// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8300
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8300 jmp     cs:off_2A168
//
// Resolved target: setinf_flag
// Target address:  0x2BB78
// GOT/IAT slot:    0x2A168
// Slot symbol:     off_2A168
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

