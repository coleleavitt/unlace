// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A50
// Name:            .set_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A50 jmp     cs:off_2C7A510
//
// Resolved target: set_qerrno
// Target address:  0x82EDC0
// GOT/IAT slot:    0x2C7A510
// Slot symbol:     off_2C7A510
// Target type:     <no type info>
// ============================================================

void .set_qerrno(/* see target signature */)
{
    // Tail-call to set_qerrno via GOT/IAT indirection
    return set_qerrno(/* forwarded args */);
}

