// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEC0
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEC0 jmp     cs:off_4C0F48
//
// Resolved target: qflush
// Target address:  0x4C3F70
// GOT/IAT slot:    0x4C0F48
// Slot symbol:     off_4C0F48
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

