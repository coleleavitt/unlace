// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190A0
// Name:            .navstack_t_register_live
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190A0 jmp     cs:navstack_t_register_live_ptr
//
// Resolved target: navstack_t_register_live
// Target address:  0x8D8228
// GOT/IAT slot:    0x8A34F0
// Slot symbol:     navstack_t_register_live_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_register_live(/* see target signature */)
{
    // Tail-call to navstack_t_register_live via GOT/IAT indirection
    return navstack_t_register_live(/* forwarded args */);
}

