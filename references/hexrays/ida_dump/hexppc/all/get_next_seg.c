// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4DCE60
// Name:     get_next_seg
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to get_next_seg are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void get_next_seg(/* see import library declaration */);

