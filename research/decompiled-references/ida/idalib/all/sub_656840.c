__int64 __fastcall sub_656840(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v11; // eax
  unsigned __int64 v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int *i; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  int v20; // edx
  unsigned int *v21; // rdi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // rsi
  size_t v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // rbx
  int v37; // eax
  __int64 v39; // rax
  char *v40; // rsi
  __int64 v41; // rdx
  char *v42; // r8
  __int64 v43; // rsi
  __int64 *v44; // rdi
  unsigned int v45; // ecx
  int v46; // eax
  size_t v47; // rsi
  char *v48; // rdx
  char *v49; // rdi
  unsigned int v50; // ecx
  int v51; // esi
  __int64 v52; // rbx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdi
  char *v57; // r13
  size_t v58; // r12
  __int64 v59; // r13
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // r12
  __m128i v63; // xmm2
  int v64; // r12d
  int *v65; // rax
  const char *v66; // r12
  size_t v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  const char *v70; // r13
  size_t v71; // r12
  char *v72; // r13
  size_t v73; // r12
  char *v74; // r13
  size_t v75; // r12
  char *v76; // r13
  size_t v77; // r12
  _QWORD *v78; // r13
  void *v79; // rax
  size_t v80; // rdx
  unsigned int v82; // [rsp+18h] [rbp-208h]
  unsigned int v83; // [rsp+1Ch] [rbp-204h]
  __m128i v84; // [rsp+20h] [rbp-200h] BYREF
  size_t n; // [rsp+30h] [rbp-1F0h]
  unsigned __int8 *v86; // [rsp+38h] [rbp-1E8h]
  __int64 *v87; // [rsp+40h] [rbp-1E0h]
  _QWORD *v88; // [rsp+48h] [rbp-1D8h]
  __int64 v89; // [rsp+50h] [rbp-1D0h]
  int *v90; // [rsp+58h] [rbp-1C8h]
  void *v91; // [rsp+60h] [rbp-1C0h]
  char *v92; // [rsp+68h] [rbp-1B8h]
  __int64 v93; // [rsp+70h] [rbp-1B0h]
  size_t v94; // [rsp+78h] [rbp-1A8h]
  __int64 v95; // [rsp+88h] [rbp-198h] BYREF
  char *s; // [rsp+90h] [rbp-190h] BYREF
  char *v97; // [rsp+98h] [rbp-188h] BYREF
  char *v98; // [rsp+A0h] [rbp-180h] BYREF
  char *v99; // [rsp+A8h] [rbp-178h] BYREF
  void *src; // [rsp+B0h] [rbp-170h] BYREF
  __m128i v101; // [rsp+B8h] [rbp-168h] BYREF
  void *v102; // [rsp+D0h] [rbp-150h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-148h]
  void *v104; // [rsp+F0h] [rbp-130h] BYREF
  __int128 v105; // [rsp+F8h] [rbp-128h]
  void *v106; // [rsp+110h] [rbp-110h] BYREF
  __int128 v107; // [rsp+118h] [rbp-108h]
  void *v108; // [rsp+130h] [rbp-F0h] BYREF
  __int128 v109; // [rsp+138h] [rbp-E8h]
  void *v110; // [rsp+150h] [rbp-D0h] BYREF
  __int128 v111; // [rsp+158h] [rbp-C8h]
  void *ptr[4]; // [rsp+170h] [rbp-B0h] BYREF
  __int64 v113; // [rsp+190h] [rbp-90h] BYREF
  int v114; // [rsp+198h] [rbp-88h] BYREF
  _QWORD *v115; // [rsp+1A0h] [rbp-80h]
  int *v116; // [rsp+1A8h] [rbp-78h]
  int *v117; // [rsp+1B0h] [rbp-70h]
  __int64 v118; // [rsp+1B8h] [rbp-68h]
  __int128 v119; // [rsp+1C0h] [rbp-60h] BYREF
  __m128i v120; // [rsp+1D0h] [rbp-50h]
  unsigned __int64 v121; // [rsp+1E8h] [rbp-38h]

  v87 = a1;
  v93 = a2;
  v121 = __readfsqword(0x28u);
  reset_undo();
  if ( !a2 )
    v93 = v87[1];
  v5 = *(_QWORD *)(v93 + 64);
  v6 = *(_DWORD *)(v5 + 8);
  v88 = (_QWORD *)v5;
  LODWORD(v94) = v6;
  v7 = v6 & 2;
  if ( (v6 & 2) == 0 )
    return v7;
  v8 = *(_DWORD *)(v5 + 48);
  if ( !a3 )
    a3 = 1;
  v82 = *(_DWORD *)(v5 + 48);
  if ( a3 >= v8 )
    return 0;
  v114 = 0;
  v9 = 0;
  v115 = nullptr;
  v118 = 0;
  v10 = *(_QWORD *)(v5 + 40);
  v116 = &v114;
  v117 = &v114;
  do
  {
    if ( *(_DWORD *)(v10 + 4 * v9) + 0x80000000 <= 0x7FFFFFFE )
    {
      if ( v9 )
      {
        v11 = sub_64BE30((__int64)v87, v93, v9);
        if ( v11 >= a3 )
        {
          LODWORD(ptr[0]) = v11;
          sub_656720(&v113, (int *)ptr);
        }
      }
    }
    ++v9;
  }
  while ( a3 != v9 );
  v101 = 0;
  v12 = v8 - a3;
  src = nullptr;
  v13 = (_DWORD *)qvector_reserve(&src, 0, v82 - a3, 4);
  v16 = v101.m128i_i64[0];
  src = v13;
  if ( v101.m128i_i64[0] < v12 )
  {
    do
    {
      v13[v16++] = 0;
      v13 = src;
    }
    while ( v12 != v16 );
  }
  v101.m128i_i64[0] = v12;
  for ( i = v116; i != &v114; v13 = src )
  {
    v13[i[8] - a3] = i[8];
    i = (int *)std::_Rb_tree_increment(i);
  }
  v102 = nullptr;
  v18 = v10 + 4 * v9;
  v83 = a3;
  v94 = 0;
  v103 = 0;
  v19 = v82 - a3 - 1;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v18 + 4 * v94);
    if ( v20 == -1 )
      goto LABEL_24;
    v21 = &v13[v94];
    if ( *v21 )
      goto LABEL_24;
    if ( v20 < 0 )
      break;
    v22 = v83;
    v23 = v83 + 1 - a3;
    if ( v13[v83 - a3] == v83 )
    {
      do
      {
        v24 = v23;
        ++v22;
        ++v23;
      }
      while ( v13[v24] == v22 );
    }
    *v21 = v22;
    v83 = v22 + 1;
    v13 = src;
