// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81F0
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81F0 jmp     cs:off_2A0E0
//
// Resolved target: create_align
// Target address:  0x2A650
// GOT/IAT slot:    0x2A0E0
// Slot symbol:     off_2A0E0
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

