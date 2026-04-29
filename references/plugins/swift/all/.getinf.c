// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4180
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4180 jmp     cs:off_280A8
//
// Resolved target: getinf
// Target address:  0x29A40
// GOT/IAT slot:    0x280A8
// Slot symbol:     off_280A8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

