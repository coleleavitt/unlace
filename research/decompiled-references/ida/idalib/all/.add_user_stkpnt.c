// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD620
// Name:            .add_user_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD620 jmp     cs:off_2C7C2F8
//
// Resolved target: add_user_stkpnt
// Target address:  0x5BAD00
// GOT/IAT slot:    0x2C7C2F8
// Slot symbol:     off_2C7C2F8
// Target type:     <no type info>
// ============================================================

void .add_user_stkpnt(/* see target signature */)
{
    // Tail-call to add_user_stkpnt via GOT/IAT indirection
    return add_user_stkpnt(/* forwarded args */);
}

