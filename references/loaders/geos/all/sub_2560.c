// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2560
// Name:            sub_2560
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2560 endbr64
//   0x2564 jmp     sub_24E0
//
// Resolved target: sub_24E0
// Target address:  0x24E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2560(/* see target signature */)
{
    // Tail-call to sub_24E0 via direct jump indirection
    return sub_24E0(/* forwarded args */);
}

