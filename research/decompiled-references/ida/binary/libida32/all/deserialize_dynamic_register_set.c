unsigned __int64 __fastcall deserialize_dynamic_register_set(__int64 *a1, const char **a2)
{
  void *v3; // rdi
  char *v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  char *v8; // rax
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // rsi
  __int64 v12; // r12
  __int64 j; // rbp
  char *v14; // rax
  void *v15; // rdi
  unsigned int v17; // eax
  __int64 v18; // r12
  char *k; // rbp
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  const char *v23; // r13
  const char *v24; // rax
  char *v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // r11
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  size_t v40; // rax
  size_t v41; // r12
  void *v42; // rdi
  size_t v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r12
  __int64 v47; // rax
  void *v48; // rdi
  __int64 *v49; // r14
  unsigned int v50; // eax
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rax
  const char *v53; // rsi
  __int64 v54; // rbp
  const char *v55; // r9
  const char *v56; // rax
  char *v57; // r12
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rdx
  const char **v65; // r14
  const char *v66; // r9
  const char *v67; // rax
  const char *v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rdx
  size_t v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  void *v75; // rcx
  char *v76; // rdx
  __m128i v77; // xmm0
  const char *v78; // rdx
  __int64 v79; // rax
  size_t v80; // rax
  const char *v81; // r9
  size_t v82; // r13
  void *v83; // rdi
  const char *v84; // rdx
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  char *v97; // [rsp+0h] [rbp-88h]
  const char *v98; // [rsp+0h] [rbp-88h]
  const char *v99; // [rsp+0h] [rbp-88h]
  unsigned __int64 src; // [rsp+8h] [rbp-80h]
  const char *srca; // [rsp+8h] [rbp-80h]
  const char *v102; // [rsp+10h] [rbp-78h]
  __int64 m; // [rsp+18h] [rbp-70h]
  size_t v104; // [rsp+18h] [rbp-70h]
  unsigned __int64 v105; // [rsp+20h] [rbp-68h]
  int v106; // [rsp+2Ch] [rbp-5Ch]
  void *v107; // [rsp+30h] [rbp-58h] BYREF
  __m128i v108; // [rsp+38h] [rbp-50h]
  unsigned __int64 v109; // [rsp+48h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  if ( !a1 )
    return v109 - __readfsqword(0x28u);
  v3 = (void *)*a1;
  if ( v3 )
  {
    a1[1] = 0;
    qfree(v3);
    *a1 = 0;
    a1[2] = 0;
  }
  v5 = (char *)a1[3];
  if ( v5 )
  {
    v6 = a1[4];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = &v5[24 * i];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v5);
    a1[3] = 0;
    a1[5] = 0;
  }
  v10 = (void *)a1[6];
  if ( v10 )
  {
    a1[7] = 0;
    qfree(v10);
    a1[6] = 0;
    a1[8] = 0;
  }
  v11 = (char *)a1[9];
  if ( v11 )
  {
    v12 = a1[10];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = &v11[24 * j];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          qfree(v15);
          v11 = (char *)a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v11);
    a1[9] = 0;
    a1[11] = 0;
  }
  if ( *a2 >= a2[1] )
    return v109 - __readfsqword(0x28u);
  v17 = unpack_dd(a2);
  v106 = 0;
  v18 = v17;
  if ( (~v17 & 0xFFFFFF00) == 0 )
  {
    v18 = 4294967040LL;
    v106 = (unsigned __int8)v17;
    if ( !(_BYTE)v17 )
      goto LABEL_24;
    v18 = (unsigned int)unpack_dd(a2);
  }
  if ( !v18 )
  {
    v29 = a1[7];
    v30 = a1 + 6;
    goto LABEL_35;
  }
LABEL_24:
  v97 = (char *)v18;
  for ( k = nullptr; k != v97; ++k )
  {
    v20 = a1[4];
    v21 = a1[3];
    if ( a1[5] < (unsigned __int64)(v20 + 1) )
    {
      v45 = qvector_reserve(a1 + 3, v21, v20 + 1, 24);
      v20 = a1[4];
      a1[3] = v45;
      v21 = v45;
    }
    v22 = v21 + 24 * v20;
    *(_QWORD *)v22 = 0;
    *(_OWORD *)(v22 + 8) = 0;
    ++a1[4];
    v23 = *a2;
    v24 = *a2;
    do
    {
      if ( v24 >= a2[1] )
        goto LABEL_30;
      ++v24;
    }
    while ( *(v24 - 1) );
    *a2 = v24;
    if ( !v23 || (v40 = strlen(v23), (v41 = v40) == 0) )
    {
LABEL_30:
      *(_QWORD *)(v22 + 8) = 0;
      v25 = (char *)haystack;
      goto LABEL_31;
    }
    v42 = *(void **)v22;
    v43 = v40 + 1;
    if ( *(_QWORD *)(v22 + 16) < v40 + 1 )
    {
      v104 = v40 + 1;
      v89 = qvector_reserve(v22, *(_QWORD *)v22, v43, 1);
      v43 = v104;
      *(_QWORD *)v22 = v89;
      v42 = (void *)v89;
    }
    *(_QWORD *)(v22 + 8) = v43;
    memmove(v42, v23, v41);
    *(_BYTE *)(*(_QWORD *)v22 + v41) = 0;
    if ( *(_QWORD *)(v22 + 8) )
      v25 = *(char **)v22;
    else
      v25 = (char *)haystack;
LABEL_31:
    v26 = a1[7];
    v27 = a1[8];
    v107 = v25;
    v28 = a1[6];
    if ( v27 < v26 + 1 )
    {
      v44 = qvector_reserve(a1 + 6, v28, v26 + 1, 8);
      a1[6] = v44;
      v28 = v44;
      v26 = a1[7];
    }
    *(_QWORD *)(v28 + 8 * v26) = v25;
    v29 = a1[7] + 1;
    a1[7] = v29;
  }
  v30 = a1 + 6;
