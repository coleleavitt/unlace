// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1310
// Name:            sub_1310
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1310 endbr64
//   0x1314 jmp     sub_1290
//
// Resolved target: sub_1290
// Target address:  0x1290
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1310(/* see target signature */)
{
    // Tail-call to sub_1290 via direct jump indirection
    return sub_1290(/* forwarded args */);
}

