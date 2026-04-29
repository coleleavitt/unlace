// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91C0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91C0 jmp     cs:off_890C8
//
// Resolved target: getinf
// Target address:  0x8C3C8
// GOT/IAT slot:    0x890C8
// Slot symbol:     off_890C8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

