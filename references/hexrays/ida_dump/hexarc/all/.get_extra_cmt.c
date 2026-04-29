// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29570
// Name:            .get_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29570 jmp     cs:off_4B92A0
//
// Resolved target: get_extra_cmt
// Target address:  0x4BBC70
// GOT/IAT slot:    0x4B92A0
// Slot symbol:     off_4B92A0
// Target type:     <no type info>
// ============================================================

void .get_extra_cmt(/* see target signature */)
{
    // Tail-call to get_extra_cmt via GOT/IAT indirection
    return get_extra_cmt(/* forwarded args */);
}

