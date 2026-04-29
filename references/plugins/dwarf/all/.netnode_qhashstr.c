// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA840
// Name:            .netnode_qhashstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA840 jmp     cs:off_CA408
//
// Resolved target: netnode_qhashstr
// Target address:  0xD0D40
// GOT/IAT slot:    0xCA408
// Slot symbol:     off_CA408
// Target type:     <no type info>
// ============================================================

void .netnode_qhashstr(/* see target signature */)
{
    // Tail-call to netnode_qhashstr via GOT/IAT indirection
    return netnode_qhashstr(/* forwarded args */);
}

