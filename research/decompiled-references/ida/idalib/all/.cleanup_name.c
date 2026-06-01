// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E00
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E00 jmp     cs:off_2C79EE8
//
// Resolved target: cleanup_name
// Target address:  0x4CA0D0
// GOT/IAT slot:    0x2C79EE8
// Slot symbol:     off_2C79EE8
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

