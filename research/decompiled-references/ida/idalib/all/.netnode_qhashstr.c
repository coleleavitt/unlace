// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACCE0
// Name:            .netnode_qhashstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACCE0 jmp     cs:off_2C7BE58
//
// Resolved target: netnode_qhashstr
// Target address:  0x7BF430
// GOT/IAT slot:    0x2C7BE58
// Slot symbol:     off_2C7BE58
// Target type:     <no type info>
// ============================================================

void .netnode_qhashstr(/* see target signature */)
{
    // Tail-call to netnode_qhashstr via GOT/IAT indirection
    return netnode_qhashstr(/* forwarded args */);
}

