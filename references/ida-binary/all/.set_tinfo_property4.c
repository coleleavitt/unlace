// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AE0
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AE0 jmp     cs:set_tinfo_property4_ptr
//
// Resolved target: set_tinfo_property4
// Target address:  0x8D7EB0
// GOT/IAT slot:    0x8A3210
// Slot symbol:     set_tinfo_property4_ptr
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

