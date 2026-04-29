// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6290
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6290 jmp     cs:off_1D130
//
// Resolved target: setinf_flag
// Target address:  0x1D620
// GOT/IAT slot:    0x1D130
// Slot symbol:     off_1D130
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

