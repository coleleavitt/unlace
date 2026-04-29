// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6C10
// Name:            sub_6C10
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x6C10 endbr64
//   0x6C14 jmp     sub_6B90
//
// Resolved target: sub_6B90
// Target address:  0x6B90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_6C10(/* see target signature */)
{
    // Tail-call to sub_6B90 via direct jump indirection
    return sub_6B90(/* forwarded args */);
}

