// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B40
// Name:            .simpleline_place_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B40 jmp     cs:off_2C79D88
//
// Resolved target: simpleline_place_t__leave
// Target address:  0x52AE80
// GOT/IAT slot:    0x2C79D88
// Slot symbol:     off_2C79D88
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__leave(/* see target signature */)
{
    // Tail-call to simpleline_place_t__leave via GOT/IAT indirection
    return simpleline_place_t__leave(/* forwarded args */);
}

