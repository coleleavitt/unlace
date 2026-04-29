// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1F0
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1F0 jmp     cs:off_4BF8E0
//
// Resolved target: calc_c_cpp_name
// Target address:  0x4C2DD8
// GOT/IAT slot:    0x4BF8E0
// Slot symbol:     off_4BF8E0
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

