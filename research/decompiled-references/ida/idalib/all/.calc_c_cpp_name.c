// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A73B0
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A73B0 jmp     cs:off_2C791C0
//
// Resolved target: calc_c_cpp_name
// Target address:  0x5A29E0
// GOT/IAT slot:    0x2C791C0
// Slot symbol:     off_2C791C0
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

