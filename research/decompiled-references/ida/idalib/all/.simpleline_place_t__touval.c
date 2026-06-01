// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7510
// Name:            .simpleline_place_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7510 jmp     cs:off_2C79270
//
// Resolved target: simpleline_place_t__touval
// Target address:  0x52A940
// GOT/IAT slot:    0x2C79270
// Slot symbol:     off_2C79270
// Target type:     <no type info>
// ============================================================

void .simpleline_place_t__touval(/* see target signature */)
{
    // Tail-call to simpleline_place_t__touval via GOT/IAT indirection
    return simpleline_place_t__touval(/* forwarded args */);
}

