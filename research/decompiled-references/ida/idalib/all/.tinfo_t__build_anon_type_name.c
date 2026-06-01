// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB780
// Name:            .tinfo_t__build_anon_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB780 jmp     cs:off_2C7B3A8
//
// Resolved target: tinfo_t__build_anon_type_name
// Target address:  0x6B1D10
// GOT/IAT slot:    0x2C7B3A8
// Slot symbol:     off_2C7B3A8
// Target type:     <no type info>
// ============================================================

void .tinfo_t__build_anon_type_name(/* see target signature */)
{
    // Tail-call to tinfo_t__build_anon_type_name via GOT/IAT indirection
    return tinfo_t__build_anon_type_name(/* forwarded args */);
}

