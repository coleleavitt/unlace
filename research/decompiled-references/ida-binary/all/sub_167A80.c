// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x167A80
// Name:            sub_167A80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x167A80 jmp     sub_166EC0
//
// Resolved target: sub_166EC0
// Target address:  0x166EC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_167A80(/* see target signature */)
{
    // Tail-call to sub_166EC0 via direct jump indirection
    return sub_166EC0(/* forwarded args */);
}

