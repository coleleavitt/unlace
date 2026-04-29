// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195B0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195B0 jmp     cs:off_752C0
//
// Resolved target: add_auto_stkpnt
// Target address:  0x75B10
// GOT/IAT slot:    0x752C0
// Slot symbol:     off_752C0
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

