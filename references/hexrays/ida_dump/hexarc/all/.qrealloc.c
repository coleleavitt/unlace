// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A650
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A650 jmp     cs:off_4B9B10
//
// Resolved target: qrealloc
// Target address:  0x4BC518
// GOT/IAT slot:    0x4B9B10
// Slot symbol:     off_4B9B10
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

