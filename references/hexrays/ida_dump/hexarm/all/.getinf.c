// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D5A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D5A0 jmp     cs:off_4E92B8
//
// Resolved target: getinf
// Target address:  0x4EBCA8
// GOT/IAT slot:    0x4E92B8
// Slot symbol:     off_4E92B8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

