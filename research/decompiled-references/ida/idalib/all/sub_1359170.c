// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1359170
// Name:            sub_1359170
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1359170 jmp     sub_1358810
//
// Resolved target: sub_1358810
// Target address:  0x1358810
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(std::_V2 *)
// ============================================================

/* see target sig */ sub_1359170(/* see target signature */)
{
    // Tail-call to sub_1358810 via direct jump indirection
    return sub_1358810(/* forwarded args */);
}