LABEL_35:
  v31 = a1[8];
  v32 = a1[6];
  v107 = nullptr;
  if ( v31 < v29 + 1 )
  {
    v93 = qvector_reserve(v30, v32, v29 + 1, 8);
    a1[6] = v93;
    v32 = v93;
    v29 = a1[7];
  }
  *(_QWORD *)(v32 + 8 * v29) = 0;
  ++a1[7];
  LODWORD(v34) = unpack_dd(a2);
  v33 = a1[10];
  v34 = (unsigned int)v34;
  v105 = v34;
  if ( (unsigned int)v34 != v33 )
  {
    v107 = nullptr;
    v108 = 0;
    if ( (unsigned int)v34 >= v33 )
    {
      v35 = a1[9];
      v36 = a1 + 9;
      v37 = a1[11];
      if ( (unsigned __int64)&v107 < v35 || (unsigned __int64)&v107 >= v35 + 24 * v37 )
      {
        if ( v37 >= v105
          || (v95 = qvector_reserve(v36, v35, v105, 24), v33 = a1[10], a1[9] = v95, v35 = v95, v33 < v105) )
        {
          v90 = 24 * v33;
          while ( 1 )
          {
            v91 = v35 + v90;
            ++v33;
            v90 += 24;
            *(_QWORD *)v91 = 0;
            *(_OWORD *)(v91 + 8) = 0;
            if ( v105 == v33 )
              break;
            v35 = a1[9];
          }
        }
      }
      else if ( v37 >= v105
             || (v96 = qvector_reserve(v36, v35, v105, 24), v33 = a1[10], a1[9] = v96, v35 = v96, v33 < v105) )
      {
        v38 = 24 * v33;
        while ( 1 )
        {
          v39 = v35 + v38;
          ++v33;
          v38 += 24;
          *(_QWORD *)v39 = 0;
          *(_OWORD *)(v39 + 8) = 0;
          if ( v105 == v33 )
            break;
          v35 = a1[9];
        }
      }
      a1[10] = v105;
      goto LABEL_58;
    }
    v46 = (unsigned int)v34;
    do
    {
      v47 = a1[9] + 24 * v46;
      v48 = *(void **)v47;
      if ( *(_QWORD *)v47 )
      {
        *(_QWORD *)(v47 + 8) = 0;
        qfree(v48);
      }
      ++v46;
    }
    while ( v46 < v33 );
    a1[10] = v105;
  }
  if ( v105 )
  {
LABEL_58:
    for ( m = 0; v105 != m; ++m )
    {
      v49 = (__int64 *)(a1[9] + 24 * m);
      v50 = unpack_dd(a2);
      v107 = nullptr;
      v51 = v50;
      v52 = v49[1];
      if ( v51 < v52 )
      {
        v49[1] = v51;
LABEL_61:
        if ( !v51 )
          continue;
        goto LABEL_62;
      }
      if ( v52 >= v51 )
        goto LABEL_61;
      v85 = *v49;
      v86 = v49[2];
      if ( (unsigned __int64)&v107 < *v49 || (unsigned __int64)&v107 >= v85 + 8 * v86 )
      {
        if ( v86 >= v51 || (v92 = qvector_reserve(v49, v85, v51, 8), *v49 = v92, v85 = v92, v52 = v49[1], v52 < v51) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v85 + 8 * v52++) = 0;
            if ( v51 == v52 )
              break;
            v85 = *v49;
          }
          v49[1] = v51;
          goto LABEL_62;
        }
      }
      else if ( v86 >= v51 || (v94 = qvector_reserve(v49, v85, v51, 8), *v49 = v94, v85 = v94, v52 = v49[1], v52 < v51) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v85 + 8 * v52++) = 0;
          if ( v51 == v52 )
            break;
          v85 = *v49;
        }
      }
      v49[1] = v51;
