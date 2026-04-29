// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE70
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE70 jmp     cs:off_4DA720
//
// Resolved target: del_items
// Target address:  0x4DD118
// GOT/IAT slot:    0x4DA720
// Slot symbol:     off_4DA720
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

