_QWORD *__fastcall sub_48EF40(_QWORD *a1, QT::QAbstractItemView *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)v5);
  v2 = QT::QAbstractItemView::model(a2);
  if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 120LL))(v2, v5) > 0 )
  {
    v4 = QT::QAbstractItemView::model(a2);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4 + 96LL))(a1, v4, 0, 0, v5);
  }
  else
  {
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}
