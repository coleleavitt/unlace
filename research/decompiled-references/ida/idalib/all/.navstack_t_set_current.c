// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D10
// Name:            .navstack_t_set_current
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D10 jmp     cs:off_2C7A670
//
// Resolved target: navstack_t_set_current
// Target address:  0x4B7500
// GOT/IAT slot:    0x2C7A670
// Slot symbol:     off_2C7A670
// Target type:     <no type info>
// ============================================================

void .navstack_t_set_current(/* see target signature */)
{
    // Tail-call to navstack_t_set_current via GOT/IAT indirection
    return navstack_t_set_current(/* forwarded args */);
}

