// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F00
// Name:            .simpleline_place_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F00 jmp     cs:off_2C7A768
//
// Resolved target: simpleline_place_t__beginning
// Target address:  0x52AB10
// GOT/IAT slot:    0x2C7A768
// Slot symbol:     off_2C7A768
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__beginning(/* see target signature */)
{
    // Tail-call to simpleline_place_t__beginning via GOT/IAT indirection
    return simpleline_place_t__beginning(/* forwarded args */);
}

