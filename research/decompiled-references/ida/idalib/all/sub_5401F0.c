__int64 __fastcall sub_5401F0(__m256i **a1, __int64 a2, __m256i *a3, int a4)
{
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  char merge_state; // al
  __int64 *v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __m256i *v15; // rax
  __int64 *v16; // rdi
  char v17; // dl
  __m256i *v18; // rax
  __int64 v19; // rdi
  const char *v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rax
  __m128i v23; // xmm0
  int v24; // eax
  char *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  char *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // r12
  char *v34; // rbx
  void *v35; // rdi
  void *v36; // rdi
  _QWORD *v37; // rbx
  void *v38; // rdi
  char *v39; // rdx
  void *v40; // r12
  void *v41; // rbx
  char *v42; // rax
  void *v43; // rdi
  __m256i *p_ptr; // rsi
  __int64 v45; // rdx
  int v46; // r8d
  int v47; // r9d
  bool v48; // al
  __int64 v50; // rsi
  void *v51; // rdi
  const char *v52; // rdx
  char *v53; // rdi
  __int64 v54; // r14
  __int64 v55; // r12
  void *v56; // rdi
  void *v57; // rdi
  __int64 v58; // r14
  char *v59; // rax
  __int64 v60; // r14
  __m128i v61; // xmm0
  __int64 v62; // rdx
  __int8 v63; // al
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  char *v66; // rax
  const __m128i *v67; // rcx
  __m128i v68; // xmm0
  const __m128i *v69; // r15
  __int64 v70; // rdx
  void *v71; // rax
  void *v72; // rax
  size_t na; // [rsp+0h] [rbp-240h]
  size_t n; // [rsp+0h] [rbp-240h]
  char v75; // [rsp+20h] [rbp-220h]
  __int64 v76; // [rsp+28h] [rbp-218h]
  char *v78; // [rsp+38h] [rbp-208h]
  char *v79; // [rsp+38h] [rbp-208h]
  void *v80; // [rsp+40h] [rbp-200h] BYREF
  __int128 v81; // [rsp+48h] [rbp-1F8h]
  void *v82; // [rsp+60h] [rbp-1E0h] BYREF
  __int128 v83; // [rsp+68h] [rbp-1D8h]
  void *v84; // [rsp+80h] [rbp-1C0h] BYREF
  __int128 v85; // [rsp+88h] [rbp-1B8h]
  void *v86; // [rsp+A0h] [rbp-1A0h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-198h]
  void *v88; // [rsp+C0h] [rbp-180h] BYREF
  __int128 v89; // [rsp+C8h] [rbp-178h]
  void *v90; // [rsp+E0h] [rbp-160h] BYREF
  __int128 v91; // [rsp+E8h] [rbp-158h]
  void *v92; // [rsp+100h] [rbp-140h] BYREF
  __int128 v93; // [rsp+108h] [rbp-138h]
  void *i; // [rsp+120h] [rbp-120h] BYREF
  __int128 v95; // [rsp+128h] [rbp-118h]
  __m128i v96; // [rsp+138h] [rbp-108h]
  __int64 v97; // [rsp+148h] [rbp-F8h]
  int v98; // [rsp+150h] [rbp-F0h]
  __m256i ptr; // [rsp+160h] [rbp-E0h] BYREF
  __int64 v100; // [rsp+180h] [rbp-C0h]
  void *v101[3]; // [rsp+188h] [rbp-B8h] BYREF
  void *s; // [rsp+1A0h] [rbp-A0h]
  __int64 v103; // [rsp+1A8h] [rbp-98h]
  void *v104[2]; // [rsp+1B0h] [rbp-90h]
  __int64 v105; // [rsp+1C0h] [rbp-80h]
  _BYTE v106[24]; // [rsp+1C8h] [rbp-78h] BYREF
  __int128 v107; // [rsp+1E0h] [rbp-60h]
  void *v108; // [rsp+1F0h] [rbp-50h]
  __int128 v109; // [rsp+1F8h] [rbp-48h]
  unsigned __int64 v110; // [rsp+208h] [rbp-38h]

  v110 = __readfsqword(0x28u);
  if ( !a2 || (*(_BYTE *)(a2 + 69) & 0x40) == 0 || (v6 = *(_QWORD *)(a2 + 16), v6 == -1) )
  {
    if ( !under_debugger )
      interr(3205);
    BUG();
  }
  v8 = node2ea(v6);
  v9 = v8;
  v10 = ea2node(v8);
  if ( v10 == -1 )
    return 0;
  merge_state = get_merge_state(v8, a2);
  v12 = (__int64 *)(*a1)[52].m256i_i64[1];
  if ( (merge_state & 2) == 0 )
  {
    p_ptr = (__m256i *)v10;
    ptr.m256i_i32[0] = 0;
    v75 = sub_5373A0(v12, v10, nullptr, nullptr, nullptr);
    v48 = a3 == nullptr;
    memset(&ptr.m256i_u64[1], 0, 24);
    v100 = 0;
    v101[2] = (void *)-1LL;
    LODWORD(s) = 0;
    BYTE4(s) = 0;
    v103 = 0;
    v105 = 0;
    v108 = nullptr;
    *(_OWORD *)v101 = 0;
    *(_OWORD *)v104 = 0;
    memset(v106, 0, sizeof(v106));
    v107 = 0;
    v109 = 0;
    if ( a4 == 2 )
    {
      p_ptr = &ptr;
    }
    else if ( !a3 )
    {
      p_ptr = *a1;
      a3 = &ptr;
      sub_6BAA90((unsigned int)&ptr, (unsigned int)*a1, v9, *(_QWORD *)a2, v46, v47);
      v48 = 0;
    }
    if ( a4 == 1 || v48 )
    {
      v50 = (__int64)*a1;
      v91 = 0;
      v90 = nullptr;
      v92 = nullptr;
      i = nullptr;
      v93 = 0;
      v95 = 0;
      if ( !(unsigned __int8)sub_53F4F0(a2, v50, (__int64 *)&v90, (__int64)&v92, &i, 0x110u, 0xDu, nullptr)
        || !(unsigned __int8)sub_5376C0(
                               (_QWORD *)(*a1)[52].m256i_i64[1],
                               v10,
                               (const char **)&v90,
                               (__int64)&v92,
                               (__int64)&i) )
      {
        if ( i )
        {
          *(_QWORD *)&v95 = 0;
          qfree(i);
        }
        if ( v92 )
        {
          *(_QWORD *)&v93 = 0;
          qfree(v92);
        }
        if ( v90 )
        {
          *(_QWORD *)&v91 = 0;
          qfree(v90);
        }
        v14 = 0;
        goto LABEL_73;
      }
      v51 = i;
      *(_WORD *)(a2 + 68) &= ~0x8000u;
      if ( v51 )
      {
        *(_QWORD *)&v95 = 0;
        qfree(v51);
      }
      if ( v92 )
      {
        *(_QWORD *)&v93 = 0;
        qfree(v92);
      }
      if ( v90 )
      {
        *(_QWORD *)&v91 = 0;
        qfree(v90);
      }
      if ( a4 == 1 )
      {
LABEL_72:
        v14 = 1;
LABEL_73:
        sub_542CD0(&ptr);
        return v14;
      }
      if ( !a3 )
      {
LABEL_70:
        if ( !v75 )
          sub_39ADA0(0x4Eu, v9);
        goto LABEL_72;
      }
    }
    else
    {
      *(_WORD *)(a2 + 68) |= 0x8000u;
      sub_532DE0(v10, (__int64)p_ptr, v45);
    }
    sub_6BFD10(a3, *a1);
    goto LABEL_70;
  }
  v80 = nullptr;
  v81 = 0;
  sub_5BC010(v12, &v80, v9);
  v13 = (__int64)*a1;
  v82 = nullptr;
  v84 = nullptr;
  v86 = nullptr;
  v83 = 0;
  v85 = 0;
  v87 = 0;
  v14 = sub_53F4F0(a2, v13, (__int64 *)&v82, (__int64)&v84, &v86, 0x110u, 0xDu, nullptr);
  if ( (_BYTE)v14 )
  {
    v15 = *a1;
    v90 = nullptr;
    v92 = nullptr;
    v91 = 0;
    v93 = 0;
    v16 = (__int64 *)v15[52].m256i_i64[1];
    v88 = nullptr;
    v89 = 0;
    v17 = sub_5373A0(v16, v10, (__int64 *)&v88, (__int64 *)&v90, (__int64 *)&v92);
    s = &v106[8];
    v18 = *a1;
    memset(&ptr, 0, 24);
    ptr.m256i_i64[3] = -1;
    LOWORD(v100) = 0;
    memset(v101, 0, sizeof(v101));
    v103 = 1;
    v104[0] = nullptr;
    v104[1] = nullptr;
    LODWORD(v105) = 1065353216;
    memset(v106, 0, sizeof(v106));
    v108 = nullptr;
    BYTE2(v100) = 1;
    v107 = 0;
    v109 = 0;
    v19 = v18[52].m256i_i64[1];
    if ( v17 )
    {
      v20 = haystack;
      if ( (_QWORD)v81 )
        LODWORD(v20) = (_DWORD)v80;
      sub_6C7150(v19, 0, (unsigned int)&ptr, (_DWORD)v20, (_DWORD)v88, (_DWORD)v90, -1, 0);
    }
    else
    {
      v95 = 0;
      v52 = haystack;
      i = nullptr;
      v97 = 0;
      v98 = 1;
      v96 = 0;
      if ( (_QWORD)v81 )
        v52 = (const char *)v80;
      sub_6C1860(&ptr, v19, v52, &i, 0);
      v53 = (char *)i;
      if ( i )
      {
        v54 = v95;
        if ( (_QWORD)v95 )
        {
          v55 = 0;
          do
          {
            v78 = &v53[144 * v55];
            clear_tinfo_t(v78 + 64);
            v56 = *((void **)v78 + 5);
            if ( v56 )
            {
              *((_QWORD *)v78 + 6) = 0;
              qfree(v56);
            }
            v57 = *((void **)v78 + 2);
            if ( v57 )
            {
              *((_QWORD *)v78 + 3) = 0;
              qfree(v57);
            }
            ++v55;
            v53 = (char *)i;
          }
          while ( v54 != v55 );
        }
        *(_QWORD *)&v95 = 0;
        qfree(v53);
      }
    }
    v21 = *(_QWORD *)a2;
    i = nullptr;
    v95 = 0;
    v22 = *(_QWORD *)(v21 + 8);
    v76 = v22;
    if ( v22 )
    {
      v58 = *(_QWORD *)(v21 + 8);
      v59 = (char *)qalloc_or_throw(144 * v22);
      *((_QWORD *)&v95 + 1) = v58;
      v60 = 0;
      for ( i = v59; ; v59 = (char *)i )
      {
        v66 = &v59[144 * v60];
        v67 = (const __m128i *)(*(_QWORD *)v21 + 144 * v60);
        v68 = _mm_loadu_si128(v67);
        *((_QWORD *)v66 + 2) = 0;
        v69 = v67;
        *(_OWORD *)(v66 + 24) = 0;
        *(__m128i *)v66 = v68;
        v70 = v67[1].m128i_i64[1];
        v79 = v66;
        if ( v70 )
        {
          na = v67[1].m128i_u64[1];
          v71 = (void *)qalloc_or_throw(v70);
          *((_QWORD *)v79 + 4) = na;
          *((_QWORD *)v79 + 2) = v71;
          memcpy(v71, (const void *)v69[1].m128i_i64[0], na);
          *((_QWORD *)v79 + 3) = na;
        }
        *((_QWORD *)v79 + 5) = 0;
        *((_OWORD *)v79 + 3) = 0;
        if ( v69[3].m128i_i64[0] )
        {
          n = v69[3].m128i_u64[0];
          v72 = (void *)qalloc_or_throw(n);
          *((_QWORD *)v79 + 7) = n;
          *((_QWORD *)v79 + 5) = v72;
          memcpy(v72, (const void *)v69[2].m128i_i64[1], n);
          *((_QWORD *)v79 + 6) = n;
        }
        *((_QWORD *)v79 + 8) = 0;
        copy_tinfo_t(v79 + 64);
        ++v60;
        v61 = _mm_loadu_si128((const __m128i *)((char *)v69 + 72));
        v62 = v69[8].m128i_i64[0];
        *((_QWORD *)v79 + 15) = v69[7].m128i_i64[1];
        v63 = v69[8].m128i_i8[8];
        *(__m128i *)(v79 + 72) = v61;
        v64 = _mm_loadu_si128((const __m128i *)((char *)v69 + 88));
        *((_QWORD *)v79 + 16) = v62;
        *(__m128i *)(v79 + 88) = v64;
        v65 = _mm_loadu_si128((const __m128i *)((char *)v69 + 104));
        v79[136] = v63;
        *(__m128i *)(v79 + 104) = v65;
        if ( v76 == v60 )
          break;
      }
      *(_QWORD *)&v95 = v76;
    }
    v23 = _mm_loadu_si128((const __m128i *)(v21 + 24));
    v97 = *(_QWORD *)(v21 + 40);
    v24 = *(_DWORD *)(v21 + 48);
    v96 = v23;
    v98 = v24;
    v14 = sub_5376C0((_QWORD *)(*a1)[52].m256i_i64[1], v10, (const char **)&v82, (__int64)&v84, (__int64)&v86);
    if ( (_BYTE)v14 )
      sub_6C9970((*a1)[52].m256i_i64[1]);
    v25 = (char *)i;
    if ( i )
    {
      v26 = v95;
      if ( (_QWORD)v95 )
      {
        v27 = 0;
        do
        {
          v28 = &v25[144 * v27];
          clear_tinfo_t(v28 + 64);
          v29 = *((void **)v28 + 5);
          if ( v29 )
          {
            *((_QWORD *)v28 + 6) = 0;
            qfree(v29);
          }
          v30 = *((void **)v28 + 2);
          if ( v30 )
          {
            *((_QWORD *)v28 + 3) = 0;
            qfree(v30);
          }
          ++v27;
          v25 = (char *)i;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v95 = 0;
      qfree(v25);
    }
    v31 = (char *)v108;
    if ( v108 )
    {
      v32 = v109;
      if ( (_QWORD)v109 )
      {
        v33 = 0;
        do
        {
          v34 = &v31[144 * v33];
          clear_tinfo_t(v34 + 64);
          v35 = *((void **)v34 + 5);
          if ( v35 )
          {
            *((_QWORD *)v34 + 6) = 0;
            qfree(v35);
          }
          v36 = *((void **)v34 + 2);
          if ( v36 )
          {
            *((_QWORD *)v34 + 3) = 0;
            qfree(v36);
          }
          ++v33;
          v31 = (char *)v108;
        }
        while ( v32 != v33 );
      }
      *(_QWORD *)&v109 = 0;
      qfree(v31);
    }
    if ( *(_QWORD *)&v106[16] )
    {
      *(_QWORD *)&v107 = 0;
      qfree(*(void **)&v106[16]);
    }
    v37 = v104[0];
    if ( v104[0] )
    {
      do
      {
        v38 = v37;
        v37 = (_QWORD *)*v37;
        operator delete(v38, 0x20u);
      }
      while ( v37 );
    }
    memset(s, 0, 8 * v103);
    v104[1] = nullptr;
    v104[0] = nullptr;
    if ( s != &v106[8] )
      operator delete(s, 8 * v103);
    v39 = (char *)v101[0];
    if ( v101[0] )
    {
      v40 = v101[1];
      if ( v101[1] )
      {
        v41 = nullptr;
        do
        {
          v42 = &v39[32 * (_QWORD)v41];
          v43 = *(void **)v42;
          if ( *(_QWORD *)v42 )
          {
            *((_QWORD *)v42 + 1) = 0;
            qfree(v43);
            v39 = (char *)v101[0];
          }
          v41 = (char *)v41 + 1;
        }
        while ( v40 != v41 );
      }
      v101[1] = nullptr;
      qfree(v39);
    }
    if ( ptr.m256i_i64[0] )
    {
      ptr.m256i_i64[1] = 0;
      qfree((void *)ptr.m256i_i64[0]);
    }
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v92);
    }
    if ( v90 )
    {
      *(_QWORD *)&v91 = 0;
      qfree(v90);
    }
    if ( v88 )
    {
      *(_QWORD *)&v89 = 0;
      qfree(v88);
    }
  }
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  return v14;
}
