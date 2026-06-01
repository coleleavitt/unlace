// Alternative name is '_ZN8TMenuBoxC1ERK5TRectP5TMenuP9TMenuView'
__int64 (__fastcall **__fastcall TMenuBox::TMenuBox(__int64 a1, __int64 a2))()
{
  TView::TView(a1, a2);
  *(_WORD *)(a1 + 26) |= 0x200u;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &off_23FD40;
  return &off_23FD40;
}

