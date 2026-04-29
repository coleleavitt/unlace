// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C120
// Name:            .simpleline_place_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C120 jmp     cs:off_4C0078
//
// Resolved target: simpleline_place_t__enter
// Target address:  0x4C35A8
// GOT/IAT slot:    0x4C0078
// Slot symbol:     off_4C0078
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to simpleline_place_t__enter via GOT/IAT indirection
    return simpleline_place_t__enter(/* forwarded args */);
}

