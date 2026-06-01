__int64 __fastcall sub_A24C20(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __m128i *v5; // r13
  int v6; // r12d
  __m128i *i; // r14
  const __m128i *v8; // r14
  __m128i *v9; // r13
  const __m128i *v10; // rbx
  const __m128i *j; // r14
  __m128i v12; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v14; // rdi
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  __m128i *v22; // r15
  __int8 v23; // al
  __int8 v24; // al
  __int8 v25; // al
  __int8 v26; // al
  __int8 v27; // al
  __int8 v28; // al
  __int8 v29; // al
  __int8 v30; // al
  char v31; // cl
  __int8 v32; // al
  __int64 v33; // rax
  const __m128i *v34; // r14
  __int64 v35; // rax
  __m128i *v36; // r15
  __int64 v37; // rbx
  __int8 v38; // al
  __int8 v39; // al
  __int8 v40; // al
  __int8 v41; // al
  __int8 v42; // al
  __int8 v43; // al
  __int8 v44; // al
  __int8 v45; // al
  char v46; // cl
  __int8 v47; // al
  __m128i *v48; // rbx
  unsigned __int64 v49; // [rsp+8h] [rbp-40h]
  __int64 v50; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(__m128i **)a1;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 > v4 )
    {
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v8 = *(const __m128i **)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 *= 176LL;
          v22 = (__m128i *)((char *)v5 + v4);
          do
          {
            v49 = v4;
            *v5 = _mm_loadu_si128(v8);
            sub_9EE8A0((__int64)v5[1].m128i_i64, (__int64)v8[1].m128i_i64);
            v23 = v8[3].m128i_i8[0] & 1 | v5[3].m128i_i8[0] & 0xFE;
            v5[3].m128i_i8[0] = v23;
            v24 = v8[3].m128i_i8[0] & 2 | v23 & 0xFD;
            v5[3].m128i_i8[0] = v24;
            v25 = v8[3].m128i_i8[0] & 4 | v24 & 0xFB;
            v5[3].m128i_i8[0] = v25;
            v5[3].m128i_i8[0] = v8[3].m128i_i8[0] & 8 | v25 & 0xF7;
            sub_9EE8A0((__int64)&v5[3].m128i_i64[1], (__int64)&v8[3].m128i_i64[1]);
            sub_A21AD0((__int64)&v5[5].m128i_i64[1], (__int64)&v8[5].m128i_i64[1]);
            sub_A21AD0((__int64)v5[8].m128i_i64, (__int64)v8[8].m128i_i64);
            v4 = v49;
            v26 = v8[10].m128i_i8[8] & 1 | v5[10].m128i_i8[8] & 0xFE;
            v5[10].m128i_i8[8] = v26;
            v27 = v8[10].m128i_i8[8] & 6 | v26 & 0xF9;
            v5[10].m128i_i8[8] = v27;
            v28 = v8[10].m128i_i8[8] & 8 | v27 & 0xF7;
            v5[10].m128i_i8[8] = v28;
            v29 = v8[10].m128i_i8[8] & 0x10 | v28 & 0xEF;
            v5[10].m128i_i8[8] = v29;
            v30 = v8[10].m128i_i8[8] & 0x20 | v29 & 0xDF;
            v5[10].m128i_i8[8] = v30;
            v31 = v8[10].m128i_i8[8] & 0x40;
            v5 += 11;
            v8 += 11;
            v32 = v31 | v30 & 0xBF;
            v5[-1].m128i_i8[8] = v32;
            v5[-1].m128i_i8[8] = v8[-1].m128i_i8[8] & 0x80 | v32 & 0x7F;
          }
          while ( v5 != v22 );
          v3 = *(unsigned int *)(a2 + 8);
          v5 = *(__m128i **)a1;
          v8 = *(const __m128i **)a2;
        }
      }
      else
      {
        for ( i = &v5[11 * v4]; i != v5; sub_A09C70((__int64)i[1].m128i_i64) )
          i -= 11;
        *(_DWORD *)(a1 + 8) = 0;
        sub_A14160((__int64 *)a1, v3);
        v3 = *(unsigned int *)(a2 + 8);
        v5 = *(__m128i **)a1;
        v4 = 0;
        v8 = *(const __m128i **)a2;
      }
      v9 = (__m128i *)((char *)v5 + v4);
      v10 = &v8[11 * v3];
      for ( j = (const __m128i *)((char *)v8 + v4); j != v10; v9[-1].m128i_i8[8] = j[-1].m128i_i8[8] & 0x80 | v20 & 0x7F )
      {
        v12 = _mm_loadu_si128(j);
        m128i_i64 = (__int64)j[1].m128i_i64;
        v14 = (__int64)v9[1].m128i_i64;
        j += 11;
        v9 += 11;
        v9[-11] = v12;
        sub_A20E20(v14, m128i_i64);
        v15 = j[-1].m128i_i8[8] & 1 | v9[-1].m128i_i8[8] & 0xFE;
        v9[-1].m128i_i8[8] = v15;
        v16 = j[-1].m128i_i8[8] & 6 | v15 & 0xF9;
        v9[-1].m128i_i8[8] = v16;
        v17 = j[-1].m128i_i8[8] & 8 | v16 & 0xF7;
        v9[-1].m128i_i8[8] = v17;
        v18 = j[-1].m128i_i8[8] & 0x10 | v17 & 0xEF;
        v9[-1].m128i_i8[8] = v18;
        v19 = j[-1].m128i_i8[8] & 0x20 | v18 & 0xDF;
        v9[-1].m128i_i8[8] = v19;
        v20 = j[-1].m128i_i8[8] & 0x40 | v19 & 0xBF;
        v9[-1].m128i_i8[8] = v20;
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v33 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a2 + 8) )
    {
      v34 = *(const __m128i **)a2;
      v35 = 11 * v3;
      v36 = *(__m128i **)a1;
      v50 = 16 * v35;
      v37 = *(_QWORD *)a2 + 16 * v35;
      do
      {
        *v36 = _mm_loadu_si128(v34);
        sub_9EE8A0((__int64)v36[1].m128i_i64, (__int64)v34[1].m128i_i64);
        v38 = v34[3].m128i_i8[0] & 1 | v36[3].m128i_i8[0] & 0xFE;
        v36[3].m128i_i8[0] = v38;
        v39 = v34[3].m128i_i8[0] & 2 | v38 & 0xFD;
        v36[3].m128i_i8[0] = v39;
        v40 = v34[3].m128i_i8[0] & 4 | v39 & 0xFB;
        v36[3].m128i_i8[0] = v40;
        v36[3].m128i_i8[0] = v34[3].m128i_i8[0] & 8 | v40 & 0xF7;
        sub_9EE8A0((__int64)&v36[3].m128i_i64[1], (__int64)&v34[3].m128i_i64[1]);
        sub_A21AD0((__int64)&v36[5].m128i_i64[1], (__int64)&v34[5].m128i_i64[1]);
        sub_A21AD0((__int64)v36[8].m128i_i64, (__int64)v34[8].m128i_i64);
        v41 = v34[10].m128i_i8[8] & 1 | v36[10].m128i_i8[8] & 0xFE;
        v36[10].m128i_i8[8] = v41;
        v42 = v34[10].m128i_i8[8] & 6 | v41 & 0xF9;
        v36[10].m128i_i8[8] = v42;
        v43 = v34[10].m128i_i8[8] & 8 | v42 & 0xF7;
        v36[10].m128i_i8[8] = v43;
        v44 = v34[10].m128i_i8[8] & 0x10 | v43 & 0xEF;
        v36[10].m128i_i8[8] = v44;
        v45 = v34[10].m128i_i8[8] & 0x20 | v44 & 0xDF;
        v36[10].m128i_i8[8] = v45;
        v46 = v34[10].m128i_i8[8] & 0x40;
        v34 += 11;
        v36 += 11;
        v47 = v46 | v45 & 0xBF;
        v36[-1].m128i_i8[8] = v47;
        v36[-1].m128i_i8[8] = v34[-1].m128i_i8[8] & 0x80 | v47 & 0x7F;
      }
      while ( v34 != (const __m128i *)v37 );
      v33 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
      v5 = (__m128i *)((char *)v5 + v50);
    }
    v48 = (__m128i *)(v33 + 176 * v4);
    if ( v5 == v48 )
      goto LABEL_9;
    do
    {
      v48 -= 11;
      sub_A09C70((__int64)v48[1].m128i_i64);
    }
    while ( v5 != v48 );
    *(_DWORD *)(a1 + 8) = v6;
  }
  return a1;
}
