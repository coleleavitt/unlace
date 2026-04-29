// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5F320
// Name:            sub_5F320
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5F320 endbr64
//   0x5F324 jmp     sub_5F2A0
//
// Resolved target: sub_5F2A0
// Target address:  0x5F2A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5F320(/* see target signature */)
{
    // Tail-call to sub_5F2A0 via direct jump indirection
    return sub_5F2A0(/* forwarded args */);
}

