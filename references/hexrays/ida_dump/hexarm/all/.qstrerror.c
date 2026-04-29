// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF00
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF00 jmp     cs:off_4E9F68
//
// Resolved target: qstrerror
// Target address:  0x4EC9B8
// GOT/IAT slot:    0x4E9F68
// Slot symbol:     off_4E9F68
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

