// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA130
// Name:            .__fprintf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA130 jmp     cs:off_48098
//
// Resolved target: __fprintf_chk
// Target address:  0x48410
// GOT/IAT slot:    0x48098
// Slot symbol:     off_48098
// Target type:     <no type info>
// ============================================================

void .__fprintf_chk(/* see target signature */)
{
    // Tail-call to __fprintf_chk via GOT/IAT indirection
    return __fprintf_chk(/* forwarded args */);
}

