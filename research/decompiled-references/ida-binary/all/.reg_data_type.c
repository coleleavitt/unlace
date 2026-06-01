// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1168F0
// Name:            .reg_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1168F0 jmp     cs:reg_data_type_ptr
//
// Resolved target: reg_data_type
// Target address:  0x8D6988
// GOT/IAT slot:    0x8A2118
// Slot symbol:     reg_data_type_ptr
// Target type:     <no type info>
// ============================================================

void .reg_data_type(/* see target signature */)
{
    // Tail-call to reg_data_type via GOT/IAT indirection
    return reg_data_type(/* forwarded args */);
}

