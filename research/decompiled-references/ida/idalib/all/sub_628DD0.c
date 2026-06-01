__int64 __fastcall sub_628DD0(_QWORD *a1, __m128i *a2, unsigned __int64 a3)
{
  bool v4; // zf
  __int64 *v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rsi
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 i; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rbp
  const void *v22; // r12
  void *v23; // rdi
  __int64 *v24; // r15
  unsigned __int64 v25; // rax
  void *v26; // r12
  __m128i v27; // xmm0
  __m128i *v28; // rax
  void *v29; // rdi
  __m128i *v30; // rcx
  unsigned __int64 v32; // rsi
  _QWORD *v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  _QWORD *v38; // rsi
  size_t v39; // r12
  unsigned __int64 v40; // rbx
  void *v41; // r12
  __m128i v42; // xmm0
  void *v43; // rdi
  __m128i *v44; // rcx
  __int32 v45; // eax
  __int64 v46; // rax
  size_t v47; // r13
  __int64 v48; // r12
  __int64 v49; // r13
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r8
  _QWORD *v52; // r9
  unsigned __int64 v53; // rsi
  _QWORD *v54; // rax
  _QWORD *v55; // r10
  void *v56; // rdi
  void *v57; // rdi
  size_t v58; // rbp
  void *v59; // rbx
  void *v60; // rdi
  __int64 *v61; // r15
  _QWORD *v62; // rax
  void *v63; // rax
  void *v64; // rsi
  void *v65; // rax
  void *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __m128i v69; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v70; // [rsp+18h] [rbp-C0h]
  void **p_src; // [rsp+20h] [rbp-B8h]
  _QWORD *v72; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+30h] [rbp-A8h]
  __m128i *v74; // [rsp+38h] [rbp-A0h]
  __int64 v75; // [rsp+40h] [rbp-98h] BYREF
  __int64 v76; // [rsp+48h] [rbp-90h] BYREF
  _QWORD *v77; // [rsp+50h] [rbp-88h] BYREF
  void *src; // [rsp+60h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+78h] [rbp-60h] BYREF
  __int128 v81; // [rsp+80h] [rbp-58h]
  __int32 v82; // [rsp+90h] [rbp-48h]
  unsigned __int64 v83; // [rsp+98h] [rbp-40h]

  v4 = a1[295] == 0;
  v74 = a2;
  v83 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = (__int64 *)a1[294];
    if ( !v6 )
      goto LABEL_3;
    while ( v6[1] != a3 )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_3;
    }
    if ( v74 == (__m128i *)(v6 + 2) )
    {
LABEL_21:
      v25 = v6[6];
      v26 = nullptr;
      v27 = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      if ( v25 )
      {
        v58 = 8 * v25;
        v69 = v27;
        v26 = (void *)qalloc_or_throw(8 * v25);
        memcpy(v26, (const void *)v6[5], v58);
        v28 = v74;
        v27 = _mm_load_si128(&v69);
        v29 = (void *)v74[1].m128i_i64[1];
        if ( !v29 )
          goto LABEL_24;
      }
      else
      {
        v28 = v74;
        v29 = (void *)v74[1].m128i_i64[1];
        if ( !v29 )
        {
LABEL_24:
          v30 = v74;
          v74[1].m128i_i64[1] = (__int64)v26;
          v30[2] = v27;
          v30[3].m128i_i32[0] = *((_DWORD *)v6 + 16);
          return 1;
        }
      }
      v28[2].m128i_i64[0] = 0;
      v69 = v27;
      qfree(v29);
      v27 = _mm_load_si128(&v69);
      goto LABEL_24;
    }
