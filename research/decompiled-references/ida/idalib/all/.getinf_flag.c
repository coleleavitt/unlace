// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7120
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7120 jmp     cs:off_2C79078
//
// Resolved target: getinf_flag
// Target address:  0x631D30
// GOT/IAT slot:    0x2C79078
// Slot symbol:     off_2C79078
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

