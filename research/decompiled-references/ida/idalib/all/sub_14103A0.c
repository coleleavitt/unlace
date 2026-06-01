__m128i *__fastcall sub_14103A0(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v6; // rbx
  __m128i *v7; // r12
  __int8 *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __m128i *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  __m128i *v14; // r14
  const __m128i *v15; // r13
  __int64 v16; // rdx
  __m128i *v17; // r14
  const __m128i *v18; // r13
  __int64 v19; // rcx
  __m128i *i; // rbp
  __int64 v21; // rax
  __m128i *v22; // rdi
  __m128i *result; // rax
  __m128 v24; // xmm0
  __m128i *v25; // [rsp+0h] [rbp-58h]
  __int64 m128i_i64; // [rsp+8h] [rbp-50h] BYREF
  __m128i *v27; // [rsp+10h] [rbp-48h]
  __int8 *v28; // [rsp+18h] [rbp-40h]

  v6 = *(const __m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0x8E38E38E38E38E39LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v9 = 1;
    goto LABEL_29;
  }
  v9 = 0x1C71C71C71C71C72LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v10 = 0xFFFFFFFFFFFFFFFLL;
  if ( 0x8E38E38E38E38E39LL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4) > 0x1C71C71C71C71C72LL
                                                                              * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4)
    || v9 > 0x1C71C71C71C71C7LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_29:
    v10 = 9 * v9;
LABEL_3:
    v28 = v8;
    v11 = (__m128i *)operator new(v10 * 16);
    v8 = v28;
    v25 = v11;
    v27 = &v11[v10];
    m128i_i64 = (__int64)v11[9].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 144;
  v27 = nullptr;
  v25 = nullptr;
LABEL_4:
  v12 = (__int64)&v8[(_QWORD)v25];
  v13 = *(unsigned __int8 *)(a3 + 136);
  *(_BYTE *)(v12 + 136) = -1;
  if ( (_BYTE)v13 != 0xFF )
  {
    ((void (__fastcall *)(__int64, int *))funcs_141044C[v13])(v12, (int *)a3);
    *(_BYTE *)(v12 + 136) = *(_BYTE *)(a3 + 136);
  }
  if ( a2 != v7 )
  {
    v14 = v25;
    v15 = v7;
    do
    {
      v14[8].m128i_i8[8] = -1;
      v16 = v15[8].m128i_u8[8];
      if ( (_BYTE)v16 != 0xFF )
      {
        ((void (__fastcall *)(__m128i *, const __m128i *))funcs_1410492[v16])(v14, v15);
        v14[8].m128i_i8[8] = v15[8].m128i_i8[8];
      }
      v15 += 9;
      v14 += 9;
    }
    while ( a2 != v15 );
    m128i_i64 = (__int64)v25[9
                           * ((0xE38E38E38E38E39LL * ((unsigned __int64)((char *)&a2[-9] - (char *)v7) >> 4))
                            & 0xFFFFFFFFFFFFFFFLL)
                           + 18].m128i_i64;
  }
  v17 = (__m128i *)m128i_i64;
  v18 = a2;
  if ( a2 != v6 )
  {
    do
    {
      v19 = v18[8].m128i_u8[8];
      v17[8].m128i_i8[8] = -1;
      if ( (_BYTE)v19 != 0xFF )
      {
        ((void (__fastcall *)(__m128i *, const __m128i *))funcs_1410492[v19])(v17, v18);
        v17[8].m128i_i8[8] = v18[8].m128i_i8[8];
      }
      v18 += 9;
      v17 += 9;
    }
    while ( v18 != v6 );
    m128i_i64 += 16
               * (9
                * ((0xE38E38E38E38E39LL * ((unsigned __int64)((char *)v6 - (char *)a2 - 144) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
                + 9);
  }
  for ( i = v7; i != v6; i += 9 )
  {
    while ( 1 )
    {
      v21 = i[8].m128i_u8[8];
      if ( (_BYTE)v21 == 0xFF )
        break;
      v22 = i;
      i += 9;
      ((void (__fastcall *)(__m128i *))jpt_14100CB[v21])(v22);
      if ( v6 == i )
        goto LABEL_20;
    }
  }
LABEL_20:
  if ( v7 )
    operator delete(v7);
  result = v27;
  v24 = _mm_loadh_ps((const double *)&m128i_i64);
  *(_QWORD *)(a1 + 16) = v27;
  *(__m128 *)a1 = v24;
  return result;
}
