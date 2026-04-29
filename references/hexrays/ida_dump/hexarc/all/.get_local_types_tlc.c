// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29EB0
// Name:            .get_local_types_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29EB0 jmp     cs:off_4B9740
//
// Resolved target: get_local_types_tlc
// Target address:  0x4BC138
// GOT/IAT slot:    0x4B9740
// Slot symbol:     off_4B9740
// Target type:     <no type info>
// ============================================================

void .get_local_types_tlc(/* see target signature */)
{
    // Tail-call to get_local_types_tlc via GOT/IAT indirection
    return get_local_types_tlc(/* forwarded args */);
}

