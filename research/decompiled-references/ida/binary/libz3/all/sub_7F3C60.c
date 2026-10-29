__m128i *__fastcall sub_7F3C60(__int64 a1)
{
  __int64 v2; // rbp
  __m128i *v3; // r13
  __m128i *v4; // rbx
  int *v5; // r8
  unsigned int v6; // r15d
  size_t v7; // r14
  __m128i *v8; // rbp
  int v9; // edx
  unsigned int v10; // esi
  _DWORD *v11; // r9
  _DWORD *v12; // rdi
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // r15
  __m128i *v22; // r10
  __m128i *v23; // rax
  __m128i *v24; // rcx
  int v25; // edx
  __m128i *v26; // rdx
  __m128i *result; // rax
  __int32 v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __m128i *v33; // rax
  int v34; // r8d
  __m128i *v35; // rdx
  const __m128i *v36; // rcx
  __m128i *v37; // r9
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  __m128i v41; // xmm0
  int v42; // [rsp+8h] [rbp-50h]

  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(__m128i **)(a1 + 48);
  if ( 3 * (int)v2 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v7 = 16LL * (unsigned int)(2 * v2);
    v33 = (__m128i *)sub_186B270(v7);
    v34 = 2 * v2;
    v4 = v33;
    if ( 2 * (_DWORD)v2 )
    {
      v35 = &v33[2 * (v2 & 0x7FFFFFFF)];
      do
      {
        v33->m128i_i64[0] = 0;
        v33 += 2;
        v33[-1].m128i_i64[0] = 0;
      }
      while ( v33 != v35 );
    }
    v36 = *(const __m128i **)(a1 + 16);
    v6 = v34 - 1;
    v8 = &v4[v7 / 0x10];
    v37 = (__m128i *)&v36[*(unsigned int *)(a1 + 24)];
    if ( v36 != v37 )
    {
      do
      {
        while ( v36->m128i_i32[1] != 2 )
        {
          if ( v37 == ++v36 )
            goto LABEL_50;
        }
        v38 = 16LL * (v36->m128i_i32[0] & v6);
        v39 = &v4[(unsigned __int64)v38 / 0x10];
        if ( v7 == v38 )
        {
LABEL_57:
          if ( v4 == v39 )
          {
LABEL_63:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v40 = v4;
          while ( v40->m128i_i32[1] )
          {
            if ( v39 == ++v40 )
              goto LABEL_63;
          }
        }
        else
        {
          v40 = &v4[(unsigned __int64)v38 / 0x10];
          while ( v40->m128i_i32[1] )
          {
            if ( v8 == ++v40 )
              goto LABEL_57;
          }
        }
        v41 = _mm_loadu_si128(v36++);
        *v40 = v41;
      }
      while ( v37 != v36 );
LABEL_50:
      v37 = *(__m128i **)(a1 + 16);
    }
    if ( v37 )
    {
      v42 = v34;
      sub_186B220(v37);
      v34 = v42;
    }
    *(_DWORD *)(a1 + 24) = v34;
    v5 = (int *)v3[2].m128i_i64[0];
    *(_QWORD *)(a1 + 16) = v4;
    *(_DWORD *)(a1 + 32) = 0;
    if ( v5 )
      goto LABEL_3;
LABEL_54:
    v10 = 0;
    v9 = 0;
    goto LABEL_4;
  }
  v4 = *(__m128i **)(a1 + 16);
  v5 = (int *)v3[2].m128i_i64[0];
  v6 = v2 - 1;
  v7 = 16 * v2;
  v8 = &v4[v2];
  if ( !v5 )
    goto LABEL_54;
LABEL_3:
  v9 = *v5;
  v10 = (unsigned int)*v5 >> 13;
LABEL_4:
  v11 = (_DWORD *)v3[1].m128i_i64[1];
  v12 = (_DWORD *)v3[1].m128i_i64[0];
  v13 = v10 ^ (*v12 - *v11 - v9);
  v14 = (*v11 - v9 - v13) ^ (v13 << 8);
  v15 = (v9 - v13 - v14) ^ (v14 >> 13);
  v16 = (v13 - v14 - v15) ^ (v15 >> 12);
  v17 = (v14 - v15 - v16) ^ (v16 << 16);
  v18 = (v15 - v16 - v17) ^ (v17 >> 5);
  v19 = (v18 >> 3) ^ (v16 - v17 - v18);
  v20 = (v18 - v19 - ((v17 - v18 - v19) ^ (v19 << 10))) ^ (((v17 - v18 - v19) ^ (v19 << 10)) >> 15);
  v21 = 16LL * (v20 & v6);
  v22 = &v4[(unsigned __int64)v21 / 0x10];
  if ( v21 != v7 )
  {
    v23 = &v4[(unsigned __int64)v21 / 0x10];
    v24 = nullptr;
    while ( 1 )
    {
      v25 = v23->m128i_i32[1];
      if ( v25 == 2 )
      {
        if ( v23->m128i_i32[0] == v20 )
        {
          v26 = (__m128i *)v23->m128i_i64[1];
          if ( v26[2].m128i_i8[12] == v3[2].m128i_i8[12]
            && (_DWORD *)v26[1].m128i_i64[0] == v12
            && (_DWORD *)v26[1].m128i_i64[1] == v11
            && (int *)v26[2].m128i_i64[0] == v5 )
          {
            goto LABEL_15;
          }
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_30;
          v24 = v23;
          goto LABEL_31;
        }
        v24 = v23;
      }
      if ( ++v23 == v8 )
        goto LABEL_21;
    }
  }
  v24 = nullptr;
  while ( 1 )
  {
LABEL_21:
    if ( v22 == v4 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v28 = v4->m128i_i32[1];
    if ( v28 == 2 )
      break;
    if ( !v28 )
    {
      if ( v24 )
LABEL_30:
        --*(_DWORD *)(a1 + 32);
      else
        v24 = v4;
LABEL_31:
      v24->m128i_i32[0] = v20;
      v29 = *(_DWORD *)(a1 + 28);
      v24->m128i_i64[1] = (__int64)v3;
      v24->m128i_i32[1] = 2;
      *(_DWORD *)(a1 + 28) = v29 + 1;
LABEL_32:
      ++v12[2];
      ++v11[2];
      if ( v5 )
        ++v5[2];
      v30 = sub_186B270(0x30u);
      v26 = v3;
      *(_OWORD *)(v30 + 16) = 0;
      *(_QWORD *)(v30 + 32) = 0;
      *(_DWORD *)(v30 + 40) = 0;
      *(_BYTE *)(v30 + 44) = 0;
      *(_QWORD *)(a1 + 48) = v30;
      *(__m128i *)v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
      result = *(__m128i **)(a1 + 40);
      ++v3[2].m128i_i32[2];
      if ( !result )
        goto LABEL_17;
      goto LABEL_35;
    }
    v24 = v4;
LABEL_20:
    ++v4;
  }
  if ( v4->m128i_i32[0] != v20 )
    goto LABEL_20;
  v26 = (__m128i *)v4->m128i_i64[1];
  if ( v26[2].m128i_i8[12] != v3[2].m128i_i8[12]
    || (_DWORD *)v26[1].m128i_i64[0] != v12
    || (_DWORD *)v26[1].m128i_i64[1] != v11
    || (int *)v26[2].m128i_i64[0] != v5 )
  {
    goto LABEL_20;
  }
LABEL_15:
  if ( v3 == v26 )
    goto LABEL_32;
  result = *(__m128i **)(a1 + 40);
  ++v26[2].m128i_i32[2];
  if ( !result )
  {
LABEL_17:
    *(_QWORD *)(a1 + 40) = v26;
    *v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
    return result;
  }
LABEL_35:
  if ( result != v26 )
  {
    v31 = v26->m128i_i64[0];
    v32 = (_QWORD *)v26->m128i_i64[1];
    *v32 = v26->m128i_i64[0];
    *(_QWORD *)(v31 + 8) = v32;
    **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) = v26;
    v26->m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    result = *(__m128i **)(a1 + 40);
    v26->m128i_i64[0] = (__int64)result;
    result->m128i_i64[1] = (__int64)v26;
    *(_QWORD *)(a1 + 40) = v26;
  }
  return result;
}

