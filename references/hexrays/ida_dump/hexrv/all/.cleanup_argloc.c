// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2E0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2E0 jmp     cs:off_4BF158
//
// Resolved target: cleanup_argloc
// Target address:  0x4C2620
// GOT/IAT slot:    0x4BF158
// Slot symbol:     off_4BF158
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

