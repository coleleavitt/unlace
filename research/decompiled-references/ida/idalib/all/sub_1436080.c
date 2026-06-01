// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1436080
// Name:            sub_1436080
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1436080 jmp     sub_1465440
//
// Resolved target: sub_1465440
// Target address:  0x1465440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1436080(/* see target signature */)
{
    // Tail-call to sub_1465440 via direct jump indirection
    return sub_1465440(/* forwarded args */);
}