LABEL_24:
    v25 = v94 + 1;
    if ( v19 == v94 )
      goto LABEL_46;
LABEL_25:
    v94 = v25;
  }
  v39 = v103;
  v40 = (char *)v102;
  v41 = v103 + 1;
  if ( *((_QWORD *)&v103 + 1) < (unsigned __int64)(v103 + 1) )
  {
    v102 = (void *)qvector_reserve(&v102, v102, v41, 8);
    v40 = (char *)v102;
    v39 = v103;
    v41 = v103 + 1;
  }
  v42 = &v40[8 * v39];
  *(_QWORD *)&v103 = v41;
  v43 = v93;
  v44 = v87;
  v92 = v42;
  v45 = a3 + v94;
  *(_DWORD *)v42 = a3 + v94;
  v46 = sub_64BE30((__int64)v44, v43, v45);
  v14 = (__int64)v92;
  v47 = v94;
  *((_DWORD *)v92 + 1) = v46;
  v25 = v47 + 1;
  v13 = src;
  if ( v19 != v47 )
    goto LABEL_25;
LABEL_46:
  v48 = (char *)v102;
  v49 = (char *)v102 + 8 * v103;
  if ( v49 != v102 )
  {
    do
    {
      v50 = *((_DWORD *)v48 + 1);
      if ( v50 >= a3 )
        v50 = v13[v50 - a3];
      v51 = *(_DWORD *)v48;
      v48 += 8;
      v13[v51 - a3] = v50;
      v13 = src;
    }
    while ( v48 != v49 );
  }
  v27 = v82;
  v28 = a3;
  do
  {
    if ( *v13 != (_DWORD)v28 )
      break;
    v28 = (unsigned int)(v28 + 1);
    ++v13;
  }
  while ( (unsigned int)v28 < v82 );
  if ( v82 == (_DWORD)v28 )
  {
    v7 = 0;
    goto LABEL_36;
  }
  v89 = v82;
  v52 = 1;
  LODWORD(v95) = 1;
  v84 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B37278), (__m128i)(unsigned __int64)sub_647300);
  while ( 2 )
  {
    LODWORD(v94) = v52;
    v54 = *(unsigned int *)(v10 + 4 * v52);
    if ( (unsigned int)v52 < a3 )
    {
      if ( (int)v54 >= 0 )
      {
        LODWORD(v92) = v52;
LABEL_61:
        v90 = (int *)(v88[4] + v54);
        v55 = v93;
        if ( !v93 )
          v55 = v87[1];
        v56 = sub_64DE20(v55, (unsigned int)v94);
        if ( !v56 )
        {
          if ( !under_debugger )
            interr(701);
LABEL_115:
          BUG();
        }
        v86 = (unsigned __int8 *)&v95 + 4;
        sub_6474E0(
          v56,
          (const char **)&s,
          (unsigned __int64)&v97,
          (unsigned __int64)&v98,
          (unsigned __int64)&v99,
          (unsigned __int64)&v95 + 4);
        v57 = s;
        v104 = nullptr;
        v105 = 0;
        if ( s )
        {
          v58 = strlen(s);
          v91 = (void *)(v58 + 1);
          v104 = (void *)qvector_reserve(&v104, 0, v58 + 1, 1);
          *(_QWORD *)&v105 = v91;
          memmove(v104, v57, v58);
          *((_BYTE *)v104 + v58) = 0;
        }
        v59 = v101.m128i_i64[0];
        if ( v101.m128i_i64[0] )
        {
          v91 = (void *)qalloc_or_throw(4 * v101.m128i_i64[0]);
          memcpy(v91, src, 4 * v59);
        }
        else
        {
          v91 = nullptr;
        }
        v120 = 0u;
        v119 = 0;
        v60 = operator new(0x20u);
        *(_QWORD *)v60 = 0;
        v62 = v60;
        *(_OWORD *)(v60 + 8) = 0;
        if ( v59 )
        {
          n = 4 * v59;
          v79 = (void *)qalloc_or_throw(4 * v59);
          *(_QWORD *)v62 = v79;
          v80 = n;
          *(_QWORD *)(v62 + 16) = v59;
          memcpy(v79, v91, v80);
          *(_QWORD *)(v62 + 8) = v59;
        }
        *(_DWORD *)(v62 + 24) = a3;
        *(_QWORD *)&v119 = v62;
        v63 = _mm_load_si128(&v84);
        n = (size_t)ptr;
        v120 = v63;
        *(__m128i *)ptr = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_2B37280),
                            (__m128i)(unsigned __int64)&v119);
        v64 = sub_650CF0(v93, (__int64)ptr, (__m128i *)&v104, nullptr, 0, v61);
        if ( v120.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v120.m128i_i64[0])(&v119, &v119, 3);
        if ( v91 )
          qfree(v91);
        if ( v64 > 0 )
        {
          v68 = v93;
          if ( !v93 )
            v68 = v87[1];
          v69 = sub_64DE20(v68, (unsigned int)v94);
          if ( v69 )
          {
            if ( *(_BYTE *)(v69 + 4) != 35 || *(_BYTE *)(v69 + 5) )
            {
              v106 = nullptr;
              v70 = (const char *)(v69 + 4);
              v107 = 0;
            }
            else
            {
              v70 = (const char *)(v69 + 5);
              v106 = nullptr;
              v107 = 0;
            }
            v71 = strlen(v70);
            v94 = v71 + 1;
            v106 = (void *)qvector_reserve(&v106, 0, v71 + 1, 1);
            *(_QWORD *)&v107 = v94;
            memmove(v106, v70, v71);
            *((_BYTE *)v106 + v71) = 0;
          }
          else
          {
            v106 = nullptr;
            v107 = 0;
          }
          v72 = v97;
          v108 = nullptr;
          v109 = 0;
          if ( v97 )
          {
            v73 = strlen(v97);
            v94 = v73 + 1;
            v108 = (void *)qvector_reserve(&v108, 0, v73 + 1, 1);
            *(_QWORD *)&v109 = v94;
            memmove(v108, v72, v73);
            *((_BYTE *)v108 + v73) = 0;
          }
          v74 = v98;
          v110 = nullptr;
          v111 = 0;
          if ( v98 )
          {
            v75 = strlen(v98);
            v94 = v75 + 1;
            v110 = (void *)qvector_reserve(&v110, 0, v75 + 1, 1);
            *(_QWORD *)&v111 = v94;
            memmove(v110, v74, v75);
            *((_BYTE *)v110 + v75) = 0;
          }
          v76 = v99;
          memset(ptr, 0, 24);
          if ( v99 )
          {
            v77 = strlen(v99);
            v94 = v77 + 1;
            ptr[0] = (void *)qvector_reserve(n, 0, v77 + 1, 1);
            ptr[1] = (void *)v94;
            memmove(ptr[0], v76, v77);
            *((_BYTE *)ptr[0] + v77) = 0;
          }
          sub_6507E0(v87, v88, (__int64)v90, 1);
          v78 = v88;
          v90 = sub_64DC80(
                  v87,
                  (__int64)v88,
                  (char *)v106,
                  (char *)v104,
                  (char *)v108,
                  (char *)v110,
                  (char *)ptr[0],
                  v86,
                  &v95,
                  0);
          *(_DWORD *)(v10 + 4 * v52) = (_DWORD)v90 - *((_DWORD *)v78 + 8);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
          }
          if ( v110 )
          {
            *(_QWORD *)&v111 = 0;
            qfree(v110);
          }
          if ( v108 )
          {
            *(_QWORD *)&v109 = 0;
            qfree(v108);
          }
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            qfree(v106);
          }
        }
        if ( (_DWORD)v92 != (_DWORD)v52 )
        {
          if ( !(_DWORD)v92
            || (unsigned int)v92 >= (unsigned int)v52
            || (v65 = (int *)(v10 + 4LL * (unsigned int)v92), *v65 >= 0) )
          {
            if ( !under_debugger )
              interr(702);
            goto LABEL_115;
          }
          v66 = (const char *)v90;
          *v65 = *(_DWORD *)(v10 + 4 * v52);
          v66 += 4;
          *(_DWORD *)(v10 + 4 * v52) = -1;
          v67 = strlen(v66);
          *(_DWORD *)&v66[v67 + 1] = (_DWORD)v92;
        }
        if ( v104 )
        {
          *(_QWORD *)&v105 = 0;
          qfree(v104);
        }
      }
    }
    else if ( (_DWORD)v54 != -1 )
    {
      if ( (int)v54 >= 0 )
      {
        LODWORD(v92) = *((_DWORD *)src + (unsigned int)v94 - a3);
        goto LABEL_61;
      }
      *(_DWORD *)(v10 + 4 * v52) = -1;
    }
    v53 = v52++;
    LODWORD(v95) = v53 + 1;
    if ( v52 != v89 )
      continue;
    break;
  }
  if ( v118 )
  {
    v26 = *(_DWORD *)(std::_Rb_tree_decrement(&v114) + 32);
    v28 = v26 + 1;
    if ( v26 < v83 )
      v28 = v83;
    v83 = v28;
  }
  v29 = v88;
  *((_DWORD *)v88 + 12) = v83;
  *(_DWORD *)(v93 + 32) |= 0x40u;
  if ( !sub_64B100((__int64)v29, 1, v28, v27, v14, v15) )
  {
    if ( !under_debugger )
      interr(703);
    goto LABEL_115;
  }
  sub_547940((__int64)v87, v93, (int *)&src, a3);
  sub_52D1C0(0, a3, (__int64)&src, v30, v31, v32, (char)&src);
  if ( a4 )
  {
    v33 = *(void **)a4;
    v34 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    v35 = _mm_loadu_si128(&v101);
    *(_QWORD *)a4 = src;
    src = v33;
    *(__m128i *)(a4 + 8) = v35;
    v101 = v34;
  }
  v36 = *(_QWORD *)(*v87 + 1672);
  v37 = *(_DWORD *)(v36 + 2608) + 1;
  if ( *(_DWORD *)(v36 + 2608) == -1 )
    v37 = 1;
  *(_DWORD *)(v36 + 2608) = v37;
  mark_builtin_widgets(1024, 0, 1);
  sub_6B8D40(v36);
  sub_39ADA0(0x48u, 8, 0, 0);
  v7 = v82 - v83;
LABEL_36:
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(v102);
  }
  if ( src )
  {
    v101.m128i_i64[0] = 0;
    qfree(src);
  }
  sub_6486E0(v115);
  return v7;
}
