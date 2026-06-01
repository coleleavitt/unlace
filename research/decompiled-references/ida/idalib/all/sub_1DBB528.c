// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBB528
// Name:            sub_1DBB528
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1DBB528 jmp     sub_2EADCC
//
// Resolved target: sub_2EADCC
// Target address:  0x2EADCC
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1DBB528(/* see target signature */)
{
    // Tail-call to sub_2EADCC via direct jump indirection
    return sub_2EADCC(/* forwarded args */);
}

