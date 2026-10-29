// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA380
// Name:            .notify_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA380 jmp     cs:off_2C7A9A8
//
// Resolved target: notify_dirtree
// Target address:  0x77A3D0
// GOT/IAT slot:    0x2C7A9A8
// Slot symbol:     off_2C7A9A8
// Target type:     <no type info>
// ============================================================

void .notify_dirtree(/* see target signature */)
{
    // Tail-call to notify_dirtree via GOT/IAT indirection
    return notify_dirtree(/* forwarded args */);
}

