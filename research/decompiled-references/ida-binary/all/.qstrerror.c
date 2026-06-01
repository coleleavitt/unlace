// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117550
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117550 jmp     cs:qstrerror_ptr
//
// Resolved target: qstrerror
// Target address:  0x8D7160
// GOT/IAT slot:    0x8A2748
// Slot symbol:     qstrerror_ptr
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

