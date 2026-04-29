// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEC0
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEC0 jmp     cs:off_4CDF48
//
// Resolved target: qflush
// Target address:  0x4D0998
// GOT/IAT slot:    0x4CDF48
// Slot symbol:     off_4CDF48
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

