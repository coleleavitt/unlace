// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F70
// Name:            .reg_delete
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F70 jmp     cs:off_2C797A0
//
// Resolved target: reg_delete
// Target address:  0x854B90
// GOT/IAT slot:    0x2C797A0
// Slot symbol:     off_2C797A0
// Target type:     <no type info>
// ============================================================

void .reg_delete(/* see target signature */)
{
    // Tail-call to reg_delete via GOT/IAT indirection
    return reg_delete(/* forwarded args */);
}

