// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x186180
// Name:            sub_186180
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x186180 jmp     sub_547FB0
//
// Resolved target: sub_547FB0
// Target address:  0x547FB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_186180(/* see target signature */)
{
    // Tail-call to sub_547FB0 via direct jump indirection
    return sub_547FB0(/* forwarded args */);
}

