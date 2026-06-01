__int64 __fastcall sub_60C9B0(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  bool v4; // zf
  __int64 *v6; // rbx
  __int32 v7; // eax
  int v8; // r14d
  __int64 v9; // rsi
  char v10; // dl
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned int i; // eax
  const char *v15; // rsi
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rsi
  unsigned __int64 v20; // rbp
  const char *v21; // r12
  void *v22; // rdi
  __int64 *v23; // r15
  unsigned __int64 v24; // rax
  void *v25; // r12
  __m128i v26; // xmm0
  __m128i *v27; // rax
  void *v28; // rdi
  __m128i *v29; // rcx
  _QWORD *v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rax
  int v35; // ebx
  size_t v36; // r12
  unsigned __int64 v37; // rbx
  __int64 v38; // r12
  __m128i v39; // xmm0
  void *v40; // rdi
  __m128i *v41; // rcx
  __int32 v42; // eax
  char **v43; // rbx
  __int64 v44; // rax
  size_t v45; // r13
  __int64 v46; // r12
  __int64 v47; // r13
  unsigned int v48; // ecx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r9
  _QWORD *v51; // r10
  unsigned __int64 v52; // rsi
  _QWORD *v53; // rax
  _QWORD *v54; // rbp
  void *v55; // rdi
  void *v56; // rdi
  size_t v57; // rbp
  const char *v58; // rbx
  void *v59; // rdi
  __int64 *v60; // r15
  __int64 *v61; // rax
  void *v62; // rax
  void *v63; // rax
  void *v64; // rsi
  void *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __m128i v68; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v69; // [rsp+10h] [rbp-B8h]
  void **p_src; // [rsp+18h] [rbp-B0h]
  _QWORD *v71; // [rsp+20h] [rbp-A8h]
  __m128i *v72; // [rsp+28h] [rbp-A0h]
  int v73; // [rsp+38h] [rbp-90h] BYREF
  int v74; // [rsp+3Ch] [rbp-8Ch] BYREF
  _QWORD *v75; // [rsp+40h] [rbp-88h] BYREF
  void *src; // [rsp+50h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-60h] BYREF
  __int128 v79; // [rsp+70h] [rbp-58h]
  int v80; // [rsp+80h] [rbp-48h]
  unsigned __int64 v81; // [rsp+88h] [rbp-40h]

  v4 = a1[284] == 0;
  v72 = (__m128i *)a2;
  v81 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = (__int64 *)a1[283];
    if ( !v6 )
      goto LABEL_3;
    while ( *((_DWORD *)v6 + 2) != a3 )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_3;
    }
    if ( v72 == (__m128i *)(v6 + 2) )
    {
LABEL_20:
      v24 = v6[6];
      v25 = nullptr;
      v26 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      if ( v24 )
      {
        v57 = 4 * v24;
        v68 = v26;
        v25 = (void *)qalloc_or_throw(4 * v24, (const char *)a2);
        memcpy(v25, (const void *)v6[5], v57);
        v27 = v72;
        v26 = _mm_load_si128(&v68);
        v28 = (void *)v72[1].m128i_i64[1];
        if ( !v28 )
          goto LABEL_23;
      }
      else
      {
        v27 = v72;
        v28 = (void *)v72[1].m128i_i64[1];
        if ( !v28 )
        {
LABEL_23:
          v29 = v72;
          v72[1].m128i_i64[1] = (__int64)v25;
          v29[2] = v26;
          v29[3].m128i_i32[0] = *((_DWORD *)v6 + 16);
          return 1;
        }
      }
      v27[2].m128i_i64[0] = 0;
      v68 = v26;
      qfree(v28);
      v26 = _mm_load_si128(&v68);
      goto LABEL_23;
    }
