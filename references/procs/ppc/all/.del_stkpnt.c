// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C40
// Name:            .del_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C40 jmp     cs:off_95608
//
// Resolved target: del_stkpnt
// Target address:  0x96050
// GOT/IAT slot:    0x95608
// Slot symbol:     off_95608
// Target type:     <no type info>
// ============================================================

void .del_stkpnt(/* see target signature */)
{
    // Tail-call to del_stkpnt via GOT/IAT indirection
    return del_stkpnt(/* forwarded args */);
}

