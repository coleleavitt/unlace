// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9420
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9420 jmp     cs:off_891F8
//
// Resolved target: set_cmt
// Target address:  0x8C4F8
// GOT/IAT slot:    0x891F8
// Slot symbol:     off_891F8
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

