// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D190
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D190 jmp     cs:off_B30B0
//
// Resolved target: qstrdup
// Target address:  0xB3838
// GOT/IAT slot:    0xB30B0
// Slot symbol:     off_B30B0
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

