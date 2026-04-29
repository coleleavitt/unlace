// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF60
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF60 jmp     cs:off_4ED798
//
// Resolved target: netnode_supfirst
// Target address:  0x4F1AA8
// GOT/IAT slot:    0x4ED798
// Slot symbol:     off_4ED798
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

