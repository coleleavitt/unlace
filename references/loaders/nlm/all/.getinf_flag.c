// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_8108
//
// Resolved target: getinf_flag
// Target address:  0x87F0
// GOT/IAT slot:    0x8108
// Slot symbol:     off_8108
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

