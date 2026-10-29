void __fastcall sub_1522A60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int16 v3; // di
  unsigned __int64 v5; // rsi
  int *v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i *v9; // rcx
  __int64 v10; // rax
  const __m128i *v11; // rax
  const __m128i *v12; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rax
  void *v16; // r10
  _DWORD *v17; // rdi
  unsigned int v18; // ebx
  int v19; // r15d
  int v20; // [rsp+0h] [rbp-238h] BYREF
  __int64 v21; // [rsp+4h] [rbp-234h]
  __int64 v22; // [rsp+Ch] [rbp-22Ch]
  unsigned __int8 *v23[10]; // [rsp+20h] [rbp-218h] BYREF
  void *src; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1C0h]
  _BYTE v26[440]; // [rsp+80h] [rbp-1B8h] BYREF

  v3 = 450;
  v5 = 16;
  v20 = HIDWORD(a3);
  v6 = (int *)v26;
  v25 = 0x1000000000LL;
  src = v26;
  v21 = 0;
  v22 = 0x1C200000000LL;
  v7 = 0;
LABEL_2:
  v8 = v7 + 1;
  v9 = (__m128i *)&v6[6 * v7];
  if ( (unsigned __int16)(v3 - 1) > 1u )
  {
    while ( 1 )
    {
      v11 = (const __m128i *)&v20;
      if ( v5 < v8 )
      {
        if ( v6 > &v20 || v9 <= (__m128i *)&v20 )
        {
          sub_2237220(&src, v26, v8, 24);
          v9 = (__m128i *)((char *)src + 24 * (unsigned int)v25);
          v11 = (const __m128i *)&v20;
        }
        else
        {
          sub_2237220(&src, v26, v8, 24);
          v11 = (const __m128i *)((char *)src + (char *)&v20 - (char *)v6);
          v9 = (__m128i *)((char *)src + 24 * (unsigned int)v25);
        }
      }
      *v9 = _mm_loadu_si128(v11);
      v10 = v11[1].m128i_i64[0];
      LODWORD(v25) = v25 + 1;
      v9[1].m128i_i64[0] = v10;
      sub_14634E0(a2, &v20);
      if ( WORD2(v22) == 450 )
        break;
      v6 = (int *)src;
      v5 = HIDWORD(v25);
      v8 = (unsigned int)v25 + 1LL;
      v9 = (__m128i *)((char *)src + 24 * (unsigned int)v25);
      if ( (unsigned __int16)(WORD2(v22) - 1) <= 1u )
        goto LABEL_11;
    }
    v19 = 1;
    sub_FC70B0((__int64)v23, a2[6], v20, 1533);
    sub_1520C80(v23, 0);
    sub_AEA040((__int64)v23);
    while ( 1 )
    {
      sub_14634E0(a2, &v20);
      if ( WORD2(v22) == 450 )
        break;
      if ( WORD2(v22) == 451 )
      {
        --v19;
LABEL_23:
        if ( !v19 )
        {
          sub_14634E0(a2, &v20);
          v3 = WORD2(v22);
          v7 = (unsigned int)v25;
          v6 = (int *)src;
          v5 = HIDWORD(v25);
          goto LABEL_2;
        }
      }
    }
    ++v19;
    goto LABEL_23;
  }
LABEL_11:
  v12 = (const __m128i *)&v20;
  v21 = 0;
  v22 = 0x1C300000000LL;
  if ( v5 < v8 )
  {
    if ( v6 > &v20 || v9 <= (__m128i *)&v20 )
    {
      v12 = (const __m128i *)&v20;
      sub_2237220(&src, v26, v8, 24);
      v9 = (__m128i *)((char *)src + 24 * (unsigned int)v25);
    }
    else
    {
      sub_2237220(&src, v26, v8, 24);
      v12 = (const __m128i *)((char *)src + (char *)&v20 - (char *)v6);
      v9 = (__m128i *)((char *)src + 24 * (unsigned int)v25);
    }
  }
  *v9 = _mm_loadu_si128(v12);
  v9[1].m128i_i64[0] = v12[1].m128i_i64[0];
  LODWORD(v25) = v25 + 1;
  v13 = (unsigned int)v25;
  v14 = 6LL * (unsigned int)v25;
  v15 = (_DWORD *)operator new[](v14 * 4);
  v16 = v15;
  v17 = &v15[v14];
  if ( v13 )
  {
    do
    {
      *v15 = 0;
      v15 += 6;
      *(v15 - 5) = 0;
      *((_QWORD *)v15 - 2) = 0;
      *((_WORD *)v15 - 4) = 0;
      *((_WORD *)v15 - 3) = 0;
    }
    while ( v15 != v17 );
  }
  v18 = v25;
  if ( 24LL * (unsigned int)v25 )
    v16 = memmove(v16, src, 24LL * (unsigned int)v25);
  sub_14368B0((__int64)a2, (char *)v16, v18, 0, 1u, 0);
  if ( src != v26 )
    free(src);
}
