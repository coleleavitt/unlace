// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6450
// Name:            .calc_c_cpp_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6450 jmp     cs:off_8D210
//
// Resolved target: calc_c_cpp_name
// Target address:  0x8D7A8
// GOT/IAT slot:    0x8D210
// Slot symbol:     off_8D210
// Target type:     <no type info>
// ============================================================

void .calc_c_cpp_name(/* see target signature */)
{
    // Tail-call to calc_c_cpp_name via GOT/IAT indirection
    return calc_c_cpp_name(/* forwarded args */);
}

