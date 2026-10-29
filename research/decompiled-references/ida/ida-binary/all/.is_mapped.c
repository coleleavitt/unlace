// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191D0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191D0 jmp     cs:is_mapped_ptr
//
// Resolved target: is_mapped
// Target address:  0x8D82F0
// GOT/IAT slot:    0x8A3588
// Slot symbol:     is_mapped_ptr
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

