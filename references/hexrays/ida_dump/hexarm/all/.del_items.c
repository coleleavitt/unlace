// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE90
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE90 jmp     cs:off_4E9730
//
// Resolved target: del_items
// Target address:  0x4EC148
// GOT/IAT slot:    0x4E9730
// Slot symbol:     off_4E9730
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

