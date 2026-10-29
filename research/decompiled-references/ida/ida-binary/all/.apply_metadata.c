// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFD0
// Name:            .apply_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFD0 jmp     cs:apply_metadata_ptr
//
// Resolved target: apply_metadata
// Target address:  0x8D9610
// GOT/IAT slot:    0x8A4488
// Slot symbol:     apply_metadata_ptr
// Target type:     <no type info>
// ============================================================

void .apply_metadata(/* see target signature */)
{
    // Tail-call to apply_metadata via GOT/IAT indirection
    return apply_metadata(/* forwarded args */);
}

