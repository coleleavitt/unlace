// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x368960
// Name:            j_.netnode_inited
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x368960 jmp     _netnode_inited
//
// Resolved target: .netnode_inited
// Target address:  0x2AA280
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.netnode_inited(/* see target signature */)
{
    // Tail-call to .netnode_inited via direct jump indirection
    return .netnode_inited(/* forwarded args */);
}

