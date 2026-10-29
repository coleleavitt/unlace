// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E50
// Name:            .del_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E50 jmp     cs:off_2C79710
//
// Resolved target: del_extra_cmt
// Target address:  0x63D480
// GOT/IAT slot:    0x2C79710
// Slot symbol:     off_2C79710
// Target type:     <no type info>
// ============================================================

void .del_extra_cmt(/* see target signature */)
{
    // Tail-call to del_extra_cmt via GOT/IAT indirection
    return del_extra_cmt(/* forwarded args */);
}

