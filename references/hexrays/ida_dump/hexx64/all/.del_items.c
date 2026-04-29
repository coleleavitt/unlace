// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BED0
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BED0 jmp     cs:off_4ED750
//
// Resolved target: del_items
// Target address:  0x4F1A60
// GOT/IAT slot:    0x4ED750
// Slot symbol:     off_4ED750
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}

