// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_A138
//
// Resolved target: add_segm
// Target address:  0xA3E8
// GOT/IAT slot:    0xA138
// Slot symbol:     off_A138
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