LABEL_17:
    v21 = v6[3];
    if ( v21 < 2 )
    {
      v74->m128i_i64[1] = 0;
    }
    else
    {
      v22 = (const void *)v6[2];
      v23 = (void *)v74->m128i_i64[0];
      if ( v74[1].m128i_i64[0] < v21 )
      {
        v67 = qvector_reserve(v74, v74->m128i_i64[0], v6[3], 1);
        v74->m128i_i64[0] = v67;
        v23 = (void *)v67;
      }
      v24 = (__int64 *)v74;
      v74->m128i_i64[1] = v21;
      memmove(v23, v22, v21 - 1);
      *(_BYTE *)(*v24 + v21 - 1) = 0;
    }
    goto LABEL_21;
  }
  v32 = a1[293];
  v33 = *(_QWORD **)(a1[292] + 8 * (a3 % v32));
  if ( v33 )
  {
    v34 = (_QWORD *)*v33;
    if ( *(_QWORD *)(*v33 + 8LL) != a3 )
    {
      do
      {
        v35 = (_QWORD *)*v34;
        if ( !*v34 )
          goto LABEL_3;
        v33 = v34;
        if ( a3 % v32 != v35[1] % v32 )
          goto LABEL_3;
        v34 = (_QWORD *)*v34;
      }
      while ( v35[1] != a3 );
    }
    if ( v33 )
    {
      v6 = (__int64 *)*v33;
      if ( *v33 )
      {
        if ( v74 == (__m128i *)(v6 + 2) )
          goto LABEL_21;
        goto LABEL_17;
      }
    }
  }
LABEL_3:
  v69.m128i_i64[0] = sub_3BDD60(a1, a3);
  v7 = *((_DWORD *)a1 + 598);
  if ( v7 <= 0 )
    return 0;
  v8 = v7 - 1;
  v9 = v8;
  v70 = &v77;
  v72 = a1 + 291;
  v73 = v8 - (unsigned __int64)(unsigned int)v8;
  p_src = &src;
  while ( 1 )
  {
    v10 = *a1;
    src = nullptr;
    ptr = nullptr;
    v82 = v9;
    *(_OWORD *)n = 0;
    v81 = 0;
    v11 = sub_7BEFD0(v72, v10, v70, v9, 65);
    v12 = -1;
    if ( v11 )
      v12 = (__int64)v77;
    v13 = *a1;
    v75 = v12;
    v14 = sub_7BEA80(&v75, v13, p_src, v69.m128i_i64[0], 83);
    for ( i = sub_7BEB80(&v75, *a1, 65); ; i = sub_7BEBF0(&v75, *a1, v17, 65) )
    {
      v16 = *a1;
      v17 = i;
      if ( i == -1 )
        break;
      v18 = sub_7BE710(&v75, v16, i, 65);
      if ( sub_3BDE50(a1, v18) == a3 )
      {
        v19 = v81;
        v20 = ptr;
        if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v81 + 1, 8);
          v20 = ptr;
          v19 = v81;
        }
        v20[v19] = v17;
        *(_QWORD *)&v81 = v81 + 1;
      }
    }
    if ( (unsigned __int8)sub_7BEFD0(&v75, v16, &v76, v69.m128i_i64[0], 79) )
      break;
    if ( v14 > 0 )
      goto LABEL_48;
LABEL_38:
    if ( (_QWORD)v81 )
      goto LABEL_48;
    if ( ptr )
      qfree(ptr);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v73 == v9 )
      return 0;
    --v9;
  }
  v36 = v81;
  v37 = v76;
  v38 = ptr;
  if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v81 + 1, 8);
    v38 = ptr;
    v36 = v81;
  }
  v38[v36] = v37;
  *(_QWORD *)&v81 = v81 + 1;
  if ( v14 <= 0 )
    goto LABEL_38;
