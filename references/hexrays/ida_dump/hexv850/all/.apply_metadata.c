// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB10
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB10 jmp     cs:off_4C0D70
//
// Resolved target: apply_metadata
// Target address:  0x4C3D88
// GOT/IAT slot:    0x4C0D70
// Slot symbol:     off_4C0D70
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

