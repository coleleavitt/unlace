// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B4E0
// Name:            .navstack_t_deregister_live
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B4E0 jmp     cs:navstack_t_deregister_live_ptr
//
// Resolved target: navstack_t_deregister_live
// Target address:  0x8D9958
// GOT/IAT slot:    0x8A4710
// Slot symbol:     navstack_t_deregister_live_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_deregister_live(/* see target signature */)
{
    // Tail-call to navstack_t_deregister_live via GOT/IAT indirection
    return navstack_t_deregister_live(/* forwarded args */);
}

