// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC130
// Name:            .navstack_t_get_current
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC130 jmp     cs:off_2C7B880
//
// Resolved target: navstack_t_get_current
// Target address:  0x4B8430
// GOT/IAT slot:    0x2C7B880
// Slot symbol:     off_2C7B880
// Target type:     <no type info>
// ============================================================

void .navstack_t_get_current(/* see target signature */)
{
    // Tail-call to navstack_t_get_current via GOT/IAT indirection
    return navstack_t_get_current(/* forwarded args */);
}

