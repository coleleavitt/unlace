bool __fastcall sub_48CB10(
        _QWORD *a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 *v11; // rdi
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  bool result; // al

  v11 = a1 + 17;
  v12 = (__int64 *)a1[27];
  if ( !v12 )
    v12 = (__int64 *)a1[26];
  sub_48A5A0(v11, v12, a3, a4, a5, a6, a7, a8, a9);
  if ( *a2 != -1 || (result = 0, !a2[1]) )
  {
    v13 = a1[17];
    v14 = v13 + 40LL * a1[18];
    if ( v13 == v14 )
    {
      return 0;
    }
    else
    {
      while ( *(_QWORD *)(v13 + 32) != a2[1] || *(_QWORD *)(v13 + 24) != *a2 )
      {
        v13 += 40;
        if ( v14 == v13 )
          return 0;
      }
      return v13 != 0;
    }
  }
  return result;
}
