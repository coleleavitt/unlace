// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12A0
// Name:            sub_12A0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x12A0 endbr64
//   0x12A4 jmp     sub_1220
//
// Resolved target: sub_1220
// Target address:  0x1220
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_12A0(/* see target signature */)
{
    // Tail-call to sub_1220 via direct jump indirection
    return sub_1220(/* forwarded args */);
}

