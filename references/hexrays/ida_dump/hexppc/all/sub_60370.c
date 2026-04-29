// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60370
// Name:            sub_60370
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x60370 endbr64
//   0x60374 jmp     sub_602F0
//
// Resolved target: sub_602F0
// Target address:  0x602F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_60370(/* see target signature */)
{
    // Tail-call to sub_602F0 via direct jump indirection
    return sub_602F0(/* forwarded args */);
}

