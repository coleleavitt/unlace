// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xBD80
// Name:            sub_BD80
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xBD80 endbr64
//   0xBD84 jmp     sub_BD00
//
// Resolved target: sub_BD00
// Target address:  0xBD00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_BD80(/* see target signature */)
{
    // Tail-call to sub_BD00 via direct jump indirection
    return sub_BD00(/* forwarded args */);
}

