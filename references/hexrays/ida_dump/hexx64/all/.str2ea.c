// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3D0
// Name:            .str2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3D0 jmp     cs:off_4ED1D0
//
// Resolved target: str2ea
// Target address:  0x4F14C8
// GOT/IAT slot:    0x4ED1D0
// Slot symbol:     off_4ED1D0
// Target type:     <no type info>
// ============================================================

void .str2ea(/* see target signature */)
{
    // Tail-call to str2ea via GOT/IAT indirection
    return str2ea(/* forwarded args */);
}

