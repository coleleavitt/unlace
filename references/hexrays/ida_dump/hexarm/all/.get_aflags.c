// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E420
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E420 jmp     cs:off_4E99F8
//
// Resolved target: get_aflags
// Target address:  0x4EC418
// GOT/IAT slot:    0x4E99F8
// Slot symbol:     off_4E99F8
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

