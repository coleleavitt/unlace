// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C2A0
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C2A0 jmp     cs:off_4ED938
//
// Resolved target: calc_c_cpp_name
// Target address:  0x4F1C58
// GOT/IAT slot:    0x4ED938
// Slot symbol:     off_4ED938
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

