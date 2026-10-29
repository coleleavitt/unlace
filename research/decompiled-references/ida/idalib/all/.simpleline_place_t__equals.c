// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6D0
// Name:            .simpleline_place_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6D0 jmp     cs:off_2C7C350
//
// Resolved target: simpleline_place_t__equals
// Target address:  0x52AA50
// GOT/IAT slot:    0x2C7C350
// Slot symbol:     off_2C7C350
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__equals(/* see target signature */)
{
    // Tail-call to simpleline_place_t__equals via GOT/IAT indirection
    return simpleline_place_t__equals(/* forwarded args */);
}

