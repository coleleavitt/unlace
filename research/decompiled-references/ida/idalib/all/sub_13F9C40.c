void __fastcall sub_13F9C40(__m128 *a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rax
  double v8[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v8[0] = a3;
  *a1 = _mm_loadh_ps(v8);
  if ( !a5 && a2 != a3 )
  {
    v5 = *a2;
    v6 = a2 + 2;
    if ( (unsigned __int64)(v5 - 0x7FFFFFFFFFFFFFFELL) <= 1 )
    {
      do
      {
        v7 = v6;
        if ( a3 == v6 )
        {
          a1->m128_u64[0] = (unsigned __int64)a3;
          return;
        }
        v6 += 2;
      }
      while ( (unsigned __int64)(*v7 - 0x7FFFFFFFFFFFFFFELL) <= 1 );
      a1->m128_u64[0] = (unsigned __int64)v7;
    }
  }
}
