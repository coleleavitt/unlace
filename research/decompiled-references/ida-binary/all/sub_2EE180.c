// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE180
// Name:            sub_2EE180
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2EE180 jmp     sub_2EDEF0
//
// Resolved target: sub_2EDEF0
// Target address:  0x2EDEF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(QT::QSplitter *this)
// ============================================================

/* see target sig */ sub_2EE180(/* see target signature */)
{
    // Tail-call to sub_2EDEF0 via direct jump indirection
    return sub_2EDEF0(/* forwarded args */);
}

