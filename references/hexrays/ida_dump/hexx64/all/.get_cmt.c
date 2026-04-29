// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C140
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C140 jmp     cs:off_4ED888
//
// Resolved target: get_cmt
// Target address:  0x4F1BA0
// GOT/IAT slot:    0x4ED888
// Slot symbol:     off_4ED888
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

