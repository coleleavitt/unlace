__int64 sub_E3510()
{
  unsigned int v0; // eax
  _BOOL8 v2; // rsi
  char *v3; // rdi

  v0 = dword_2526BC;
  if ( (dword_2526BC & 1) != 0 )
  {
    sub_C14A0();
    v3 = "Running";
    if ( dword_25274C <= 0 )
      v3 = nullptr;
    sub_CCA40(v3);
    v0 = dword_2526BC & 0xFFFFFFFE;
    dword_2526BC &= ~1u;
  }
  if ( (v0 & 4) != 0 )
  {
    v2 = dbg != 0;
    sub_10AF30(1, v2);
    TView::disableCommand((TView *)unk_24EFE6, v2);
    v0 = dword_2526BC & 0xFFFFFFFB;
    dword_2526BC &= ~4u;
  }
  if ( (v0 & 2) != 0 )
    dword_2526BC = v0 & 0xFFFFFFFD;
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
    return 0;
  if ( TheTopView && (*(_BYTE *)(TheTopView + 29LL) & 2) != 0 )
    return (unsigned int)-(dword_25274C == 0);
  return sub_E2CA0(0);
}

