// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4390
// Name:            sub_4390
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x4390 endbr64
//   0x4394 jmp     sub_4310
//
// Resolved target: sub_4310
// Target address:  0x4310
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_4390(/* see target signature */)
{
    // Tail-call to sub_4310 via direct jump indirection
    return sub_4310(/* forwarded args */);
}