LABEL_16:
    v20 = v6[3];
    if ( v20 < 2 )
    {
      v72->m128i_i64[1] = 0;
    }
    else
    {
      v21 = (const char *)v6[2];
      v22 = (void *)v72->m128i_i64[0];
      if ( v72[1].m128i_i64[0] < v20 )
      {
        v66 = qvector_reserve(v72, v72->m128i_i64[0], v6[3], 1);
        v72->m128i_i64[0] = v66;
        v22 = (void *)v66;
      }
      v23 = (__int64 *)v72;
      a2 = (unsigned __int64)v21;
      v72->m128i_i64[1] = v20;
      memmove(v22, v21, v20 - 1);
      *(_BYTE *)(*v23 + v20 - 1) = 0;
    }
    goto LABEL_20;
  }
  a2 = a1[282];
  v31 = *(_QWORD **)(a1[281] + 8 * (a3 % a2));
  if ( v31 )
  {
    v32 = (_QWORD *)*v31;
    if ( *(_DWORD *)(*v31 + 8LL) != a3 )
    {
      do
      {
        v33 = (_QWORD *)*v32;
        if ( !*v32 )
          goto LABEL_3;
        v31 = v32;
        if ( a3 % a2 != *((unsigned int *)v33 + 2) % a2 )
          goto LABEL_3;
        v32 = (_QWORD *)*v32;
      }
      while ( *((_DWORD *)v33 + 2) != a3 );
    }
    if ( v31 )
    {
      v6 = (__int64 *)*v31;
      if ( *v31 )
      {
        if ( v72 == (__m128i *)(v6 + 2) )
          goto LABEL_20;
        goto LABEL_16;
      }
    }
  }
LABEL_3:
  v7 = sub_3B90A0(a1, a3);
  v8 = *((_DWORD *)a1 + 576);
  v68.m128i_i32[0] = v7;
  v69 = &v75;
  v71 = a1 + 280;
  p_src = &src;
  if ( v8 <= 0 )
    return 0;
  while ( 1 )
  {
    --v8;
    v9 = *a1;
    src = nullptr;
    ptr = nullptr;
    v80 = v8;
    *(_OWORD *)n = 0;
    v79 = 0;
    v10 = sub_79BBD0(v71, v9, v69, (unsigned int)v8, 65);
    v11 = -1;
    if ( v10 )
      v11 = (int)v75;
    v12 = *a1;
    v73 = v11;
    v13 = sub_79B6F0(&v73, v12, p_src, v68.m128i_u32[0], 83);
    for ( i = sub_79B7E0(&v73, *a1, 65); ; i = sub_79B840(&v73, *a1, v16, 65) )
    {
      v15 = (const char *)*a1;
      v16 = i;
      if ( i == -1 )
        break;
      v17 = sub_79B3A0(&v73, v15, i, 65);
      if ( (unsigned int)sub_3B9110(a1, v17) == a3 )
      {
        v18 = v79;
        v19 = ptr;
        if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v79 + 1, 4);
          v19 = ptr;
          v18 = v79;
        }
        v19[v18] = v16;
        *(_QWORD *)&v79 = v79 + 1;
      }
    }
    if ( (unsigned __int8)sub_79BBD0(&v73, v15, &v74, v68.m128i_u32[0], 79) )
      break;
    if ( v13 > 0 )
      goto LABEL_47;
LABEL_37:
    if ( (_QWORD)v79 )
      goto LABEL_47;
    if ( ptr )
      qfree(ptr);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( !v8 )
      return 0;
  }
  v34 = v79;
  v35 = v74;
  v15 = (const char *)ptr;
  if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v79 + 1, 4);
    v15 = (const char *)ptr;
    v34 = v79;
  }
  *(_DWORD *)&v15[4 * v34] = v35;
  *(_QWORD *)&v79 = v79 + 1;
  if ( v13 <= 0 )
    goto LABEL_37;
