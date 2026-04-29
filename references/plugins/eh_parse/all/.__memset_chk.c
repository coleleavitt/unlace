// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6730
// Name:            .__memset_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6730 jmp     cs:off_2F380
//
// Resolved target: __memset_chk
// Target address:  0x2F9F8
// GOT/IAT slot:    0x2F380
// Slot symbol:     off_2F380
// Target type:     <no type info>
// ============================================================

void .__memset_chk(/* see target signature */)
{
    // Tail-call to __memset_chk via GOT/IAT indirection
    return __memset_chk(/* forwarded args */);
}

