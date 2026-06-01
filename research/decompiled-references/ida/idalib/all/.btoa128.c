// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F20
// Name:            .btoa128
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F20 jmp     cs:off_2C79F78
//
// Resolved target: btoa128
// Target address:  0x589240
// GOT/IAT slot:    0x2C79F78
// Slot symbol:     off_2C79F78
// Target type:     <no type info>
// ============================================================

void .btoa128(/* see target signature */)
{
    // Tail-call to btoa128 via GOT/IAT indirection
    return btoa128(/* forwarded args */);
}

