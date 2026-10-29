// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E40
// Name:            .qgetline
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E40 jmp     cs:off_2C7A708
//
// Resolved target: qgetline
// Target address:  0x83F990
// GOT/IAT slot:    0x2C7A708
// Slot symbol:     off_2C7A708
// Target type:     <no type info>
// ============================================================

void .qgetline(/* see target signature */)
{
    // Tail-call to qgetline via GOT/IAT indirection
    return qgetline(/* forwarded args */);
}

