// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119120
// Name:            .navstack_t_get_current
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119120 jmp     cs:navstack_t_get_current_ptr
//
// Resolved target: navstack_t_get_current
// Target address:  0x8D8270
// GOT/IAT slot:    0x8A3530
// Slot symbol:     navstack_t_get_current_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_get_current(/* see target signature */)
{
    // Tail-call to navstack_t_get_current via GOT/IAT indirection
    return navstack_t_get_current(/* forwarded args */);
}

