// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEA0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEA0 jmp     cs:off_4B9F38
//
// Resolved target: qstrerror
// Target address:  0x4BC968
// GOT/IAT slot:    0x4B9F38
// Slot symbol:     off_4B9F38
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

