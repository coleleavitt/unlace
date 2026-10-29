// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115120
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115120 jmp     cs:add_cref_ptr
//
// Resolved target: add_cref
// Target address:  0x8D5A78
// GOT/IAT slot:    0x8A1530
// Slot symbol:     add_cref_ptr
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

