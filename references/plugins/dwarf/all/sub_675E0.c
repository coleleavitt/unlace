// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x675E0
// Name:            sub_675E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x675E0 jmp     sub_892C0
//
// Resolved target: sub_892C0
// Target address:  0x892C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_675E0(/* see target signature */)
{
    // Tail-call to sub_892C0 via direct jump indirection
    return sub_892C0(/* forwarded args */);
}

