char **__fastcall sub_9F5D40(char **a1, char **a2)
{
  const __m128i *v3; // r15
  char *v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r13
  int v8; // r14d
  const __m128i *v9; // rax
  __m128i *v10; // rbx
  const __m128i *v11; // r13
  const __m128i *v12; // r15
  __m128i v13; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v15; // rdi
  const __m128i *j; // rbx
  char *v18; // r14
  __int64 v19; // rax
  char *v20; // r13
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  __m128i *v29; // rdi
  __int64 v30; // rax
  char *k; // r13
  const __m128i *v32; // r13
  __int64 v33; // rbx
  char *i; // r15
  const __m128i *v35; // r13
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  __m128i *v44; // rsi
  unsigned __int64 v45; // [rsp+0h] [rbp-48h]
  unsigned __int64 v46; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = (const __m128i *)*a2;
    v5 = *a1;
    v6 = *((unsigned int *)a1 + 2);
    if ( a2 + 2 == (char **)*a2 )
    {
      v7 = *((unsigned int *)a2 + 2);
      v8 = *((_DWORD *)a2 + 2);
      if ( v7 > v6 )
      {
        if ( v7 > *((unsigned int *)a1 + 3) )
        {
          for ( i = &v5[384 * v6]; i != v5; sub_9E66A0((__int64)(i + 16)) )
            i -= 384;
          *((_DWORD *)a1 + 2) = 0;
          sub_9F56E0((__int64 *)a1, v7);
          v3 = (const __m128i *)*a2;
          v7 = *((unsigned int *)a2 + 2);
          v6 = 0;
          v5 = *a1;
          v9 = (const __m128i *)*a2;
        }
        else
        {
          v9 = (const __m128i *)*a2;
          if ( *((_DWORD *)a1 + 2) )
          {
            v6 *= 384LL;
            v46 = v6;
            v35 = (const __m128i *)((char *)v3 + v6);
            do
            {
              v45 = v6;
              *(__m128i *)v5 = _mm_loadu_si128(v3);
              sub_9E6D90((__int64)(v5 + 16), (const __m128i *)v3[1].m128i_i64);
              v36 = v3[3].m128i_i8[0] & 1 | v5[48] & 0xFE;
              v5[48] = v36;
              v37 = v3[3].m128i_i8[0] & 2 | v36 & 0xFD;
              v5[48] = v37;
              v38 = v3[3].m128i_i8[0] & 4 | v37 & 0xFB;
              v5[48] = v38;
              v5[48] = v3[3].m128i_i8[0] & 8 | v38 & 0xF7;
              sub_9E6D90((__int64)(v5 + 56), &v3[3].m128i_i64[1]);
              sub_9E6E50((__m128i *)(v5 + 88), (__m128i *)&v3[5].m128i_u64[1]);
              sub_9E6E50((__m128i *)v5 + 8, (__m128i *)&v3[8]);
              v39 = v3[10].m128i_i8[8] & 1 | v5[168] & 0xFE;
              v5[168] = v39;
              v40 = v3[10].m128i_i8[8] & 2 | v39 & 0xFD;
              v5[168] = v40;
              v41 = v3[10].m128i_i8[8] & 4 | v40 & 0xFB;
              v5[168] = v41;
              v42 = v3[10].m128i_i8[8] & 8 | v41 & 0xF7;
              v5[168] = v42;
              v43 = v3[10].m128i_i8[8] & 0x10 | v42 & 0xEF;
              v5[168] = v43;
              v5[168] = v3[10].m128i_i8[8] & 0x20 | v43 & 0xDF;
              sub_9E6E50((__m128i *)v5 + 11, (__m128i *)&v3[11]);
              sub_9E6E50((__m128i *)(v5 + 216), (__m128i *)&v3[13].m128i_u64[1]);
              sub_9E6E50((__m128i *)v5 + 16, (__m128i *)&v3[16]);
              sub_9E6E50((__m128i *)(v5 + 296), (__m128i *)&v3[18].m128i_u64[1]);
              v44 = (__m128i *)&v3[21];
              v3 += 24;
              sub_9E6E50((__m128i *)v5 + 21, v44);
              v5 += 384;
              v6 = v45;
              *((_QWORD *)v5 - 1) = v3[-1].m128i_i64[1];
            }
            while ( v3 != v35 );
            v3 = (const __m128i *)*a2;
            v7 = *((unsigned int *)a2 + 2);
            v5 = *a1;
            v9 = (const __m128i *)&(*a2)[v46];
          }
        }
        v10 = (__m128i *)&v5[v6];
        v11 = &v3[24 * v7];
        if ( v11 != v9 )
        {
          v12 = v9;
          do
          {
            v13 = _mm_loadu_si128(v12);
            m128i_i64 = (__int64)v12[1].m128i_i64;
            v15 = (__int64)v10[1].m128i_i64;
            v12 += 24;
            v10 += 24;
            v10[-24] = v13;
            sub_9E6760(v15, m128i_i64);
          }
          while ( v11 != v12 );
          v3 = (const __m128i *)*a2;
        }
        *((_DWORD *)a1 + 2) = v8;
        for ( j = &v3[24 * *((unsigned int *)a2 + 2)]; v3 != j; sub_9E66A0((__int64)j[1].m128i_i64) )
          j -= 24;
LABEL_12:
        *((_DWORD *)a2 + 2) = 0;
        return a1;
      }
      v19 = (__int64)*a1;
      if ( *((_DWORD *)a2 + 2) )
      {
        v20 = &v5[384 * v7];
        do
        {
          *(__m128i *)v5 = _mm_loadu_si128(v3);
          sub_9E6D90((__int64)(v5 + 16), (const __m128i *)v3[1].m128i_i64);
          v21 = v3[3].m128i_i8[0] & 1 | v5[48] & 0xFE;
          v5[48] = v21;
          v22 = v3[3].m128i_i8[0] & 2 | v21 & 0xFD;
          v5[48] = v22;
          v23 = v3[3].m128i_i8[0] & 4 | v22 & 0xFB;
          v5[48] = v23;
          v5[48] = v3[3].m128i_i8[0] & 8 | v23 & 0xF7;
          sub_9E6D90((__int64)(v5 + 56), &v3[3].m128i_i64[1]);
          sub_9E6E50((__m128i *)(v5 + 88), (__m128i *)&v3[5].m128i_u64[1]);
          sub_9E6E50((__m128i *)v5 + 8, (__m128i *)&v3[8]);
          v24 = v3[10].m128i_i8[8] & 1 | v5[168] & 0xFE;
          v5[168] = v24;
          v25 = v3[10].m128i_i8[8] & 2 | v24 & 0xFD;
          v5[168] = v25;
          v26 = v3[10].m128i_i8[8] & 4 | v25 & 0xFB;
          v5[168] = v26;
          v27 = v3[10].m128i_i8[8] & 8 | v26 & 0xF7;
          v5[168] = v27;
          v28 = v3[10].m128i_i8[8] & 0x10 | v27 & 0xEF;
          v5[168] = v28;
          v5[168] = v3[10].m128i_i8[8] & 0x20 | v28 & 0xDF;
          sub_9E6E50((__m128i *)v5 + 11, (__m128i *)&v3[11]);
          sub_9E6E50((__m128i *)(v5 + 216), (__m128i *)&v3[13].m128i_u64[1]);
          sub_9E6E50((__m128i *)v5 + 16, (__m128i *)&v3[16]);
          sub_9E6E50((__m128i *)(v5 + 296), (__m128i *)&v3[18].m128i_u64[1]);
          v29 = (__m128i *)(v5 + 336);
          v5 += 384;
          sub_9E6E50(v29, (__m128i *)&v3[21]);
          v30 = v3[23].m128i_i64[1];
          v3 += 24;
          *((_QWORD *)v5 - 1) = v30;
        }
        while ( v5 != v20 );
        v19 = (__int64)*a1;
        v6 = *((unsigned int *)a1 + 2);
      }
      for ( k = (char *)(v19 + 384 * v6); v5 != k; sub_9E66A0((__int64)(k + 16)) )
        k -= 384;
      *((_DWORD *)a1 + 2) = v8;
      v32 = (const __m128i *)*a2;
      v33 = (__int64)&(*a2)[384 * *((unsigned int *)a2 + 2)];
      if ( *a2 == (char *)v33 )
        goto LABEL_12;
      do
      {
        v33 -= 384;
        sub_9E66A0(v33 + 16);
      }
      while ( v32 != (const __m128i *)v33 );
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v18 = &v5[384 * v6];
      if ( v18 != v5 )
      {
        do
        {
          v18 -= 384;
          sub_9E66A0((__int64)(v18 + 16));
        }
        while ( v18 != v5 );
        v5 = *a1;
      }
      if ( v5 != (char *)(a1 + 2) )
        free(v5);
      *a1 = *a2;
      *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
      *a2 = (char *)(a2 + 2);
      a2[1] = nullptr;
    }
  }
  return a1;
}

