// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_8170
//
// Resolved target: qflush
// Target address:  0x8860
// GOT/IAT slot:    0x8170
// Slot symbol:     off_8170
// Target type:     <no type info>
// ============================================================

void .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

