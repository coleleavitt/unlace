// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .del_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_A178
//
// Resolved target: del_regvar
// Target address:  0xA3C0
// GOT/IAT slot:    0xA178
// Slot symbol:     off_A178
// Target type:     <no type info>
// ============================================================

void .del_regvar(/* see target signature */)
{
    // Tail-call to del_regvar via GOT/IAT indirection
    return del_regvar(/* forwarded args */);
}

