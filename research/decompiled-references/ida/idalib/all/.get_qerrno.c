// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A75A0
// Name:            .get_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A75A0 jmp     cs:off_2C792B8
//
// Resolved target: get_qerrno
// Target address:  0x82EDA0
// GOT/IAT slot:    0x2C792B8
// Slot symbol:     off_2C792B8
// Target type:     <no type info>
// ============================================================

void .get_qerrno(/* see target signature */)
{
    // Tail-call to get_qerrno via GOT/IAT indirection
    return get_qerrno(/* forwarded args */);
}

