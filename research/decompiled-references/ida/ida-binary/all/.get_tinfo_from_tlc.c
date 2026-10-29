// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1158D0
// Name:            .get_tinfo_from_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1158D0 jmp     cs:get_tinfo_from_tlc_ptr
//
// Resolved target: get_tinfo_from_tlc
// Target address:  0x8D5F48
// GOT/IAT slot:    0x8A1908
// Slot symbol:     get_tinfo_from_tlc_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_from_tlc(/* see target signature */)
{
    // Tail-call to get_tinfo_from_tlc via GOT/IAT indirection
    return get_tinfo_from_tlc(/* forwarded args */);
}

