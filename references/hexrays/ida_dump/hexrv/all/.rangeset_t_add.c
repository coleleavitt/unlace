// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AED0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AED0 jmp     cs:off_4BF750
//
// Resolved target: rangeset_t_add
// Target address:  0x4C2C40
// GOT/IAT slot:    0x4BF750
// Slot symbol:     off_4BF750
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

