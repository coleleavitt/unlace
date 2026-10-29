// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAEF0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAEF0 jmp     cs:off_2C7AF60
//
// Resolved target: qstrerror
// Target address:  0x395490
// GOT/IAT slot:    0x2C7AF60
// Slot symbol:     off_2C7AF60
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

