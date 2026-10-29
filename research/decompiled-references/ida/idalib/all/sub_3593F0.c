// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3593F0
// Name:            sub_3593F0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x3593F0 endbr64
//   0x3593F4 jmp     sub_359370
//
// Resolved target: sub_359370
// Target address:  0x359370
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3593F0(/* see target signature */)
{
    // Tail-call to sub_359370 via direct jump indirection
    return sub_359370(/* forwarded args */);
}

