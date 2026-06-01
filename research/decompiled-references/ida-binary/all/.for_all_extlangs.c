// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115A20
// Name:            .for_all_extlangs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115A20 jmp     cs:for_all_extlangs_ptr
//
// Resolved target: for_all_extlangs
// Target address:  0x8D6018
// GOT/IAT slot:    0x8A19B0
// Slot symbol:     for_all_extlangs_ptr
// Target type:     <no type info>
// ============================================================

void .for_all_extlangs(/* see target signature */)
{
    // Tail-call to for_all_extlangs via GOT/IAT indirection
    return for_all_extlangs(/* forwarded args */);
}

