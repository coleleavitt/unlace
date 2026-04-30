// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4CAF50
// Name:            sub_4CAF50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4CAF50 jmp     sub_4CAC80
//
// Resolved target: sub_4CAC80
// Target address:  0x4CAC80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 *__fastcall(QT::QWidget *, __int64, int, double)
// ============================================================

/* see target sig */ sub_4CAF50(/* see target signature */)
{
    // Tail-call to sub_4CAC80 via direct jump indirection
    return sub_4CAC80(/* forwarded args */);
}

