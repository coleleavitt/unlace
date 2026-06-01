// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB2B0
// Name:            .simpleline_place_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB2B0 jmp     cs:off_2C7B140
//
// Resolved target: simpleline_place_t__print
// Target address:  0x52B030
// GOT/IAT slot:    0x2C7B140
// Slot symbol:     off_2C7B140
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__print(/* see target signature */)
{
    // Tail-call to simpleline_place_t__print via GOT/IAT indirection
    return simpleline_place_t__print(/* forwarded args */);
}