LABEL_47:
  v36 = n[0];
  if ( n[0] > 1 )
  {
    v58 = (const char *)src;
    v59 = (void *)v72->m128i_i64[0];
    if ( v72[1].m128i_i64[0] < n[0] )
    {
      v67 = qvector_reserve(v72, v72->m128i_i64[0], n[0], 1);
      v72->m128i_i64[0] = v67;
      v59 = (void *)v67;
    }
    v60 = (__int64 *)v72;
    v15 = v58;
    v72->m128i_i64[1] = v36;
    memmove(v59, v58, v36 - 1);
    *(_BYTE *)(*v60 + v36 - 1) = 0;
  }
  else
  {
    v72->m128i_i64[1] = 0;
  }
  v37 = v79;
  v38 = 0;
  if ( (_QWORD)v79 )
  {
    v62 = (void *)qalloc_or_throw(4 * v79, v15);
    v15 = (const char *)ptr;
    v38 = (__int64)v62;
    memcpy(v62, ptr, 4 * v37);
  }
  v39 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
  v40 = (void *)v72[1].m128i_i64[1];
  if ( v40 )
  {
    v72[2].m128i_i64[0] = 0;
    v68 = v39;
    qfree(v40);
    v39 = _mm_load_si128(&v68);
  }
  v41 = v72;
  v42 = v80;
  v43 = (char **)(a1 + 281);
  v75 = a1 + 281;
  v72[1].m128i_i64[1] = v38;
  v41[3].m128i_i32[0] = v42;
  v41[2] = v39;
  v44 = operator new(0x48u);
  *(_DWORD *)(v44 + 8) = a3;
  v45 = n[0];
  v46 = v44;
  *(_QWORD *)v44 = 0;
  *(_QWORD *)(v44 + 16) = 0;
  *(_OWORD *)(v44 + 24) = 0;
  if ( v45 )
  {
    v65 = (void *)qalloc_or_throw(v45, v15);
    *(_QWORD *)(v46 + 16) = v65;
    v15 = (const char *)src;
    *(_QWORD *)(v46 + 32) = v45;
    memcpy(v65, v15, v45);
    *(_QWORD *)(v46 + 24) = v45;
  }
  v47 = v79;
  *(_QWORD *)(v46 + 40) = 0;
  *(_OWORD *)(v46 + 48) = 0;
  if ( v47 )
  {
    v63 = (void *)qalloc_or_throw(4 * v47, v15);
    *(_QWORD *)(v46 + 40) = v63;
    v64 = ptr;
    *(_QWORD *)(v46 + 56) = v47;
    memcpy(v63, v64, 4 * v47);
    *(_QWORD *)(v46 + 48) = v47;
  }
  v4 = a1[284] == 0;
  v48 = *(_DWORD *)(v46 + 8);
  *(_DWORD *)(v46 + 64) = v80;
  if ( v4 )
  {
    v61 = (__int64 *)a1[283];
    if ( !v61 )
    {
LABEL_83:
      v50 = v48;
      v52 = (unsigned __int64)v48 % a1[282];
      goto LABEL_84;
    }
    while ( *((_DWORD *)v61 + 2) != v48 )
    {
      v61 = (__int64 *)*v61;
      if ( !v61 )
        goto LABEL_83;
    }
LABEL_65:
    if ( v46 )
    {
      v55 = *(void **)(v46 + 40);
      if ( v55 )
      {
        *(_QWORD *)(v46 + 48) = 0;
        qfree(v55);
      }
      v56 = *(void **)(v46 + 16);
      if ( v56 )
      {
        *(_QWORD *)(v46 + 24) = 0;
        qfree(v56);
      }
      operator delete((void *)v46, 0x48u);
    }
    goto LABEL_71;
  }
  v49 = a1[282];
  v50 = v48;
  v51 = *(_QWORD **)(a1[281] + 8 * (v48 % v49));
  v52 = v48 % v49;
  if ( !v51 )
    goto LABEL_84;
  v53 = (_QWORD *)*v51;
  if ( v48 == *(_DWORD *)(*v51 + 8LL) )
  {
LABEL_63:
    if ( !v51 || !*v51 )
      goto LABEL_84;
    goto LABEL_65;
  }
  while ( 1 )
  {
    v54 = (_QWORD *)*v53;
    if ( !*v53 )
      break;
    v51 = v53;
    if ( v48 % v49 != *((unsigned int *)v54 + 2) % v49 )
      break;
    v53 = (_QWORD *)*v53;
    if ( v48 == *((_DWORD *)v54 + 2) )
      goto LABEL_63;
  }
LABEL_84:
  sub_60C4F0(v43, v52, v50, (char *)v46, 1u);
LABEL_71:
  if ( ptr )
  {
    *(_QWORD *)&v79 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 1;
}

