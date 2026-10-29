// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1144F0
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1144F0 jmp     cs:set_purged_ptr
//
// Resolved target: set_purged
// Target address:  0x8D5278
// GOT/IAT slot:    0x8A0F18
// Slot symbol:     set_purged_ptr
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

