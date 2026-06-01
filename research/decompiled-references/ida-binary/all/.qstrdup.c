// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF10
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF10 jmp     cs:qstrdup_ptr
//
// Resolved target: qstrdup
// Target address:  0x8D95A0
// GOT/IAT slot:    0x8A4428
// Slot symbol:     qstrdup_ptr
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

