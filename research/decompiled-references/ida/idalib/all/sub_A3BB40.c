void __fastcall sub_A3BB40(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rbp
  __m128i *v4; // r13
  __int64 v5; // r14
  __int64 v6; // r14
  __m128i *v7; // rbp
  unsigned int *v8; // rsi
  __m128i v9; // xmm0
  __m128i *v10; // rbp
  unsigned __int32 v11; // r10d
  __m128i *v12; // r15
  int v13; // edx
  unsigned int v14; // r13d
  unsigned int v15; // r14d
  char v16; // al
  __int64 v17; // rcx
  unsigned int v18; // esi
  __m128i v19; // xmm0
  __int8 v20; // al
  __int8 v21; // al
  __int8 v22; // al
  __int64 v23; // r13
  const __m128i *v24; // rsi
  const __m128i *v25; // r15
  __m128i v26; // xmm5
  __int64 v27; // rsi
  __m128i *v28; // rbp
  __m128i v29; // xmm0
  char v30; // al
  __m128i v31; // xmm0
  char v32; // al
  __m128i v33; // xmm6
  unsigned int *v34; // [rsp+0h] [rbp-138h]
  __int64 v35; // [rsp+0h] [rbp-138h]
  unsigned int v36; // [rsp+8h] [rbp-130h]
  unsigned __int32 v37; // [rsp+14h] [rbp-124h]
  __m128i *v38; // [rsp+18h] [rbp-120h]
  __int64 v39; // [rsp+20h] [rbp-118h]
  __int64 v40; // [rsp+28h] [rbp-110h]
  __m128i *v41; // [rsp+30h] [rbp-108h]
  __int64 v42; // [rsp+38h] [rbp-100h]
  __m128i v43; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v44[80]; // [rsp+50h] [rbp-E8h] BYREF
  void *v45[2]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v46[24]; // [rsp+B0h] [rbp-88h] BYREF
  void *v47; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-60h] BYREF

  v3 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 1408 )
  {
    v4 = a2;
    v5 = a3;
    if ( !a3 )
    {
      v41 = a2;
      v40 = a1 + 16;
      goto LABEL_25;
    }
    v34 = (unsigned int *)(a1 + 88);
    v40 = a1 + 16;
    v42 = a1 + 104;
    while ( 1 )
    {
      v6 = v5 - 1;
      v7 = (__m128i *)(a1 + 88 * ((0x2E8BA2E8BA2E8BA3LL * (v3 >> 3)) >> 1));
      v8 = &v4[-6].m128i_u32[2];
      if ( (unsigned __int8)sub_A09E20(v34, (unsigned int *)v7) )
      {
        if ( !(unsigned __int8)sub_A09E20((unsigned int *)v7, v8) )
        {
          v30 = sub_A09E20(v34, &v4[-6].m128i_u32[2]);
          v31 = _mm_loadu_si128((const __m128i *)a1);
          if ( !v30 )
          {
            v33 = _mm_loadu_si128((const __m128i *)(a1 + 88));
            *(__m128i *)(a1 + 88) = v31;
            *(__m128i *)a1 = v33;
            sub_A3BAF0(v40, v42);
            goto LABEL_7;
          }
LABEL_33:
          *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v4 - 88));
          *(__m128i *)((char *)v4 - 88) = v31;
          sub_A3BAF0(v40, (__int64)&v4[-5].m128i_i64[1]);
          goto LABEL_7;
        }
        v9 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)a1 = _mm_loadu_si128(v7);
        *v7 = v9;
        sub_A3BAF0(v40, (__int64)v7[1].m128i_i64);
      }
      else
      {
        if ( !(unsigned __int8)sub_A09E20(v34, v8) )
        {
          v32 = sub_A09E20((unsigned int *)v7, &v4[-6].m128i_u32[2]);
          v31 = _mm_loadu_si128((const __m128i *)a1);
          if ( !v32 )
          {
            *(__m128i *)a1 = _mm_loadu_si128(v7);
            *v7 = v31;
            sub_A3BAF0(v40, (__int64)v7[1].m128i_i64);
            goto LABEL_7;
          }
          goto LABEL_33;
        }
        v29 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        *(__m128i *)(a1 + 88) = v29;
        sub_A3BAF0(v40, v42);
      }
