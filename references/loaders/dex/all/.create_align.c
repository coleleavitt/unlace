// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_280E0
//
// Resolved target: create_align
// Target address:  0x28590
// GOT/IAT slot:    0x280E0
// Slot symbol:     off_280E0
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

