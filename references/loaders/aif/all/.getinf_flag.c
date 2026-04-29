// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: getinf_flag
// Target address:  0x5210
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

