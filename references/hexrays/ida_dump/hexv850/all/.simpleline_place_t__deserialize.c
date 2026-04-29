// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C080
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C080 jmp     cs:off_4C1028
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x4C4050
// GOT/IAT slot:    0x4C1028
// Slot symbol:     off_4C1028
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

