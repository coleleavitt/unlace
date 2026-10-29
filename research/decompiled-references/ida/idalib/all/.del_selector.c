// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A83D0
// Name:            .del_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A83D0 jmp     cs:off_2C799D0
//
// Resolved target: del_selector
// Target address:  0x50FF30
// GOT/IAT slot:    0x2C799D0
// Slot symbol:     off_2C799D0
// Target type:     <no type info>
// ============================================================

void .del_selector(/* see target signature */)
{
    // Tail-call to del_selector via GOT/IAT indirection
    return del_selector(/* forwarded args */);
}

