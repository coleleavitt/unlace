__int64 __fastcall sub_A16BE0(__int64 a1, __int64 a2)
{
  const __m128i *v3; // r15
  __m128i *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  int v8; // r14d
  const __m128i *v9; // rax
  __m128i *v10; // rbx
  const __m128i *v11; // r13
  const __m128i *v12; // r15
  const __m128i *v13; // r13
  __m128i v14; // xmm0
  __m128i *v15; // rdi
  const __m128i *v16; // rsi
  const __m128i *j; // rbx
  unsigned __int64 v19; // rdx
  __m128i *v20; // r13
  __m128i *v21; // rax
  __m128i *v22; // r13
  __int8 v23; // al
  __int8 v24; // al
  __int8 v25; // al
  __int8 v26; // dl
  __int8 v27; // al
  __m128i *v28; // rsi
  __int64 v29; // rdi
  __int8 v30; // al
  __m128i *k; // r13
  const __m128i *v32; // r13
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  __m128i *i; // r15
  const __m128i *v36; // r13
  __int8 v37; // al
  __int8 v38; // al
  __int8 v39; // al
  __int8 v40; // cl
  __int8 v41; // al
  __m128i *v42; // rsi
  __int64 m128i_i64; // rdi
  __int8 v44; // al
  unsigned __int64 v45; // [rsp+8h] [rbp-40h]

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
          v34 = v6 << 7;
          for ( i = (__m128i *)((char *)v5 + v34); i != v5; sub_A09CE0((__int64)i[1].m128i_i64) )
            i -= 8;
          *(_DWORD *)(a1 + 8) = 0;
          sub_A16940(a1, v7);
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
            v6 <<= 7;
            v36 = (const __m128i *)((char *)v3 + v6);
            do
            {
              v45 = v6;
              *v5 = _mm_loadu_si128(v3);
              sub_A0AAD0((__int64)v5[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
              v37 = v3[3].m128i_i8[0] & 1 | v5[3].m128i_i8[0] & 0xFE;
              v5[3].m128i_i8[0] = v37;
              v38 = v3[3].m128i_i8[0] & 2 | v37 & 0xFD;
              v5[3].m128i_i8[0] = v38;
              v39 = v3[3].m128i_i8[0] & 4 | v38 & 0xFB;
              v5[3].m128i_i8[0] = v39;
              v5[3].m128i_i8[0] = v3[3].m128i_i8[0] & 8 | v39 & 0xF7;
              sub_A0AAD0((__int64)&v5[3].m128i_i64[1], &v3[3].m128i_i64[1]);
              v40 = v3[5].m128i_i8[8];
              v41 = v5[5].m128i_i8[8];
              v42 = (__m128i *)&v3[6];
              m128i_i64 = (__int64)v5[6].m128i_i64;
              v3 += 8;
              v5 += 8;
              v44 = v40 & 1 | v41 & 0xFE;
              v5[-3].m128i_i8[8] = v44;
              v5[-3].m128i_i8[8] = v3[-3].m128i_i8[8] & 6 | v44 & 0xF9;
              sub_A0AAD0(m128i_i64, v42);
              v6 = v45;
            }
            while ( v3 != v36 );
            v3 = *(const __m128i **)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(__m128i **)a1;
            v9 = (const __m128i *)(*(_QWORD *)a2 + v45);
          }
        }
        v10 = (__m128i *)((char *)v5 + v6);
        v11 = &v3[8 * v7];
        if ( v11 != v9 )
        {
          v12 = v9 + 1;
          v13 = v11 + 1;
          do
          {
            v14 = _mm_loadu_si128(v12 - 1);
            v15 = v10 + 1;
            v16 = v12;
            v12 += 8;
            v10 += 8;
            v10[-8] = v14;
            sub_A0A1C0(v15, v16);
          }
          while ( v13 != v12 );
          v3 = *(const __m128i **)a2;
        }
        *(_DWORD *)(a1 + 8) = v8;
        for ( j = &v3[8 * (unsigned __int64)*(unsigned int *)(a2 + 8)]; j != v3; sub_A09CE0((__int64)j[1].m128i_i64) )
          j -= 8;
LABEL_12:
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
      v21 = *(__m128i **)a1;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v22 = &v5[8 * v7];
        do
        {
          *v5 = _mm_loadu_si128(v3);
          sub_A0AAD0((__int64)v5[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
          v23 = v3[3].m128i_i8[0] & 1 | v5[3].m128i_i8[0] & 0xFE;
          v5[3].m128i_i8[0] = v23;
          v24 = v3[3].m128i_i8[0] & 2 | v23 & 0xFD;
          v5[3].m128i_i8[0] = v24;
          v25 = v3[3].m128i_i8[0] & 4 | v24 & 0xFB;
          v5[3].m128i_i8[0] = v25;
          v5[3].m128i_i8[0] = v3[3].m128i_i8[0] & 8 | v25 & 0xF7;
          sub_A0AAD0((__int64)&v5[3].m128i_i64[1], &v3[3].m128i_i64[1]);
          v26 = v3[5].m128i_i8[8];
          v27 = v5[5].m128i_i8[8];
          v28 = (__m128i *)&v3[6];
          v29 = (__int64)v5[6].m128i_i64;
          v5 += 8;
          v3 += 8;
          v30 = v26 & 1 | v27 & 0xFE;
          v5[-3].m128i_i8[8] = v30;
          v5[-3].m128i_i8[8] = v3[-3].m128i_i8[8] & 6 | v30 & 0xF9;
          sub_A0AAD0(v29, v28);
        }
        while ( v5 != v22 );
        v21 = *(__m128i **)a1;
        v6 = *(unsigned int *)(a1 + 8);
      }
      for ( k = &v21[8 * v6]; v5 != k; sub_A09CE0((__int64)k[1].m128i_i64) )
        k -= 8;
      *(_DWORD *)(a1 + 8) = v8;
      v32 = *(const __m128i **)a2;
      v33 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 7);
      if ( *(_QWORD *)a2 == v33 )
        goto LABEL_12;
      do
      {
        v33 -= 128LL;
        sub_A09CE0(v33 + 16);
      }
      while ( v32 != (const __m128i *)v33 );
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v19 = v6 << 7;
      v20 = (__m128i *)((char *)v5 + v19);
      if ( &v5->m128i_i8[v19] != (__int8 *)v5 )
      {
        do
        {
          v20 -= 8;
          sub_A09CE0((__int64)v20[1].m128i_i64);
        }
        while ( v20 != v5 );
        v5 = *(__m128i **)a1;
      }
      if ( v5 != (__m128i *)(a1 + 16) )
        free(v5);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
