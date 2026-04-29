// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD80
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD80 jmp     cs:off_4C0EA8
//
// Resolved target: cleanup_name
// Target address:  0x4C3ED0
// GOT/IAT slot:    0x4C0EA8
// Slot symbol:     off_4C0EA8
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

