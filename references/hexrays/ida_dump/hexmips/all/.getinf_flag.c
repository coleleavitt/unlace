// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B820
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B820 jmp     cs:off_4CDBF8
//
// Resolved target: getinf_flag
// Target address:  0x4D0628
// GOT/IAT slot:    0x4CDBF8
// Slot symbol:     off_4CDBF8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

