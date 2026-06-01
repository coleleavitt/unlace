__int64 __fastcall sub_360C80(__int64 a1, int a2, unsigned int a3, unsigned __int32 a4, const char *a5, const char *a6)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rcx
  __m128i *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r13
  __m128i *v17; // rdx
  __m128i *v18; // rax
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r13
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int *v27; // r8
  unsigned __int64 *v28; // r14
  __int64 v29; // rax
  size_t v30; // r9
  __m128i *v31; // r10
  unsigned int *v32; // rax
  unsigned __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // rdx
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  unsigned int **v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  int v41; // edx
  unsigned int v42; // r9d
  __m128i *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 v49; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+18h] [rbp-B0h]
  __int64 v51; // [rsp+18h] [rbp-B0h]
  __m128i v52; // [rsp+20h] [rbp-A8h] BYREF
  size_t n; // [rsp+30h] [rbp-98h]
  __m128i *v54; // [rsp+38h] [rbp-90h]
  __m128i v55; // [rsp+40h] [rbp-88h] BYREF
  void *src; // [rsp+50h] [rbp-78h] BYREF
  __int128 v57; // [rsp+58h] [rbp-70h]
  __m128i *v58; // [rsp+70h] [rbp-58h] BYREF
  __int128 v59; // [rsp+78h] [rbp-50h]
  unsigned __int64 v60; // [rsp+88h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a1 + 88);
  v55.m128i_i32[0] = a4;
  src = nullptr;
  v9 = v8[4];
  if ( !v9 )
  {
    v11 = (__int64)(v8 + 3);
LABEL_17:
    v58 = &v55;
    v11 = sub_359200(v8 + 2, v11, (unsigned int **)&v58);
    goto LABEL_8;
  }
  v11 = (__int64)(v8 + 3);
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 24);
      if ( *(_DWORD *)(v9 + 32) < a4 )
        break;
      v11 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v12 )
        goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v13 );
LABEL_6:
  if ( v8 + 3 == (_QWORD *)v11 || a4 < *(_DWORD *)(v11 + 32) )
    goto LABEL_17;
LABEL_8:
  v14 = (__m128i *)v8[8];
  v15 = v8[9];
  v16 = v11 + 40;
  v17 = (__m128i *)((char *)v14 + 8 * v15);
  if ( v14 != v17 )
  {
    v18 = (__m128i *)v8[8];
    while ( v16 != v18->m128i_i64[0] )
    {
      v18 = (__m128i *)((char *)v18 + 8);
      if ( v17 == v18 )
        goto LABEL_18;
    }
    if ( v17 != v18 )
      goto LABEL_13;
  }
LABEL_18:
  if ( !*(_BYTE *)(v11 + 334) )
  {
    if ( !(_BYTE)src )
      get_type_by_tid(&src, v55.m128i_u32[0]);
    if ( !(unsigned __int8)sub_35A3A0((_QWORD *)(v11 + 40), a1, a2, &src, 0) )
    {
LABEL_13:
      clear_tinfo_t(&src);
      goto LABEL_14;
    }
    v15 = v8[9];
    v14 = (__m128i *)v8[8];
  }
  v20 = v8[11];
  if ( v8[10] < (unsigned __int64)(v15 + 1) )
  {
    v51 = v8[11];
    v39 = qvector_reserve(v8 + 8, v14, v15 + 1, 8);
    v15 = v8[9];
    v20 = v51;
    v8[8] = v39;
    v14 = (__m128i *)v39;
  }
  v14->m128i_i64[v15] = v20;
  ++v8[9];
  v8[11] = v16;
  *(_DWORD *)(v11 + 264) = a2;
  clear_tinfo_t(&src);
  v21 = v8[11];
  v22 = *(_DWORD *)(v21 + 228);
  if ( *(_BYTE *)(v21 + 292) )
  {
    if ( a3 < v22 )
    {
LABEL_28:
      v24 = v8[9];
      v25 = *(_QWORD *)(v8[8] + 8 * v24 - 8);
      if ( v24 )
        v8[9] = v24 - 1;
      v8[11] = v25;
      result = 0;
      if ( a3 )
        goto LABEL_31;
      return result;
    }
    v50 = 1;
  }
  else
  {
    v23 = a3 / v22;
    if ( a3 % v22 )
      goto LABEL_28;
    v50 = v23;
    if ( !v23 )
      goto LABEL_28;
  }
  v26 = 0;
  v27 = nullptr;
  src = nullptr;
  v57 = 0;
  v28 = *(unsigned __int64 **)(v21 + 8);
  v29 = *(_QWORD *)(v21 + 16) << 7;
  v30 = (size_t)v28 + v29;
  if ( v28 != (unsigned __int64 *)((char *)v28 + v29) )
  {
    v31 = &v55;
    do
    {
      while ( 1 )
      {
        v33 = *v28;
        if ( (unsigned __int64)v27 < *v28 )
          break;
        v32 = (unsigned int *)(v28[1] + v33);
        v28 += 16;
        v27 = v32;
        if ( (unsigned __int64 *)v30 == v28 )
          goto LABEL_44;
      }
      v14 = (__m128i *)src;
      v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)v33);
      v35 = v26 + 1;
      v55 = v34;
      if ( v31 < src || v31 >= (__m128i *)((char *)src + 16 * *((_QWORD *)&v57 + 1)) )
      {
        if ( *((_QWORD *)&v57 + 1) < v35 )
        {
          n = (size_t)v31;
          v52.m128i_i64[0] = v30;
          src = (void *)qvector_reserve(&src, src, v35, 16);
          v26 = v57;
          v14 = (__m128i *)src;
          v31 = (__m128i *)n;
          v30 = v52.m128i_i64[0];
        }
        v14[v26] = _mm_load_si128(&v55);
      }
      else
      {
        if ( *((_QWORD *)&v57 + 1) < v35 )
        {
          v54 = v31;
          n = v30;
          v52 = v34;
          src = (void *)qvector_reserve(&src, src, v35, 16);
          v26 = v57;
          v14 = (__m128i *)src;
          v31 = v54;
          v30 = n;
          v34 = _mm_load_si128(&v52);
        }
        v14[v26] = v34;
      }
      v28 += 16;
      v26 = v57 + 1;
      *(_QWORD *)&v57 = v57 + 1;
      v27 = (unsigned int *)(*(v28 - 15) + *(v28 - 16));
    }
    while ( (unsigned __int64 *)v30 != v28 );
  }
