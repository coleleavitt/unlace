bool __fastcall sub_22493C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // xmm3_8^8
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm2_8
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v16; // rsi

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 56)).m128i_i64[1];
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v5 = _mm_loadu_si128((const __m128i *)a1).m128i_u64[0];
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v3.m128i_i64[0];
  v8 = v4.m128i_i64[0];
  v9 = v5;
  v10 = v4.m128i_i64[1];
  v11 = 0xCCCCCCCCCCCCCCCDLL * ((v3.m128i_i64[0] - v3.m128i_i64[1]) >> 3);
  v12 = v11
      + 4 * (3 * ((v2 - v4.m128i_i64[1]) >> 3) - 3)
      - 0x3333333333333333LL * ((__int64)(v4.m128i_i64[0] - v5) >> 3);
  v13 = v12 >> 2;
  if ( v12 >> 2 > 0 )
  {
    v14 = *a2;
    if ( *(_QWORD *)(v5 + 32) != *a2 )
    {
      while ( 1 )
      {
        v9 += 40LL;
        if ( v9 == v8 )
        {
          v9 = *(_QWORD *)(v10 + 8);
          v10 += 8;
          v8 = v9 + 480;
          if ( *(_QWORD *)(v9 + 32) == v14 )
            goto LABEL_16;
        }
        else if ( *(_QWORD *)(v9 + 32) == v14 )
        {
          goto LABEL_16;
        }
        v9 += 40LL;
        if ( v9 == v8 )
        {
          v9 = *(_QWORD *)(v10 + 8);
          v10 += 8;
          v8 = v9 + 480;
        }
        if ( *(_QWORD *)(v9 + 32) == v14 )
          break;
        v9 += 40LL;
        if ( v9 == v8 )
        {
          v9 = *(_QWORD *)(v10 + 8);
          v10 += 8;
          v8 = v9 + 480;
        }
        if ( *(_QWORD *)(v9 + 32) == v14 )
          break;
        v9 += 40LL;
        if ( v9 == v8 )
        {
          v9 = *(_QWORD *)(v10 + 8);
          v10 += 8;
          v8 = v9 + 480;
          if ( !--v13 )
          {
LABEL_19:
            v12 = v11 + 4 * (3 * ((v2 - v10) >> 3) - 3) - 0x3333333333333333LL * ((__int64)(v8 - v9) >> 3);
            goto LABEL_20;
          }
        }
        else if ( !--v13 )
        {
          goto LABEL_19;
        }
        if ( *(_QWORD *)(v9 + 32) == v14 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
LABEL_20:
  if ( v12 == 2 )
  {
    v16 = *a2;
    goto LABEL_31;
  }
  if ( v12 == 3 )
  {
    v16 = *a2;
    if ( *(_QWORD *)(v9 + 32) == v16 )
      goto LABEL_16;
    v9 += 40LL;
    if ( v9 == v8 )
    {
      v9 = *(_QWORD *)(v10 + 8);
      v10 += 8;
      v8 = v9 + 480;
    }
LABEL_31:
    if ( *(_QWORD *)(v9 + 32) != v16 )
    {
      v9 += 40LL;
      if ( v9 == v8 )
        v9 = *(_QWORD *)(v10 + 8);
      goto LABEL_24;
    }
LABEL_16:
    v7 = v9;
    return v6 != v7;
  }
  if ( v12 != 1 )
    return v6 != v7;
  v16 = *a2;
LABEL_24:
  if ( *(_QWORD *)(v9 + 32) == v16 )
    v7 = v9;
  return v6 != v7;
}
