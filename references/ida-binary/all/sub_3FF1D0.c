unsigned __int64 __fastcall sub_3FF1D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  _BYTE v8[8]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v9[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a2 >= 0 && a2 < *(_QWORD *)(a1 + 376) )
  {
    v7 = *(int **)(a1 + 360);
    if ( !v7 || *v7 > 1 )
      sub_3FED00((__m128i *)(a1 + 360), 0, 0, 0, a5, a6);
    QT::QPersistentModelIndex::QPersistentModelIndex(
      (QT::QPersistentModelIndex *)v8,
      (const QT::QPersistentModelIndex *)(*(_QWORD *)(a1 + 368) + 8LL * a2));
    if ( (unsigned __int8)QT::QPersistentModelIndex::isValid((QT::QPersistentModelIndex *)v8) )
    {
      QT::QPersistentModelIndex::operator QT::QModelIndex(v9, v8);
      QT::QAbstractItemView::setCurrentIndex(*(_QWORD *)(a1 + 104), v9);
      (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))(**(_QWORD **)(a1 + 104) + 488LL))(*(_QWORD *)(a1 + 104), v9, 3);
      *(_DWORD *)(a1 + 384) = a2;
      sub_3F5B20(a1);
      QT::QSortFilterProxyModel::invalidate(*(QT::QSortFilterProxyModel **)(a1 + 120));
    }
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)v8);
  }
  return v10 - __readfsqword(0x28u);
}
