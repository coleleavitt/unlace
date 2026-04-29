// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_291B8
//
// Resolved target: netnode_check
// Target address:  0x29570
// GOT/IAT slot:    0x291B8
// Slot symbol:     off_291B8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

