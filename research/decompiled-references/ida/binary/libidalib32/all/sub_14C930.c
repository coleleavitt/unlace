unsigned __int64 __fastcall sub_14C930(TListViewer *this, TView *a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  TView::getExtent(a2);
  sub_17A670(this);
  *(_QWORD *)this = &off_2394C8;
  return v3 - __readfsqword(0x28u);
}