LABEL_62:
      v53 = a2[1];
      v54 = 0;
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v55 = *a2;
            v56 = *a2;
            do
            {
              if ( v56 >= v53 )
                goto LABEL_66;
              ++v56;
            }
            while ( *(v56 - 1) );
            *a2 = v56;
            v107 = nullptr;
            v108 = 0;
            if ( !v55 )
            {
LABEL_66:
              if ( v51 != ++v54 )
                continue;
              goto LABEL_67;
            }
            break;
          }
          srca = v55;
          v71 = strlen(v55);
          v107 = (void *)qvector_reserve(&v107, 0, v71 + 1, 1);
          v108.m128i_i64[0] = v71 + 1;
          memmove(v107, srca, v71);
          *((_BYTE *)v107 + v71) = 0;
          if ( v108.m128i_i64[0] <= 1uLL )
          {
            if ( v107 )
            {
              v108.m128i_i64[0] = 0;
              qfree(v107);
            }
LABEL_96:
            ++v54;
            v53 = a2[1];
            if ( v51 != v54 )
              continue;
            goto LABEL_67;
          }
          break;
        }
        v72 = a1[4];
        v73 = a1[3];
        if ( a1[5] < (unsigned __int64)(v72 + 1) )
        {
          v79 = qvector_reserve(a1 + 3, v73, v72 + 1, 24);
          a1[3] = v79;
          v72 = a1[4];
          v73 = v79;
        }
        v74 = v73 + 24 * v72;
        *(_OWORD *)(v74 + 8) = 0;
        *(_QWORD *)v74 = 0;
        v75 = v107;
        ++a1[4];
        v76 = *(char **)v74;
        *(_QWORD *)v74 = v75;
        v77 = _mm_loadu_si128((const __m128i *)(v74 + 8));
        *(__m128i *)(v74 + 8) = v108;
        v107 = v76;
        v78 = haystack;
        v108 = v77;
        if ( *(_QWORD *)(v74 + 8) )
          v78 = *(const char **)v74;
        *(_QWORD *)(*v49 + 8 * v54) = v78;
        if ( !v107 )
          goto LABEL_96;
        v108.m128i_i64[0] = 0;
        ++v54;
        qfree(v107);
        v53 = a2[1];
        if ( v51 != v54 )
          continue;
        break;
      }
LABEL_67:
      ;
    }
  }
  v57 = nullptr;
  v58 = unpack_dd(a2);
  if ( v58 )
  {
    src = v58;
    do
    {
      v59 = a1[1];
      v60 = *a1;
      v61 = v59 + 1;
      if ( a1[2] < (unsigned __int64)(v59 + 1) )
      {
        v60 = qvector_reserve(a1, *a1, v59 + 1, 32);
        v59 = a1[1];
        *a1 = v60;
        v61 = v59 + 1;
      }
      a1[1] = v61;
      v62 = a1[3];
      v63 = v60 + 32 * v59;
      v64 = a1[4];
      if ( a1[5] < (unsigned __int64)(v64 + 1) )
      {
        v87 = qvector_reserve(a1 + 3, v62, v64 + 1, 24);
        v64 = a1[4];
        a1[3] = v87;
        v62 = v87;
      }
      v65 = (const char **)(v62 + 24 * v64);
      *v65 = nullptr;
      *(_OWORD *)(v65 + 1) = 0;
      ++a1[4];
      v66 = *a2;
      v67 = *a2;
      do
      {
        if ( v67 >= a2[1] )
          goto LABEL_77;
        ++v67;
      }
      while ( *(v67 - 1) );
      *a2 = v67;
      if ( !v66 || (v98 = v66, v80 = strlen(v66), v81 = v98, (v82 = v80) == 0) )
      {
LABEL_77:
        v65[1] = nullptr;
LABEL_78:
        v68 = haystack;
        goto LABEL_79;
      }
      v83 = (void *)*v65;
      v84 = (const char *)(v80 + 1);
      if ( (unsigned __int64)v65[2] < v80 + 1 )
      {
        v99 = (const char *)(v80 + 1);
        v102 = v81;
        v88 = qvector_reserve(v65, *v65, v84, 1);
        v81 = v102;
        v84 = v99;
        *v65 = (const char *)v88;
        v83 = (void *)v88;
      }
      v65[1] = v84;
      memmove(v83, v81, v82);
      (*v65)[v82] = 0;
      if ( !v65[1] )
        goto LABEL_78;
      v68 = *v65;
LABEL_79:
      *(_QWORD *)v63 = v68;
      *(_DWORD *)(v63 + 8) = unpack_dd(a2);
      *(_BYTE *)(v63 + 12) = unpack_dd(a2);
      *(_BYTE *)(v63 + 13) = unpack_dd(a2);
      v69 = unpack_dd(a2);
      v70 = 0;
      if ( v69 && a1[10] >= (unsigned __int64)v69 )
        v70 = *(_QWORD *)(a1[9] + 8 * (3LL * v69 - 3));
      *(_QWORD *)(v63 + 16) = v70;
      ++v57;
      *(_DWORD *)(v63 + 24) = unpack_dq(a2, a2[1]) - 1;
    }
    while ( (char *)src != v57 );
  }
  if ( v106 )
    *((_DWORD *)a1 + 24) = unpack_dd(a2);
  return v109 - __readfsqword(0x28u);
}

