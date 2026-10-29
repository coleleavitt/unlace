// Alternative name is '_ZN8TMenuBarC1ERK5TRectP5TMenu'
// Alternative name is '_ZN8TMenuBarC2ERK5TRectR8TSubMenu'
// Alternative name is '_ZN8TMenuBarC1ERK5TRectR8TSubMenu'
void (__fastcall **__fastcall TMenuBar::TMenuBar(__int64 a1, __int64 a2))(TMenuBar *__hidden this)
{
  TView::TView(a1, a2);
  *(_WORD *)(a1 + 26) |= 0x200u;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = off_23E508;
  return off_23E508;
}

