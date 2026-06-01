// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBB0
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBB0 jmp     cs:off_2C7C5C0
//
// Resolved target: tag_remove
// Target address:  0x3DFB00
// GOT/IAT slot:    0x2C7C5C0
// Slot symbol:     off_2C7C5C0
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

