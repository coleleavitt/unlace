// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A00
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A00 jmp     cs:off_894E8
//
// Resolved target: update_segm
// Target address:  0x8C818
// GOT/IAT slot:    0x894E8
// Slot symbol:     off_894E8
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

