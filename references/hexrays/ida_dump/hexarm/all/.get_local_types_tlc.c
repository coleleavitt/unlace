// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DED0
// Name:            .get_local_types_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DED0 jmp     cs:off_4E9750
//
// Resolved target: get_local_types_tlc
// Target address:  0x4EC168
// GOT/IAT slot:    0x4E9750
// Slot symbol:     off_4E9750
// Target type:     <no type info>
// ============================================================

void .get_local_types_tlc(/* see target signature */)
{
    // Tail-call to get_local_types_tlc via GOT/IAT indirection
    return get_local_types_tlc(/* forwarded args */);
}

