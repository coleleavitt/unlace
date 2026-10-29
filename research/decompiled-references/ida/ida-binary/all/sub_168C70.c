// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x168C70
// Name:            sub_168C70
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x168C70 endbr64
//   0x168C74 jmp     sub_168BF0
//
// Resolved target: sub_168BF0
// Target address:  0x168BF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_168C70(/* see target signature */)
{
    // Tail-call to sub_168BF0 via direct jump indirection
    return sub_168BF0(/* forwarded args */);
}

