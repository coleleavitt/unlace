// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x459910
// Name:            CustomCodeViewer__::vfunc_2
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x459910 jmp     listing_host_t____vfunc_2
//
// Resolved target: listing_host_t__::vfunc_2
// Target address:  0x45F0E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(QT::QSplitter *this)
// ============================================================

/* see target sig */ CustomCodeViewer__::vfunc_2(/* see target signature */)
{
    // Tail-call to listing_host_t__::vfunc_2 via direct jump indirection
    return listing_host_t__::vfunc_2(/* forwarded args */);
}

