// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166F0
// Name:            .is_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166F0 jmp     cs:is_char_ptr
//
// Resolved target: is_char
// Target address:  0x8D6818
// GOT/IAT slot:    0x8A2018
// Slot symbol:     is_char_ptr
// Target type:     <no type info>
// ============================================================

void .is_char(/* see target signature */)
{
    // Tail-call to is_char via GOT/IAT indirection
    return is_char(/* forwarded args */);
}

