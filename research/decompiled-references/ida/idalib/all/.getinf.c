// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8810
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8810 jmp     cs:off_2C79BF0
//
// Resolved target: getinf
// Target address:  0x631B70
// GOT/IAT slot:    0x2C79BF0
// Slot symbol:     off_2C79BF0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

