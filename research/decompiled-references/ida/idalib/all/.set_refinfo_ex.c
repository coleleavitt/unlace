// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD360
// Name:            .set_refinfo_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD360 jmp     cs:off_2C7C198
//
// Resolved target: set_refinfo_ex
// Target address:  0x4E2440
// GOT/IAT slot:    0x2C7C198
// Slot symbol:     off_2C7C198
// Target type:     <no type info>
// ============================================================

void .set_refinfo_ex(/* see target signature */)
{
    // Tail-call to set_refinfo_ex via GOT/IAT indirection
    return set_refinfo_ex(/* forwarded args */);
}

