__int64 **__fastcall sub_102B150(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, void **a5)
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
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rbx
  size_t v24; // rcx
  size_t v25; // r13
  size_t v26; // rdx
  const void *v27; // rsi
  const void *v28; // rdi
  int v29; // eax
  __int64 **v30; // rbx
  size_t **v31; // r15
  size_t *v32; // rbx
  size_t v33; // r13
  const void *v34; // rbx
  char *v35; // rbp
  char *v36; // r14
  _QWORD **v37; // rbp
  __int64 v38; // r13
  _QWORD **v39; // rbx
  void *v40; // rbp
  void **v41; // r14
  size_t v42; // r12
  size_t v43; // rdx
  int v44; // eax
  size_t v45; // rbp
  size_t v46; // rdx
  int v47; // eax
  __int64 *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __int64 **ptr; // [rsp+8h] [rbp-180h]
  void *ptra; // [rsp+8h] [rbp-180h]
  size_t v53; // [rsp+10h] [rbp-178h]
  void **v54; // [rsp+18h] [rbp-170h]
  __m128i v55; // [rsp+20h] [rbp-168h] BYREF
  void **v56; // [rsp+30h] [rbp-158h]
  void *v57; // [rsp+38h] [rbp-150h]
  __int64 **v58; // [rsp+40h] [rbp-148h]
  __int64 **v59; // [rsp+48h] [rbp-140h]
  void **v60; // [rsp+50h] [rbp-138h]
  size_t v61; // [rsp+58h] [rbp-130h]
  void *v62; // [rsp+60h] [rbp-128h] BYREF
  size_t v63; // [rsp+68h] [rbp-120h]
  char v64; // [rsp+70h] [rbp-118h]
  __int64 v65; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v66; // [rsp+88h] [rbp-100h]
  void *v67; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-B0h]
  char v69; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+120h] [rbp-68h] BYREF
  int v71; // [rsp+128h] [rbp-60h] BYREF
  void *v72; // [rsp+130h] [rbp-58h]
  int *v73; // [rsp+138h] [rbp-50h]
  int *v74; // [rsp+140h] [rbp-48h]
  __int64 v75; // [rsp+148h] [rbp-40h]

  v5 = a5;
  v6 = (__int64 **)a1;
  sub_1029930((__int64)&v62, a3, a4, a5);
  if ( !v64 )
    goto LABEL_4;
  if ( (unsigned int)(*(_DWORD *)(a2 + 32) - 25) > 1 )
  {
    v53 = v63;
    v57 = v62;
    if ( !v63 )
      goto LABEL_4;
  }
  else
  {
    v7 = (void *)sub_22B0EE0(a2, v62, v63);
    v53 = v8;
    v57 = v7;
    if ( !v8 )
    {
LABEL_4:
      *(_BYTE *)(a1 + 16) = 0;
      return v6;
    }
  }
  v58 = (__int64 **)&v65;
  sub_10296E0((__int64)&v65, a2, v57, v53);
  v10 = (const __m128i *)v65;
  v56 = &v67;
  v71 = 0;
  v72 = nullptr;
  v67 = &v69;
  v68 = 0x400000000LL;
  ptr = (__int64 **)(v65 + 16LL * v66);
  v73 = &v71;
  v74 = &v71;
  v75 = 0;
  if ( (__int64 **)v65 == ptr )
    goto LABEL_39;
  v59 = (__int64 **)a1;
  v11 = 0;
  v60 = v5;
  while ( 1 )
  {
    if ( v11 )
      goto LABEL_33;
    v12 = (__m128i *)v67;
    v55.m128i_i64[0] = (unsigned int)v68;
    v13 = (__m128i *)((char *)v67 + 16 * (unsigned int)v68);
    if ( v67 != v13 )
      break;
    if ( v55.m128i_i64[0] > 3uLL )
    {
LABEL_32:
      LODWORD(v68) = 0;
LABEL_33:
      sub_102B060((__int64)&v70, (__int64)v10);
      goto LABEL_34;
    }
LABEL_84:
    v49 = _mm_loadu_si128(v10);
    v50 = v55.m128i_i64[0] + 1;
    if ( v55.m128i_i64[0] + 1 > (unsigned __int64)HIDWORD(v68) )
    {
      v55 = v49;
      sub_2237220(v56, v56 + 2, v50, 16);
      v49 = _mm_load_si128(&v55);
      v13 = (__m128i *)((char *)v67 + 16 * (unsigned int)v68);
    }
    *v13 = v49;
    LODWORD(v68) = v68 + 1;
LABEL_34:
    if ( ptr == (__int64 **)++v10 )
      goto LABEL_38;
LABEL_35:
    v11 = v75;
  }
  v14 = (const void *)v10->m128i_i64[0];
  v15 = v10->m128i_u64[1];
  v16 = (__m128i *)v67;
  while ( v16->m128i_i64[1] != v15 || v15 && memcmp((const void *)v16->m128i_i64[0], v14, v15) )
  {
    if ( v13 == ++v16 )
      goto LABEL_16;
  }
  if ( v16 == v13 )
  {
LABEL_16:
    if ( v55.m128i_i64[0] > 3uLL )
    {
      v55.m128i_i64[0] = (__int64)v10;
      v17 = v56 + 11;
      while ( 1 )
      {
        v21 = sub_9F5F30(&v70, v17, (const void **)v12);
        v23 = v22;
        if ( !v22 )
          goto LABEL_20;
        if ( !v21 && v22 != v17 )
        {
          v24 = v12->m128i_u64[1];
          v26 = v22[5];
          v25 = v26;
          if ( v24 <= v26 )
            v26 = v12->m128i_u64[1];
          if ( v26
            && (v27 = (const void *)v23[4],
                v28 = (const void *)v12->m128i_i64[0],
                v61 = v12->m128i_u64[1],
                v29 = memcmp(v28, v27, v26),
                v24 = v61,
                v29) )
          {
            if ( v29 >= 0 )
              goto LABEL_30;
          }
          else if ( v24 == v25 || v24 >= v25 )
          {
LABEL_30:
            v18 = 0;
            goto LABEL_19;
          }
        }
        v18 = 1;
LABEL_19:
        v19 = operator new(0x30u);
        v20 = v12->m128i_i64[1];
        *(_QWORD *)(v19 + 32) = v12->m128i_i64[0];
        *(_QWORD *)(v19 + 40) = v20;
        std::_Rb_tree_insert_and_rebalance(v18, v19, v23, v17);
        ++v75;
LABEL_20:
        if ( v13 == ++v12 )
        {
          v10 = (const __m128i *)v55.m128i_i64[0];
          goto LABEL_32;
        }
      }
    }
    goto LABEL_84;
  }
  if ( ptr != (__int64 **)++v10 )
    goto LABEL_35;
