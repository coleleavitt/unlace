// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C070
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C070 jmp     cs:off_4DB020
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x4DDA50
// GOT/IAT slot:    0x4DB020
// Slot symbol:     off_4DB020
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

