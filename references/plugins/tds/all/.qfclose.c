// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_A138
//
// Resolved target: qfclose
// Target address:  0xA370
// GOT/IAT slot:    0xA138
// Slot symbol:     off_A138
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

