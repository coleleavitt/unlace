// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8A0
// Name:            .simpleline_place_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8A0 jmp     cs:off_2C7AC38
//
// Resolved target: simpleline_place_t__toea
// Target address:  0x52AE40
// GOT/IAT slot:    0x2C7AC38
// Slot symbol:     off_2C7AC38
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__toea(/* see target signature */)
{
    // Tail-call to simpleline_place_t__toea via GOT/IAT indirection
    return simpleline_place_t__toea(/* forwarded args */);
}

