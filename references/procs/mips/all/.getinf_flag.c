// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199B0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199B0 jmp     cs:off_754C0
//
// Resolved target: getinf_flag
// Target address:  0x75D18
// GOT/IAT slot:    0x754C0
// Slot symbol:     off_754C0
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

