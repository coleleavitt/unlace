// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2E0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2E0 jmp     cs:off_4CD158
//
// Resolved target: cleanup_argloc
// Target address:  0x4CFB48
// GOT/IAT slot:    0x4CD158
// Slot symbol:     off_4CD158
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

