// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1390
// Name:            sub_1390
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1390 endbr64
//   0x1394 jmp     sub_1310
//
// Resolved target: sub_1310
// Target address:  0x1310
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1390(/* see target signature */)
{
    // Tail-call to sub_1310 via direct jump indirection
    return sub_1310(/* forwarded args */);
}

