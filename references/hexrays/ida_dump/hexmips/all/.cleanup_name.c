// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD80
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD80 jmp     cs:off_4CDEA8
//
// Resolved target: cleanup_name
// Target address:  0x4D08F8
// GOT/IAT slot:    0x4CDEA8
// Slot symbol:     off_4CDEA8
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

