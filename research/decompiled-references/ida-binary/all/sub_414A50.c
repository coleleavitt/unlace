void __fastcall sub_414A50(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  const char *v4; // rdi
  int v5; // eax
  const char *v6; // rdi
  __int64 v7; // rbx
  const char *v8; // rax
  __m128i v9; // xmm2
  unsigned __int64 v10; // r12
  const char *v11; // rdi
  const char *v12; // r14
  __m128i v13; // xmm0
  const char *v14; // rdi
  __m128i si128; // xmm4
  __m128i v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  const char *v18; // [rsp+18h] [rbp-50h]
  __m128i v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v17 = a2;
  if ( a1 != a2 )
  {
    v2 = a1 + 24;
    if ( a2 != a1 + 24 )
    {
      while ( 1 )
      {
        v4 = &s1;
        if ( *(_QWORD *)(v2 + 8) )
          v4 = *(const char **)v2;
        v5 = strtol(v4, nullptr, 10);
        v6 = &s1;
        if ( *(_QWORD *)(a1 + 8) )
          v6 = *(const char **)a1;
        v7 = v2 + 24;
        if ( v5 >= (int)strtol(v6, nullptr, 10) )
        {
          sub_414610(v2);
          if ( v17 == v7 )
            return;
        }
        else
        {
          v8 = *(const char **)v2;
          v9 = _mm_loadu_si128((const __m128i *)(v2 + 8));
          *(_QWORD *)v2 = 0;
          v18 = v8;
          v19[0] = v9;
          v10 = 0xAAAAAAAAAAAAAAABLL * ((v2 - a1) >> 3);
          *(_OWORD *)(v2 + 8) = 0;
          if ( v2 - a1 > 0 )
          {
            do
            {
              v11 = *(const char **)v2;
              v2 -= 24;
              v12 = *(const char **)v2;
              v13 = _mm_loadu_si128((const __m128i *)(v2 + 8));
              *(_QWORD *)v2 = 0;
              *(_OWORD *)(v2 + 8) = 0;
              if ( v11 )
              {
                *(_QWORD *)(v2 + 32) = 0;
                v16 = v13;
                qfree(v11, nullptr);
                v13 = _mm_load_si128(&v16);
              }
              *(_QWORD *)(v2 + 24) = v12;
              *(__m128i *)(v2 + 32) = v13;
              --v10;
            }
            while ( v10 );
          }
          v14 = *(const char **)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            qfree(v14, nullptr);
          }
          si128 = _mm_load_si128(v19);
          *(_QWORD *)a1 = v18;
          *(__m128i *)(a1 + 8) = si128;
          if ( v17 == v7 )
            return;
        }
        v2 = v7;
      }
    }
  }
}
