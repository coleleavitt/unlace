// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1187A0
// Name:            .get_tinfo_by_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1187A0 jmp     cs:get_tinfo_by_flags_ptr
//
// Resolved target: get_tinfo_by_flags
// Target address:  0x8D7CB8
// GOT/IAT slot:    0x8A3070
// Slot symbol:     get_tinfo_by_flags_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_by_flags(/* see target signature */)
{
    // Tail-call to get_tinfo_by_flags via GOT/IAT indirection
    return get_tinfo_by_flags(/* forwarded args */);
}

