// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B20
// Name:            .revert_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B20 jmp     cs:revert_metadata_ptr
//
// Resolved target: revert_metadata
// Target address:  0x8D6AD8
// GOT/IAT slot:    0x8A2230
// Slot symbol:     revert_metadata_ptr
// Target type:     <no type info>
// ============================================================

void .revert_metadata(/* see target signature */)
{
    // Tail-call to revert_metadata via GOT/IAT indirection
    return revert_metadata(/* forwarded args */);
}

