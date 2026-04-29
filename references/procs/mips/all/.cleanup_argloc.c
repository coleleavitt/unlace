// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190F0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190F0 jmp     cs:off_75060
//
// Resolved target: cleanup_argloc
// Target address:  0x758B0
// GOT/IAT slot:    0x75060
// Slot symbol:     off_75060
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

