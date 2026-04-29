// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_B1E0
//
// Resolved target: qstrerror
// Target address:  0xB4A0
// GOT/IAT slot:    0xB1E0
// Slot symbol:     off_B1E0
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

