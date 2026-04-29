// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6210
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6210 jmp     cs:off_2F0F0
//
// Resolved target: create_align
// Target address:  0x2F760
// GOT/IAT slot:    0x2F0F0
// Slot symbol:     off_2F0F0
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

