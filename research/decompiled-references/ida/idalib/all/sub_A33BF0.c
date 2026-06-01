__int64 __fastcall sub_A33BF0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __m128i *v4; // r14
  __m128i *v5; // rbx
  unsigned int *v6; // rsi
  __m128i v7; // xmm0
  __m128i *v8; // rbx
  unsigned __int32 v9; // r10d
  unsigned int v10; // r13d
  __m128i *v11; // rbp
  int v12; // edx
  unsigned int v13; // r14d
  char v14; // al
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // esi
  __m128i v18; // xmm0
  __int8 v19; // al
  __int8 v20; // al
  __int8 v21; // al
  __int8 v22; // al
  __int8 v23; // al
  __m128i *v24; // r13
  __m128i v25; // xmm3
  char v26; // al
  __m128i v27; // xmm0
  char v28; // al
  __m128i v29; // xmm5
  __int64 v30; // [rsp+0h] [rbp-F8h]
  unsigned int *v31; // [rsp+8h] [rbp-F0h]
  unsigned int v32; // [rsp+10h] [rbp-E8h]
  unsigned __int32 v33; // [rsp+1Ch] [rbp-DCh]
  __m128i *v34; // [rsp+20h] [rbp-D8h]
  const __m128i *v35; // [rsp+30h] [rbp-C8h]
  __int64 v36; // [rsp+38h] [rbp-C0h]
  __m128i v37[2]; // [rsp+40h] [rbp-B8h] BYREF
  char v38; // [rsp+60h] [rbp-98h]
  __int64 v39[4]; // [rsp+68h] [rbp-90h] BYREF
  char v40; // [rsp+88h] [rbp-70h]
  __int64 v41[4]; // [rsp+90h] [rbp-68h] BYREF
  char v42; // [rsp+B0h] [rbp-48h]

  result = (__int64)a2->m128i_i64 - a1;
  v30 = a3;
  if ( (__int64)a2->m128i_i64 - a1 <= 2176 )
    return result;
  v4 = a2;
  if ( !a3 )
  {
    v24 = a2;
    goto LABEL_22;
  }
  v31 = (unsigned int *)(a1 + 136);
  v35 = (const __m128i *)(a1 + 16);
  v36 = a1 + 152;
  do
  {
    --v30;
    v5 = (__m128i *)(a1 + 136 * ((__int64)(0xF0F0F0F0F0F0F0F1LL * (result >> 3)) >> 1));
    v6 = &v4[-9].m128i_u32[2];
    if ( !(unsigned __int8)sub_A09E20(v31, (unsigned int *)v5) )
    {
      if ( (unsigned __int8)sub_A09E20(v31, v6) )
      {
        v25 = _mm_loadu_si128((const __m128i *)(a1 + 136));
        *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)a1 = v25;
        sub_A33B50(v35, v36);
        goto LABEL_7;
      }
      v28 = sub_A09E20((unsigned int *)v5, &v4[-9].m128i_u32[2]);
      v27 = _mm_loadu_si128((const __m128i *)a1);
      if ( !v28 )
      {
        *(__m128i *)a1 = _mm_loadu_si128(v5);
        *v5 = v27;
        sub_A33B50(v35, (__int64)v5[1].m128i_i64);
        goto LABEL_7;
      }
LABEL_28:
      *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v4 - 136));
      *(__m128i *)((char *)v4 - 136) = v27;
      sub_A33B50(v35, (__int64)&v4[-8].m128i_i64[1]);
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)v5, v6) )
    {
      v26 = sub_A09E20(v31, &v4[-9].m128i_u32[2]);
      v27 = _mm_loadu_si128((const __m128i *)a1);
      if ( !v26 )
      {
        v29 = _mm_loadu_si128((const __m128i *)(a1 + 136));
        *(__m128i *)(a1 + 136) = v27;
        *(__m128i *)a1 = v29;
        sub_A33B50(v35, v36);
        goto LABEL_7;
      }
      goto LABEL_28;
    }
    v7 = _mm_loadu_si128((const __m128i *)a1);
    *(__m128i *)a1 = _mm_loadu_si128(v5);
    *v5 = v7;
    sub_A33B50(v35, (__int64)v5[1].m128i_i64);
