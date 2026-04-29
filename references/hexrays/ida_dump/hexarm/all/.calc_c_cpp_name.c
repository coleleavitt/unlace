// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E210
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E210 jmp     cs:off_4E98F0
//
// Resolved target: calc_c_cpp_name
// Target address:  0x4EC310
// GOT/IAT slot:    0x4E98F0
// Slot symbol:     off_4E98F0
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

