// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CFF0
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CFF0 jmp     cs:off_4EDFE0
//
// Resolved target: qflush
// Target address:  0x4F2330
// GOT/IAT slot:    0x4EDFE0
// Slot symbol:     off_4EDFE0
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

