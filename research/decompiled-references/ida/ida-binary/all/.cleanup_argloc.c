// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117CD0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117CD0 jmp     cs:cleanup_argloc_ptr
//
// Resolved target: cleanup_argloc
// Target address:  0x8D7600
// GOT/IAT slot:    0x8A2B08
// Slot symbol:     cleanup_argloc_ptr
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

