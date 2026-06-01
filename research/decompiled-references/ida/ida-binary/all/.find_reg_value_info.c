// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C30
// Name:            .find_reg_value_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C30 jmp     cs:find_reg_value_info_ptr
//
// Resolved target: find_reg_value_info
// Target address:  0x8D3860
// GOT/IAT slot:    0x89FAB8
// Slot symbol:     find_reg_value_info_ptr
// Target type:     <no type info>
// ============================================================

void .find_reg_value_info(/* see target signature */)
{
    // Tail-call to find_reg_value_info via GOT/IAT indirection
    return find_reg_value_info(/* forwarded args */);
}

