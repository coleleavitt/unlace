// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111900
// Name:            .get_qerrno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111900 jmp     cs:get_qerrno_ptr
//
// Resolved target: get_qerrno
// Target address:  0x8D3668
// GOT/IAT slot:    0x89F920
// Slot symbol:     get_qerrno_ptr
// Target type:     <no type info>
// ============================================================

void .get_qerrno(/* see target signature */)
{
    // Tail-call to get_qerrno via GOT/IAT indirection
    return get_qerrno(/* forwarded args */);
}

