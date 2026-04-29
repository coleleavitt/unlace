// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12CF0
// Name:            sub_12CF0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x12CF0 endbr64
//   0x12CF4 jmp     sub_12C70
//
// Resolved target: sub_12C70
// Target address:  0x12C70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_12CF0(/* see target signature */)
{
    // Tail-call to sub_12C70 via direct jump indirection
    return sub_12C70(/* forwarded args */);
}

