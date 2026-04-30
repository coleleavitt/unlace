// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4D3CB0
// Name:            sub_4D3CB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4D3CB0 jmp     sub_4D3A80
//
// Resolved target: sub_4D3A80
// Target address:  0x4D3A80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, const QT::QTableWidgetItem *)
// ============================================================

/* see target sig */ sub_4D3CB0(/* see target signature */)
{
    // Tail-call to sub_4D3A80 via direct jump indirection
    return sub_4D3A80(/* forwarded args */);
}

