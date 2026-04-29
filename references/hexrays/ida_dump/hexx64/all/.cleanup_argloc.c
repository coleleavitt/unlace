// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2F0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2F0 jmp     cs:off_4ED160
//
// Resolved target: cleanup_argloc
// Target address:  0x4F1458
// GOT/IAT slot:    0x4ED160
// Slot symbol:     off_4ED160
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

