// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159E0
// Name:            .filter_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159E0 jmp     cs:filter_tlc_ptr
//
// Resolved target: filter_tlc
// Target address:  0x8D5FF8
// GOT/IAT slot:    0x8A1990
// Slot symbol:     filter_tlc_ptr
// Target type:     <no type info>
// ============================================================

void .filter_tlc(/* see target signature */)
{
    // Tail-call to filter_tlc via GOT/IAT indirection
    return filter_tlc(/* forwarded args */);
}

