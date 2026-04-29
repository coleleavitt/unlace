// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB10
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB10 jmp     cs:off_4CDD70
//
// Resolved target: apply_metadata
// Target address:  0x4D07B0
// GOT/IAT slot:    0x4CDD70
// Slot symbol:     off_4CDD70
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

