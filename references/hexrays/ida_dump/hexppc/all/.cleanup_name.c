// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD70
// Name:            .cleanup_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD70 jmp     cs:off_4DAEA0
//
// Resolved target: cleanup_name
// Target address:  0x4DD8D0
// GOT/IAT slot:    0x4DAEA0
// Slot symbol:     off_4DAEA0
// Target type:     <no type info>
// ============================================================

void .cleanup_name(/* see target signature */)
{
    // Tail-call to cleanup_name via GOT/IAT indirection
    return cleanup_name(/* forwarded args */);
}

