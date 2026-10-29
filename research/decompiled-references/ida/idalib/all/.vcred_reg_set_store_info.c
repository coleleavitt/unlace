// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AADE0
// Name:            .vcred_reg_set_store_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AADE0 jmp     cs:off_2C7AED8
//
// Resolved target: vcred_reg_set_store_info
// Target address:  0x7C8900
// GOT/IAT slot:    0x2C7AED8
// Slot symbol:     off_2C7AED8
// Target type:     <no type info>
// ============================================================

void .vcred_reg_set_store_info(/* see target signature */)
{
    // Tail-call to vcred_reg_set_store_info via GOT/IAT indirection
    return vcred_reg_set_store_info(/* forwarded args */);
}

