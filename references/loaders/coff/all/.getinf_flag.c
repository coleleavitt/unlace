// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45C0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45C0 jmp     cs:off_232C8
//
// Resolved target: getinf_flag
// Target address:  0x236F0
// GOT/IAT slot:    0x232C8
// Slot symbol:     off_232C8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

