// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F20
// Name:            .get_next_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F20 jmp     cs:get_next_fixup_ea_ptr
//
// Resolved target: get_next_fixup_ea
// Target address:  0x8D6328
// GOT/IAT slot:    0x8A1C30
// Slot symbol:     get_next_fixup_ea_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_fixup_ea(/* see target signature */)
{
    // Tail-call to get_next_fixup_ea via GOT/IAT indirection
    return get_next_fixup_ea(/* forwarded args */);
}

