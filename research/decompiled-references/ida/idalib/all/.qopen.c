// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A90
// Name:            .qopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A90 jmp     cs:off_2C79530
//
// Resolved target: qopen
// Target address:  0x83E9C0
// GOT/IAT slot:    0x2C79530
// Slot symbol:     off_2C79530
// Target type:     <no type info>
// ============================================================

void .qopen(/* see target signature */)
{
    // Tail-call to qopen via GOT/IAT indirection
    return qopen(/* forwarded args */);
}

