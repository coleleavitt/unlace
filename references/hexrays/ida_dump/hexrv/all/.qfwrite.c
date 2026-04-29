// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCF0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCF0 jmp     cs:off_4BFE60
//
// Resolved target: qfwrite
// Target address:  0x4C3388
// GOT/IAT slot:    0x4BFE60
// Slot symbol:     off_4BFE60
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

