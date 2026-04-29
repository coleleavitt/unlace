// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AC0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AC0 jmp     cs:off_75548
//
// Resolved target: get_refinfo
// Target address:  0x75DA8
// GOT/IAT slot:    0x75548
// Slot symbol:     off_75548
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

