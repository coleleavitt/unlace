// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_8180
//
// Resolved target: update_segm
// Target address:  0x8870
// GOT/IAT slot:    0x8180
// Slot symbol:     off_8180
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

