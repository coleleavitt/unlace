unsigned __int64 __fastcall sub_14D0E0(TListViewer *this, TView *a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  TView::getExtent(a2);
  sub_17B170(this);
  *(_QWORD *)this = &off_23A4C8;
  return v3 - __readfsqword(0x28u);
}

