// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214FF80
// Name:            sub_214FF80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214FF80 jmp     sub_21546E0
//
// Resolved target: sub_21546E0
// Target address:  0x21546E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_214FF80(/* see target signature */)
{
    // Tail-call to sub_21546E0 via direct jump indirection
    return sub_21546E0(/* forwarded args */);
}

