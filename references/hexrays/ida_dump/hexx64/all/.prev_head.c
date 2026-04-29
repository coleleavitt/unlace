// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA50
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA50 jmp     cs:off_4ED510
//
// Resolved target: prev_head
// Target address:  0x4F1810
// GOT/IAT slot:    0x4ED510
// Slot symbol:     off_4ED510
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

