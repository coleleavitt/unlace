// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115640
// Name:            .navstack_t_set_current
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115640 jmp     cs:navstack_t_set_current_ptr
//
// Resolved target: navstack_t_set_current
// Target address:  0x8D5DA8
// GOT/IAT slot:    0x8A17C0
// Slot symbol:     navstack_t_set_current_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_set_current(/* see target signature */)
{
    // Tail-call to navstack_t_set_current via GOT/IAT indirection
    return navstack_t_set_current(/* forwarded args */);
}

