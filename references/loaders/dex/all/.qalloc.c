// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_281A8
//
// Resolved target: qalloc
// Target address:  0x28658
// GOT/IAT slot:    0x281A8
// Slot symbol:     off_281A8
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

