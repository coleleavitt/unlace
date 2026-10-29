// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA600
// Name:            .find_text
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA600 jmp     cs:off_2C7AAE8
//
// Resolved target: find_text
// Target address:  0x67D5D0
// GOT/IAT slot:    0x2C7AAE8
// Slot symbol:     off_2C7AAE8
// Target type:     <no type info>
// ============================================================

void .find_text(/* see target signature */)
{
    // Tail-call to find_text via GOT/IAT indirection
    return find_text(/* forwarded args */);
}

