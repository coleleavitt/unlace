void __fastcall sub_1809FF0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  bool v7; // zf
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rax
  const __m128i *v18; // r14
  __int64 v19; // rbp
  __int64 i; // r15
  unsigned __int64 *v21; // rax
  __m128 *v22; // rsi
  __int32 v23; // ecx
  unsigned __int32 v24; // eax
  __int32 v25; // eax
  unsigned __int64 v26; // rcx
  __int32 v27; // edx
  __m128 *v28; // rax
  __m128i *v29; // rdi
  __int32 v30; // ecx
  unsigned int v31; // r9d
  __int32 v32; // eax
  unsigned __int64 v33; // rbp
  __int32 v34; // eax
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __m128i *v38; // rdx
  __m128i *v39; // rcx
  __m128i v40; // xmm0
  __int32 v41; // eax
  __m128i *v42; // rsi
  int v43; // esi
  int v44; // r8d
  __int64 v45; // r10
  __int64 v46; // rcx
  const void *v47; // rsi
  unsigned __int64 v48; // rax
  __int32 v49; // edx
  __int64 v50; // rax
  __int32 v51; // edx
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __m128 v54; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int32 v55; // [rsp+50h] [rbp-78h]
  __m128i v56; // [rsp+58h] [rbp-70h] BYREF
  __m128i *v57; // [rsp+68h] [rbp-60h] BYREF
  __int64 v58; // [rsp+70h] [rbp-58h]
  _BYTE v59[80]; // [rsp+78h] [rbp-50h] BYREF

  sub_160C330(a1);
  if ( !*(_DWORD *)(a1 + 2752) )
    return;
  v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 40) <= 6 )
  {
    v7 = (unsigned __int8)sub_B82160(a3) == 0;
    v8 = *(_BYTE *)(a3 + 28);
    if ( !v7 )
    {
      if ( (v8 & 0x7Fu) - 34 <= 5 )
        sub_B82220(a3);
      goto LABEL_7;
    }
    v6 = v8 & 0x7F;
  }
  if ( (unsigned int)(v6 - 34) > 5 || !(unsigned __int8)sub_B82220(a3) )
    return;
LABEL_7:
  if ( (*(_QWORD *)(a3 + 40) & 7) != 0 )
    return;
  v9 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    return;
  v10 = *(unsigned int *)(a1 + 2736);
  v11 = *(_QWORD *)(a1 + 2720);
  if ( !(_DWORD)v10 )
    goto LABEL_50;
  v12 = (v10 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v9 != *v13 )
  {
    v43 = 1;
    if ( v14 != -4096 )
    {
      do
      {
        v44 = v43 + 1;
        v12 = (v10 - 1) & (v43 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v45 = *v13;
        if ( v9 == *v13 )
          goto LABEL_11;
        v43 = v44;
      }
      while ( v45 != -4096 );
    }
LABEL_50:
    sub_1460B90(
      &v54,
      (_QWORD *)(v11 + 16LL * (unsigned int)v10),
      (_QWORD *)(v11 + 16LL * (unsigned int)v10),
      a1 + 2720,
      1);
    v15 = v54.m128_u64[0];
    goto LABEL_12;
  }
LABEL_11:
  sub_1460B90(&v54, v13, (_QWORD *)(16 * v10 + v11), a1 + 2720, 1);
  v15 = v54.m128_u64[0];
LABEL_12:
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 2720) + 16LL * *(unsigned int *)(a1 + 2736));
  sub_1460B90(&v54, v16, v16, a1 + 2720, 1);
  if ( v54.m128_u64[0] == v15 )
    return;
  v17 = *(_QWORD *)(a1 + 2744);
  v18 = (const __m128i *)(v17 + 80LL * *(unsigned int *)(v15 + 8));
  if ( v18 == (const __m128i *)(80LL * *(unsigned int *)(a1 + 2752) + v17) )
    return;
  v19 = v18[3].m128i_i64[0];
  for ( i = v19 + 16LL * v18[3].m128i_u32[2]; i != v19; v19 += 16 )
    sub_1806F90(a1, a2, a3, v19);
  v54.m128_u64[0] = 1;
  v21 = &v54.m128_u64[1];
  do
  {
    *v21 = -4096;
    v21 += 2;
    *((_DWORD *)v21 - 2) = 0;
  }
  while ( v21 != (unsigned __int64 *)&v57 );
  v22 = (__m128 *)&v18->m128i_u64[1];
  v23 = v54.m128_i32[1];
  v24 = (unsigned __int32)v54.m128_i32[0] >> 1;
  v57 = (__m128i *)v59;
  v58 = 0x100000000LL;
  v54.m128_i32[0] = v18->m128i_i32[2] & 0xFFFFFFFE | v54.m128_i8[0] & 1;
  v18->m128i_i32[2] = (2 * v24) | v18->m128i_i32[2] & 1;
  v25 = v18->m128i_i32[3];
  v18->m128i_i32[3] = v23;
  v54.m128_i32[1] = v25;
  if ( (v18->m128i_i8[8] & 1) != 0 )
  {
    if ( (v54.m128_i8[0] & 1) != 0 )
    {
      if ( v54.m128_u64[1] == -4096
        || v54.m128_u64[1] == -8192
        || (v48 = v18[1].m128i_u64[0], v48 == -8192)
        || v48 == -4096 )
      {
        v53 = _mm_loadu_si128(v18 + 1);
        v18[1].m128i_i64[0] = v54.m128_i64[1];
        v18[1].m128i_i32[2] = v55;
        v54.m128_u64[1] = v53.m128i_i64[0];
        v55 = v53.m128i_u32[2];
      }
      else
      {
        v49 = v18[1].m128i_i32[2];
        v18[1] = _mm_loadu_si128((const __m128i *)&v54.m128_u16[4]);
        v54.m128_u64[1] = v48;
        v55 = v49;
      }
      if ( v56.m128i_i64[0] == -4096
        || v56.m128i_i64[0] == -8192
        || (v50 = v18[2].m128i_i64[0], v50 == -8192)
        || v50 == -4096 )
      {
        v52 = _mm_loadu_si128(v18 + 2);
        v18[2].m128i_i64[0] = v56.m128i_i64[0];
        v18[2].m128i_i32[2] = v56.m128i_i32[2];
        v56.m128i_i64[0] = v52.m128i_i64[0];
        v56.m128i_i32[2] = v52.m128i_i32[2];
      }
      else
      {
        v51 = v18[2].m128i_i32[2];
        v18[2] = _mm_loadu_si128(&v56);
        v56.m128i_i64[0] = v50;
        v56.m128i_i32[2] = v51;
      }
      goto LABEL_21;
    }
    v28 = (__m128 *)&v18->m128i_u64[1];
    v26 = v54.m128_u64[1];
    v27 = v55;
    v22 = &v54;
  }
  else
  {
    v26 = v18[1].m128i_u64[0];
    v27 = v18[1].m128i_i32[2];
    v28 = &v54;
    if ( (v54.m128_i8[0] & 1) == 0 )
    {
      v18[1].m128i_i64[0] = v54.m128_i64[1];
      v54.m128_u64[1] = v26;
      v18[1].m128i_i32[2] = v55;
      v55 = v27;
      goto LABEL_21;
    }
  }
  v22->m128_i8[0] |= 1u;
  *(__m128i *)((char *)v22 + 8) = _mm_loadu_si128((const __m128i *)&v28->m128_u16[4]);
  *(__m128i *)((char *)&v22[1] + 8) = _mm_loadu_si128((const __m128i *)&v28[1].m128_u16[4]);
  v28->m128_i8[0] &= ~1u;
  v28->m128_u64[1] = v26;
  v28[1].m128_i32[0] = v27;
