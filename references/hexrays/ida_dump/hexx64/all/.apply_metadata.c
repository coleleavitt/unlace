// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC00
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC00 jmp     cs:off_4EDDE8
//
// Resolved target: apply_metadata
// Target address:  0x4F2128
// GOT/IAT slot:    0x4EDDE8
// Slot symbol:     off_4EDDE8
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

