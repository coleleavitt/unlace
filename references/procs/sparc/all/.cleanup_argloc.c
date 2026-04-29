// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70A0
// Name:            .cleanup_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70A0 jmp     cs:off_19038
//
// Resolved target: cleanup_argloc
// Target address:  0x19568
// GOT/IAT slot:    0x19038
// Slot symbol:     off_19038
// Target type:     <no type info>
// ============================================================

void .cleanup_argloc(/* see target signature */)
{
    // Tail-call to cleanup_argloc via GOT/IAT indirection
    return cleanup_argloc(/* forwarded args */);
}

