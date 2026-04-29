// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7B10
// Name:            sub_7B10
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x7B10 endbr64
//   0x7B14 jmp     sub_7A90
//
// Resolved target: sub_7A90
// Target address:  0x7A90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_7B10(/* see target signature */)
{
    // Tail-call to sub_7A90 via direct jump indirection
    return sub_7A90(/* forwarded args */);
}

