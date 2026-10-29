// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD020
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD020 jmp     cs:off_2C7BFF8
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x52AD60
// GOT/IAT slot:    0x2C7BFF8
// Slot symbol:     off_2C7BFF8
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

