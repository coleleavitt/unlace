// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B050
// Name:            .rangeset_t_contains
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B050 jmp     cs:off_4DA810
//
// Resolved target: rangeset_t_contains
// Target address:  0x4DD210
// GOT/IAT slot:    0x4DA810
// Slot symbol:     off_4DA810
// Target type:     <no type info>
// ============================================================

void .rangeset_t_contains(/* see target signature */)
{
    // Tail-call to rangeset_t_contains via GOT/IAT indirection
    return rangeset_t_contains(/* forwarded args */);
}