LABEL_38:
  v6 = v59;
  v5 = v60;
  ptr = (__int64 **)v65;
LABEL_39:
  if ( ptr != v58 + 2 )
    free(ptr);
  v30 = v58;
  sub_10298F0(v58, (__int64 *)*v5, *((_DWORD *)v5 + 2) == 0);
  v31 = (size_t **)v65;
  sub_10298F0(v30, (__int64 *)*v5 + *((unsigned int *)v5 + 2), 1);
  v55.m128i_i64[0] = v65;
  if ( v31 == (size_t **)v65 )
  {
    ptra = v72;
    goto LABEL_78;
  }
  v32 = *v31;
  v58 = v6;
  ptra = v72;
  v54 = v56 + 11;
  while ( 1 )
  {
    v33 = *v32;
    v34 = v32 + 2;
    if ( v75 )
      break;
    v35 = (char *)v67;
    v36 = (char *)v67 + 16 * (unsigned int)v68;
    if ( v67 == v36 )
      goto LABEL_49;
    while ( v33 != *((_QWORD *)v35 + 1) || v33 && memcmp(*(const void **)v35, v34, v33) )
    {
      v35 += 16;
      if ( v36 == v35 )
        goto LABEL_49;
    }
    if ( v36 == v35 )
      goto LABEL_49;
LABEL_72:
    v32 = v31[1];
    ++v31;
    if ( !v32 || v32 == (size_t *)-8LL )
    {
      do
      {
        do
          v32 = *++v31;
        while ( *v31 == (size_t *)-8LL );
      }
      while ( !v32 );
    }
    if ( v31 == (size_t **)v55.m128i_i64[0] )
    {
      v6 = v58;
LABEL_78:
      v48 = (__int64 *)v57;
      *((_BYTE *)v6 + 16) = 1;
      *v6 = v48;
      v6[1] = (__int64 *)v53;
      goto LABEL_50;
    }
  }
  v40 = ptra;
  if ( !ptra )
    goto LABEL_49;
  v41 = v54;
  while ( 2 )
  {
    while ( 2 )
    {
      v42 = *((_QWORD *)v40 + 5);
      v43 = v42;
      if ( v33 <= v42 )
        v43 = v33;
      if ( !v43 || (v44 = memcmp(*((const void **)v40 + 4), v34, v43)) == 0 )
      {
        if ( v33 == v42 || v33 <= v42 )
        {
          v41 = (void **)v40;
          v40 = *((void **)v40 + 2);
          goto LABEL_64;
        }
        goto LABEL_56;
      }
      if ( v44 < 0 )
      {
LABEL_56:
        v40 = *((void **)v40 + 3);
        if ( !v40 )
          goto LABEL_65;
        continue;
      }
      break;
    }
    v41 = (void **)v40;
    v40 = *((void **)v40 + 2);
LABEL_64:
    if ( v40 )
      continue;
    break;
  }
LABEL_65:
  if ( v41 != v54 )
  {
    v45 = (size_t)v41[5];
    v46 = v45;
    if ( v33 <= v45 )
      v46 = v33;
    if ( v46 && (v47 = memcmp(v34, v41[4], v46)) != 0 )
    {
      if ( v47 >= 0 )
        goto LABEL_72;
    }
    else if ( v33 == v45 || v33 >= v45 )
    {
      goto LABEL_72;
    }
  }
LABEL_49:
  v6 = v58;
  *((_BYTE *)v58 + 16) = 0;
LABEL_50:
  v37 = (_QWORD **)ptra;
  v38 = (__int64)(v56 + 10);
  if ( ptra )
  {
    do
    {
      sub_9ED9D0(v38, v37[3]);
      v39 = (_QWORD **)v37[2];
      operator delete(v37);
      v37 = v39;
    }
    while ( v39 );
  }
  if ( v67 != v56 + 2 )
    free(v67);
  return v6;
}
