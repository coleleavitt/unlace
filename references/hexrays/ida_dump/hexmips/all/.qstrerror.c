// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BED0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BED0 jmp     cs:off_4CDF50
//
// Resolved target: qstrerror
// Target address:  0x4D09A0
// GOT/IAT slot:    0x4CDF50
// Slot symbol:     off_4CDF50
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

