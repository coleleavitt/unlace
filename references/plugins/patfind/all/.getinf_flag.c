// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_13100
//
// Resolved target: getinf_flag
// Target address:  0x13398
// GOT/IAT slot:    0x13100
// Slot symbol:     off_13100
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

