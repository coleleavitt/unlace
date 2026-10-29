// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7670
// Name:            .del_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7670 jmp     cs:off_2C79320
//
// Resolved target: del_stkpnt
// Target address:  0x5BA6F0
// GOT/IAT slot:    0x2C79320
// Slot symbol:     off_2C79320
// Target type:     <no type info>
// ============================================================

void .del_stkpnt(/* see target signature */)
{
    // Tail-call to del_stkpnt via GOT/IAT indirection
    return del_stkpnt(/* forwarded args */);
}

