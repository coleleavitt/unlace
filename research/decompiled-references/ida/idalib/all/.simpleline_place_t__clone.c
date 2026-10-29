// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABEF0
// Name:            .simpleline_place_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABEF0 jmp     cs:off_2C7B760
//
// Resolved target: simpleline_place_t__clone
// Target address:  0x52A960
// GOT/IAT slot:    0x2C7B760
// Slot symbol:     off_2C7B760
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__clone(/* see target signature */)
{
    // Tail-call to simpleline_place_t__clone via GOT/IAT indirection
    return simpleline_place_t__clone(/* forwarded args */);
}

