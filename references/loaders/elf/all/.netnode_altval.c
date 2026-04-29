// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94A0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94A0 jmp     cs:off_89238
//
// Resolved target: netnode_altval
// Target address:  0x8C540
// GOT/IAT slot:    0x89238
// Slot symbol:     off_89238
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