LABEL_7:
      v10 = v4;
      v38 = v4;
      v11 = *(_DWORD *)a1;
      v39 = v6;
      v12 = (__m128i *)(a1 + 88);
      v13 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
      v14 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
      v15 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
      while ( 1 )
      {
        v37 = v11;
        v36 = v13;
        v41 = v12;
        v16 = sub_A09E20((unsigned int *)v12, (unsigned int *)a1);
        v13 = v36;
        v11 = v37;
        if ( v16 )
          goto LABEL_8;
        do
        {
          do
            v10 = (__m128i *)((char *)v10 - 88);
          while ( v10->m128i_i32[0] > v37 );
          v17 = v10->m128i_i32[2] & 0x7FFFFFFF;
          v18 = v10->m128i_i32[1] & 0x7FFFFFFF;
        }
        while ( v10->m128i_i32[0] == v37
             && (v18 > v36
              || v18 == v36
              && ((unsigned int)v17 > v15 || (_DWORD)v17 == v15 && (v10->m128i_i32[3] & 0x7FFFFFFFu) > v14)) );
        if ( v12 >= v10 )
          break;
        v19 = _mm_loadu_si128(v12);
        *v12 = _mm_loadu_si128(v10);
        *v10 = v19;
        sub_A09F20((__int64)v45, (__int64)v12[1].m128i_i64);
        sub_A0AAD0((__int64)v12[1].m128i_i64, (__m128i *)v10[1].m128i_i64);
        v20 = v10[3].m128i_i8[0] & 1 | v12[3].m128i_i8[0] & 0xFE;
        v12[3].m128i_i8[0] = v20;
        v21 = v10[3].m128i_i8[0] & 2 | v20 & 0xFD;
        v12[3].m128i_i8[0] = v21;
        v22 = v10[3].m128i_i8[0] & 4 | v21 & 0xFB;
        v12[3].m128i_i8[0] = v22;
        v12[3].m128i_i8[0] = v10[3].m128i_i8[0] & 8 | v22 & 0xF7;
        sub_A0AAD0((__int64)&v12[3].m128i_i64[1], &v10[3].m128i_i64[1]);
        sub_A0AAD0((__int64)v10[1].m128i_i64, v45);
        v10[3].m128i_i8[0] = v46[16] & 0xF | v10[3].m128i_i8[0] & 0xF0;
        sub_A0AAD0((__int64)&v10[3].m128i_i64[1], &v47);
        if ( v47 != &v48 )
          operator delete(v47);
        if ( v45[0] != v46 )
          operator delete(v45[0]);
        v11 = *(_DWORD *)a1;
        v14 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
        v15 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
        v13 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
LABEL_8:
        v12 = (__m128i *)((char *)v12 + 88);
      }
      v5 = v39;
      v3 = (__int64)v12->m128i_i64 - a1;
      sub_A3BB40(v12, v38, v39, v17);
      if ( (__int64)v12->m128i_i64 - a1 <= 1408 )
        return;
      v4 = v12;
      if ( !v39 )
      {
LABEL_25:
        v35 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 3);
        v23 = (v35 - 2) >> 1;
        v24 = (const __m128i *)(a1 + 88 * v23);
        v43 = _mm_loadu_si128(v24);
        sub_A09F20((__int64)v44, (__int64)v24[1].m128i_i64);
        *(__m128i *)v45 = _mm_load_si128(&v43);
        sub_A09F20((__int64)v46, (__int64)v44);
        sub_A28190(a1, v23, v35, (const __m128i *)v45);
        sub_A09C30((__int64)v46);
        v25 = (const __m128i *)((char *)v24 - 72);
        do
        {
          --v23;
          sub_A09C30((__int64)v44);
          v26 = _mm_loadu_si128(v25 - 1);
          v27 = (__int64)v25;
          v25 = (const __m128i *)((char *)v25 - 88);
          v43 = v26;
          sub_A09F20((__int64)v44, v27);
          *(__m128i *)v45 = _mm_load_si128(&v43);
          sub_A09F20((__int64)v46, (__int64)v44);
          sub_A28190(a1, v23, v35, (const __m128i *)v45);
          sub_A09C30((__int64)v46);
        }
        while ( v23 );
        sub_A09C30((__int64)v44);
        v28 = v41;
        do
        {
          v28 = (__m128i *)((char *)v28 - 88);
          v43 = _mm_loadu_si128(v28);
          sub_A09F20((__int64)v44, (__int64)v28[1].m128i_i64);
          *v28 = _mm_loadu_si128((const __m128i *)a1);
          sub_A28120((__int64)v28[1].m128i_i64, v40);
          *(__m128i *)v45 = _mm_load_si128(&v43);
          sub_A09F20((__int64)v46, (__int64)v44);
          sub_A28190(a1, 0, 0x2E8BA2E8BA2E8BA3LL * (((__int64)v28->m128i_i64 - a1) >> 3), (const __m128i *)v45);
          sub_A09C30((__int64)v46);
          sub_A09C30((__int64)v44);
        }
        while ( (__int64)v28->m128i_i64 - a1 > 88 );
        return;
      }
    }
  }
}
