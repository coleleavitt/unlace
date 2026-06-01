// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF20
// Name:            .vcred_reg_del_store_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF20 jmp     cs:off_2C7BF78
//
// Resolved target: vcred_reg_del_store_info
// Target address:  0x7C8920
// GOT/IAT slot:    0x2C7BF78
// Slot symbol:     off_2C7BF78
// Target type:     <no type info>
// ============================================================

void .vcred_reg_del_store_info(/* see target signature */)
{
    // Tail-call to vcred_reg_del_store_info via GOT/IAT indirection
    return vcred_reg_del_store_info(/* forwarded args */);
}

