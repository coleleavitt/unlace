// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B370
// Name:            .set_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B370 jmp     cs:off_4ED1A0
//
// Resolved target: set_qerrno
// Target address:  0x4F1498
// GOT/IAT slot:    0x4ED1A0
// Slot symbol:     off_4ED1A0
// Target type:     <no type info>
// ============================================================

void .set_qerrno(/* see target signature */)
{
    // Tail-call to set_qerrno via GOT/IAT indirection
    return set_qerrno(/* forwarded args */);
}

