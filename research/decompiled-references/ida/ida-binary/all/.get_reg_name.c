// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119230
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119230 jmp     cs:get_reg_name_ptr
//
// Resolved target: get_reg_name
// Target address:  0x8D8320
// GOT/IAT slot:    0x8A35B8
// Slot symbol:     get_reg_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

