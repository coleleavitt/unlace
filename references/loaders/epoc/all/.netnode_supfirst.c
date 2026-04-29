// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_13120
//
// Resolved target: netnode_supfirst
// Target address:  0x13810
// GOT/IAT slot:    0x13120
// Slot symbol:     off_13120
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

