unsigned __int64 __fastcall sub_2DC1A0(QT::QAbstractItemView *a1, const char *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  sub_48EA50(a1);
  sub_2DC000((__int64)a1, (__int64)a2, &v6, a4);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, a2);
  }
  return v8 - __readfsqword(0x28u);
}
