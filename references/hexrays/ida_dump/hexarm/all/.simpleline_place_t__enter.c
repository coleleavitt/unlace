// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F160
// Name:            .simpleline_place_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F160 jmp     cs:off_4EA098
//
// Resolved target: simpleline_place_t__enter
// Target address:  0x4ECAF0
// GOT/IAT slot:    0x4EA098
// Slot symbol:     off_4EA098
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__enter(/* see target signature */)
{
    // Tail-call to simpleline_place_t__enter via GOT/IAT indirection
    return simpleline_place_t__enter(/* forwarded args */);
}

