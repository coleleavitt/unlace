// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EAE0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EAE0 jmp     cs:off_4E9D58
//
// Resolved target: get_refinfo
// Target address:  0x4EC798
// GOT/IAT slot:    0x4E9D58
// Slot symbol:     off_4E9D58
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

