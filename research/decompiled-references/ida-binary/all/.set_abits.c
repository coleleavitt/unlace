// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112990
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112990 jmp     cs:set_abits_ptr
//
// Resolved target: set_abits
// Target address:  0x8D40F0
// GOT/IAT slot:    0x8A0168
// Slot symbol:     set_abits_ptr
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

