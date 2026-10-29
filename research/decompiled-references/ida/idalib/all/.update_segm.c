// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98C0
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98C0 jmp     cs:off_2C7A448
//
// Resolved target: update_segm
// Target address:  0x684D20
// GOT/IAT slot:    0x2C7A448
// Slot symbol:     off_2C7A448
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

