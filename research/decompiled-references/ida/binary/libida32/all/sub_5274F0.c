__int64 __fastcall sub_5274F0(__int64 *a1, __int64 a2, __m256i *a3, int a4)
{
  __int64 v5; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  char merge_state; // al
  __int64 *v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 *v16; // rdi
  char v17; // dl
  __int64 v18; // rax
  const char *v19; // rdi
  const char *v20; // rcx
  const char *m128i_i8; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 v26; // rax
  __m128i v27; // xmm0
  int v28; // eax
  char *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  char *v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  char *v35; // rdi
  __int64 v36; // r13
  __int64 v37; // r12
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  _QWORD *v41; // rbx
  void *v42; // rdi
  char *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rbx
  char *v46; // rax
  void *v47; // rdi
  __int64 p_ptr; // rsi
  __int64 v49; // rdx
  int v50; // r8d
  int v51; // r9d
  bool v52; // al
  __int64 v54; // rsi
  void *v55; // rdi
  const char *v56; // rdx
  char *v57; // rdi
  __int64 v58; // r14
  char *v59; // r12
  void *v60; // rdi
  void *v61; // rdi
  __int64 v62; // r14
  char *v63; // rax
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  char *v68; // rax
  const __m128i *v69; // rcx
  __m128i v70; // xmm0
  const __m128i *v71; // r14
  __int64 v72; // rdx
  void *v73; // rax
  void *v74; // rax
  __int64 v75; // [rsp-8h] [rbp-248h]
  size_t na; // [rsp+0h] [rbp-240h]
  size_t n; // [rsp+0h] [rbp-240h]
  char v78; // [rsp+20h] [rbp-220h]
  __int64 v79; // [rsp+28h] [rbp-218h]
  __int64 v81; // [rsp+38h] [rbp-208h]
  char *v82; // [rsp+38h] [rbp-208h]
  void *v83; // [rsp+40h] [rbp-200h] BYREF
  __int128 v84; // [rsp+48h] [rbp-1F8h]
  void *v85; // [rsp+60h] [rbp-1E0h] BYREF
  __int128 v86; // [rsp+68h] [rbp-1D8h]
  void *v87; // [rsp+80h] [rbp-1C0h] BYREF
  __int128 v88; // [rsp+88h] [rbp-1B8h]
  void *v89; // [rsp+A0h] [rbp-1A0h] BYREF
  __int128 v90; // [rsp+A8h] [rbp-198h]
  void *v91; // [rsp+C0h] [rbp-180h] BYREF
  __int128 v92; // [rsp+C8h] [rbp-178h]
  void *v93; // [rsp+E0h] [rbp-160h] BYREF
  __int128 v94; // [rsp+E8h] [rbp-158h]
  void *v95; // [rsp+100h] [rbp-140h] BYREF
  __int128 v96; // [rsp+108h] [rbp-138h]
  void *v97; // [rsp+120h] [rbp-120h] BYREF
  __int128 v98; // [rsp+128h] [rbp-118h]
  __m128i v99; // [rsp+138h] [rbp-108h]
  __int64 v100; // [rsp+148h] [rbp-F8h]
  int v101; // [rsp+150h] [rbp-F0h]
  __m256i ptr; // [rsp+160h] [rbp-E0h] BYREF
  void *v103; // [rsp+180h] [rbp-C0h]
  __int128 v104; // [rsp+188h] [rbp-B8h]
  void *s; // [rsp+198h] [rbp-A8h]
  __int64 v106; // [rsp+1A0h] [rbp-A0h]
  void *v107; // [rsp+1A8h] [rbp-98h]
  __int128 v108; // [rsp+1B0h] [rbp-90h]
  __int64 v109; // [rsp+1C0h] [rbp-80h]
  void *v110[2]; // [rsp+1C8h] [rbp-78h] BYREF
  _OWORD v111[3]; // [rsp+1D8h] [rbp-68h] BYREF
  unsigned __int64 v112; // [rsp+208h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  if ( !a2 || (*(_BYTE *)(a2 + 69) & 0x40) == 0 || (v5 = *(_QWORD *)(a2 + 16), (_DWORD)v5 == -1) )
  {
    if ( !under_debugger )
      interr(3205);
    BUG();
  }
  v8 = (unsigned int)node2ea((unsigned int)v5);
  v9 = v8;
  v10 = ea2node(v8);
  if ( v10 == -1 )
    return 0;
  merge_state = get_merge_state(v8, a2);
  v12 = *(__int64 **)(*a1 + 1480);
  if ( (merge_state & 2) == 0 )
  {
    p_ptr = v10;
    ptr.m256i_i32[0] = 0;
    v78 = sub_51E880(v12, v10, nullptr, nullptr, nullptr);
    memset(&ptr.m256i_u64[1], 0, 24);
    s = (void *)0xFFFFFFFFLL;
    v52 = a3 == nullptr;
    v103 = nullptr;
    LOBYTE(v106) = 0;
    v107 = nullptr;
    v109 = 0;
    memset(v111, 0, sizeof(v111));
    v104 = 0;
    v108 = 0;
    *(_OWORD *)v110 = 0;
    if ( a4 == 2 )
    {
      p_ptr = (__int64)&ptr;
    }
    else if ( !a3 )
    {
      p_ptr = *a1;
      a3 = &ptr;
      sub_69A110((unsigned int)&ptr, *a1, v9, *(_QWORD *)a2, v50, v51);
      v52 = 0;
    }
    if ( a4 == 1 || v52 )
    {
      v54 = *a1;
      v94 = 0;
      v93 = nullptr;
      v95 = nullptr;
      v97 = nullptr;
      v96 = 0;
      v98 = 0;
      if ( !(unsigned __int8)sub_5267F0(a2, v54, (__int64 *)&v93, (__int64)&v95, &v97, 0x110u, 0xDu, nullptr)
        || !(unsigned __int8)sub_51EBA0(
                               *(_QWORD **)(*a1 + 1480),
                               v10,
                               (const char **)&v93,
                               (__int64)&v95,
                               (__int64)&v97) )
      {
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree(v97);
        }
        if ( v95 )
        {
          *(_QWORD *)&v96 = 0;
          qfree(v95);
        }
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree(v93);
        }
        v14 = 0;
        goto LABEL_73;
      }
      v55 = v97;
      *(_WORD *)(a2 + 68) &= ~0x8000u;
      if ( v55 )
      {
        *(_QWORD *)&v98 = 0;
        qfree(v55);
      }
      if ( v95 )
      {
        *(_QWORD *)&v96 = 0;
        qfree(v95);
      }
      if ( v93 )
      {
        *(_QWORD *)&v94 = 0;
        qfree(v93);
      }
      if ( a4 == 1 )
      {
LABEL_72:
        v14 = 1;
LABEL_73:
        sub_529FB0(&ptr);
        return v14;
      }
      if ( !a3 )
      {
LABEL_70:
        if ( !v78 )
          sub_396090(0x4Eu, v9);
        goto LABEL_72;
      }
    }
    else
    {
      *(_WORD *)(a2 + 68) |= 0x8000u;
      sub_51A620(v10, p_ptr, v49);
    }
    sub_69F220(a3, *a1);
    goto LABEL_70;
  }
  v83 = nullptr;
  v84 = 0;
  sub_5A1A70(v12, &v83, v9);
  v13 = *a1;
  v85 = nullptr;
  v87 = nullptr;
  v89 = nullptr;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  v14 = sub_5267F0(a2, v13, (__int64 *)&v85, (__int64)&v87, &v89, 0x110u, 0xDu, nullptr);
  if ( (_BYTE)v14 )
  {
    v15 = *a1;
    v93 = nullptr;
    v95 = nullptr;
    v94 = 0;
    v96 = 0;
    v16 = *(__int64 **)(v15 + 1480);
    v91 = nullptr;
    v92 = 0;
    v17 = sub_51E880(v16, v10, (__int64 *)&v91, (__int64 *)&v93, (__int64 *)&v95);
    s = v110;
    v18 = *a1;
    memset(&ptr, 0, 24);
    ptr.m256i_i32[6] = -1;
    ptr.m256i_i16[14] = 0;
    v103 = nullptr;
    v106 = 1;
    v107 = nullptr;
    *(_QWORD *)&v108 = 0;
    DWORD2(v108) = 1065353216;
    v109 = 0;
    ptr.m256i_i8[30] = 1;
    v104 = 0;
    *(_OWORD *)v110 = 0;
    memset(v111, 0, 40);
    v19 = *(const char **)(v18 + 1480);
    if ( v17 )
    {
      v20 = haystack;
      if ( (_QWORD)v84 )
        LODWORD(v20) = (_DWORD)v83;
      m128i_i8 = nullptr;
      sub_6A6250((_DWORD)v19, 0, (unsigned int)&ptr, (_DWORD)v20, (_DWORD)v91, (_DWORD)v93, -1, 0);
      v24 = v75;
    }
    else
    {
      v98 = 0;
      v56 = haystack;
      v97 = nullptr;
      v100 = 0;
      v101 = 1;
      v99 = 0;
      if ( (_QWORD)v84 )
        v56 = (const char *)v83;
      m128i_i8 = v19;
      sub_6A0BD0(&ptr, v19, v56, &v97, 0);
      v57 = (char *)v97;
      if ( v97 )
      {
        v58 = v98;
        if ( (_QWORD)v98 )
        {
          v81 = 0;
          do
          {
            v59 = &v57[128 * v81];
            clear_tinfo_t(v59 + 64);
            v60 = *((void **)v59 + 5);
            if ( v60 )
            {
              *((_QWORD *)v59 + 6) = 0;
              qfree(v60);
            }
            v61 = *((void **)v59 + 2);
            if ( v61 )
            {
              *((_QWORD *)v59 + 3) = 0;
              qfree(v61);
            }
            ++v81;
            v57 = (char *)v97;
          }
          while ( v58 != v81 );
        }
        *(_QWORD *)&v98 = 0;
        qfree(v57);
      }
    }
    v25 = *(_QWORD *)a2;
    v97 = nullptr;
    v98 = 0;
    v26 = *(_QWORD *)(v25 + 8);
    v79 = v26;
    if ( v26 )
    {
      v62 = *(_QWORD *)(v25 + 8);
      v63 = (char *)qalloc_or_throw(v26 << 7, m128i_i8, v22, v23, v24);
      v97 = v63;
      v64 = 0;
      *((_QWORD *)&v98 + 1) = v62;
      while ( 1 )
      {
        v68 = &v63[128 * v64];
        v69 = (const __m128i *)(*(_QWORD *)v25 + (v64 << 7));
        v70 = _mm_loadu_si128(v69);
        *((_QWORD *)v68 + 2) = 0;
        v71 = v69;
        *(_OWORD *)(v68 + 24) = 0;
        *(__m128i *)v68 = v70;
        v72 = v69[1].m128i_i64[1];
        v82 = v68;
        if ( v72 )
        {
          na = v69[1].m128i_u64[1];
          v73 = (void *)qalloc_or_throw(v72, m128i_i8);
          *((_QWORD *)v82 + 4) = na;
          *((_QWORD *)v82 + 2) = v73;
          m128i_i8 = (const char *)v71[1].m128i_i64[0];
          memcpy(v73, m128i_i8, na);
          *((_QWORD *)v82 + 3) = na;
        }
        *((_QWORD *)v82 + 5) = 0;
        *((_OWORD *)v82 + 3) = 0;
        if ( v71[3].m128i_i64[0] )
        {
          n = v71[3].m128i_u64[0];
          v74 = (void *)qalloc_or_throw(n, m128i_i8);
          *((_QWORD *)v82 + 7) = n;
          *((_QWORD *)v82 + 5) = v74;
          memcpy(v74, (const void *)v71[2].m128i_i64[1], n);
          *((_QWORD *)v82 + 6) = n;
        }
        m128i_i8 = v71[4].m128i_i8;
        *((_QWORD *)v82 + 8) = 0;
        copy_tinfo_t(v82 + 64);
        ++v64;
        v65 = v71[6].m128i_i64[1];
        v66 = v71[7].m128i_i64[0];
        *(__m128i *)(v82 + 72) = _mm_loadu_si128((const __m128i *)((char *)v71 + 72));
        v67 = _mm_loadu_si128((const __m128i *)((char *)v71 + 88));
        *((_QWORD *)v82 + 13) = v65;
        LOBYTE(v65) = v71[7].m128i_i8[8];
        *((_QWORD *)v82 + 14) = v66;
        v82[120] = v65;
        *(__m128i *)(v82 + 88) = v67;
        if ( v79 == v64 )
          break;
        v63 = (char *)v97;
      }
      *(_QWORD *)&v98 = v79;
    }
    v27 = _mm_loadu_si128((const __m128i *)(v25 + 24));
    v100 = *(_QWORD *)(v25 + 40);
    v28 = *(_DWORD *)(v25 + 48);
    v99 = v27;
    v101 = v28;
    v14 = sub_51EBA0(*(_QWORD **)(*a1 + 1480), v10, (const char **)&v85, (__int64)&v87, (__int64)&v89);
    if ( (_BYTE)v14 )
      sub_6A8A30(*(_QWORD *)(*a1 + 1480));
    v29 = (char *)v97;
    if ( v97 )
    {
      v30 = v98;
      if ( (_QWORD)v98 )
      {
        v31 = 0;
        do
        {
          v32 = &v29[128 * v31];
          clear_tinfo_t(v32 + 64);
          v33 = *((void **)v32 + 5);
          if ( v33 )
          {
            *((_QWORD *)v32 + 6) = 0;
            qfree(v33);
          }
          v34 = *((void **)v32 + 2);
          if ( v34 )
          {
            *((_QWORD *)v32 + 3) = 0;
            qfree(v34);
          }
          ++v31;
          v29 = (char *)v97;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v98 = 0;
      qfree(v29);
    }
    v35 = *(char **)&v111[1];
    if ( *(_QWORD *)&v111[1] )
    {
      v36 = *((_QWORD *)&v111[1] + 1);
      if ( *((_QWORD *)&v111[1] + 1) )
      {
        v37 = 0;
        do
        {
          v38 = &v35[128 * v37];
          clear_tinfo_t(v38 + 64);
          v39 = *((void **)v38 + 5);
          if ( v39 )
          {
            *((_QWORD *)v38 + 6) = 0;
            qfree(v39);
          }
          v40 = *((void **)v38 + 2);
          if ( v40 )
          {
            *((_QWORD *)v38 + 3) = 0;
            qfree(v40);
          }
          ++v37;
          v35 = *(char **)&v111[1];
        }
        while ( v36 != v37 );
      }
      *((_QWORD *)&v111[1] + 1) = 0;
      qfree(v35);
    }
    if ( v110[1] )
    {
      *(_QWORD *)&v111[0] = 0;
      qfree(v110[1]);
    }
    v41 = v107;
    if ( v107 )
    {
      do
      {
        v42 = v41;
        v41 = (_QWORD *)*v41;
        operator delete(v42, 0x20u);
      }
      while ( v41 );
    }
    memset(s, 0, 8 * v106);
    *(_QWORD *)&v108 = 0;
    v107 = nullptr;
    if ( s != v110 )
      operator delete(s, 8 * v106);
    v43 = (char *)v103;
    if ( v103 )
    {
      v44 = v104;
      if ( (_QWORD)v104 )
      {
        v45 = 0;
        do
        {
          v46 = &v43[32 * v45];
          v47 = *(void **)v46;
          if ( *(_QWORD *)v46 )
          {
            *((_QWORD *)v46 + 1) = 0;
            qfree(v47);
            v43 = (char *)v103;
          }
          ++v45;
        }
        while ( v44 != v45 );
      }
      *(_QWORD *)&v104 = 0;
      qfree(v43);
    }
    if ( ptr.m256i_i64[0] )
    {
      ptr.m256i_i64[1] = 0;
      qfree((void *)ptr.m256i_i64[0]);
    }
    if ( v95 )
    {
      *(_QWORD *)&v96 = 0;
      qfree(v95);
    }
    if ( v93 )
    {
      *(_QWORD *)&v94 = 0;
      qfree(v93);
    }
    if ( v91 )
    {
      *(_QWORD *)&v92 = 0;
      qfree(v91);
    }
  }
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree(v89);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  return v14;
}

