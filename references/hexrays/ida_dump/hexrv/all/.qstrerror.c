// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEC0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEC0 jmp     cs:off_4BFF48
//
// Resolved target: qstrerror
// Target address:  0x4C3470
// GOT/IAT slot:    0x4BFF48
// Slot symbol:     off_4BFF48
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

