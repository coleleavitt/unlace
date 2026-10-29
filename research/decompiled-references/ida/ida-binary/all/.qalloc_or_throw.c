// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A80
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A80 jmp     cs:qalloc_or_throw_ptr
//
// Resolved target: qalloc_or_throw
// Target address:  0x8D7E78
// GOT/IAT slot:    0x8A31E0
// Slot symbol:     qalloc_or_throw_ptr
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

