// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115CD0
// Name:            .qstrupr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115CD0 jmp     cs:qstrupr_ptr
//
// Resolved target: qstrupr
// Target address:  0x8D61C8
// GOT/IAT slot:    0x8A1B08
// Slot symbol:     qstrupr_ptr
// Target type:     <no type info>
// ============================================================

void .qstrupr(/* see target signature */)
{
    // Tail-call to qstrupr via GOT/IAT indirection
    return qstrupr(/* forwarded args */);
}

