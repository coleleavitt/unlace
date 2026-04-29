// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20180
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20180 jmp     cs:off_950A8
//
// Resolved target: cleanup_argloc
// Target address:  0x95AD8
// GOT/IAT slot:    0x950A8
// Slot symbol:     off_950A8
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