LABEL_48:
  v39 = n[0];
  if ( n[0] > 1 )
  {
    v59 = src;
    v60 = (void *)v74->m128i_i64[0];
    if ( v74[1].m128i_i64[0] < n[0] )
    {
      v68 = qvector_reserve(v74, v74->m128i_i64[0], n[0], 1);
      v74->m128i_i64[0] = v68;
      v60 = (void *)v68;
    }
    v61 = (__int64 *)v74;
    v74->m128i_i64[1] = v39;
    memmove(v60, v59, v39 - 1);
    *(_BYTE *)(*v61 + v39 - 1) = 0;
  }
  else
  {
    v74->m128i_i64[1] = 0;
  }
  v40 = v81;
  v41 = nullptr;
  if ( (_QWORD)v81 )
  {
    v41 = (void *)qalloc_or_throw(8 * v81);
    memcpy(v41, ptr, 8 * v40);
  }
  v42 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
  v43 = (void *)v74[1].m128i_i64[1];
  if ( v43 )
  {
    v74[2].m128i_i64[0] = 0;
    v69 = v42;
    qfree(v43);
    v42 = _mm_load_si128(&v69);
  }
  v44 = v74;
  v45 = v82;
  v77 = a1 + 292;
  v74[1].m128i_i64[1] = (__int64)v41;
  v44[3].m128i_i32[0] = v45;
  v44[2] = v42;
  v46 = operator new(0x48u);
  *(_QWORD *)(v46 + 8) = a3;
  v47 = n[0];
  v48 = v46;
  *(_QWORD *)v46 = 0;
  *(_QWORD *)(v46 + 16) = 0;
  *(_OWORD *)(v46 + 24) = 0;
  if ( v47 )
  {
    v65 = (void *)qalloc_or_throw(v47);
    *(_QWORD *)(v48 + 16) = v65;
    v66 = src;
    *(_QWORD *)(v48 + 32) = v47;
    memcpy(v65, v66, v47);
    *(_QWORD *)(v48 + 24) = v47;
  }
  v49 = v81;
  *(_QWORD *)(v48 + 40) = 0;
  *(_OWORD *)(v48 + 48) = 0;
  if ( v49 )
  {
    v63 = (void *)qalloc_or_throw(8 * v49);
    *(_QWORD *)(v48 + 40) = v63;
    v64 = ptr;
    *(_QWORD *)(v48 + 56) = v49;
    memcpy(v63, v64, 8 * v49);
    *(_QWORD *)(v48 + 48) = v49;
  }
  v4 = a1[295] == 0;
  v50 = *(_QWORD *)(v48 + 8);
  *(_DWORD *)(v48 + 64) = v82;
  if ( v4 )
  {
    v62 = (_QWORD *)a1[294];
    if ( !v62 )
    {
LABEL_85:
      v53 = v50 % a1[293];
      goto LABEL_86;
    }
    while ( v62[1] != v50 )
    {
      v62 = (_QWORD *)*v62;
      if ( !v62 )
        goto LABEL_85;
    }
LABEL_66:
    if ( v48 )
    {
      v56 = *(void **)(v48 + 40);
      if ( v56 )
      {
        *(_QWORD *)(v48 + 48) = 0;
        qfree(v56);
      }
      v57 = *(void **)(v48 + 16);
      if ( v57 )
      {
        *(_QWORD *)(v48 + 24) = 0;
        qfree(v57);
      }
      operator delete((void *)v48, 0x48u);
    }
    goto LABEL_72;
  }
  v51 = a1[293];
  v52 = *(_QWORD **)(a1[292] + 8 * (v50 % v51));
  v53 = v50 % v51;
  if ( !v52 )
    goto LABEL_86;
  v54 = (_QWORD *)*v52;
  if ( v50 == *(_QWORD *)(*v52 + 8LL) )
  {
LABEL_64:
    if ( !v52 || !*v52 )
      goto LABEL_86;
    goto LABEL_66;
  }
  while ( 1 )
  {
    v55 = (_QWORD *)*v54;
    if ( !*v54 )
      break;
    v52 = v54;
    if ( v50 % v51 != v55[1] % v51 )
      break;
    v54 = (_QWORD *)*v54;
    if ( v50 == v55[1] )
      goto LABEL_64;
  }
LABEL_86:
  sub_628910((char **)a1 + 292, v53, v50, (char *)v48, 1u);
LABEL_72:
  if ( ptr )
  {
    *(_QWORD *)&v81 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 1;
}
