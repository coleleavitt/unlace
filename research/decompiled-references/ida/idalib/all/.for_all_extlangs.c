// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F20
// Name:            .for_all_extlangs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F20 jmp     cs:off_2C7A778
//
// Resolved target: for_all_extlangs
// Target address:  0x78A2E0
// GOT/IAT slot:    0x2C7A778
// Slot symbol:     off_2C7A778
// Target type:     <no type info>
// ============================================================

void .for_all_extlangs(/* see target signature */)
{
    // Tail-call to for_all_extlangs via GOT/IAT indirection
    return for_all_extlangs(/* forwarded args */);
}

