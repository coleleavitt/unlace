// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EFE0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EFE0 jmp     cs:off_4E9FD8
//
// Resolved target: add_cref
// Target address:  0x4ECA28
// GOT/IAT slot:    0x4E9FD8
// Slot symbol:     off_4E9FD8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

