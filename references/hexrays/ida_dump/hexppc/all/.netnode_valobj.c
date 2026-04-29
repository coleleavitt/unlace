// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B740
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B740 jmp     cs:off_4DAB88
//
// Resolved target: netnode_valobj
// Target address:  0x4DD598
// GOT/IAT slot:    0x4DAB88
// Slot symbol:     off_4DAB88
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

