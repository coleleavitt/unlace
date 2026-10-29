// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F10
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F10 jmp     cs:off_2C7A770
//
// Resolved target: check_spoiled_jpt
// Target address:  0x44BFC0
// GOT/IAT slot:    0x2C7A770
// Slot symbol:     off_2C7A770
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

