// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D90
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D90 jmp     cs:off_956B0
//
// Resolved target: cleanup_name
// Target address:  0x96100
// GOT/IAT slot:    0x956B0
// Slot symbol:     off_956B0
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

