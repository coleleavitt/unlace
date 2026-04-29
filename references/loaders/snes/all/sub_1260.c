// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1260
// Name:            sub_1260
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1260 endbr64
//   0x1264 jmp     sub_11E0
//
// Resolved target: sub_11E0
// Target address:  0x11E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1260(/* see target signature */)
{
    // Tail-call to sub_11E0 via direct jump indirection
    return sub_11E0(/* forwarded args */);
}

