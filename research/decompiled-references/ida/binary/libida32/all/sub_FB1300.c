unsigned __int64 __fastcall sub_FB1300(char **a1, __int64 a2, __int64 a3)
{
  char *v5; // r14
  char *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  const __m128i *v15; // rsi
  char *v16; // rdi
  __int64 v17; // rdx
  char v18; // al
  char v19; // al
  char v20; // al
  const __m128i *v21; // rax
  const __m128i *v22; // rax
  char *v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rsi
  const __m128i *v27; // rsi
  char *i; // r13
  char *v29; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = 0xCCCCCCCCCCCCCCCDLL * ((v5 - *a1) >> 3);
  v8 = a2 - (_QWORD)*a1;
  if ( !v7 )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x999999999999999ALL * ((a1[1] - *a1) >> 3);
  v10 = -16;
  if ( v7 > 2 * v7 || v9 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_30:
    v10 = 40 * v9;
LABEL_3:
    v33 = a3;
    v31 = v8;
    v11 = operator new(v10);
    a3 = v33;
    v12 = v11;
    v32 = v11 + v10;
    v13 = v11 + 40;
    goto LABEL_4;
  }
  v13 = 40;
  v12 = 0;
  v32 = 0;
LABEL_4:
  v14 = v12 + v8;
  *(_WORD *)v14 = *(_WORD *)a3 & 0x1FF | *(_WORD *)(v12 + v8) & 0xFE00;
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(a3 + 4);
  *(_QWORD *)(v14 + 8) = v12 + v8 + 24;
  sub_FAF060((_QWORD *)(v12 + v8 + 8), *(_BYTE **)(a3 + 8), *(_QWORD *)(a3 + 8) + *(_QWORD *)(a3 + 16));
  if ( (char *)a2 != v6 )
  {
    v15 = (const __m128i *)(v6 + 24);
    v16 = v6;
    v17 = v12;
    do
    {
      v18 = *v16 & 7 | *(_BYTE *)v17 & 0xF8;
      *(_BYTE *)v17 = v18;
      v19 = *v16 & 0x38 | v18 & 0xC7;
      *(_BYTE *)v17 = v19;
      v20 = *v16 & 0x40 | v19 & 0xBF;
      *(_BYTE *)v17 = v20;
      *(_BYTE *)v17 = *v16 & 0x80 | v20 & 0x7F;
      *(_BYTE *)(v17 + 1) = v16[1] & 1 | *(_BYTE *)(v17 + 1) & 0xFE;
      *(_DWORD *)(v17 + 4) = v15[-2].m128i_i32[3];
      *(_QWORD *)(v17 + 8) = v17 + 24;
      v21 = (const __m128i *)v15[-1].m128i_i64[0];
      if ( v21 == v15 )
      {
        *(__m128i *)(v17 + 24) = _mm_loadu_si128(v15);
      }
      else
      {
        *(_QWORD *)(v17 + 8) = v21;
        *(_QWORD *)(v17 + 24) = v15->m128i_i64[0];
      }
      v16 += 40;
      v17 += 40;
      *(_QWORD *)(v17 - 24) = v15[-1].m128i_i64[1];
      v15[-1].m128i_i64[0] = (__int64)v15;
      v15 = (const __m128i *)((char *)v15 + 40);
      v15[-3].m128i_i64[0] = 0;
      v15[-3].m128i_i8[8] = 0;
    }
    while ( (char *)a2 != v16 );
    v13 = v12 + 8 * ((unsigned __int64)(a2 - 40 - (_QWORD)v6) >> 3) + 80;
  }
  if ( (char *)a2 != v5 )
  {
    v22 = (const __m128i *)(a2 + 24);
    v23 = (char *)a2;
    v24 = v13;
    do
    {
      *(_WORD *)v24 = *(_WORD *)v23 & 0x1FF | *(_WORD *)v24 & 0xFE00;
      *(_DWORD *)(v24 + 4) = v22[-2].m128i_i32[3];
      *(_QWORD *)(v24 + 8) = v24 + 24;
      v27 = (const __m128i *)v22[-1].m128i_i64[0];
      if ( v27 == v22 )
      {
        v26 = v22[-1].m128i_i64[1];
        *(__m128i *)(v24 + 24) = _mm_loadu_si128(v22);
      }
      else
      {
        *(_QWORD *)(v24 + 8) = v27;
        v25 = v22->m128i_i64[0];
        v22[-1].m128i_i64[0] = (__int64)v22;
        *(_QWORD *)(v24 + 24) = v25;
        v26 = v22[-1].m128i_i64[1];
      }
      *(_QWORD *)(v24 + 16) = v26;
      v23 += 40;
      v22->m128i_i8[0] = 0;
      v24 += 40LL;
      v22 = (const __m128i *)((char *)v22 + 40);
      v22[-3].m128i_i64[0] = 0;
    }
    while ( v5 != v23 );
    v13 += 8 * ((unsigned __int64)&v5[-a2 - 40] >> 3) + 40;
  }
  for ( i = v6; i != v5; i += 40 )
  {
    while ( 1 )
    {
      v29 = *((char **)i + 1);
      if ( v29 == i + 24 )
        break;
      operator delete(v29);
      i += 40;
      if ( i == v5 )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v6 )
    operator delete(v6);
  v31 = v13;
  result = v32;
  a1[2] = (char *)v32;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
  return result;
}

