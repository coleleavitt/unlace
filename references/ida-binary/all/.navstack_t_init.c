// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111510
// Name:            .navstack_t_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111510 jmp     cs:navstack_t_init_ptr
//
// Resolved target: navstack_t_init
// Target address:  0x8D33C0
// GOT/IAT slot:    0x89F728
// Slot symbol:     navstack_t_init_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_t_init(/* see target signature */)
{
    // Tail-call to navstack_t_init via GOT/IAT indirection
    return navstack_t_init(/* forwarded args */);
}

