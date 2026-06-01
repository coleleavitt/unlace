// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7280
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7280 jmp     cs:off_2C79128
//
// Resolved target: set_cmt
// Target address:  0x3D12A0
// GOT/IAT slot:    0x2C79128
// Slot symbol:     off_2C79128
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

