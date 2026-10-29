// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1115F0
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1115F0 jmp     cs:calc_c_cpp_name_ptr
//
// Resolved target: calc_c_cpp_name
// Target address:  0x8D3460
// GOT/IAT slot:    0x89F798
// Slot symbol:     calc_c_cpp_name_ptr
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

