void __fastcall sub_E09990(__m128 *a1, __int64 *a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  double v7[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v7[0] = a3;
  *a1 = _mm_loadh_ps(v7);
  if ( !a5 && a2 != a3 && (*a2 == -8192 || *a2 == -4096) )
  {
    v5 = a2 + 2;
    do
    {
      a1->m128_u64[0] = (unsigned __int64)v5;
      if ( a3 == v5 )
        break;
      v6 = *v5;
      v5 += 2;
    }
    while ( v6 == -4096 || v6 == -8192 );
  }
}

