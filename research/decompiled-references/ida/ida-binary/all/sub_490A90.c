__int64 __fastcall sub_490A90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 (__fastcall *v3)(__int64, _QWORD, _QWORD *); // r13
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v5[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 328) )
    return 7;
  v2 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a2 + 328));
  v3 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v2 + 480LL);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v5);
  return v3(v2, 0, v5) == 0 ? 7 : 3;
}
