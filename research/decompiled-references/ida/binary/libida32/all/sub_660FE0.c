unsigned __int64 __fastcall sub_660FE0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r12
  __int8 v5; // r13
  __int64 i; // rax
  __int32 v7; // eax
  int v8; // edx
  __int8 v9; // cl
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  char v18; // dl
  __int16 v19; // ax
  unsigned int v20; // eax
  __int32 v21; // eax
  __int32 v22; // eax
  unsigned __int64 v23; // rsi
  __int16 v24; // ax
  unsigned __int64 v25; // rsi
  _BYTE *v26; // rdx
  __int8 v27; // cl
  _BYTE *v28; // rax
  __int8 v29; // cl
  __int8 v30; // cl
  __int8 v31; // cl
  __int8 v32; // dl
  __m128i *v33; // rbx
  int v34; // eax
  _BYTE *v35; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+8h] [rbp-A0h]
  __m128i v37; // [rsp+10h] [rbp-98h]
  __m128i v38; // [rsp+20h] [rbp-88h] BYREF
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  __m128i v40; // [rsp+40h] [rbp-68h] BYREF
  __m128i v41; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v42[19]; // [rsp+60h] [rbp-48h]
  unsigned __int64 v43; // [rsp+78h] [rbp-30h]

  v3 = dword_2CA24C8;
  v43 = __readfsqword(0x28u);
  if ( (dword_2CA24C8 & 0x4000) != 0 )
  {
    if ( (dword_2CA24C8 & 0x80u) != 0 )
    {
      v5 = *(_BYTE *)(a2 + 36);
      *(_BYTE *)(a2 + 40) = v5;
      memmove((void *)(a2 + 28), (const void *)(a2 + 24), 0xCu);
      v18 = *(_BYTE *)(a2 + 21);
      *(_WORD *)(a2 + 26) = *(_WORD *)(a2 + 22);
      v19 = (v18 & 0x10) != 0;
      if ( (v18 & 8) != 0 )
        v19 |= 2u;
      *(_WORD *)(a2 + 24) = v19;
      v20 = *(unsigned __int8 *)(a2 + 20);
      *(_BYTE *)(a2 + 20) &= 7u;
      *(_BYTE *)(a2 + 22) = 0;
      *(_BYTE *)(a2 + 23) = v20 >> 7;
      *(_BYTE *)(a2 + 21) = ((unsigned __int8)v20 >> 3) & 7;
      if ( (v3 & 1) != 0 )
      {
        *(_BYTE *)(a2 + 40) = 0;
        v5 = 0;
      }
    }
    else
    {
      v5 = *(_BYTE *)(a2 + 40);
    }
    *(_BYTE *)(a2 + 94) = v5;
    for ( i = 0; i != -12; i -= 2 )
      *(_DWORD *)(a2 + 2 * i + 50) = *(unsigned __int16 *)(a2 + i + 38);
    v7 = *(unsigned __int16 *)(a2 + 26);
    *(_QWORD *)(a2 + 86) = -1;
    *(_OWORD *)(a2 + 54) = -1;
    v8 = *(_DWORD *)(a2 + 95);
    v9 = *(_BYTE *)(a2 + 20);
    *(_OWORD *)(a2 + 70) = -1;
    v10 = _mm_loadu_si128((const __m128i *)a2);
    v11 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 26) = v7;
    v37 = v10;
    v38 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v39 = _mm_loadu_si128((const __m128i *)(a2 + 32));
    v40 = _mm_loadu_si128((const __m128i *)(a2 + 48));
    v41 = _mm_loadu_si128((const __m128i *)(a2 + 64));
    *(__m128i *)v42 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    v12 = _mm_loadu_si128((const __m128i *)a2);
    *(_DWORD *)&v42[15] = v8;
    LOWORD(v8) = *(_WORD *)(a2 + 24);
    *a1 = v12;
    v13 = _mm_loadu_si128((const __m128i *)((char *)&v38.m128i_u64[1] + 6));
    a1[1].m128i_i64[0] = v11;
    a1[2] = v13;
    v14 = _mm_loadu_si128((const __m128i *)((char *)&v39.m128i_u64[1] + 6));
    a1[1].m128i_i16[4] = v8;
    a1[3] = v14;
    v15 = _mm_loadu_si128((const __m128i *)((char *)&v40.m128i_u64[1] + 6));
    a1[1].m128i_i32[3] = v7;
    a1[4] = v15;
    v16 = _mm_loadu_si128((const __m128i *)((char *)&v41.m128i_u64[1] + 6));
    a1[6].m128i_i8[0] = v5;
    a1[6].m128i_i32[1] = -1;
    a1[5] = v16;
    goto LABEL_7;
  }
  v36 = a3;
  v35 = (_BYTE *)a2;
  v21 = unpack_dd(&v35);
  a1->m128i_i32[0] = v21;
  a1->m128i_i32[1] = unpack_dd(&v35) + v21;
  a1->m128i_i32[2] = unpack_dd(&v35);
  a1->m128i_i32[3] = unpack_dd(&v35);
  v22 = unpack_dd(&v35);
  v23 = v36;
  a1[1].m128i_i32[0] = v22;
  v24 = unpack_dw(&v35, v23);
  v25 = v36;
  v26 = v35;
  a1[1].m128i_i16[4] = v24;
  if ( (unsigned __int64)v26 >= v25 )
  {
    a1[1].m128i_i16[2] = 0;
    v28 = v26;
    goto LABEL_29;
  }
  v27 = *v26;
  v28 = v26 + 1;
  v35 = v26 + 1;
  a1[1].m128i_i8[4] = v27;
  if ( (unsigned __int64)(v26 + 1) >= v25 )
  {
    a1[1].m128i_i8[5] = 0;
    goto LABEL_29;
  }
  v29 = v26[1];
  v28 = v26 + 2;
  v35 = v26 + 2;
  a1[1].m128i_i8[5] = v29;
  if ( (unsigned __int64)(v26 + 2) >= v25 )
  {
LABEL_29:
    a1[1].m128i_i8[6] = 0;
    goto LABEL_30;
  }
  v30 = v26[2];
  v28 = v26 + 3;
  v35 = v26 + 3;
  a1[1].m128i_i8[6] = v30;
  if ( (unsigned __int64)(v26 + 3) < v25 )
  {
    v31 = v26[3];
    v28 = v26 + 4;
    v35 = v26 + 4;
    a1[1].m128i_i8[7] = v31;
    if ( (unsigned __int64)(v26 + 4) >= v25 )
    {
      v32 = 0;
    }
    else
    {
      v28 = v26 + 5;
      v32 = v26[4];
    }
    goto LABEL_31;
  }
LABEL_30:
  a1[1].m128i_i8[7] = 0;
  v32 = 0;
LABEL_31:
  a1[6].m128i_i8[0] = v32;
  v33 = a1 + 2;
  v35 = v28;
  a1[1].m128i_i32[3] = unpack_dd(&v35);
  do
  {
    v33 = (__m128i *)((char *)v33 + 4);
    v33[-1].m128i_i32[3] = unpack_dd(&v35) - 1;
  }
  while ( v33 != &a1[6] );
  v34 = -1;
  if ( (dword_2CA24C8 & 0x8000) == 0 )
    v34 = unpack_dd(&v35) - 1;
  a1[6].m128i_i32[1] = v34;
  v9 = a1[1].m128i_i8[4];
LABEL_7:
  if ( (unsigned __int8)v9 > 0xEu )
    sub_365330();
  if ( a1[1].m128i_i8[5] > 7u )
    sub_365330();
  if ( a1[1].m128i_i8[6] > 7u )
    sub_365330();
  if ( a1[1].m128i_i8[7] > 2u )
    sub_365330();
  if ( a1[6].m128i_i8[0] > 0xCu )
    sub_365330();
  return v43 - __readfsqword(0x28u);
}

