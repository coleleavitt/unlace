// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2400
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2400 jmp     cs:off_B1E8
//
// Resolved target: qstrerror
// Target address:  0xB498
// GOT/IAT slot:    0xB1E8
// Slot symbol:     off_B1E8
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

