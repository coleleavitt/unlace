unsigned __int64 __fastcall sub_33FCA0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // r13
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // r14
  __int64 v16; // rax
  __m128i v17; // xmm0
  const char *v18; // r14
  __m128i v19; // xmm2
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-80h]
  __m128i v22; // [rsp+10h] [rbp-78h] BYREF
  __m128i v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __m128i v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v26 = __readfsqword(0x28u);
  v22.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 24 )
  {
    v6 = 0xAAAAAAAAAAAAAAABLL * (v22.m128i_i64[0] >> 3);
    v7 = (v6 - 2) / 2;
    v8 = a1 + 8 * (v7 + ((v6 - 2 + ((unsigned __int64)(v6 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    while ( 1 )
    {
      v9 = *(_QWORD *)v8;
      v10 = _mm_loadu_si128((const __m128i *)(v8 + 8));
      *(_QWORD *)v8 = 0;
      v24 = v9;
      *(_OWORD *)(v8 + 8) = 0;
      v25 = v10;
      sub_33AC90(a1, v7, v6, (char *)&v24);
      if ( v24 )
        qfree(v24);
      v8 -= 24LL;
      if ( !v7 )
        break;
      --v7;
    }
  }
  if ( a2 < a3 )
  {
    v11 = 0xAAAAAAAAAAAAAAABLL * (v22.m128i_i64[0] >> 3);
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v4 + 8);
        if ( !*(_QWORD *)(a1 + 8) )
          break;
        v12 = *(const char **)a1;
        v13 = s1;
        if ( v14 )
          goto LABEL_10;
LABEL_11:
        if ( strcmp(v13, v12) < 0 )
        {
          v16 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0;
          v17 = (__m128i)_mm_loadh_ps((const double *)(v4 + 16));
          *(_OWORD *)(v4 + 8) = 0;
          v18 = *(const char **)a1;
          v19 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          v20 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
          {
            *(_QWORD *)(v4 + 8) = 0;
            v21 = v16;
            v23 = v19;
            v22 = v17;
            qfree(v20);
            v19 = _mm_load_si128(&v23);
            v17 = _mm_load_si128(&v22);
            v16 = v21;
          }
          *(_QWORD *)v4 = v18;
          *(__m128i *)(v4 + 8) = v19;
          v24 = v16;
          v25 = v17;
          sub_33AC90(a1, 0, v11, (char *)&v24);
          if ( v24 )
            qfree(v24);
        }
        v4 += 24LL;
        if ( v4 >= a3 )
          return v26 - __readfsqword(0x28u);
      }
      v12 = s1;
      if ( v14 )
      {
LABEL_10:
        v13 = *(const char **)v4;
        goto LABEL_11;
      }
      v4 += 24LL;
    }
    while ( v4 < a3 );
  }
  return v26 - __readfsqword(0x28u);
}
