// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1E4880
// Name:            sub_1E4880
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1E4880 jmp     sub_1E4790
//
// Resolved target: sub_1E4790
// Target address:  0x1E4790
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(QT::QWidget *this)
// ============================================================

/* see target sig */ sub_1E4880(/* see target signature */)
{
    // Tail-call to sub_1E4790 via direct jump indirection
    return sub_1E4790(/* forwarded args */);
}

