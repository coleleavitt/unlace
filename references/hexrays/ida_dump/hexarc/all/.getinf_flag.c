// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F0 jmp     cs:off_4B9BE0
//
// Resolved target: getinf_flag
// Target address:  0x4BC5F0
// GOT/IAT slot:    0x4B9BE0
// Slot symbol:     off_4B9BE0
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

