__int64 **__fastcall sub_1007410(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, void **a5)
{
  void **v5; // r13
  __int64 **v6; // r12
  void *v7; // rax
  size_t v8; // rdx
  const __m128i *v10; // rbx
  __int64 v11; // rax
  __m128i *v12; // r14
  __m128i *v13; // rbp
  const void *v14; // r15
  size_t v15; // r12
  __m128i *v16; // r13
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rbx
  size_t v23; // rdx
  const void *v24; // rsi
  const void *v25; // rdi
  __int64 **v26; // rbx
  size_t **v27; // r15
  size_t *v28; // rbx
  size_t v29; // r13
  const void *v30; // rbx
  char *v31; // rbp
  char *v32; // r14
  _QWORD **v33; // rbp
  __int64 v34; // r13
  _QWORD **v35; // rbx
  void *v36; // rbp
  void **v37; // r14
  size_t v38; // r12
  size_t v39; // rdx
  int v40; // eax
  size_t v41; // rbp
  size_t v42; // rdx
  int v43; // eax
  __int64 *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __int64 **ptr; // [rsp+8h] [rbp-180h]
  void *ptra; // [rsp+8h] [rbp-180h]
  size_t v49; // [rsp+10h] [rbp-178h]
  void **v50; // [rsp+18h] [rbp-170h]
  __m128i v51; // [rsp+20h] [rbp-168h] BYREF
  void **v52; // [rsp+30h] [rbp-158h]
  void *v53; // [rsp+38h] [rbp-150h]
  __int64 **v54; // [rsp+40h] [rbp-148h]
  __int64 **v55; // [rsp+48h] [rbp-140h]
  void **v56; // [rsp+50h] [rbp-138h]
  __int64 v57; // [rsp+58h] [rbp-130h]
  void *v58; // [rsp+60h] [rbp-128h] BYREF
  size_t v59; // [rsp+68h] [rbp-120h]
  char v60; // [rsp+70h] [rbp-118h]
  __int64 v61; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v62; // [rsp+88h] [rbp-100h]
  void *v63; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-B0h]
  char v65; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+120h] [rbp-68h] BYREF
  int v67; // [rsp+128h] [rbp-60h] BYREF
  void *v68; // [rsp+130h] [rbp-58h]
  int *v69; // [rsp+138h] [rbp-50h]
  int *v70; // [rsp+140h] [rbp-48h]
  __int64 v71; // [rsp+148h] [rbp-40h]

  v5 = a5;
  v6 = (__int64 **)a1;
  sub_1005BF0((__int64)&v58, a3, a4, a5);
  if ( !v60 )
    goto LABEL_4;
  if ( (unsigned int)(*(_DWORD *)(a2 + 32) - 25) > 1 )
  {
    v49 = v59;
    v53 = v58;
    if ( !v59 )
      goto LABEL_4;
  }
  else
  {
    v7 = (void *)sub_228D1A0(a2, v58, v59);
    v49 = v8;
    v53 = v7;
    if ( !v8 )
    {
LABEL_4:
      *(_BYTE *)(a1 + 16) = 0;
      return v6;
    }
  }
  v54 = (__int64 **)&v61;
  sub_10059A0((__int64)&v61, a2, v53, v49);
  v10 = (const __m128i *)v61;
  v52 = &v63;
  v67 = 0;
  v68 = nullptr;
  v63 = &v65;
  v64 = 0x400000000LL;
  ptr = (__int64 **)(v61 + 16LL * v62);
  v69 = &v67;
  v70 = &v67;
  v71 = 0;
  if ( (__int64 **)v61 == ptr )
    goto LABEL_36;
  v55 = (__int64 **)a1;
  v11 = 0;
  v56 = v5;
  while ( 1 )
  {
    if ( v11 )
      goto LABEL_30;
    v12 = (__m128i *)v63;
    v51.m128i_i64[0] = (unsigned int)v64;
    v13 = (__m128i *)((char *)v63 + 16 * (unsigned int)v64);
    if ( v63 != v13 )
      break;
    if ( v51.m128i_i64[0] > 3uLL )
    {
LABEL_29:
      LODWORD(v64) = 0;
LABEL_30:
      sub_1007320((__int64)&v66, (__int64)v10);
      goto LABEL_31;
    }
LABEL_81:
    v45 = _mm_loadu_si128(v10);
    v46 = v51.m128i_i64[0] + 1;
    if ( v51.m128i_i64[0] + 1 > (unsigned __int64)HIDWORD(v64) )
    {
      v51 = v45;
      sub_22134E0(v52, v52 + 2, v46, 16);
      v45 = _mm_load_si128(&v51);
      v13 = (__m128i *)((char *)v63 + 16 * (unsigned int)v64);
    }
    *v13 = v45;
    LODWORD(v64) = v64 + 1;
LABEL_31:
    if ( ptr == (__int64 **)++v10 )
      goto LABEL_35;
LABEL_32:
    v11 = v71;
  }
  v14 = (const void *)v10->m128i_i64[0];
  v15 = v10->m128i_u64[1];
  v16 = (__m128i *)v63;
  while ( v16->m128i_i64[1] != v15 || v15 && memcmp((const void *)v16->m128i_i64[0], v14, v15) )
  {
    if ( v13 == ++v16 )
      goto LABEL_16;
  }
  if ( v16 == v13 )
  {
LABEL_16:
    if ( v51.m128i_i64[0] <= 3uLL )
      goto LABEL_81;
    v51.m128i_i64[0] = (__int64)v10;
    v17 = v52 + 11;
    do
    {
      v20 = sub_9D21F0(&v66, v17, (const void **)v12);
      v22 = v21;
      if ( v21 )
      {
        if ( !v20 && v21 != v17 )
        {
          v23 = v21[5];
          if ( v12->m128i_i64[1] <= v23 )
            v23 = v12->m128i_u64[1];
          if ( v23 )
          {
            v24 = (const void *)v22[4];
            v25 = (const void *)v12->m128i_i64[0];
            v57 = v12->m128i_i64[1];
            memcmp(v25, v24, v23);
          }
        }
        v18 = operator new(0x30u);
        v19 = v12->m128i_i64[1];
        *(_QWORD *)(v18 + 32) = v12->m128i_i64[0];
        *(_QWORD *)(v18 + 40) = v19;
        std::_Rb_tree_insert_and_rebalance();
        ++v71;
      }
      ++v12;
    }
    while ( v13 != v12 );
    v10 = (const __m128i *)v51.m128i_i64[0];
    goto LABEL_29;
  }
  if ( ptr != (__int64 **)++v10 )
    goto LABEL_32;
