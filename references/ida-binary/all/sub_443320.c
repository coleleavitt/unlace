__int64 __fastcall sub_443320(QT::QAbstractItemView *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  int v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  v7 = 0;
  v6 = 0;
  v2 = QT::QAbstractItemView::model(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v2 + 536LL))(v2, &v5, a2) )
    v3 = sub_442FF0(v2, (__int64)&v5);
  else
    v3 = 0;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, (const char *)&v5);
  }
  return v3;
}
