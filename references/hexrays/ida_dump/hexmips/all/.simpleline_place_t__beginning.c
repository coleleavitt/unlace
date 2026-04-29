// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAC0
// Name:            .simpleline_place_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAC0 jmp     cs:off_4CDD48
//
// Resolved target: simpleline_place_t__beginning
// Target address:  0x4D0788
// GOT/IAT slot:    0x4CDD48
// Slot symbol:     off_4CDD48
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__beginning(/* see target signature */)
{
    // Tail-call to simpleline_place_t__beginning via GOT/IAT indirection
    return simpleline_place_t__beginning(/* forwarded args */);
}

