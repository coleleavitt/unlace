// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29DE0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29DE0 jmp     cs:off_4B96D8
//
// Resolved target: netnode_altval
// Target address:  0x4BC0D0
// GOT/IAT slot:    0x4B96D8
// Slot symbol:     off_4B96D8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

