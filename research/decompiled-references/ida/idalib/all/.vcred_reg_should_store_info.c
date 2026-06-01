// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD9B0
// Name:            .vcred_reg_should_store_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD9B0 jmp     cs:off_2C7C4C0
//
// Resolved target: vcred_reg_should_store_info
// Target address:  0x7C88E0
// GOT/IAT slot:    0x2C7C4C0
// Slot symbol:     off_2C7C4C0
// Target type:     <no type info>
// ============================================================

void .vcred_reg_should_store_info(/* see target signature */)
{
    // Tail-call to vcred_reg_should_store_info via GOT/IAT indirection
    return vcred_reg_should_store_info(/* forwarded args */);
}

