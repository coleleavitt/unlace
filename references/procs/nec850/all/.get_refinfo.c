// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97A0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97A0 jmp     cs:off_2E3B8
//
// Resolved target: get_refinfo
// Target address:  0x2EA38
// GOT/IAT slot:    0x2E3B8
// Slot symbol:     off_2E3B8
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

