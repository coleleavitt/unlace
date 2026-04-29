// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE90
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE90 jmp     cs:off_4B9F30
//
// Resolved target: qflush
// Target address:  0x4BC960
// GOT/IAT slot:    0x4B9F30
// Slot symbol:     off_4B9F30
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

