// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D1B0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D1B0 jmp     cs:off_B30C0
//
// Resolved target: getinf
// Target address:  0xB3848
// GOT/IAT slot:    0xB30C0
// Slot symbol:     off_B30C0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

