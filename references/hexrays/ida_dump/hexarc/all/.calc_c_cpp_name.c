// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1E0
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1E0 jmp     cs:off_4B98D8
//
// Resolved target: calc_c_cpp_name
// Target address:  0x4BC2D8
// GOT/IAT slot:    0x4B98D8
// Slot symbol:     off_4B98D8
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

