// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5D0
// Name:            .qregfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5D0 jmp     cs:qregfree_ptr
//
// Resolved target: qregfree
// Target address:  0x8D8FC0
// GOT/IAT slot:    0x8A3F88
// Slot symbol:     qregfree_ptr
// Target type:     <no type info>
// ============================================================

void .qregfree(/* see target signature */)
{
    // Tail-call to qregfree via GOT/IAT indirection
    return qregfree(/* forwarded args */);
}

