// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F00
// Name:            .get_wide_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F00 jmp     cs:get_wide_byte_ptr
//
// Resolved target: get_wide_byte
// Target address:  0x8D4ED8
// GOT/IAT slot:    0x8A0C20
// Slot symbol:     get_wide_byte_ptr
// Target type:     <no type info>
// ============================================================

void .get_wide_byte(/* see target signature */)
{
    // Tail-call to get_wide_byte via GOT/IAT indirection
    return get_wide_byte(/* forwarded args */);
}

