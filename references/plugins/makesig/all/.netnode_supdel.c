// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3540
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3540 jmp     cs:off_20288
//
// Resolved target: netnode_supdel
// Target address:  0x21BB8
// GOT/IAT slot:    0x20288
// Slot symbol:     off_20288
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

