// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19780
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19780 jmp     cs:off_753A8
//
// Resolved target: tag_remove
// Target address:  0x75BF8
// GOT/IAT slot:    0x753A8
// Slot symbol:     off_753A8
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

