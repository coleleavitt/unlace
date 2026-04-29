// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8F0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C8F0 jmp     cs:off_4EDC60
//
// Resolved target: getinf_flag
// Target address:  0x4F1F98
// GOT/IAT slot:    0x4EDC60
// Slot symbol:     off_4EDC60
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

