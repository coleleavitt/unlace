// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_14128
//
// Resolved target: setinf_flag
// Target address:  0x14710
// GOT/IAT slot:    0x14128
// Slot symbol:     off_14128
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

