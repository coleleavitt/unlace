// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1C0
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1C0 jmp     cs:off_4CE0C8
//
// Resolved target: del_segm
// Target address:  0x4D0B20
// GOT/IAT slot:    0x4CE0C8
// Slot symbol:     off_4CE0C8
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

