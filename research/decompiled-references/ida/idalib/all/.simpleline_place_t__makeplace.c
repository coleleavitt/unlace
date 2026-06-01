// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC2C0
// Name:            .simpleline_place_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC2C0 jmp     cs:off_2C7B948
//
// Resolved target: simpleline_place_t__makeplace
// Target address:  0x52A9C0
// GOT/IAT slot:    0x2C7B948
// Slot symbol:     off_2C7B948
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__makeplace(/* see target signature */)
{
    // Tail-call to simpleline_place_t__makeplace via GOT/IAT indirection
    return simpleline_place_t__makeplace(/* forwarded args */);
}

