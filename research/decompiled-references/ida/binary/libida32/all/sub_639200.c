__int64 __fastcall sub_639200(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
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
  const char *p_s; // rsi
  char *v58; // r13
  size_t v59; // r12
  __int64 v60; // r13
  __int64 v61; // rax
  int v62; // r9d
  __int64 v63; // r12
  __m128i v64; // xmm2
  int v65; // r12d
  int *v66; // rax
  const char *v67; // r12
  size_t v68; // rax
  void *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rax
  const char *v72; // r13
  size_t v73; // r12
  char *v74; // r13
  size_t v75; // r12
  char *v76; // r13
  size_t v77; // r12
  char *v78; // r13
  size_t v79; // r12
  _QWORD *v80; // r13
  void *v81; // rax
  size_t v82; // rdx
  unsigned int v84; // [rsp+18h] [rbp-208h]
  unsigned int v85; // [rsp+1Ch] [rbp-204h]
  __m128i v86; // [rsp+20h] [rbp-200h] BYREF
  size_t n; // [rsp+30h] [rbp-1F0h]
  unsigned __int8 *v88; // [rsp+38h] [rbp-1E8h]
  __int64 *v89; // [rsp+40h] [rbp-1E0h]
  _QWORD *v90; // [rsp+48h] [rbp-1D8h]
  __int64 v91; // [rsp+50h] [rbp-1D0h]
  int *v92; // [rsp+58h] [rbp-1C8h]
  void *v93; // [rsp+60h] [rbp-1C0h]
  char *v94; // [rsp+68h] [rbp-1B8h]
  __int64 v95; // [rsp+70h] [rbp-1B0h]
  size_t v96; // [rsp+78h] [rbp-1A8h]
  __int64 v97; // [rsp+88h] [rbp-198h] BYREF
  char *s; // [rsp+90h] [rbp-190h] BYREF
  char *v99; // [rsp+98h] [rbp-188h] BYREF
  char *v100; // [rsp+A0h] [rbp-180h] BYREF
  char *v101; // [rsp+A8h] [rbp-178h] BYREF
  void *src; // [rsp+B0h] [rbp-170h] BYREF
  __m128i v103; // [rsp+B8h] [rbp-168h] BYREF
  void *v104; // [rsp+D0h] [rbp-150h] BYREF
  __int128 v105; // [rsp+D8h] [rbp-148h]
  void *v106; // [rsp+F0h] [rbp-130h] BYREF
  __int128 v107; // [rsp+F8h] [rbp-128h]
  void *v108; // [rsp+110h] [rbp-110h] BYREF
  __int128 v109; // [rsp+118h] [rbp-108h]
  void *v110; // [rsp+130h] [rbp-F0h] BYREF
  __int128 v111; // [rsp+138h] [rbp-E8h]
  void *v112; // [rsp+150h] [rbp-D0h] BYREF
  __int128 v113; // [rsp+158h] [rbp-C8h]
  void *ptr[4]; // [rsp+170h] [rbp-B0h] BYREF
  __int64 v115; // [rsp+190h] [rbp-90h] BYREF
  int v116; // [rsp+198h] [rbp-88h] BYREF
  _QWORD *v117; // [rsp+1A0h] [rbp-80h]
  int *v118; // [rsp+1A8h] [rbp-78h]
  int *v119; // [rsp+1B0h] [rbp-70h]
  __int64 v120; // [rsp+1B8h] [rbp-68h]
  __int128 v121; // [rsp+1C0h] [rbp-60h] BYREF
  __m128i v122; // [rsp+1D0h] [rbp-50h]
  unsigned __int64 v123; // [rsp+1E8h] [rbp-38h]

  v89 = a1;
  v95 = a2;
  v123 = __readfsqword(0x28u);
  reset_undo();
  if ( !a2 )
    v95 = v89[1];
  v5 = *(_QWORD *)(v95 + 64);
  v6 = *(_DWORD *)(v5 + 8);
  v90 = (_QWORD *)v5;
  LODWORD(v96) = v6;
  v7 = v6 & 2;
  if ( (v6 & 2) == 0 )
    return v7;
  v8 = *(_DWORD *)(v5 + 48);
  if ( !a3 )
    a3 = 1;
  v84 = *(_DWORD *)(v5 + 48);
  if ( a3 >= v8 )
    return 0;
  v116 = 0;
  v9 = 0;
  v117 = nullptr;
  v120 = 0;
  v10 = *(_QWORD *)(v5 + 40);
  v118 = &v116;
  v119 = &v116;
  do
  {
    if ( *(_DWORD *)(v10 + 4 * v9) + 0x80000000 <= 0x7FFFFFFE )
    {
      if ( v9 )
      {
        v11 = sub_62E830((__int64)v89, v95, v9);
        if ( v11 >= a3 )
        {
          LODWORD(ptr[0]) = v11;
          sub_6390C0(&v115, (int *)ptr);
        }
      }
    }
    ++v9;
  }
  while ( a3 != v9 );
  v103 = 0;
  v12 = v8 - a3;
  src = nullptr;
  v13 = (_DWORD *)qvector_reserve(&src, 0, v84 - a3, 4);
  v16 = v103.m128i_i64[0];
  src = v13;
  if ( v103.m128i_i64[0] < v12 )
  {
    do
    {
      v13[v16++] = 0;
      v13 = src;
    }
    while ( v12 != v16 );
  }
  v103.m128i_i64[0] = v12;
  for ( i = v118; i != &v116; v13 = src )
  {
    v13[i[8] - a3] = i[8];
    i = (int *)std::_Rb_tree_increment();
  }
  v104 = nullptr;
  v18 = v10 + 4 * v9;
  v85 = a3;
  v96 = 0;
  v105 = 0;
  v19 = v84 - a3 - 1;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v18 + 4 * v96);
    if ( v20 == -1 )
      goto LABEL_24;
    v21 = &v13[v96];
    if ( *v21 )
      goto LABEL_24;
    if ( v20 < 0 )
      break;
    v22 = v85;
    v23 = v85 + 1 - a3;
    if ( v13[v85 - a3] == v85 )
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
    v85 = v22 + 1;
    v13 = src;
