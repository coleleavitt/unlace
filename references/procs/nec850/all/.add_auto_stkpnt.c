// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9430
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9430 jmp     cs:off_2E200
//
// Resolved target: add_auto_stkpnt
// Target address:  0x2E870
// GOT/IAT slot:    0x2E200
// Slot symbol:     off_2E200
// Target type:     <no type info>
// ============================================================

void .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

