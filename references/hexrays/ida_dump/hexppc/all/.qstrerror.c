// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEC0
// Name:            .qstrerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEC0 jmp     cs:off_4DAF48
//
// Resolved target: qstrerror
// Target address:  0x4DD978
// GOT/IAT slot:    0x4DAF48
// Slot symbol:     off_4DAF48
// Target type:     <no type info>
// ============================================================

void .qstrerror(/* see target signature */)
{
    // Tail-call to qstrerror via GOT/IAT indirection
    return qstrerror(/* forwarded args */);
}

