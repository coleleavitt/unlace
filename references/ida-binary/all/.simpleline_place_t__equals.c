// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B490
// Name:            .simpleline_place_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B490 jmp     cs:simpleline_place_t__equals_ptr
//
// Resolved target: simpleline_place_t__equals
// Target address:  0x8D9930
// GOT/IAT slot:    0x8A46E8
// Slot symbol:     simpleline_place_t__equals_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__equals(/* see target signature */)
{
    // Tail-call to simpleline_place_t__equals via GOT/IAT indirection
    return simpleline_place_t__equals(/* forwarded args */);
}

