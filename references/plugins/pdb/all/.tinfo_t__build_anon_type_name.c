// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D480
// Name:            .tinfo_t__build_anon_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D480 jmp     cs:off_B3228
//
// Resolved target: tinfo_t__build_anon_type_name
// Target address:  0xB39C8
// GOT/IAT slot:    0xB3228
// Slot symbol:     off_B3228
// Target type:     <no type info>
// ============================================================

void .tinfo_t__build_anon_type_name(/* see target signature */)
{
    // Tail-call to tinfo_t__build_anon_type_name via GOT/IAT indirection
    return tinfo_t__build_anon_type_name(/* forwarded args */);
}

