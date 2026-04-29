// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE70
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE70 jmp     cs:off_4BF720
//
// Resolved target: del_items
// Target address:  0x4C2C10
// GOT/IAT slot:    0x4BF720
// Slot symbol:     off_4BF720
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

