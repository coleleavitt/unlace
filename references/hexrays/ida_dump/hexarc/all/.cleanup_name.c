// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD50
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD50 jmp     cs:off_4B9E90
//
// Resolved target: cleanup_name
// Target address:  0x4BC8C0
// GOT/IAT slot:    0x4B9E90
// Slot symbol:     off_4B9E90
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

