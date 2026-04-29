// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xBE60
// Name:            sub_BE60
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xBE60 endbr64
//   0xBE64 jmp     sub_BDE0
//
// Resolved target: sub_BDE0
// Target address:  0xBDE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_BE60(/* see target signature */)
{
    // Tail-call to sub_BDE0 via direct jump indirection
    return sub_BDE0(/* forwarded args */);
}

