// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF20
// Name:            .get_local_types_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF20 jmp     cs:off_4ED778
//
// Resolved target: get_local_types_tlc
// Target address:  0x4F1A88
// GOT/IAT slot:    0x4ED778
// Slot symbol:     off_4ED778
// Target type:     <no type info>
// ============================================================

void .get_local_types_tlc(/* see target signature */)
{
    // Tail-call to get_local_types_tlc via GOT/IAT indirection
    return get_local_types_tlc(/* forwarded args */);
}