LABEL_21:
  v29 = v57;
  if ( &v18[3] != (const __m128i *)&v57 )
  {
    v29 = (__m128i *)v18[3].m128i_i64[0];
    v30 = v58;
    v31 = v18[3].m128i_u32[3];
    if ( v29 == &v18[4] || v57 == (__m128i *)v59 )
    {
      if ( v31 < (unsigned int)v58 )
        sub_2237220(&v18[3], &v18[4], (unsigned int)v58, 16);
      v33 = v18[3].m128i_u32[2];
      v34 = v33;
      if ( HIDWORD(v58) < (unsigned int)v33 )
      {
        sub_2237220(&v57, v59, v18[3].m128i_u32[2], 16);
        v33 = v18[3].m128i_u32[2];
        v34 = v18[3].m128i_i32[2];
      }
      v35 = (unsigned int)v58;
      v36 = v33;
      if ( (unsigned int)v58 <= v33 )
        v36 = (unsigned int)v58;
      if ( v36 )
      {
        v37 = 0;
        do
        {
          v38 = &v57[v37];
          v39 = (__m128i *)(v37 * 16 + v18[3].m128i_i64[0]);
          ++v37;
          v40 = _mm_loadu_si128(v39);
          v39->m128i_i64[0] = v38->m128i_i64[0];
          v39->m128i_i32[2] = v38->m128i_i32[2];
          v38->m128i_i64[0] = v40.m128i_i64[0];
          v38->m128i_i32[2] = v40.m128i_i32[2];
        }
        while ( v36 != v37 );
        v33 = v18[3].m128i_u32[2];
        v35 = (unsigned int)v58;
        v34 = v18[3].m128i_i32[2];
      }
      v29 = v57;
      if ( v33 > v35 )
      {
        v46 = v18[3].m128i_i64[0];
        v47 = (const void *)(v46 + 16 * v36);
        if ( v47 != (const void *)(16 * v33 + v46) )
        {
          memcpy(&v57[v35], v47, 16 * v33 - 16 * v36);
          v29 = v57;
          v34 = v33 + v58 - v35;
        }
        LODWORD(v58) = v34;
        v18[3].m128i_i32[2] = v36;
      }
      else if ( v33 < v35 )
      {
        v41 = v33;
        v42 = &v57[v36];
        if ( v42 != &v57[v35] )
        {
          memcpy((void *)(v18[3].m128i_i64[0] + 16 * v33), v42, 16 * v35 - 16 * v36);
          v41 = v18[3].m128i_i32[2];
          v29 = v57;
        }
        v18[3].m128i_i32[2] = v35 - v33 + v41;
        LODWORD(v58) = v36;
      }
    }
    else
    {
      v32 = v18[3].m128i_i32[2];
      v18[3].m128i_i64[0] = (__int64)v57;
      v57 = v29;
      v18[3].m128i_i32[2] = v30;
      LODWORD(v58) = v32;
      v18[3].m128i_i32[3] = HIDWORD(v58);
      HIDWORD(v58) = v31;
    }
  }
  if ( v29 != (__m128i *)v59 )
    free(v29);
  if ( (v54.m128_i8[0] & 1) == 0 )
    operator delete(v54.m128_u64[1], 16LL * v55, 8);
}
