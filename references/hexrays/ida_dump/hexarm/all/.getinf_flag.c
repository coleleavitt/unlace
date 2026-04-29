// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E850
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E850 jmp     cs:off_4E9C10
//
// Resolved target: getinf_flag
// Target address:  0x4EC640
// GOT/IAT slot:    0x4E9C10
// Slot symbol:     off_4E9C10
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

