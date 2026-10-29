__m128i *__fastcall sub_22982E0(__m128i *a1, const void *a2, size_t a3)
{
  int (**v3)[6]; // rbx
  __int64 v4; // rax
  const __m128i *v6; // rbp
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4

  if ( a3 )
  {
    v3 = &off_2C77140;
    v4 = 4;
    v6 = (const __m128i *)dword_2B584C0;
    while ( v4 - 1 != a3 || memcmp((const void *)(v6[2].m128i_i64[1] + 1), a2, a3) )
    {
      if ( algn_2C771D0 == (_BYTE *)++v3 )
        goto LABEL_8;
      while ( 1 )
      {
        v6 = (const __m128i *)*v3;
        v4 = *(_QWORD *)&(**v3)[12];
        if ( v4 )
          break;
        if ( algn_2C771D0 == (_BYTE *)++v3 )
          goto LABEL_8;
      }
    }
  }
  else
  {
    v7 = &off_2C77148;
    v6 = (const __m128i *)dword_2B584C0;
    v8 = 4;
    while ( v8 != 1 )
    {
      if ( v7 == algn_2C771D0 )
      {
LABEL_8:
        a1[5].m128i_i64[0] = 0;
        return a1;
      }
      v9 = *(_QWORD *)v7;
      v7 += 8;
      v6 = *((const __m128i **)v7 - 1);
      v8 = *(_QWORD *)(v9 + 48);
      if ( !v8 )
        break;
    }
  }
  v10 = _mm_loadu_si128(v6);
  v11 = _mm_loadu_si128(v6 + 1);
  a1[5].m128i_i8[0] = 1;
  v12 = _mm_loadu_si128(v6 + 2);
  v13 = _mm_loadu_si128(v6 + 3);
  v14 = _mm_loadu_si128(v6 + 4);
  *a1 = v10;
  a1[1] = v11;
  a1[2] = v12;
  a1[3] = v13;
  a1[4] = v14;
  return a1;
}
