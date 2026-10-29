// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC490
// Name:            .get_immvals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC490 jmp     cs:off_2C7BA30
//
// Resolved target: get_immvals
// Target address:  0x577CD0
// GOT/IAT slot:    0x2C7BA30
// Slot symbol:     off_2C7BA30
// Target type:     <no type info>
// ============================================================

void .get_immvals(/* see target signature */)
{
    // Tail-call to get_immvals via GOT/IAT indirection
    return get_immvals(/* forwarded args */);
}

