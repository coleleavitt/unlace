// Alternative name is '_ZN10TInputLineC2ERK5TRecti'
unsigned __int64 __fastcall TInputLine::TInputLine(__int64 a1)
{
  __int128 v2; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = 0;
  TView::TView(a1, &v2);
  *(_QWORD *)a1 = off_23EBB0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return v3 - __readfsqword(0x28u);
}

