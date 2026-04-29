// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7C0
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7C0 jmp     cs:off_4E9BC8
//
// Resolved target: qfclose
// Target address:  0x4EC5F8
// GOT/IAT slot:    0x4E9BC8
// Slot symbol:     off_4E9BC8
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