LABEL_44:
  v36 = 8LL * *(_QWORD *)(v21 + 32);
  if ( (unsigned int *)v36 != v27 )
  {
    v14 = (__m128i *)src;
    v58 = (__m128i *)v27;
    v37 = v26 + 1;
    *(_QWORD *)&v59 = v36;
    if ( &v58 < src || &v58 >= (__m128i **)((char *)src + 16 * *((_QWORD *)&v57 + 1)) )
    {
      if ( *((_QWORD *)&v57 + 1) < v37 )
      {
        src = (void *)qvector_reserve(&src, src, v37, 16);
        v26 = v57;
        v14 = (__m128i *)src;
      }
      v14[v26] = _mm_load_si128((const __m128i *)&v58);
    }
    else
    {
      if ( *((_QWORD *)&v57 + 1) < v37 )
      {
        v52.m128i_i64[0] = (__int64)v27;
        src = (void *)qvector_reserve(&src, src, v37, 16);
        v26 = v57;
        v14 = (__m128i *)src;
        v27 = (unsigned int *)v52.m128i_i64[0];
      }
      v38 = (unsigned int **)&v14[v26];
      *v38 = v27;
      v38[1] = (unsigned int *)v36;
    }
    v26 = v57 + 1;
    *(_QWORD *)&v57 = v57 + 1;
  }
  v40 = 0;
  while ( 1 )
  {
    v42 = v40;
    v43 = nullptr;
    v59 = 0;
    if ( v26 )
    {
      LODWORD(v54) = v40;
      v52.m128i_i64[0] = v26;
      n = 16 * v26;
      v43 = (__m128i *)qalloc_or_throw(16 * v26, v14, 16 * v26, v26, v27, (unsigned int)v40);
      *((_QWORD *)&v59 + 1) = v52.m128i_i64[0];
      memcpy(v43, src, n);
      v42 = (unsigned int)v54;
      *(_QWORD *)&v59 = v52.m128i_i64[0];
    }
    v14 = (__m128i *)a3;
    v58 = v43;
    result = sub_360320(a1, a3, (__int64)&v58, a5, a6, v42);
    if ( v43 )
    {
      v52.m128i_i8[0] = result;
      qfree(v43);
      result = v52.m128i_u8[0];
    }
    if ( (_BYTE)result )
      break;
    v41 = *(_DWORD *)(v21 + 228);
    a3 -= v41;
    if ( *(_BYTE *)(v21 + 292) )
      a3 = 0;
    ++v40;
    *(_DWORD *)(v21 + 224) += v41;
    if ( v40 >= v50 )
      break;
    v26 = v57;
  }
  if ( src )
  {
    v49 = result;
    *(_QWORD *)&v57 = 0;
    qfree(src);
    result = v49;
  }
  v44 = v8[9];
  v45 = *(_QWORD *)(v8[8] + 8 * v44 - 8);
  if ( v44 )
    v8[9] = v44 - 1;
  v8[11] = v45;
  if ( !(_BYTE)result )
  {
LABEL_14:
    result = 0;
    if ( !a3 )
      return result;
LABEL_31:
    v58 = (__m128i *)(&dword_0 + 1);
    LODWORD(v59) = -1;
    return sub_3612C0(a1, a2, 2, (int)a5, 0);
  }
  return result;
}

