__int64 __fastcall sub_64F120(__int64 a1, __int64 a2, __m128i *a3, __int64 *a4)
{
  unsigned int v8; // r13d
  int v9; // esi
  __m128i *v10; // r9
  int v11; // eax
  __m128i v12; // xmm0
  const __m128i *v13; // r14
  unsigned int v14; // r13d
  int v15; // eax
  const void *v16; // rdi
  size_t v17; // rdx
  int v18; // r9d
  unsigned int v19; // ecx
  __m128i *v20; // r8
  const void *v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  unsigned int v25; // ecx
  int v26; // r10d
  const void *v27; // rsi
  unsigned int v28; // ecx
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // [rsp+8h] [rbp-70h]
  __int8 *v33; // [rsp+8h] [rbp-70h]
  int v34; // [rsp+10h] [rbp-68h]
  size_t v35; // [rsp+18h] [rbp-60h]
  size_t v36; // [rsp+18h] [rbp-60h]
  __int8 *v37; // [rsp+20h] [rbp-58h]
  __m128i *v38; // [rsp+20h] [rbp-58h]
  unsigned int v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+2Ch] [rbp-4Ch]
  __m128i *v41; // [rsp+38h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a2 + 16);
  if ( !v8 )
  {
    v41 = nullptr;
    goto LABEL_3;
  }
  v13 = *(const __m128i **)a2;
  v14 = v8 - 1;
  v15 = sub_25E60D0(a3->m128i_i64[0], a3->m128i_i64[1]);
  v16 = (const void *)a3->m128i_i64[0];
  v17 = a3->m128i_u64[1];
  v18 = 1;
  v19 = v14 & v15;
  if ( a3->m128i_i64[0] != -1 )
  {
    if ( v17 )
    {
      v26 = 1;
      v10 = nullptr;
      while ( 1 )
      {
        v20 = (__m128i *)((char *)v13 + 24 * v19);
        v27 = (const void *)v20->m128i_i64[0];
        if ( v20->m128i_i64[0] == -1 )
          break;
        if ( v27 == (const void *)-2LL )
        {
          if ( v16 == (const void *)-2LL )
            goto LABEL_14;
          if ( !v10 )
            v10 = (__m128i *)((char *)v13 + 24 * v19);
        }
        else
        {
          v33 = &v13->m128i_i8[24 * v19];
          if ( v20->m128i_i64[1] == v17 )
          {
            v40 = v26;
            v39 = v19;
            v38 = v10;
            v36 = v17;
            v31 = memcmp(v16, v27, v17);
            v17 = v36;
            v10 = v38;
            v19 = v39;
            v26 = v40;
            v20 = (__m128i *)v33;
            if ( !v31 )
              goto LABEL_14;
          }
        }
        v28 = v26 + v19;
        ++v26;
        v19 = v14 & v28;
      }
    }
    else
    {
      v29 = 1;
      v10 = nullptr;
      while ( 1 )
      {
        v20 = (__m128i *)((char *)v13 + 24 * v19);
        if ( v20->m128i_i64[0] == -1 )
          break;
        if ( v20->m128i_i64[0] == -2 )
        {
          if ( v16 == (const void *)-2LL )
            goto LABEL_14;
          if ( !v10 )
            v10 = (__m128i *)((char *)v13 + 24 * v19);
        }
        else if ( !v20->m128i_i64[1] )
        {
          goto LABEL_14;
        }
        v30 = v29 + v19;
        ++v29;
        v19 = v14 & v30;
      }
    }
    v8 = *(_DWORD *)(a2 + 16);
    if ( !v10 )
      v10 = v20;
    v11 = *(_DWORD *)(a2 + 8) + 1;
    v41 = v10;
    if ( 4 * v11 < 3 * v8 )
    {
      if ( v8 >> 3 < v8 - (v11 + *(_DWORD *)(a2 + 12)) )
        goto LABEL_5;
      v9 = v8;
LABEL_4:
      sub_64EDE0((const __m128i **)a2, v9);
      sub_64D2A0((__int64 *)a2, a3, &v41);
      v10 = v41;
      v11 = *(_DWORD *)(a2 + 8) + 1;
LABEL_5:
      *(_DWORD *)(a2 + 8) = v11;
      if ( v10->m128i_i64[0] != -1 )
        --*(_DWORD *)(a2 + 12);
      v12 = _mm_loadu_si128(a3);
      *(_QWORD *)a1 = v10;
      *(_BYTE *)(a1 + 16) = 1;
      *v10 = v12;
      v10[1].m128i_i64[0] = *a4;
      *a4 = 0;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16);
      return a1;
    }
LABEL_3:
    v9 = 2 * v8;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v20 = (__m128i *)((char *)v13 + 24 * v19);
    v21 = (const void *)v20->m128i_i64[0];
    if ( v20->m128i_i64[0] == -1 )
      break;
    if ( v21 != (const void *)-2LL && v20->m128i_i64[1] == v17 )
    {
      v34 = v18;
      v32 = v19;
      if ( !v17 )
        break;
      v37 = &v13->m128i_i8[24 * v19];
      v35 = v17;
      v22 = memcmp((const void *)0xFFFFFFFFFFFFFFFFLL, v21, v17);
      v17 = v35;
      v20 = (__m128i *)v37;
      v19 = v32;
      v18 = v34;
      if ( !v22 )
        break;
    }
    v25 = v18 + v19;
    ++v18;
    v19 = v14 & v25;
  }
LABEL_14:
  v23 = *(unsigned int *)(a2 + 16);
  *(_QWORD *)a1 = v20;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2 + 24 * v23;
  return a1;
}

