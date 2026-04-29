// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19080
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19080 jmp     cs:off_75028
//
// Resolved target: qalloc_or_throw
// Target address:  0x75878
// GOT/IAT slot:    0x75028
// Slot symbol:     off_75028
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

