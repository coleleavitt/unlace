// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB910
// Name:            .simpleline_place_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB910 jmp     cs:off_2C7B470
//
// Resolved target: simpleline_place_t__compare
// Target address:  0x52AA00
// GOT/IAT slot:    0x2C7B470
// Slot symbol:     off_2C7B470
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__compare(/* see target signature */)
{
    // Tail-call to simpleline_place_t__compare via GOT/IAT indirection
    return simpleline_place_t__compare(/* forwarded args */);
}

