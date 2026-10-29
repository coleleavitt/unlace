// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB370
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB370 jmp     cs:off_2C7B1A0
//
// Resolved target: cleanup_argloc
// Target address:  0x6B2170
// GOT/IAT slot:    0x2C7B1A0
// Slot symbol:     off_2C7B1A0
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

