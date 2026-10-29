// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF582C0
// Name:            sub_F582C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF582C0 jmp     sub_F58260
//
// Resolved target: sub_F58260
// Target address:  0xF58260
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     bool __fastcall(__int64)
// ============================================================

/* see target sig */ sub_F582C0(/* see target signature */)
{
    // Tail-call to sub_F58260 via direct jump indirection
    return sub_F58260(/* forwarded args */);
}

