void __fastcall sub_1A38020(__m128 *a1, __m128 *a2)
{
  __m128 *v2; // rcx
  unsigned __int64 v3; // r13
  double v4; // rbx
  __m128 *v5; // rbp
  __m128i *v6; // rax
  double v7[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 1;
    if ( a2 != &a1[1] )
    {
      v3 = (unsigned __int64)&a1[2] + (((char *)&a2[-2] - (char *)a1) & 0xFFFFFFFFFFFFFFF0LL);
      do
      {
        while ( 1 )
        {
          v4 = *(double *)&v2->m128_u64[1];
          v5 = v2 + 1;
          v7[0] = *(double *)v2->m128_u64;
          if ( *(_QWORD *)&v4 < a1->m128_u64[1] )
            break;
          v6 = (__m128i *)&v2[-1];
          if ( *(_QWORD *)&v4 < v2[-1].m128_u64[1] )
          {
            while ( 1 )
            {
              v6[1] = _mm_loadu_si128(v6);
              if ( *(_QWORD *)&v4 >= v6[-1].m128i_i64[1] )
                break;
              --v6;
            }
          }
          else
          {
            v6 = (__m128i *)v2;
          }
          v7[0] = v4;
          ++v2;
          *(__m128 *)v6 = _mm_loadh_ps(v7);
          if ( v5 == (__m128 *)v3 )
            return;
        }
        if ( (char *)v2 - (char *)a1 > 0 )
          memmove(&v5[-(v2 - a1)], &v2[-(v2 - a1)], (char *)v2 - (char *)a1);
        v7[0] = v4;
        v2 = v5;
        *a1 = _mm_loadh_ps(v7);
      }
      while ( v5 != (__m128 *)v3 );
    }
  }
}
