// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4EC758
// Name:     get_prev_seg
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to get_prev_seg are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void get_prev_seg(/* see import library declaration */);

