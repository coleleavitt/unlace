// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4BC0
// Name:            sub_4BC0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x4BC0 endbr64
//   0x4BC4 jmp     sub_4B40
//
// Resolved target: sub_4B40
// Target address:  0x4B40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_4BC0(/* see target signature */)
{
    // Tail-call to sub_4B40 via direct jump indirection
    return sub_4B40(/* forwarded args */);
}

