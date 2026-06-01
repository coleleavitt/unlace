__int64 __fastcall sub_9F1B40(__int64 a1, __int64 a2)
{
  const __m128i *v3; // r15
  __m128i *v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r13
  int v8; // r14d
  const __m128i *v9; // rdx
  __m128i *v10; // rbx
  const __m128i *v11; // r13
  const __m128i *v12; // r15
  __m128i v13; // xmm0
  const __m128i *v14; // rsi
  __m128i *v15; // rdi
  __int8 v16; // al
  const __m128i *j; // rbx
  __m128i *v19; // r13
  __m128i *v20; // rsi
  __m128i *k; // r13
  const __m128i *v22; // r13
  __int64 v23; // rbx
  __m128i *i; // r15
  __int64 v25; // rax
  __m128i *v26; // r13
  __int8 v27; // al
  __int8 v28; // al
  __int8 v29; // al
  __int8 v30; // al
  __int64 v31; // rdi
  __int8 v32; // al
  __int8 v33; // al
  __m128i *v34; // rsi
  __int8 v35; // al
  const __m128i *v36; // r13
  __int8 v37; // al
  __int8 v38; // al
  __int8 v39; // al
  __int8 v40; // al
  __int64 m128i_i64; // rdi
  __int8 v42; // al
  __int8 v43; // al
  __m128i *v44; // rsi
  __int8 v45; // al
  const __m128i *v46; // [rsp+0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+0h] [rbp-48h]
  __int64 v48; // [rsp+8h] [rbp-40h]
  unsigned __int64 v49; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(const __m128i **)a2;
    v5 = *(__m128i **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 > v6 )
      {
        if ( v7 > *(unsigned int *)(a1 + 12) )
        {
          for ( i = (__m128i *)((char *)v5 + 136 * v6); v5 != i; sub_9E5FA0((__int64)i[1].m128i_i64) )
            i = (__m128i *)((char *)i - 136);
          *(_DWORD *)(a1 + 8) = 0;
          sub_9F1890(a1, v7);
          v3 = *(const __m128i **)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v6 = 0;
          v5 = *(__m128i **)a1;
          v9 = *(const __m128i **)a2;
        }
        else
        {
          v9 = *(const __m128i **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 136LL;
            v49 = v6;
            v36 = (const __m128i *)((char *)v3 + v6);
            do
            {
              v47 = v6;
              *v5 = _mm_loadu_si128(v3);
              sub_9E6D90((__int64)v5[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
              v37 = v3[3].m128i_i8[0] & 1 | v5[3].m128i_i8[0] & 0xFE;
              v5[3].m128i_i8[0] = v37;
              v38 = v3[3].m128i_i8[0] & 2 | v37 & 0xFD;
              v5[3].m128i_i8[0] = v38;
              v39 = v3[3].m128i_i8[0] & 4 | v38 & 0xFB;
              v5[3].m128i_i8[0] = v39;
              v5[3].m128i_i8[0] = v3[3].m128i_i8[0] & 8 | v39 & 0xF7;
              sub_9E6D90((__int64)&v5[3].m128i_i64[1], &v3[3].m128i_i64[1]);
              v40 = v5[5].m128i_i8[8];
              m128i_i64 = (__int64)v5[6].m128i_i64;
              v5 = (__m128i *)((char *)v5 + 136);
              v42 = v3[5].m128i_i8[8] & 1 | v40 & 0xFE;
              v5[-3].m128i_i8[0] = v42;
              v43 = v3[5].m128i_i8[8] & 6 | v42 & 0xF9;
              v44 = (__m128i *)&v3[6];
              v3 = (const __m128i *)((char *)v3 + 136);
              v5[-3].m128i_i8[0] = v43;
              sub_9E6D90(m128i_i64, v44);
              v6 = v47;
              v45 = v3[-1].m128i_i8[8] & 1 | v5[-1].m128i_i8[8] & 0xFE;
              v5[-1].m128i_i8[8] = v45;
              v5[-1].m128i_i8[8] = v3[-1].m128i_i8[8] & 2 | v45 & 0xFD;
            }
            while ( v3 != v36 );
            v3 = *(const __m128i **)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(__m128i **)a1;
            v9 = (const __m128i *)(*(_QWORD *)a2 + v49);
          }
        }
        v10 = (__m128i *)((char *)v5 + v6);
        v11 = (const __m128i *)((char *)v3 + 136 * v7);
        if ( v11 != v9 )
        {
          v12 = v9;
          do
          {
            v13 = _mm_loadu_si128(v12);
            v14 = v12 + 1;
            v15 = v10 + 1;
            v12 = (const __m128i *)((char *)v12 + 136);
            v10 = (__m128i *)((char *)v10 + 136);
            *(__m128i *)((char *)v10 - 136) = v13;
            sub_9E6480(v15, v14);
            v16 = v12[-1].m128i_i8[8] & 1 | v10[-1].m128i_i8[8] & 0xFE;
            v10[-1].m128i_i8[8] = v16;
            v10[-1].m128i_i8[8] = v12[-1].m128i_i8[8] & 2 | v16 & 0xFD;
          }
          while ( v11 != v12 );
          v3 = *(const __m128i **)a2;
        }
        *(_DWORD *)(a1 + 8) = v8;
        for ( j = (const __m128i *)((char *)v3 + 136 * *(unsigned int *)(a2 + 8));
              j != v3;
              sub_9E5FA0((__int64)j[1].m128i_i64) )
        {
          j = (const __m128i *)((char *)j - 136);
        }
LABEL_12:
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
      v20 = *(__m128i **)a1;
      if ( v7 )
      {
        v25 = 136 * v7;
        v26 = *(__m128i **)a1;
        v48 = v25;
        v46 = (const __m128i *)((char *)v3 + v25);
        do
        {
          *v26 = _mm_loadu_si128(v3);
          sub_9E6D90((__int64)v26[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
          v27 = v3[3].m128i_i8[0] & 1 | v26[3].m128i_i8[0] & 0xFE;
          v26[3].m128i_i8[0] = v27;
          v28 = v3[3].m128i_i8[0] & 2 | v27 & 0xFD;
          v26[3].m128i_i8[0] = v28;
          v29 = v3[3].m128i_i8[0] & 4 | v28 & 0xFB;
          v26[3].m128i_i8[0] = v29;
          v26[3].m128i_i8[0] = v3[3].m128i_i8[0] & 8 | v29 & 0xF7;
          sub_9E6D90((__int64)&v26[3].m128i_i64[1], &v3[3].m128i_i64[1]);
          v30 = v26[5].m128i_i8[8];
          v31 = (__int64)v26[6].m128i_i64;
          v26 = (__m128i *)((char *)v26 + 136);
          v32 = v3[5].m128i_i8[8] & 1 | v30 & 0xFE;
          v26[-3].m128i_i8[0] = v32;
          v33 = v3[5].m128i_i8[8] & 6 | v32 & 0xF9;
          v34 = (__m128i *)&v3[6];
          v3 = (const __m128i *)((char *)v3 + 136);
          v26[-3].m128i_i8[0] = v33;
          sub_9E6D90(v31, v34);
          v35 = v3[-1].m128i_i8[8] & 1 | v26[-1].m128i_i8[8] & 0xFE;
          v26[-1].m128i_i8[8] = v35;
          v26[-1].m128i_i8[8] = v3[-1].m128i_i8[8] & 2 | v35 & 0xFD;
        }
        while ( v46 != v3 );
        v5 = (__m128i *)((char *)v5 + v48);
        v20 = *(__m128i **)a1;
        v6 = *(unsigned int *)(a1 + 8);
      }
      for ( k = (__m128i *)((char *)v20 + 136 * v6); v5 != k; sub_9E5FA0((__int64)k[1].m128i_i64) )
        k = (__m128i *)((char *)k - 136);
      *(_DWORD *)(a1 + 8) = v8;
      v22 = *(const __m128i **)a2;
      v23 = *(_QWORD *)a2 + 136LL * *(unsigned int *)(a2 + 8);
      if ( *(_QWORD *)a2 == v23 )
        goto LABEL_12;
      do
      {
        v23 -= 136;
        sub_9E5FA0(v23 + 16);
      }
      while ( v22 != (const __m128i *)v23 );
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v19 = (__m128i *)((char *)v5 + 136 * v6);
      if ( v5 != v19 )
      {
        do
        {
          v19 = (__m128i *)((char *)v19 - 136);
          sub_9E5FA0((__int64)v19[1].m128i_i64);
        }
        while ( v5 != v19 );
        v19 = *(__m128i **)a1;
      }
      if ( v19 != (__m128i *)(a1 + 16) )
        free(v19);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}

