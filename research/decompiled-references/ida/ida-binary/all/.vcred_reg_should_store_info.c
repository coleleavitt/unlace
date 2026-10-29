// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9C0
// Name:            .vcred_reg_should_store_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9C0 jmp     cs:vcred_reg_should_store_info_ptr
//
// Resolved target: vcred_reg_should_store_info
// Target address:  0x8D9C48
// GOT/IAT slot:    0x8A4980
// Slot symbol:     vcred_reg_should_store_info_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_reg_should_store_info(/* see target signature */)
{
    // Tail-call to vcred_reg_should_store_info via GOT/IAT indirection
    return vcred_reg_should_store_info(/* forwarded args */);
}

