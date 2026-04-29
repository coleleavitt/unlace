// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EEF0
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EEF0 jmp     cs:off_4E9F60
//
// Resolved target: qflush
// Target address:  0x4EC9B0
// GOT/IAT slot:    0x4E9F60
// Slot symbol:     off_4E9F60
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

