__int64 __fastcall sub_1BFBB10(__int64 a1, __m128 a2, __m128 a3)
{
  __int64 v4; // rax
  unsigned __int64 *v5; // r13
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __m128i v17; // xmm0
  unsigned __int64 *v18; // r14
  __int64 result; // rax
  unsigned __int64 *v20; // r13
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  _QWORD *v34; // rsi
  __int64 v35; // r8
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rsi
  int i; // esi
  int v45; // edi
  __int64 v46; // rsi
  unsigned __int64 v47; // [rsp+8h] [rbp-40h] BYREF
  __m128 v48; // [rsp+10h] [rbp-38h] BYREF

  v4 = **(_QWORD **)(a1 + 48);
  v5 = *(unsigned __int64 **)(v4 + 440);
  v6 = &v5[*(unsigned int *)(v4 + 448)];
  if ( v5 != v6 )
  {
    do
    {
      v7 = *v5;
      v8 = *(_QWORD *)(a1 + 56);
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(a1 + 16);
      ++v5;
      v11 = *(_QWORD *)a1;
      v12 = *(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
      v48.m128_u64[0] = v7;
      v48.m128_u64[1] = v12;
      sub_1BFAC00(v11, (__int64)&v48, v9, v10, v8, 0, a2, a3);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_QWORD *)(a1 + 16);
      v16 = *(_QWORD *)a1;
      v47 = v7;
      v17 = _mm_loadl_epi64((const __m128i *)&v47);
      a2 = (__m128)_mm_unpacklo_epi64(v17, v17);
      v48 = a2;
      sub_1BFAC00(v16, (__int64)&v48, v14, v15, v13, 0, a2, a3);
    }
    while ( v6 != v5 );
    v4 = **(_QWORD **)(a1 + 48);
  }
  v18 = *(unsigned __int64 **)(v4 + 1088);
  result = *(unsigned int *)(v4 + 1096);
  v20 = &v18[result];
  while ( v20 != v18 )
  {
    v21 = *v18;
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(_QWORD *)(a1 + 56);
    v24 = *(_QWORD *)(a1 + 16);
    v25 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(*(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
    v48.m128_u64[1] = *v18;
    v48.m128_u64[0] = v26;
    sub_1BFAC00(v25, (__int64)&v48, v22, v24, v23, 0, a2, a3);
    v27 = **(_QWORD **)(a1 + 48);
    if ( *(_DWORD *)(v27 + 424) )
    {
      v40 = *(_DWORD *)(v27 + 432);
      v41 = *(_QWORD *)(v27 + 416);
      if ( v40 )
      {
        v42 = v40 - 1;
        result = (v40 - 1) & ((unsigned int)v21 ^ (unsigned int)(v21 >> 9));
        v43 = *(_QWORD *)(v41 + 8 * result);
        if ( v21 == v43 )
          goto LABEL_23;
        if ( v43 )
        {
          for ( i = 1; ; i = v45 )
          {
            v45 = i + 1;
            result = v42 & (unsigned int)(i + result);
            v46 = *(_QWORD *)(v41 + 8LL * (unsigned int)result);
            if ( v21 == v46 )
              break;
            if ( !v46 )
              goto LABEL_22;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_22;
    }
    v28 = *(_QWORD **)(v27 + 440);
    v29 = 8LL * *(unsigned int *)(v27 + 448);
    v30 = &v28[(unsigned __int64)v29 / 8];
    v31 = v29 >> 3;
    v32 = v29 >> 5;
    if ( v32 )
    {
      if ( v21 == *v28 )
      {
        result = v28 != v30;
      }
      else if ( v21 == v28[1] )
      {
        result = v30 != v28 + 1;
      }
      else if ( v21 == v28[2] )
      {
        result = v30 != v28 + 2;
      }
      else
      {
        v33 = &v28[4 * v32];
        if ( v21 == v28[3] )
        {
          result = v30 != v28 + 3;
        }
        else
        {
          while ( 1 )
          {
            v34 = v28 + 4;
            if ( v28 + 4 == v33 )
            {
              v31 = v30 - v33;
              goto LABEL_19;
            }
            if ( v21 == v28[4] )
              goto LABEL_37;
            if ( v21 == v28[5] )
            {
              result = v30 != v28 + 5;
              goto LABEL_38;
            }
            if ( v21 == v28[6] )
            {
              result = v30 != v28 + 6;
              goto LABEL_38;
            }
            if ( v21 == v28[7] )
              break;
            v28 += 4;
          }
          result = v30 != v28 + 7;
        }
      }
LABEL_38:
      if ( result )
        goto LABEL_23;
      goto LABEL_22;
    }
    v34 = v28;
LABEL_19:
    if ( v31 != 2 )
    {
      if ( v31 != 3 )
      {
        if ( v31 != 1 )
          goto LABEL_22;
        goto LABEL_36;
      }
      if ( v21 == *v34 )
        goto LABEL_37;
      ++v34;
    }
    if ( v21 == *v34 )
      goto LABEL_37;
    ++v34;
LABEL_36:
    if ( v21 == *v34 )
    {
LABEL_37:
      result = v30 != v34;
      goto LABEL_38;
    }
LABEL_22:
    v47 = v21;
    v35 = *(_QWORD *)(a1 + 56);
    v36 = _mm_loadl_epi64((const __m128i *)&v47);
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(a1 + 16);
    v39 = *(_QWORD *)a1;
    a2 = (__m128)_mm_unpacklo_epi64(v36, v36);
    v48 = a2;
    result = sub_1BFAC00(v39, (__int64)&v48, v37, v38, v35, 0, a2, a3);
LABEL_23:
    ++v18;
  }
  return result;
}
