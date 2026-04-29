// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5510
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5510 jmp     cs:off_15270
//
// Resolved target: getinf_flag
// Target address:  0x16308
// GOT/IAT slot:    0x15270
// Slot symbol:     off_15270
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

