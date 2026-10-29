// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x186170
// Name:            sub_186170
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x186170 jmp     sub_49ED90
//
// Resolved target: sub_49ED90
// Target address:  0x49ED90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_186170(/* see target signature */)
{
    // Tail-call to sub_49ED90 via direct jump indirection
    return sub_49ED90(/* forwarded args */);
}

