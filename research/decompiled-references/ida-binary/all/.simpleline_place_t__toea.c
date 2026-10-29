// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169C0
// Name:            .simpleline_place_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169C0 jmp     cs:simpleline_place_t__toea_ptr
//
// Resolved target: simpleline_place_t__toea
// Target address:  0x8D6A08
// GOT/IAT slot:    0x8A2180
// Slot symbol:     simpleline_place_t__toea_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__toea(/* see target signature */)
{
    // Tail-call to simpleline_place_t__toea via GOT/IAT indirection
    return simpleline_place_t__toea(/* forwarded args */);
}

