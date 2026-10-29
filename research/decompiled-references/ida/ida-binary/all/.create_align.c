// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E30
// Name:            .create_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E30 jmp     cs:create_align_ptr
//
// Resolved target: create_align
// Target address:  0x8D43D0
// GOT/IAT slot:    0x8A03B8
// Slot symbol:     create_align_ptr
// Target type:     <no type info>
// ============================================================

void .create_align(/* see target signature */)
{
    // Tail-call to create_align via GOT/IAT indirection
    return create_align(/* forwarded args */);
}

