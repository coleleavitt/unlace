// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20340
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20340 jmp     cs:off_95188
//
// Resolved target: create_align
// Target address:  0x95BC0
// GOT/IAT slot:    0x95188
// Slot symbol:     off_95188
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

