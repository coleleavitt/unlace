// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADC0
// Name:            .del_tinfo_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADC0 jmp     cs:off_4BF6C8
//
// Resolved target: del_tinfo_attr
// Target address:  0x4C2BB8
// GOT/IAT slot:    0x4BF6C8
// Slot symbol:     off_4BF6C8
// Target type:     <no type info>
// ============================================================

void .del_tinfo_attr(/* see target signature */)
{
    // Tail-call to del_tinfo_attr via GOT/IAT indirection
    return del_tinfo_attr(/* forwarded args */);
}

