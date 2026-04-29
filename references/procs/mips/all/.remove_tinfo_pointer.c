// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19820
// Name:            .remove_tinfo_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19820 jmp     cs:off_753F8
//
// Resolved target: remove_tinfo_pointer
// Target address:  0x75C48
// GOT/IAT slot:    0x753F8
// Slot symbol:     off_753F8
// Target type:     <no type info>
// ============================================================

void .remove_tinfo_pointer(/* see target signature */)
{
    // Tail-call to remove_tinfo_pointer via GOT/IAT indirection
    return remove_tinfo_pointer(/* forwarded args */);
}

