// Alternative name is '_ZN11TStaticTextC2ERK5TRectPKc'
unsigned __int64 __fastcall TStaticText::TStaticText(_QWORD *a1)
{
  __int128 v2; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = 0;
  TView::TView(a1, &v2);
  *a1 = off_23F160;
  return v3 - __readfsqword(0x28u);
}

