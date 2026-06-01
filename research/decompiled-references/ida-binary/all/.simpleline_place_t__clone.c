// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E50
// Name:            .simpleline_place_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E50 jmp     cs:simpleline_place_t__clone_ptr
//
// Resolved target: simpleline_place_t__clone
// Target address:  0x8D80A0
// GOT/IAT slot:    0x8A33C8
// Slot symbol:     simpleline_place_t__clone_ptr
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__clone(/* see target signature */)
{
    // Tail-call to simpleline_place_t__clone via GOT/IAT indirection
    return simpleline_place_t__clone(/* forwarded args */);
}

