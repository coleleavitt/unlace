// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA570
// Name:            .qopen_shared
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA570 jmp     cs:off_2C7AAA0
//
// Resolved target: qopen_shared
// Target address:  0x83E930
// GOT/IAT slot:    0x2C7AAA0
// Slot symbol:     off_2C7AAA0
// Target type:     <no type info>
// ============================================================

void .qopen_shared(/* see target signature */)
{
    // Tail-call to qopen_shared via GOT/IAT indirection
    return qopen_shared(/* forwarded args */);
}

