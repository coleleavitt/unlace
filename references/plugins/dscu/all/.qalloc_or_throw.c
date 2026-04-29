// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4050
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4050 jmp     cs:off_1F010
//
// Resolved target: qalloc_or_throw
// Target address:  0x1F2C0
// GOT/IAT slot:    0x1F010
// Slot symbol:     off_1F010
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

