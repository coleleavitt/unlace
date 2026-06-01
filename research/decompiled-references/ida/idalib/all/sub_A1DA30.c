__int64 __fastcall sub_A1DA30(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r15
  __m128i *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int8 *v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  char v12; // al
  char v13; // dl
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // dl
  __m128i *v19; // r13
  __m128i *v21; // rax
  __m128i *v22; // r13
  __m128i *v23; // rdi
  __int8 v24; // al
  bool v25; // zf
  __int8 v26; // al
  __int8 v27; // al
  __int8 v28; // al
  __int8 v29; // al
  char v30; // cl
  __m128i *j; // r13
  unsigned __int64 k; // rbx
  __m128i *i; // r13
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbx
  __int8 v36; // al
  __int8 v37; // al
  __int8 v38; // al
  __int8 v39; // al
  unsigned __int64 v40; // r14
  __m128i *v41; // rdi
  __int8 v42; // al
  __int8 v43; // al
  __int8 v44; // al
  __int8 v45; // al
  __int8 v46; // al
  char v47; // si
  __int8 v48; // al
  __int8 v49; // al
  __int8 v50; // al
  __int8 v51; // al
  unsigned int v52; // [rsp+4h] [rbp-44h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *a2;
    v5 = *(__m128i **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 2 == (__int64 *)*a2 )
    {
      v52 = *((_DWORD *)a2 + 2);
      v7 = v52;
      if ( v52 <= v6 )
      {
        v21 = *(__m128i **)a1;
        if ( v52 )
        {
          v22 = (__m128i *)((char *)v5 + 328 * v52);
          do
          {
            *v5 = _mm_loadu_si128((const __m128i *)v3);
            sub_A1D050((__int64)v5[1].m128i_i64, v3 + 16);
            v23 = (__m128i *)((char *)v5 + 200);
            v24 = *(_BYTE *)(v3 + 192) & 1 | v5[12].m128i_i8[0] & 0xFE;
            v5[12].m128i_i8[0] = v24;
            v25 = v5[20].m128i_i8[0] == 0;
            v5[12].m128i_i8[0] = *(_BYTE *)(v3 + 192) & 2 | v24 & 0xFD;
            if ( v25 )
            {
              if ( *(_BYTE *)(v3 + 320) )
              {
                sub_A0A1C0(v23, (const __m128i *)(v3 + 200));
                v26 = *(_BYTE *)(v3 + 312) & 1 | v5[19].m128i_i8[8] & 0xFE;
                v5[19].m128i_i8[8] = v26;
                v27 = *(_BYTE *)(v3 + 312) & 2 | v26 & 0xFD;
                v5[19].m128i_i8[8] = v27;
                v28 = *(_BYTE *)(v3 + 312) & 4 | v27 & 0xFB;
                v5[19].m128i_i8[8] = v28;
                v29 = *(_BYTE *)(v3 + 312) & 8 | v28 & 0xF7;
                v5[19].m128i_i8[8] = v29;
                v30 = *(_BYTE *)(v3 + 312);
                v5[20].m128i_i8[0] = 1;
                v5[19].m128i_i8[8] = v30 & 0x70 | v29 & 0x8F;
              }
            }
            else if ( *(_BYTE *)(v3 + 320) )
            {
              sub_A0B090((__int64)v23, v3 + 200);
              v36 = *(_BYTE *)(v3 + 312) & 1 | v5[19].m128i_i8[8] & 0xFE;
              v5[19].m128i_i8[8] = v36;
              v37 = *(_BYTE *)(v3 + 312) & 2 | v36 & 0xFD;
              v5[19].m128i_i8[8] = v37;
              v38 = *(_BYTE *)(v3 + 312) & 4 | v37 & 0xFB;
              v5[19].m128i_i8[8] = v38;
              v39 = *(_BYTE *)(v3 + 312) & 8 | v38 & 0xF7;
              v5[19].m128i_i8[8] = v39;
              v5[19].m128i_i8[8] = *(_BYTE *)(v3 + 312) & 0x70 | v39 & 0x8F;
            }
            else
            {
              v5[20].m128i_i8[0] = 0;
              sub_A09CE0((__int64)v23);
            }
            v5 = (__m128i *)((char *)v5 + 328);
            v3 += 328LL;
          }
          while ( v5 != v22 );
          v21 = *(__m128i **)a1;
          v6 = *(unsigned int *)(a1 + 8);
        }
        for ( i = (__m128i *)((char *)v21 + 328 * v6); v5 != i; sub_A09D30((__int64)i[1].m128i_i64) )
        {
          while ( 1 )
          {
            i = (__m128i *)((char *)i - 328);
            if ( i[20].m128i_i8[0] )
              break;
            sub_A09D30((__int64)i[1].m128i_i64);
            if ( v5 == i )
              goto LABEL_46;
          }
          sub_A09CE0((__int64)&i[12].m128i_i64[1]);
        }
LABEL_46:
        v34 = *a2;
        *(_DWORD *)(a1 + 8) = v52;
        v35 = v34 + 328LL * *((unsigned int *)a2 + 2);
        if ( v34 != v35 )
        {
          while ( 1 )
          {
            v35 -= 328LL;
            if ( !*(_BYTE *)(v35 + 320) )
              break;
LABEL_50:
            sub_A09CE0(v35 + 200);
            sub_A09D30(v35 + 16);
            if ( v34 == v35 )
              goto LABEL_39;
          }
          while ( 1 )
          {
            sub_A09D30(v35 + 16);
            if ( v34 == v35 )
              break;
            v35 -= 328LL;
            if ( *(_BYTE *)(v35 + 320) )
              goto LABEL_50;
          }
        }
      }
      else
      {
        if ( v52 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          for ( j = (__m128i *)((char *)v5 + 328 * v6); j != v5; sub_A09D30((__int64)j[1].m128i_i64) )
          {
            while ( 1 )
            {
              j = (__m128i *)((char *)j - 328);
              if ( j[20].m128i_i8[0] )
                break;
              sub_A09D30((__int64)j[1].m128i_i64);
              if ( j == v5 )
                goto LABEL_32;
            }
            sub_A09CE0((__int64)&j[12].m128i_i64[1]);
          }
LABEL_32:
          *(_DWORD *)(a1 + 8) = 0;
          v6 = 0;
          sub_A162C0(a1, v52);
          v3 = *a2;
          v7 = *((unsigned int *)a2 + 2);
          v5 = *(__m128i **)a1;
          v8 = *a2;
        }
        else
        {
          v8 = *a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 328LL;
            v40 = v3 + v6;
            do
            {
              *v5 = _mm_loadu_si128((const __m128i *)v3);
              sub_A1D050((__int64)v5[1].m128i_i64, v3 + 16);
              v41 = (__m128i *)((char *)v5 + 200);
              v42 = *(_BYTE *)(v3 + 192) & 1 | v5[12].m128i_i8[0] & 0xFE;
              v5[12].m128i_i8[0] = v42;
              v25 = v5[20].m128i_i8[0] == 0;
              v5[12].m128i_i8[0] = *(_BYTE *)(v3 + 192) & 2 | v42 & 0xFD;
              if ( v25 )
              {
                if ( *(_BYTE *)(v3 + 320) )
                {
                  sub_A0A1C0(v41, (const __m128i *)(v3 + 200));
                  v43 = *(_BYTE *)(v3 + 312) & 1 | v5[19].m128i_i8[8] & 0xFE;
                  v5[19].m128i_i8[8] = v43;
                  v44 = *(_BYTE *)(v3 + 312) & 2 | v43 & 0xFD;
                  v5[19].m128i_i8[8] = v44;
                  v45 = *(_BYTE *)(v3 + 312) & 4 | v44 & 0xFB;
                  v5[19].m128i_i8[8] = v45;
                  v46 = *(_BYTE *)(v3 + 312) & 8 | v45 & 0xF7;
                  v5[19].m128i_i8[8] = v46;
                  v47 = *(_BYTE *)(v3 + 312);
                  v5[20].m128i_i8[0] = 1;
                  v5[19].m128i_i8[8] = v47 & 0x70 | v46 & 0x8F;
                }
              }
              else if ( *(_BYTE *)(v3 + 320) )
              {
                sub_A0B090((__int64)v41, v3 + 200);
                v48 = *(_BYTE *)(v3 + 312) & 1 | v5[19].m128i_i8[8] & 0xFE;
                v5[19].m128i_i8[8] = v48;
                v49 = *(_BYTE *)(v3 + 312) & 2 | v48 & 0xFD;
                v5[19].m128i_i8[8] = v49;
                v50 = *(_BYTE *)(v3 + 312) & 4 | v49 & 0xFB;
                v5[19].m128i_i8[8] = v50;
                v51 = *(_BYTE *)(v3 + 312) & 8 | v50 & 0xF7;
                v5[19].m128i_i8[8] = v51;
                v5[19].m128i_i8[8] = *(_BYTE *)(v3 + 312) & 0x70 | v51 & 0x8F;
              }
              else
              {
                v5[20].m128i_i8[0] = 0;
                sub_A09CE0((__int64)v41);
              }
              v3 += 328LL;
              v5 = (__m128i *)((char *)v5 + 328);
            }
            while ( v40 != v3 );
            v3 = *a2;
            v7 = *((unsigned int *)a2 + 2);
            v5 = *(__m128i **)a1;
            v8 = *a2 + v6;
          }
        }
        v9 = &v5->m128i_i8[v6];
        v10 = v3 + 328 * v7;
        if ( v10 != v8 )
        {
          v11 = v8;
          do
          {
            *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)v11);
            sub_A0A250((__int64)(v9 + 16), v11 + 16);
            v12 = *(_BYTE *)(v11 + 192) & 1 | v9[192] & 0xFE;
            v9[192] = v12;
            v13 = *(_BYTE *)(v11 + 192);
            v9[320] = 0;
            v9[192] = v13 & 2 | v12 & 0xFD;
            if ( *(_BYTE *)(v11 + 320) )
            {
              sub_A0A1C0((__m128i *)(v9 + 200), (const __m128i *)(v11 + 200));
              v14 = *(_BYTE *)(v11 + 312) & 1 | v9[312] & 0xFE;
              v9[312] = v14;
              v15 = *(_BYTE *)(v11 + 312) & 2 | v14 & 0xFD;
              v9[312] = v15;
              v16 = *(_BYTE *)(v11 + 312) & 4 | v15 & 0xFB;
              v9[312] = v16;
              v17 = *(_BYTE *)(v11 + 312) & 8 | v16 & 0xF7;
              v9[312] = v17;
              v18 = *(_BYTE *)(v11 + 312);
              v9[320] = 1;
              v9[312] = v18 & 0x70 | v17 & 0x8F;
            }
            v11 += 328LL;
            v9 += 328;
          }
          while ( v10 != v11 );
          v3 = *a2;
        }
        *(_DWORD *)(a1 + 8) = v52;
        for ( k = v3 + 328LL * *((unsigned int *)a2 + 2); k != v3; sub_A09D30(k + 16) )
        {
          while ( 1 )
          {
            k -= 328LL;
            if ( *(_BYTE *)(k + 320) )
              break;
            sub_A09D30(k + 16);
            if ( k == v3 )
              goto LABEL_39;
          }
          sub_A09CE0(k + 200);
        }
      }
LABEL_39:
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v19 = (__m128i *)((char *)v5 + 328 * v6);
      if ( v19 != v5 )
      {
        do
        {
          while ( 1 )
          {
            v19 = (__m128i *)((char *)v19 - 328);
            if ( v19[20].m128i_i8[0] )
              break;
            sub_A09D30((__int64)v19[1].m128i_i64);
            if ( v19 == v5 )
              goto LABEL_14;
          }
          sub_A09CE0((__int64)&v19[12].m128i_i64[1]);
          sub_A09D30((__int64)v19[1].m128i_i64);
        }
        while ( v19 != v5 );
LABEL_14:
        v5 = *(__m128i **)a1;
      }
      if ( v5 != (__m128i *)(a1 + 16) )
        free(v5);
      *(_QWORD *)a1 = *a2;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
      *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
      *a2 = (__int64)(a2 + 2);
      a2[1] = 0;
    }
  }
  return a1;
}
