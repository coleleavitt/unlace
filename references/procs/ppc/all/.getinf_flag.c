// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B40
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B40 jmp     cs:off_95588
//
// Resolved target: getinf_flag
// Target address:  0x95FC8
// GOT/IAT slot:    0x95588
// Slot symbol:     off_95588
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

