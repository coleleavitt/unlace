// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7290
// Name:            .del_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7290 jmp     cs:off_2C79130
//
// Resolved target: del_source_linnum
// Target address:  0x59BA90
// GOT/IAT slot:    0x2C79130
// Slot symbol:     off_2C79130
// Target type:     <no type info>
// ============================================================

void .del_source_linnum(/* see target signature */)
{
    // Tail-call to del_source_linnum via GOT/IAT indirection
    return del_source_linnum(/* forwarded args */);
}

