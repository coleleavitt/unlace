// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDB0
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EDB0 jmp     cs:off_4E9EC0
//
// Resolved target: cleanup_name
// Target address:  0x4EC910
// GOT/IAT slot:    0x4E9EC0
// Slot symbol:     off_4E9EC0
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

