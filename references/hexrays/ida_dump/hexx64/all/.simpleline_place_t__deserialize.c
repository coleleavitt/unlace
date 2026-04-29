// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1C0
// Name:            .simpleline_place_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1C0 jmp     cs:off_4EE0C8
//
// Resolved target: simpleline_place_t__deserialize
// Target address:  0x4F2418
// GOT/IAT slot:    0x4EE0C8
// Slot symbol:     off_4EE0C8
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__deserialize(/* see target signature */)
{
    // Tail-call to simpleline_place_t__deserialize via GOT/IAT indirection
    return simpleline_place_t__deserialize(/* forwarded args */);
}

