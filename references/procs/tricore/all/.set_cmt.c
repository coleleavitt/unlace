// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6300
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6300 jmp     cs:off_24168
//
// Resolved target: set_cmt
// Target address:  0x25F38
// GOT/IAT slot:    0x24168
// Slot symbol:     off_24168
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

