unsigned __int64 __fastcall sub_3C60D0(QT::QAbstractItemView *a1, const char **a2, __int64 a3, const char *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  sub_48EA50(a1);
  sub_3C5F70((__int64)a1, a2, &v8, a4, v5, v6);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)a2);
  }
  return v10 - __readfsqword(0x28u);
}
