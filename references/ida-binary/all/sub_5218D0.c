__int64 __fastcall sub_5218D0(QT::QAbstractItemView *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = QT::QAbstractItemView::model(a1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a2);
  else
    return 0;
}
