_QWORD *__fastcall sub_10FCC90(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  const __m128i *v9; // r15
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r11
  const __m128i *v15; // r14
  _QWORD *j; // rdx
  const __m128i *v17; // r12
  const __m128i *v18; // rbp
  __int64 v19; // r15
  int v20; // ebx
  int v21; // eax
  const void *v22; // r8
  int v23; // r10d
  size_t v24; // r9
  unsigned int v25; // r11d
  bool v26; // al
  __m128i *v27; // rbx
  char *v28; // rsi
  __m128i *v29; // rax
  __int64 v30; // rdx
  _QWORD *i; // rdx
  int v32; // r8d
  __m128i *v33; // r9
  char v34; // al
  int v35; // eax
  bool v36; // al
  char v37; // al
  const __m128i *v38; // [rsp+8h] [rbp-80h]
  __m128i *v39; // [rsp+10h] [rbp-78h]
  int v40; // [rsp+10h] [rbp-78h]
  bool v41; // [rsp+1Ah] [rbp-6Eh]
  bool v42; // [rsp+1Bh] [rbp-6Dh]
  int v43; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v44; // [rsp+1Ch] [rbp-6Ch]
  int v45; // [rsp+20h] [rbp-68h]
  __m128i *v46; // [rsp+20h] [rbp-68h]
  const void *v47; // [rsp+20h] [rbp-68h]
  unsigned int v48; // [rsp+28h] [rbp-60h]
  int v49; // [rsp+28h] [rbp-60h]
  size_t v50; // [rsp+28h] [rbp-60h]
  size_t v51; // [rsp+30h] [rbp-58h]
  char *v52; // [rsp+30h] [rbp-58h]
  int v53; // [rsp+30h] [rbp-58h]
  const void *v54; // [rsp+38h] [rbp-50h]
  size_t v55; // [rsp+38h] [rbp-50h]
  unsigned int v56; // [rsp+38h] [rbp-50h]
  char *v57; // [rsp+40h] [rbp-48h]
  size_t v58; // [rsp+48h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(const __m128i **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( !v9 )
  {
    v30 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( i = &result[2 * v30]; i != result; *(result - 1) = 0 )
    {
      *result = -1;
      result += 2;
    }
    return result;
  }
  v12 = *(unsigned int *)(a1 + 16);
  v13 = 16 * v8;
  *(_QWORD *)(a1 + 8) = 0;
  v14 = v13;
  v15 = &v9[(unsigned __int64)v13 / 0x10];
  for ( j = &result[2 * v12]; j != result; *(result - 1) = 0 )
  {
    *result = -1;
    result += 2;
  }
  if ( v15 == v9 )
    return (_QWORD *)operator delete(v9, v14, 8);
  v17 = v9;
  v18 = v9;
  v19 = v13;
  while ( 2 )
  {
    if ( v17->m128i_i64[0] == -1 || v17->m128i_i64[0] == -2 )
      goto LABEL_8;
    v20 = *(_DWORD *)(a1 + 16);
    if ( !v20 )
    {
      *(__m128i *)&dword_0 = _mm_loadu_si128(v17);
      BUG();
    }
    v38 = *(const __m128i **)a1;
    v21 = sub_2248890(v17->m128i_i64[0], v17->m128i_i64[1]);
    v22 = (const void *)v17->m128i_i64[0];
    v23 = v20 - 1;
    v24 = v17->m128i_u64[1];
    v25 = (v20 - 1) & v21;
    v42 = v17->m128i_i64[0] == -2;
    v41 = v17->m128i_i64[0] == -1;
    if ( !v24 )
    {
      v32 = 1;
      v33 = nullptr;
      while ( 1 )
      {
        v27 = (__m128i *)&v38[v25];
        if ( v27->m128i_i64[0] == -1 )
          break;
        if ( v27->m128i_i64[0] == -2 )
        {
          v36 = v42;
LABEL_43:
          if ( v36 )
            goto LABEL_44;
          goto LABEL_31;
        }
        if ( !v27->m128i_i64[1] )
          goto LABEL_44;
LABEL_31:
        v49 = v32;
        v46 = v33;
        v44 = v25;
        v40 = v23;
        v52 = (char *)v27->m128i_i64[0];
        v55 = v27->m128i_u64[1];
        if ( sub_E39ED0((char *)v27->m128i_i64[0], v55, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        {
          v29 = v27;
          v27 = v46;
          goto LABEL_33;
        }
        v37 = sub_E39ED0(v52, v55, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v23 = v40;
        if ( v46 || !v37 )
          v27 = v46;
        v33 = v27;
        v32 = v49 + 1;
        v25 = v40 & (v49 + v44);
      }
      v36 = v41;
      goto LABEL_43;
    }
    v43 = 1;
    v39 = nullptr;
    while ( 1 )
    {
      v26 = v41;
      v27 = (__m128i *)&v38[v25];
      v28 = (char *)v27->m128i_i64[0];
      if ( v27->m128i_i64[0] != -1 )
      {
        if ( v28 == (char *)-2LL )
        {
          v26 = v42;
        }
        else
        {
          if ( v27->m128i_i64[1] != v24 )
            goto LABEL_17;
          v56 = v25;
          v53 = v23;
          v50 = v24;
          v47 = v22;
          v35 = memcmp(v22, v28, v24);
          v22 = v47;
          v24 = v50;
          v23 = v53;
          v25 = v56;
          v26 = v35 == 0;
        }
      }
      if ( v26 )
        goto LABEL_44;
LABEL_17:
      v54 = v22;
      v51 = v24;
      v48 = v25;
      v45 = v23;
      v57 = (char *)v27->m128i_i64[0];
      v58 = v27->m128i_u64[1];
      if ( sub_E39ED0((char *)v27->m128i_i64[0], v58, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        break;
      v34 = sub_E39ED0(v57, v58, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v23 = v45;
      v24 = v51;
      v22 = v54;
      if ( !v39 )
      {
        if ( !v34 )
          v27 = nullptr;
        v39 = v27;
      }
      v25 = v45 & (v43 + v48);
      ++v43;
    }
    v29 = v27;
    v27 = v39;
LABEL_33:
    if ( !v27 )
      v27 = v29;
LABEL_44:
    *v27 = _mm_loadu_si128(v17);
    ++*(_DWORD *)(a1 + 8);
LABEL_8:
    if ( v15 != ++v17 )
      continue;
    break;
  }
  v14 = v19;
  v9 = v18;
  return (_QWORD *)operator delete(v9, v14, 8);
}
