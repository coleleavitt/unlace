// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5C0
// Name:            .__snprintf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5C0 jmp     cs:off_482E0
//
// Resolved target: __snprintf_chk
// Target address:  0x485A0
// GOT/IAT slot:    0x482E0
// Slot symbol:     off_482E0
// Target type:     <no type info>
// ============================================================

void .__snprintf_chk(/* see target signature */)
{
    // Tail-call to __snprintf_chk via GOT/IAT indirection
    return __snprintf_chk(/* forwarded args */);
}

