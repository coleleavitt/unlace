// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .__snprintf_chk
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10B0 endbr64
//   0x10B4 bnd jmp cs:off_6018
//
// Resolved target: __snprintf_chk
// Target address:  0x6060
// GOT/IAT slot:    0x6018
// Slot symbol:     off_6018
// Target type:     <no type info>
// ============================================================

void .__snprintf_chk(/* see target signature */)
{
    // Tail-call to __snprintf_chk via GOT/IAT indirection
    return __snprintf_chk(/* forwarded args */);
}

