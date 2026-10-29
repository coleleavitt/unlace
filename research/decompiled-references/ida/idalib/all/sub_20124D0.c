__int64 __fastcall sub_20124D0(__m128 *a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 result; // rax
  bool v8; // cf
  __int64 *v9; // rcx
  double v10[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v10[0] = a3;
  *a1 = _mm_loadh_ps(v10);
  if ( !a5 && a2 != a3 )
  {
    v5 = *a2;
    v6 = a2 + 1;
    v8 = v5 == -2;
    result = v5 + 2;
    if ( v8 || result == 1 )
    {
      do
      {
        v9 = v6;
        if ( a3 == v6 )
        {
          a1->m128_u64[0] = (unsigned __int64)a3;
          return result;
        }
        ++v6;
        result = *v9 + 2;
      }
      while ( *v9 == -2 || result == 1 );
      a1->m128_u64[0] = (unsigned __int64)v9;
    }
  }
  return result;
}
