// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B330
// Name:            .add_user_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B330 jmp     cs:add_user_stkpnt_ptr
//
// Resolved target: add_user_stkpnt
// Target address:  0x8D9818
// GOT/IAT slot:    0x8A4638
// Slot symbol:     add_user_stkpnt_ptr
// Target type:     <no type info>
// ============================================================

void .add_user_stkpnt(/* see target signature */)
{
    // Tail-call to add_user_stkpnt via GOT/IAT indirection
    return add_user_stkpnt(/* forwarded args */);
}

