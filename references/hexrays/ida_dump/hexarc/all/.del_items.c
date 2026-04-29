// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E70
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E70 jmp     cs:off_4B9720
//
// Resolved target: del_items
// Target address:  0x4BC118
// GOT/IAT slot:    0x4B9720
// Slot symbol:     off_4B9720
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

