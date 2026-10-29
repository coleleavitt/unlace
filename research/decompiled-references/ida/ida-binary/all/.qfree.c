// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115EE0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115EE0 jmp     cs:qfree_ptr
//
// Resolved target: qfree
// Target address:  0x8D6308
// GOT/IAT slot:    0x8A1C10
// Slot symbol:     qfree_ptr
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

