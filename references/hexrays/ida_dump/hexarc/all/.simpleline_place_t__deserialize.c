// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B050
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B050 jmp     cs:off_4BA010
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x4BCA40
// GOT/IAT slot:    0x4BA010
// Slot symbol:     off_4BA010
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

