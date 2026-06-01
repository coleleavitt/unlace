unsigned __int64 __fastcall sub_19B050(__int64 *a1, const QT::QObject *a2, int a3)
{
  QT::QAbstractItemView *v4; // rax
  QT::QAbstractItemView *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a3 == 27 || a3 == 44 )
  {
    v6 = sub_19AFC0((__int64)a1, (__int64)a2);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 88);
      v8 = a1[1];
      v9 = *a1;
      if ( a1[2] < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve(a1, v9, v8 + 1, 8);
        *a1 = v10;
        v9 = v10;
        v8 = a1[1];
      }
      *(_QWORD *)(v9 + 8 * v8) = v7;
      ++a1[1];
    }
  }
  else if ( a3 == 13 )
  {
    v4 = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_8809A0, a2);
    v5 = v4;
    if ( v4 )
    {
      sub_48FF00(v4);
      sub_48EA50(v5);
    }
  }
  return v11 - __readfsqword(0x28u);
}