LABEL_7:
    v8 = v4;
    v34 = v4;
    v9 = *(_DWORD *)a1;
    v10 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
    v11 = (__m128i *)(a1 + 136);
    v12 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
    v13 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
    while ( 1 )
    {
      v33 = v9;
      v32 = v12;
      v14 = sub_A09E20((unsigned int *)v11, (unsigned int *)a1);
      v12 = v32;
      v9 = v33;
      if ( v14 )
        goto LABEL_8;
      do
      {
        do
          v8 = (__m128i *)((char *)v8 - 136);
        while ( v8->m128i_i32[0] > v33 );
        v15 = v8->m128i_i32[3] & 0x7FFFFFFF;
        v16 = v8->m128i_i32[2] & 0x7FFFFFFF;
        v17 = v8->m128i_i32[1] & 0x7FFFFFFF;
      }
      while ( v8->m128i_i32[0] == v33
           && (v17 > v32 || v17 == v32 && (v16 > v10 || (unsigned int)v15 > v13 && v16 == v10)) );
      if ( v11 >= v8 )
        break;
      v18 = _mm_loadu_si128(v11);
      *v11 = _mm_loadu_si128(v8);
      *v8 = v18;
      sub_A0A1C0(v37, v11 + 1);
      v42 = v11[8].m128i_i8[0] & 3 | v42 & 0xFC;
      sub_A0AAD0((__int64)v11[1].m128i_i64, (__m128i *)v8[1].m128i_i64);
      v19 = v8[3].m128i_i8[0] & 1 | v11[3].m128i_i8[0] & 0xFE;
      v11[3].m128i_i8[0] = v19;
      v20 = v8[3].m128i_i8[0] & 2 | v19 & 0xFD;
      v11[3].m128i_i8[0] = v20;
      v21 = v8[3].m128i_i8[0] & 4 | v20 & 0xFB;
      v11[3].m128i_i8[0] = v21;
      v11[3].m128i_i8[0] = v8[3].m128i_i8[0] & 8 | v21 & 0xF7;
      sub_A0AAD0((__int64)&v11[3].m128i_i64[1], &v8[3].m128i_i64[1]);
      v22 = v8[5].m128i_i8[8] & 1 | v11[5].m128i_i8[8] & 0xFE;
      v11[5].m128i_i8[8] = v22;
      v11[5].m128i_i8[8] = v8[5].m128i_i8[8] & 6 | v22 & 0xF9;
      sub_A0AAD0((__int64)v11[6].m128i_i64, (__m128i *)v8[6].m128i_i64);
      v23 = v8[8].m128i_i8[0] & 1 | v11[8].m128i_i8[0] & 0xFE;
      v11[8].m128i_i8[0] = v23;
      v11[8].m128i_i8[0] = v8[8].m128i_i8[0] & 2 | v23 & 0xFD;
      sub_A0AAD0((__int64)v8[1].m128i_i64, v37);
      v8[3].m128i_i8[0] = v38 & 0xF | v8[3].m128i_i8[0] & 0xF0;
      sub_A0AAD0((__int64)&v8[3].m128i_i64[1], v39);
      v8[5].m128i_i8[8] = v40 & 7 | v8[5].m128i_i8[8] & 0xF8;
      sub_A0AAD0((__int64)v8[6].m128i_i64, v41);
      v8[8].m128i_i8[0] = v42 & 3 | v8[8].m128i_i8[0] & 0xFC;
      sub_A09CE0((__int64)v37);
      v9 = *(_DWORD *)a1;
      v13 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
      v10 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
      v12 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
LABEL_8:
      v11 = (__m128i *)((char *)v11 + 136);
    }
    sub_A33BF0(v11, v34, v30, v15);
    result = (__int64)v11->m128i_i64 - a1;
    if ( (__int64)v11->m128i_i64 - a1 <= 2176 )
      return result;
    v4 = v11;
  }
  while ( v30 );
  v24 = v11;
LABEL_22:
  sub_A2AA60(a1, (__int64)v24);
  do
  {
    v24 = (__m128i *)((char *)v24 - 136);
    sub_A2ABA0((const __m128i *)a1, (__int64)v24, v24);
    result = (__int64)v24->m128i_i64 - a1;
  }
  while ( (__int64)v24->m128i_i64 - a1 > 136 );
  return result;
}
