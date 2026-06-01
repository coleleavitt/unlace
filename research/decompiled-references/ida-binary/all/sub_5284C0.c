void __fastcall sub_5284C0(__int64 *a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *v3; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // r15
  __int64 v8; // rax
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rdi
  __m128i si128; // xmm3
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __m128i v20[4]; // [rsp+20h] [rbp-48h] BYREF

  v18 = a2;
  if ( a1 != a2 )
  {
    v3 = a1 + 3;
    if ( a2 != a1 + 3 )
    {
      do
      {
        v6 = v3;
        v7 = v3;
        v3 += 3;
        if ( a3(v6, a1) )
        {
          v8 = *(v3 - 3);
          v9 = _mm_loadu_si128((const __m128i *)v3 - 1);
          v10.m128i_i64[0] = 0;
          *(v3 - 3) = 0;
          v11 = 0;
          v19 = v8;
          v20[0] = v9;
          v12 = 0xAAAAAAAAAAAAAAABLL * (v7 - a1);
          *((_OWORD *)v3 - 1) = 0;
          if ( (char *)v7 - (char *)a1 > 0 )
          {
            do
            {
              v13 = *v7;
              v7 -= 3;
              v14 = *v7;
              v10 = _mm_loadu_si128((const __m128i *)(v7 + 1));
              *v7 = 0;
              *(_OWORD *)(v7 + 1) = v11;
              if ( v13 )
              {
                v7[4] = 0;
                v17 = v10;
                qfree(v13, (const char *)a1);
                v10 = _mm_load_si128(&v17);
                v11 = 0;
              }
              v7[3] = v14;
              *((__m128i *)v7 + 2) = v10;
              --v12;
            }
            while ( v12 );
          }
          v15 = *a1;
          if ( *a1 )
          {
            a1[1] = 0;
            qfree(v15, (const char *)a1, *(double *)v10.m128i_i64, *(double *)&v11);
          }
          si128 = _mm_load_si128(v20);
          *a1 = v19;
          *(__m128i *)(a1 + 1) = si128;
        }
        else
        {
          sub_528350(v7, a3);
        }
      }
      while ( v18 != v3 );
    }
  }
}
