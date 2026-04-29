// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x74B0
// Name:            .remove_tinfo_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x74B0 jmp     cs:off_19240
//
// Resolved target: remove_tinfo_pointer
// Target address:  0x19770
// GOT/IAT slot:    0x19240
// Slot symbol:     off_19240
// Target type:     <no type info>
// ============================================================

void .remove_tinfo_pointer(/* see target signature */)
{
    // Tail-call to remove_tinfo_pointer via GOT/IAT indirection
    return remove_tinfo_pointer(/* forwarded args */);
}

