// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA680
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA680 jmp     cs:off_2C7AB28
//
// Resolved target: add_auto_stkpnt
// Target address:  0x5BAC90
// GOT/IAT slot:    0x2C7AB28
// Slot symbol:     off_2C7AB28
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

