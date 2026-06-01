void __fastcall sub_21C5950(__m128 *a1, __m128 *a2)
{
  __m128 *i; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rcx
  double v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __m128 *v8; // rax
  double v9[2]; // [rsp+0h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; a2 != i; ++i )
    {
      v3 = (unsigned __int64 *)i;
      v4 = i->m128_u64[0];
      v5 = *(double *)&i->m128_u64[1];
      if ( i->m128_u64[0] >= a1->m128_u64[0] )
      {
        v7 = i[-1].m128_u64[0];
        v8 = i - 1;
        if ( v4 < v7 )
        {
          while ( 1 )
          {
            v8[1].m128_u64[0] = v7;
            v8[1].m128_u64[1] = v8->m128_u64[1];
            v7 = v8[-1].m128_u64[0];
            if ( v4 >= v7 )
              break;
            --v8;
          }
        }
        else
        {
          v8 = i;
        }
        v9[0] = v5;
        *v8 = _mm_loadh_ps(v9);
      }
      else
      {
        v6 = i - a1;
        if ( (char *)i - (char *)a1 > 0 )
        {
          do
          {
            v3 -= 2;
            v3[2] = *v3;
            v3[3] = v3[1];
            --v6;
          }
          while ( v6 );
        }
        v9[0] = v5;
        *a1 = _mm_loadh_ps(v9);
      }
    }
  }
}
