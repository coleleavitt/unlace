// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0A0
// Name:            .check_spoiled_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0A0 jmp     cs:off_35038
//
// Resolved target: check_spoiled_jpt
// Target address:  0x35688
// GOT/IAT slot:    0x35038
// Slot symbol:     off_35038
// Target type:     <no type info>
// ============================================================

void .check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to check_spoiled_jpt via GOT/IAT indirection
    return check_spoiled_jpt(/* forwarded args */);
}

