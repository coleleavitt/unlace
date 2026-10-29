// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9470
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9470 jmp     cs:off_2C7A220
//
// Resolved target: qfclose
// Target address:  0x83F1E0
// GOT/IAT slot:    0x2C7A220
// Slot symbol:     off_2C7A220
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

