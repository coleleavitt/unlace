// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1185A0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1185A0 jmp     cs:netnode_altval_ptr
//
// Resolved target: netnode_altval
// Target address:  0x8D7B88
// GOT/IAT slot:    0x8A2F70
// Slot symbol:     netnode_altval_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

