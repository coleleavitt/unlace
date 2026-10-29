// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116150
// Name:            .notify_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116150 jmp     cs:notify_dirtree_ptr
//
// Resolved target: notify_dirtree
// Target address:  0x8D64B0
// GOT/IAT slot:    0x8A1D48
// Slot symbol:     notify_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .notify_dirtree(/* see target signature */)
{
    // Tail-call to notify_dirtree via GOT/IAT indirection
    return notify_dirtree(/* forwarded args */);
}

