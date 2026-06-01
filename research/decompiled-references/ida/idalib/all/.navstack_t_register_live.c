// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC0F0
// Name:            .navstack_t_register_live
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC0F0 jmp     cs:off_2C7B860
//
// Resolved target: navstack_t_register_live
// Target address:  0x4B7230
// GOT/IAT slot:    0x2C7B860
// Slot symbol:     off_2C7B860
// Target type:     <no type info>
// ============================================================

void .navstack_t_register_live(/* see target signature */)
{
    // Tail-call to navstack_t_register_live via GOT/IAT indirection
    return navstack_t_register_live(/* forwarded args */);
}

