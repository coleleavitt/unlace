// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2600
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2600 jmp     cs:off_B2E8
//
// Resolved target: update_segm
// Target address:  0xB7A0
// GOT/IAT slot:    0xB2E8
// Slot symbol:     off_B2E8
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

