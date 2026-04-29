// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98A0
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98A0 jmp     cs:off_2E438
//
// Resolved target: cleanup_name
// Target address:  0x2EAC0
// GOT/IAT slot:    0x2E438
// Slot symbol:     off_2E438
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

