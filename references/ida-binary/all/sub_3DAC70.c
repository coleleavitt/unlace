__int64 __fastcall edit_watch_ah_t__::vfunc_4(__int64 a1, __int64 a2)
{
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[3] = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v3);
  QT::QAbstractItemView::edit(a2, v3);
  return 0;
}
