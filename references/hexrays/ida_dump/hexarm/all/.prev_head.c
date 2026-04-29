// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA30
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA30 jmp     cs:off_4E9500
//
// Resolved target: prev_head
// Target address:  0x4EBF08
// GOT/IAT slot:    0x4E9500
// Slot symbol:     off_4E9500
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

