// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B490
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B490 jmp     cs:off_4ED230
//
// Resolved target: add_frame
// Target address:  0x4F1528
// GOT/IAT slot:    0x4ED230
// Slot symbol:     off_4ED230
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