LABEL_35:
  v6 = v55;
  v5 = v56;
  ptr = (__int64 **)v61;
LABEL_36:
  if ( ptr != v54 + 2 )
    free(ptr);
  v26 = v54;
  sub_1005BB0(v54, (__int64 *)*v5, *((_DWORD *)v5 + 2) == 0);
  v27 = (size_t **)v61;
  sub_1005BB0(v26, (__int64 *)*v5 + *((unsigned int *)v5 + 2), 1);
  v51.m128i_i64[0] = v61;
  if ( v27 == (size_t **)v61 )
  {
    ptra = v68;
    goto LABEL_75;
  }
  v28 = *v27;
  v54 = v6;
  ptra = v68;
  v50 = v52 + 11;
  while ( 1 )
  {
    v29 = *v28;
    v30 = v28 + 2;
    if ( v71 )
      break;
    v31 = (char *)v63;
    v32 = (char *)v63 + 16 * (unsigned int)v64;
    if ( v63 == v32 )
      goto LABEL_46;
    while ( v29 != *((_QWORD *)v31 + 1) || v29 && memcmp(*(const void **)v31, v30, v29) )
    {
      v31 += 16;
      if ( v32 == v31 )
        goto LABEL_46;
    }
    if ( v32 == v31 )
      goto LABEL_46;
LABEL_69:
    v28 = v27[1];
    ++v27;
    if ( !v28 || v28 == (size_t *)-8LL )
    {
      do
      {
        do
          v28 = *++v27;
        while ( *v27 == (size_t *)-8LL );
      }
      while ( !v28 );
    }
    if ( v27 == (size_t **)v51.m128i_i64[0] )
    {
      v6 = v54;
LABEL_75:
      v44 = (__int64 *)v53;
      *((_BYTE *)v6 + 16) = 1;
      *v6 = v44;
      v6[1] = (__int64 *)v49;
      goto LABEL_47;
    }
  }
  v36 = ptra;
  if ( !ptra )
    goto LABEL_46;
  v37 = v50;
  while ( 2 )
  {
    while ( 2 )
    {
      v38 = *((_QWORD *)v36 + 5);
      v39 = v38;
      if ( v29 <= v38 )
        v39 = v29;
      if ( !v39 || (v40 = memcmp(*((const void **)v36 + 4), v30, v39)) == 0 )
      {
        if ( v29 == v38 || v29 <= v38 )
        {
          v37 = (void **)v36;
          v36 = *((void **)v36 + 2);
          goto LABEL_61;
        }
        goto LABEL_53;
      }
      if ( v40 < 0 )
      {
LABEL_53:
        v36 = *((void **)v36 + 3);
        if ( !v36 )
          goto LABEL_62;
        continue;
      }
      break;
    }
    v37 = (void **)v36;
    v36 = *((void **)v36 + 2);
LABEL_61:
    if ( v36 )
      continue;
    break;
  }
LABEL_62:
  if ( v37 != v50 )
  {
    v41 = (size_t)v37[5];
    v42 = v41;
    if ( v29 <= v41 )
      v42 = v29;
    if ( v42 && (v43 = memcmp(v30, v37[4], v42)) != 0 )
    {
      if ( v43 >= 0 )
        goto LABEL_69;
    }
    else if ( v29 == v41 || v29 >= v41 )
    {
      goto LABEL_69;
    }
  }
LABEL_46:
  v6 = v54;
  *((_BYTE *)v54 + 16) = 0;
LABEL_47:
  v33 = (_QWORD **)ptra;
  v34 = (__int64)(v52 + 10);
  if ( ptra )
  {
    do
    {
      sub_9C9C90(v34, v33[3]);
      v35 = (_QWORD **)v33[2];
      operator delete(v33);
      v33 = v35;
    }
    while ( v35 );
  }
  if ( v63 != v52 + 2 )
    free(v63);
  return v6;
}

