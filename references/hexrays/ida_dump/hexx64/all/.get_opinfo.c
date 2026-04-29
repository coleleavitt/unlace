// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B410
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B410 jmp     cs:off_4ED1F0
//
// Resolved target: get_opinfo
// Target address:  0x4F14E8
// GOT/IAT slot:    0x4ED1F0
// Slot symbol:     off_4ED1F0
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

