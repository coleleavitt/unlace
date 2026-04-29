// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6560
// Name:            .del_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6560 jmp     cs:off_2F298
//
// Resolved target: del_cref
// Target address:  0x2F908
// GOT/IAT slot:    0x2F298
// Slot symbol:     off_2F298
// Target type:     <no type info>
// ============================================================

void .del_cref(/* see target signature */)
{
    // Tail-call to del_cref via GOT/IAT indirection
    return del_cref(/* forwarded args */);
}

