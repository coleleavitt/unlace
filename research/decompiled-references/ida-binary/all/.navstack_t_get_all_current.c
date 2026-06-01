// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175B0
// Name:            .navstack_t_get_all_current
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175B0 jmp     cs:navstack_t_get_all_current_ptr
//
// Resolved target: navstack_t_get_all_current
// Target address:  0x8D7190
// GOT/IAT slot:    0x8A2778
// Slot symbol:     navstack_t_get_all_current_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_get_all_current(/* see target signature */)
{
    // Tail-call to navstack_t_get_all_current via GOT/IAT indirection
    return navstack_t_get_all_current(/* forwarded args */);
}

