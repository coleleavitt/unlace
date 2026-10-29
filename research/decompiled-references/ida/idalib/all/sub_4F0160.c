void __fastcall sub_4F0160(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  const char *v4; // rsi
  const char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __m128i v8; // xmm5
  __m128 v9; // xmm3
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // r14
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // r14
  __m128i v17; // xmm0
  void *v18; // rdi
  __m128i v19; // xmm6
  void *v20; // rdi
  __m128i si128; // xmm7
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __m128i v26; // [rsp+30h] [rbp-58h] BYREF
  __m128i v27[4]; // [rsp+40h] [rbp-48h] BYREF

  v23 = a2;
  if ( a1 != a2 )
  {
    v2 = a1 + 48;
    if ( a2 != a1 + 48 )
    {
      while ( 1 )
      {
        v4 = haystack;
        if ( *(_QWORD *)(a1 + 32) )
          v4 = *(const char **)(a1 + 24);
        v5 = haystack;
        if ( *(_QWORD *)(v2 + 32) )
          v5 = *(const char **)(v2 + 24);
        v6 = v2 + 48;
        if ( strcasecmp(v5, v4) >= 0 )
        {
          sub_4F0000((__int64 *)v2);
          if ( v23 == v6 )
            return;
        }
        else
        {
          v7 = *(_QWORD *)v2;
          v8 = _mm_loadu_si128((const __m128i *)(v2 + 8));
          v9 = _mm_loadh_ps((const double *)(v2 + 40));
          *(_QWORD *)v2 = 0;
          v24 = v7;
          v10 = *(_QWORD *)(v2 + 24);
          v26 = v8;
          v25 = v10;
          *(_QWORD *)(v2 + 24) = 0;
          *(_OWORD *)(v2 + 8) = 0;
          v27[0] = (__m128i)v9;
          v11 = 0xAAAAAAAAAAAAAAABLL * ((v2 - a1) >> 4);
          *(_OWORD *)(v2 + 32) = 0;
          if ( v2 - a1 > 0 )
          {
            do
            {
              v12 = *(void **)v2;
              v2 -= 48;
              v13 = *(_QWORD *)v2;
              v14 = _mm_loadu_si128((const __m128i *)(v2 + 8));
              *(_QWORD *)v2 = 0;
              *(_OWORD *)(v2 + 8) = 0;
              if ( v12 )
              {
                *(_QWORD *)(v2 + 56) = 0;
                v22 = v14;
                qfree(v12);
                v14 = _mm_load_si128(&v22);
              }
              v15 = *(void **)(v2 + 72);
              *(_QWORD *)(v2 + 48) = v13;
              *(__m128i *)(v2 + 56) = v14;
              v16 = *(_QWORD *)(v2 + 24);
              v17 = _mm_loadu_si128((const __m128i *)(v2 + 32));
              *(_QWORD *)(v2 + 24) = 0;
              *(_OWORD *)(v2 + 32) = 0;
              if ( v15 )
              {
                *(_QWORD *)(v2 + 80) = 0;
                v22 = v17;
                qfree(v15);
                v17 = _mm_load_si128(&v22);
              }
              *(_QWORD *)(v2 + 72) = v16;
              *(__m128i *)(v2 + 80) = v17;
              --v11;
            }
            while ( v11 );
          }
          v18 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            qfree(v18);
          }
          v19 = _mm_load_si128(&v26);
          v20 = *(void **)(a1 + 24);
          *(_QWORD *)a1 = v24;
          *(__m128i *)(a1 + 8) = v19;
          if ( v20 )
          {
            *(_QWORD *)(a1 + 32) = 0;
            qfree(v20);
          }
          si128 = _mm_load_si128(v27);
          *(_QWORD *)(a1 + 24) = v25;
          *(__m128i *)(a1 + 32) = si128;
          if ( v23 == v6 )
            return;
        }
        v2 = v6;
      }
    }
  }
}
