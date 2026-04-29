// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA150
// Name:            .__gmon_start__
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA150 jmp     cs:off_480A8
//
// Resolved target: __gmon_start__
// Target address:  0x48638
// GOT/IAT slot:    0x480A8
// Slot symbol:     off_480A8
// Target type:     <no type info>
// ============================================================

void .__gmon_start__(/* see target signature */)
{
    // Tail-call to __gmon_start__ via GOT/IAT indirection
    return __gmon_start__(/* forwarded args */);
}

