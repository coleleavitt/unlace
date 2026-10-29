__int64 __fastcall sub_498810(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(*(_QWORD *)(a1 + 304) + 2472LL));
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 128LL))(v2, a2);
}
