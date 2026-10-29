// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD700
// Name:            .navstack_t_deregister_live
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD700 jmp     cs:off_2C7C368
//
// Resolved target: navstack_t_deregister_live
// Target address:  0x4B7370
// GOT/IAT slot:    0x2C7C368
// Slot symbol:     off_2C7C368
// Target type:     <no type info>
// ============================================================

void .navstack_t_deregister_live(/* see target signature */)
{
    // Tail-call to navstack_t_deregister_live via GOT/IAT indirection
    return navstack_t_deregister_live(/* forwarded args */);
}

