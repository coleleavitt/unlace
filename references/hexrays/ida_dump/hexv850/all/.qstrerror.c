// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BED0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BED0 jmp     cs:off_4C0F50
//
// Resolved target: qstrerror
// Target address:  0x4C3F78
// GOT/IAT slot:    0x4C0F50
// Slot symbol:     off_4C0F50
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

