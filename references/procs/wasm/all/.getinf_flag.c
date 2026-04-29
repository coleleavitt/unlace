// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9310
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9310 jmp     cs:off_26170
//
// Resolved target: getinf_flag
// Target address:  0x26488
// GOT/IAT slot:    0x26170
// Slot symbol:     off_26170
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

