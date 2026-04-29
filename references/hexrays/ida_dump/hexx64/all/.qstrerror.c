// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D000
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D000 jmp     cs:off_4EDFE8
//
// Resolved target: qstrerror
// Target address:  0x4F2338
// GOT/IAT slot:    0x4EDFE8
// Slot symbol:     off_4EDFE8
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

