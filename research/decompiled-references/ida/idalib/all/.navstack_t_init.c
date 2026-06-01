// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7340
// Name:            .navstack_t_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7340 jmp     cs:off_2C79188
//
// Resolved target: navstack_t_init
// Target address:  0x4B8C80
// GOT/IAT slot:    0x2C79188
// Slot symbol:     off_2C79188
// Target type:     <no type info>
// ============================================================

void .navstack_t_init(/* see target signature */)
{
    // Tail-call to navstack_t_init via GOT/IAT indirection
    return navstack_t_init(/* forwarded args */);
}

