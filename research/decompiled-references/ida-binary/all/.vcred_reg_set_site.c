// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB00
// Name:            .vcred_reg_set_site
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB00 jmp     cs:vcred_reg_set_site_ptr
//
// Resolved target: vcred_reg_set_site
// Target address:  0x8D9D08
// GOT/IAT slot:    0x8A4A20
// Slot symbol:     vcred_reg_set_site_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_reg_set_site(/* see target signature */)
{
    // Tail-call to vcred_reg_set_site via GOT/IAT indirection
    return vcred_reg_set_site(/* forwarded args */);
}

