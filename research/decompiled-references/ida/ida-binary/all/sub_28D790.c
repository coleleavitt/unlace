unsigned __int64 __fastcall sub_28D790(QT::QAbstractItemView *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  const char *v4; // rsi
  __int64 v6; // [rsp+28h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-50h]
  unsigned __int64 v8; // [rsp+40h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  sub_48EA50(a1);
  v6 = 0;
  v7 = 0;
  v3 = a2[6];
  v4 = (const char *)a2[8];
  a2[6] = 0;
  a2[7] = 0;
  a2[8] = 0;
  v6 = v3;
  *((_QWORD *)&v7 + 1) = v4;
  if ( v3 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v3, v4);
  }
  return v8 - __readfsqword(0x28u);
}