LABEL_24:
    v25 = v96 + 1;
    if ( v19 == v96 )
      goto LABEL_46;
LABEL_25:
    v96 = v25;
  }
  v39 = v105;
  v40 = (char *)v104;
  v41 = v105 + 1;
  if ( *((_QWORD *)&v105 + 1) < (unsigned __int64)(v105 + 1) )
  {
    v104 = (void *)qvector_reserve(&v104, v104, v41, 8);
    v40 = (char *)v104;
    v39 = v105;
    v41 = v105 + 1;
  }
  v42 = &v40[8 * v39];
  *(_QWORD *)&v105 = v41;
  v43 = v95;
  v44 = v89;
  v94 = v42;
  v45 = a3 + v96;
  *(_DWORD *)v42 = a3 + v96;
  v46 = sub_62E830((__int64)v44, v43, v45);
  v14 = (__int64)v94;
  v47 = v96;
  *((_DWORD *)v94 + 1) = v46;
  v25 = v47 + 1;
  v13 = src;
  if ( v19 != v47 )
    goto LABEL_25;
LABEL_46:
  v48 = (char *)v104;
  v49 = (char *)v104 + 8 * v105;
  if ( v49 != v104 )
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
  v27 = v84;
  v28 = a3;
  do
  {
    if ( *v13 != (_DWORD)v28 )
      break;
    v28 = (unsigned int)(v28 + 1);
    ++v13;
  }
  while ( (unsigned int)v28 < v84 );
  if ( v84 == (_DWORD)v28 )
  {
    v7 = 0;
    goto LABEL_36;
  }
  v91 = v84;
  v52 = 1;
  LODWORD(v97) = 1;
  v86 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B0D2B8), (__m128i)(unsigned __int64)sub_629D00);
  while ( 2 )
  {
    LODWORD(v96) = v52;
    v54 = *(unsigned int *)(v10 + 4 * v52);
    if ( (unsigned int)v52 < a3 )
    {
      if ( (int)v54 >= 0 )
      {
        LODWORD(v94) = v52;
LABEL_61:
        v92 = (int *)(v90[4] + v54);
        v55 = v95;
        if ( !v95 )
          v55 = v89[1];
        v56 = sub_630800(v55, (unsigned int)v96);
        if ( !v56 )
        {
          if ( !under_debugger )
            interr(701);
LABEL_115:
          BUG();
        }
        p_s = (const char *)&s;
        v88 = (unsigned __int8 *)&v97 + 4;
        sub_629EE0(
          v56,
          (const char **)&s,
          (unsigned __int64)&v99,
          (unsigned __int64)&v100,
          (unsigned __int64)&v101,
          (unsigned __int64)&v97 + 4);
        v58 = s;
        v106 = nullptr;
        v107 = 0;
        if ( s )
        {
          v59 = strlen(s);
          v93 = (void *)(v59 + 1);
          p_s = v58;
          v106 = (void *)qvector_reserve(&v106, 0, v59 + 1, 1);
          *(_QWORD *)&v107 = v93;
          memmove(v106, v58, v59);
          *((_BYTE *)v106 + v59) = 0;
        }
        v60 = v103.m128i_i64[0];
        if ( v103.m128i_i64[0] )
        {
          v69 = (void *)qalloc_or_throw(4 * v103.m128i_i64[0], p_s);
          p_s = (const char *)src;
          v93 = v69;
          memcpy(v69, src, 4 * v60);
        }
        else
        {
          v93 = nullptr;
        }
        v122 = 0u;
        v121 = 0;
        v61 = operator new(0x20u);
        *(_QWORD *)v61 = 0;
        v63 = v61;
        *(_OWORD *)(v61 + 8) = 0;
        if ( v60 )
        {
          n = 4 * v60;
          v81 = (void *)qalloc_or_throw(4 * v60, p_s);
          *(_QWORD *)v63 = v81;
          v82 = n;
          *(_QWORD *)(v63 + 16) = v60;
          memcpy(v81, v93, v82);
          *(_QWORD *)(v63 + 8) = v60;
        }
        *(_DWORD *)(v63 + 24) = a3;
        *(_QWORD *)&v121 = v63;
        v64 = _mm_load_si128(&v86);
        n = (size_t)ptr;
        v122 = v64;
        *(__m128i *)ptr = _mm_unpacklo_epi64(
                            _mm_loadl_epi64((const __m128i *)&off_2B0D2C0),
                            (__m128i)(unsigned __int64)&v121);
        v65 = sub_6336F0(v95, (__int64)ptr, (__m128i *)&v106, nullptr, 0, v62);
        if ( v122.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v122.m128i_i64[0])(&v121, &v121, 3);
        if ( v93 )
          qfree(v93);
        if ( v65 > 0 )
        {
          v70 = v95;
          if ( !v95 )
            v70 = v89[1];
          v71 = sub_630800(v70, (unsigned int)v96);
          if ( v71 )
          {
            if ( *(_BYTE *)(v71 + 4) != 35 || *(_BYTE *)(v71 + 5) )
            {
              v108 = nullptr;
              v72 = (const char *)(v71 + 4);
              v109 = 0;
            }
            else
            {
              v72 = (const char *)(v71 + 5);
              v108 = nullptr;
              v109 = 0;
            }
            v73 = strlen(v72);
            v96 = v73 + 1;
            v108 = (void *)qvector_reserve(&v108, 0, v73 + 1, 1);
            *(_QWORD *)&v109 = v96;
            memmove(v108, v72, v73);
            *((_BYTE *)v108 + v73) = 0;
          }
          else
          {
            v108 = nullptr;
            v109 = 0;
          }
          v74 = v99;
          v110 = nullptr;
          v111 = 0;
          if ( v99 )
          {
            v75 = strlen(v99);
            v96 = v75 + 1;
            v110 = (void *)qvector_reserve(&v110, 0, v75 + 1, 1);
            *(_QWORD *)&v111 = v96;
            memmove(v110, v74, v75);
            *((_BYTE *)v110 + v75) = 0;
          }
          v76 = v100;
          v112 = nullptr;
          v113 = 0;
          if ( v100 )
          {
            v77 = strlen(v100);
            v96 = v77 + 1;
            v112 = (void *)qvector_reserve(&v112, 0, v77 + 1, 1);
            *(_QWORD *)&v113 = v96;
            memmove(v112, v76, v77);
            *((_BYTE *)v112 + v77) = 0;
          }
          v78 = v101;
          memset(ptr, 0, 24);
          if ( v101 )
          {
            v79 = strlen(v101);
            v96 = v79 + 1;
            ptr[0] = (void *)qvector_reserve(n, 0, v79 + 1, 1);
            ptr[1] = (void *)v96;
            memmove(ptr[0], v78, v79);
            *((_BYTE *)ptr[0] + v79) = 0;
          }
          sub_6331E0(v89, v90, (__int64)v92, 1);
          v80 = v90;
          v92 = sub_630670(
                  v89,
                  (__int64)v90,
                  (char *)v108,
                  (char *)v106,
                  (char *)v110,
                  (char *)v112,
                  (char *)ptr[0],
                  v88,
                  &v97,
                  0);
          *(_DWORD *)(v10 + 4 * v52) = (_DWORD)v92 - *((_DWORD *)v80 + 8);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
          }
          if ( v112 )
          {
            *(_QWORD *)&v113 = 0;
            qfree(v112);
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
        }
        if ( (_DWORD)v94 != (_DWORD)v52 )
        {
          if ( !(_DWORD)v94
            || (unsigned int)v94 >= (unsigned int)v52
            || (v66 = (int *)(v10 + 4LL * (unsigned int)v94), *v66 >= 0) )
          {
            if ( !under_debugger )
              interr(702);
            goto LABEL_115;
          }
          v67 = (const char *)v92;
          *v66 = *(_DWORD *)(v10 + 4 * v52);
          v67 += 4;
          *(_DWORD *)(v10 + 4 * v52) = -1;
          v68 = strlen(v67);
          *(_DWORD *)&v67[v68 + 1] = (_DWORD)v94;
        }
        if ( v106 )
        {
          *(_QWORD *)&v107 = 0;
          qfree(v106);
        }
      }
    }
    else if ( (_DWORD)v54 != -1 )
    {
      if ( (int)v54 >= 0 )
      {
        LODWORD(v94) = *((_DWORD *)src + (unsigned int)v96 - a3);
        goto LABEL_61;
      }
      *(_DWORD *)(v10 + 4 * v52) = -1;
    }
    v53 = v52++;
    LODWORD(v97) = v53 + 1;
    if ( v52 != v91 )
      continue;
    break;
  }
  if ( v120 )
  {
    v26 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    v28 = v26 + 1;
    if ( v26 < v85 )
      v28 = v85;
    v85 = v28;
  }
  v29 = v90;
  *((_DWORD *)v90 + 12) = v85;
  *(_DWORD *)(v95 + 32) |= 0x40u;
  if ( !sub_62DB00((__int64)v29, 1, v28, v27, v14, v15) )
  {
    if ( !under_debugger )
      interr(703);
    goto LABEL_115;
  }
  sub_52E960((__int64)v89, v95, &src, a3);
  sub_514F20(0, a3, (__int64)&src, v30, v31, v32, (char)&src);
  if ( a4 )
  {
    v33 = *(void **)a4;
    v34 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    v35 = _mm_loadu_si128(&v103);
    *(_QWORD *)a4 = src;
    src = v33;
    *(__m128i *)(a4 + 8) = v35;
    v103 = v34;
  }
  v36 = *(_QWORD *)(*v89 + 1480);
  v37 = *(_DWORD *)(v36 + 2484) + 1;
  if ( *(_DWORD *)(v36 + 2484) == -1 )
    v37 = 1;
  *(_DWORD *)(v36 + 2484) = v37;
  mark_builtin_widgets(1024, 0, 1);
  sub_698450(v36);
  sub_396090(0x48u, 8, 0, 0);
  v7 = v84 - v85;
LABEL_36:
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  if ( src )
  {
    v103.m128i_i64[0] = 0;
    qfree(src);
  }
  sub_62B0E0(v117);
  return v7;
}

