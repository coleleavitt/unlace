_QWORD *__fastcall sub_10D8F50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  const __m128i *v9; // r15
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  const __m128i *v13; // r14
  _QWORD *j; // rdx
  const __m128i *v15; // r12
  int v16; // ebx
  int v17; // eax
  const void *v18; // r8
  int v19; // r10d
  size_t v20; // r9
  unsigned int v21; // r11d
  bool v22; // al
  __m128i *v23; // rbx
  char *v24; // rsi
  __m128i *v25; // rax
  __int64 v26; // rdx
  _QWORD *i; // rdx
  int v28; // r8d
  __m128i *v29; // r9
  char v30; // al
  int v31; // eax
  bool v32; // al
  char v33; // al
  const __m128i *v34; // [rsp+8h] [rbp-80h]
  __m128i *v35; // [rsp+10h] [rbp-78h]
  int v36; // [rsp+10h] [rbp-78h]
  bool v37; // [rsp+1Ah] [rbp-6Eh]
  bool v38; // [rsp+1Bh] [rbp-6Dh]
  int v39; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v40; // [rsp+1Ch] [rbp-6Ch]
  int v41; // [rsp+20h] [rbp-68h]
  __m128i *v42; // [rsp+20h] [rbp-68h]
  const void *v43; // [rsp+20h] [rbp-68h]
  unsigned int v44; // [rsp+28h] [rbp-60h]
  int v45; // [rsp+28h] [rbp-60h]
  size_t v46; // [rsp+28h] [rbp-60h]
  size_t v47; // [rsp+30h] [rbp-58h]
  char *v48; // [rsp+30h] [rbp-58h]
  int v49; // [rsp+30h] [rbp-58h]
  const void *v50; // [rsp+38h] [rbp-50h]
  size_t v51; // [rsp+38h] [rbp-50h]
  unsigned int v52; // [rsp+38h] [rbp-50h]
  char *v53; // [rsp+40h] [rbp-48h]
  size_t v54; // [rsp+48h] [rbp-40h]

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
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( !v9 )
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( i = &result[2 * v26]; i != result; *(result - 1) = 0 )
    {
      *result = -1;
      result += 2;
    }
    return result;
  }
  v12 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  v13 = &v9[v8];
  for ( j = &result[2 * v12]; j != result; *(result - 1) = 0 )
  {
    *result = -1;
    result += 2;
  }
  if ( v13 == v9 )
    return (_QWORD *)operator delete();
  v15 = v9;
  while ( 2 )
  {
    if ( v15->m128i_i64[0] == -1 || v15->m128i_i64[0] == -2 )
      goto LABEL_8;
    v16 = *(_DWORD *)(a1 + 16);
    if ( !v16 )
    {
      *(__m128i *)&dword_0 = _mm_loadu_si128(v15);
      BUG();
    }
    v34 = *(const __m128i **)a1;
    v17 = sub_2224B50(v15->m128i_i64[0], v15->m128i_i64[1]);
    v18 = (const void *)v15->m128i_i64[0];
    v19 = v16 - 1;
    v20 = v15->m128i_u64[1];
    v21 = (v16 - 1) & v17;
    v38 = v15->m128i_i64[0] == -2;
    v37 = v15->m128i_i64[0] == -1;
    if ( !v20 )
    {
      v28 = 1;
      v29 = nullptr;
      while ( 1 )
      {
        v23 = (__m128i *)&v34[v21];
        if ( v23->m128i_i64[0] == -1 )
          break;
        if ( v23->m128i_i64[0] == -2 )
        {
          v32 = v38;
LABEL_42:
          if ( v32 )
            goto LABEL_43;
          goto LABEL_30;
        }
        if ( !v23->m128i_i64[1] )
          goto LABEL_43;
LABEL_30:
        v45 = v28;
        v42 = v29;
        v40 = v21;
        v36 = v19;
        v48 = (char *)v23->m128i_i64[0];
        v51 = v23->m128i_u64[1];
        if ( sub_E16190((char *)v23->m128i_i64[0], v51, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        {
          v25 = v23;
          v23 = v42;
          goto LABEL_32;
        }
        v33 = sub_E16190(v48, v51, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v19 = v36;
        if ( v42 || !v33 )
          v23 = v42;
        v29 = v23;
        v28 = v45 + 1;
        v21 = v36 & (v45 + v40);
      }
      v32 = v37;
      goto LABEL_42;
    }
    v39 = 1;
    v35 = nullptr;
    while ( 1 )
    {
      v22 = v37;
      v23 = (__m128i *)&v34[v21];
      v24 = (char *)v23->m128i_i64[0];
      if ( v23->m128i_i64[0] != -1 )
      {
        if ( v24 == (char *)-2LL )
        {
          v22 = v38;
        }
        else
        {
          if ( v23->m128i_i64[1] != v20 )
            goto LABEL_17;
          v52 = v21;
          v49 = v19;
          v46 = v20;
          v43 = v18;
          v31 = memcmp(v18, v24, v20);
          v18 = v43;
          v20 = v46;
          v19 = v49;
          v21 = v52;
          v22 = v31 == 0;
        }
      }
      if ( v22 )
        goto LABEL_43;
LABEL_17:
      v50 = v18;
      v47 = v20;
      v44 = v21;
      v41 = v19;
      v53 = (char *)v23->m128i_i64[0];
      v54 = v23->m128i_u64[1];
      if ( sub_E16190((char *)v23->m128i_i64[0], v54, (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
        break;
      v30 = sub_E16190(v53, v54, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v19 = v41;
      v20 = v47;
      v18 = v50;
      if ( !v35 )
      {
        if ( !v30 )
          v23 = nullptr;
        v35 = v23;
      }
      v21 = v41 & (v39 + v44);
      ++v39;
    }
    v25 = v23;
    v23 = v35;
LABEL_32:
    if ( !v23 )
      v23 = v25;
LABEL_43:
    *v23 = _mm_loadu_si128(v15);
    ++*(_DWORD *)(a1 + 8);
LABEL_8:
    if ( v13 != ++v15 )
      continue;
    return (_QWORD *)operator delete();
  }
}

