// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE40
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE40 jmp     cs:off_4ED708
//
// Resolved target: netnode_altval
// Target address:  0x4F1A18
// GOT/IAT slot:    0x4ED708
// Slot symbol:     off_4ED708
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

