__int64 __fastcall sub_8DF50(const __m128i *a1, __int64 a2)
{
  _QWORD *exception; // rdi
  _QWORD *v3; // rdi
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r15
  __m256i *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // r13d
  __int64 v21; // rax
  __int64 *v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rax
  int v25; // r12d
  int v26; // r15d
  __int32 v27; // eax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  char v30; // si
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  size_t v43; // r13
  unsigned __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // rcx
  void *v47; // rax
  size_t v48; // rdx
  unsigned __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rdi
  __m128i v55; // xmm0
  __int64 v56; // r13
  __m128i v57; // xmm0
  __int64 v58; // rdi
  _QWORD *v59; // rax
  __int64 v60; // r15
  __int64 v61; // r14
  __int64 v62; // r14
  int v63; // eax
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // r12
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r13
  __int64 v69; // r12
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // r15
  __int64 v73; // rsi
  __int64 v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  size_t v77; // r15
  void *v78; // rax
  unsigned __int64 v79; // r14
  __int64 v80; // rax
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  __m128i v84; // [rsp+0h] [rbp-128h] BYREF
  size_t n; // [rsp+18h] [rbp-110h]
  _QWORD *m128i_i64; // [rsp+20h] [rbp-108h]
  __m256i *p_src; // [rsp+28h] [rbp-100h]
  __int64 *v88; // [rsp+30h] [rbp-F8h] BYREF
  void *v89[2]; // [rsp+38h] [rbp-F0h] BYREF
  size_t v90[2]; // [rsp+48h] [rbp-E0h]
  _QWORD v91[2]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v92[2]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v93[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v94; // [rsp+90h] [rbp-98h] BYREF
  __m256i src; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v96[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v97[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v98[10]; // [rsp+D8h] [rbp-50h] BYREF

  v98[2] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 40) = 1;
  if ( !(unsigned __int8)sub_8C080((__int64)a1, a2, 0) )
    return 0;
  a1[94].m128i_i32[2] = sub_7CD20((_QWORD *)a2);
  LOBYTE(n) = sub_871F0((__int64)a1[95].m128i_i64, a2);
  if ( !(_BYTE)n )
    return 0;
  v8 = sub_7D4F0((_QWORD *)a2);
  if ( v8 < 0 )
    return 0;
  v84.m128i_i64[0] = v8;
  v9 = v8;
  v10 = a1[115].m128i_i64[0];
  if ( v9 == v10 )
    goto LABEL_18;
  v88 = nullptr;
  v91[0] = 0xFFFFFFFF00000000LL;
  v91[1] = 0;
  v92[0] = 0xFFFFFFFF00000000LL;
  v92[1] = 0;
  v93[0] = 0xFFFFFFFF00000000LL;
  v93[1] = 0;
  sub_330970(v89, -1);
  v11 = a1[115].m128i_u64[0];
  if ( v84.m128i_i64[0] < v11 )
  {
    v59 = (_QWORD *)v84.m128i_i64[0];
    v60 = 88 * v84.m128i_i64[0];
    do
    {
      v61 = a1[114].m128i_i64[1];
      m128i_i64 = v59;
      v62 = v60 + v61;
      v60 += 88;
      sub_11CDA0(v62 + 72);
      sub_11CDA0(v62 + 56);
      sub_11CDA0(v62 + 40);
      v59 = (_QWORD *)((char *)m128i_i64 + 1);
    }
    while ( (unsigned __int64)m128i_i64 + 1 < v11 );
LABEL_83:
    a1[115].m128i_i64[0] = v84.m128i_i64[0];
    goto LABEL_17;
  }
  if ( v11 < v84.m128i_i64[0] )
  {
    v12 = a1[114].m128i_u64[1];
    v13 = a1[115].m128i_u64[1];
    if ( (unsigned __int64)&v88 >= v12 && (unsigned __int64)&v88 < v12 + 88 * v13 )
    {
      v96[1] = 0;
      v97[1] = 0;
      LODWORD(v94) = (_DWORD)v88;
      v96[0] = 0xFFFFFFFF00000000LL;
      v97[0] = 0xFFFFFFFF00000000LL;
      v98[0] = 0xFFFFFFFF00000000LL;
      p_src = &src;
      v98[1] = 0;
      *(_OWORD *)&src.m256i_u64[1] = 0;
      sub_1253A0(&src, v89);
      if ( a1[115].m128i_i64[1] < (unsigned __int64)v84.m128i_i64[0] )
        a1[114].m128i_i64[1] = qvector_reserve(
                                 (__int64)&a1[114].m128i_i64[1],
                                 a1[114].m128i_i64[1],
                                 v84.m128i_i64[0],
                                 88);
      v14 = a1[115].m128i_u64[0];
      if ( v14 < v84.m128i_i64[0] )
      {
        v15 = 88 * v14;
        do
        {
          v16 = a1[114].m128i_i64[1];
          m128i_i64 = (_QWORD *)v14;
          v17 = p_src;
          v18 = v15 + v16;
          *(_DWORD *)v18 = v94;
          *(_QWORD *)(v18 + 40) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 48) = 0;
          *(_QWORD *)(v18 + 56) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 64) = 0;
          *(_QWORD *)(v18 + 72) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 80) = 0;
          *(_OWORD *)(v18 + 16) = 0;
          sub_1253A0(v18 + 8, v17);
          v15 += 88;
          v14 = (unsigned __int64)m128i_i64 + 1;
        }
        while ( (_QWORD *)v84.m128i_i64[0] != (_QWORD *)((char *)m128i_i64 + 1) );
      }
      a1[115].m128i_i64[0] = v84.m128i_i64[0];
      sub_11CDA0(v98);
      sub_11CDA0(v97);
      sub_11CDA0(v96);
      goto LABEL_17;
    }
    if ( v13 >= v84.m128i_i64[0]
      || (v79 = v84.m128i_i64[0],
          v80 = qvector_reserve((__int64)&a1[114].m128i_i64[1], v12, v84.m128i_i64[0], 88),
          v11 = a1[115].m128i_u64[0],
          a1[114].m128i_i64[1] = v80,
          v12 = v80,
          v11 < v79) )
    {
      v70 = 88 * v11;
      while ( 1 )
      {
        v71 = (int)v88;
        v72 = v12 + v70;
        *(_QWORD *)(v72 + 40) = 0xFFFFFFFF00000000LL;
        *(_DWORD *)v72 = v71;
        *(_QWORD *)(v72 + 48) = 0;
        *(_QWORD *)(v72 + 56) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v72 + 64) = 0;
        *(_QWORD *)(v72 + 72) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v72 + 80) = 0;
        *(_OWORD *)(v72 + 16) = 0;
        m128i_i64 = (_QWORD *)v70;
        sub_1253A0(v12 + v70 + 8, v89);
        ++v11;
        v70 = (__int64)(m128i_i64 + 11);
        if ( v11 >= v84.m128i_i64[0] )
          break;
        v12 = a1[114].m128i_u64[1];
      }
    }
    goto LABEL_83;
  }
LABEL_17:
  sub_11CDA0(v93);
  sub_11CDA0(v92);
  sub_11CDA0(v91);
  v10 = a1[115].m128i_i64[0];
LABEL_18:
  v19 = a1[114].m128i_i64[1];
  if ( 88 * v10 )
  {
    while ( (unsigned __int8)sub_883D0(v19 + 8, a2) )
    {
      v19 += 88;
      *(_DWORD *)(v19 - 88) = sub_7CD20((_QWORD *)a2);
      if ( v19 == a1[114].m128i_i64[1] + 88 * a1[115].m128i_i64[0] )
        goto LABEL_23;
    }
    return 0;
  }
LABEL_23:
  v20 = 0;
  v84.m128i_i32[0] = sub_7CD20((_QWORD *)a2);
  m128i_i64 = a1[116].m128i_i64;
  if ( v84.m128i_i32[0] > 0 )
  {
LABEL_32:
    v25 = sub_7CD20((_QWORD *)a2);
    v26 = sub_7CD20((_QWORD *)a2);
    v27 = sub_7CD20((_QWORD *)a2);
    HIDWORD(v94) = v26;
    v28 = a1[116].m128i_u64[0];
    LODWORD(v94) = v25;
    src.m256i_i32[0] = v27;
    v88 = &v94;
    if ( !v28 )
    {
      v33 = qalloc();
      v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
      if ( !v33 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v33 + 32) = 0;
      *(_OWORD *)(v33 + 16) = 0;
      *(__m128i *)(v33 + 8) = v34;
      *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[116].m128i_i64[0] = v33;
      *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v33 & 3LL;
      *(__m128i *)(a1[116].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)a1[116].m128i_u64[0],
                                                 (__m128i)a1[116].m128i_u64[0]);
      *(_QWORD *)a1[116].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[116].m128i_i64[0] |= 2uLL;
      v28 = a1[116].m128i_u64[0];
LABEL_25:
      v21 = qalloc();
      v22 = (__int64 *)v21;
      if ( !v21 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v21 + 32) = 0;
      *(_OWORD *)v21 = 0;
      *(_OWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = v94;
      *(_DWORD *)(v21 + 32) = src.m256i_i32[0];
      *(_QWORD *)v21 = v28 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = _mm_loadl_epi64(a1 + 116);
      *(_QWORD *)v21 = v28 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v23, v23);
      if ( a1[116].m128i_i64[0] == v28 )
      {
        *(_QWORD *)v28 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
        *(_QWORD *)(a1[116].m128i_i64[0] + 8) = v21;
        *(_QWORD *)(a1[116].m128i_i64[0] + 16) = v21;
        v35 = *(_QWORD *)v21 & 2LL;
        *(_QWORD *)v21 &= ~1uLL;
        *(_QWORD *)v21 = v35 | a1[116].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v28 + 8) = v21;
        v24 = a1[116].m128i_i64[0];
        if ( *(_QWORD *)(v24 + 8) == v28 )
          *(_QWORD *)(v24 + 8) = v22;
        sub_89B70(m128i_i64, v22);
      }
      ++a1[116].m128i_i64[1];
      goto LABEL_31;
    }
    if ( !a1[116].m128i_i64[1] )
      goto LABEL_25;
    v29 = *(_QWORD *)v28 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v29 & 2) != 0 )
    {
      v32 = 1;
LABEL_41:
      sub_89E40((__m128i *)m128i_i64, (unsigned __int64 *)v28, v32, &v88);
      goto LABEL_31;
    }
    v30 = n;
    while ( 1 )
    {
      if ( v25 >= *(_DWORD *)(v29 + 24) )
      {
        if ( v25 <= *(_DWORD *)(v29 + 24) )
        {
          if ( !v29 )
          {
LABEL_39:
            v32 = v30;
            v28 = v29;
            goto LABEL_41;
          }
LABEL_31:
          if ( v84.m128i_i32[0] == ++v20 )
            break;
          goto LABEL_32;
        }
        v31 = *(_BYTE **)(v29 + 16);
        v30 = 0;
      }
      else
      {
        v31 = *(_BYTE **)(v29 + 8);
        v30 = n;
      }
      if ( (*v31 & 2) != 0 )
        goto LABEL_39;
      v29 = (unsigned __int64)v31;
    }
  }
  v36 = sub_7D4F0((_QWORD *)a2);
  if ( v36 < 0 )
    return 0;
  v37 = a1[117].m128i_u64[1];
  v38 = v36;
  if ( v36 != v37 )
  {
    v39 = a1[117].m128i_u64[0];
    v88 = (__int64 *)0xFFFFFFFF00000000LL;
    *(_OWORD *)v89 = 0;
    *(_OWORD *)v90 = 0;
    if ( v36 < v37 )
    {
      v49 = v36;
      while ( 1 )
      {
        v50 = v39 + 40 * v49;
        v51 = *(_QWORD *)(v50 + 16);
        if ( v51 )
        {
          *(_QWORD *)(v50 + 24) = 0;
          qfree(v51);
        }
        v52 = v39 + 40 * v49++;
        sub_11CDA0(v52);
        if ( v49 >= v37 )
          break;
        v39 = a1[117].m128i_u64[0];
      }
      a1[117].m128i_i64[1] = v38;
      v84.m128i_i64[0] = (__int64)&v88;
    }
    else
    {
      v40 = a1[118].m128i_u64[0];
      v84.m128i_i64[0] = (__int64)&v88;
      if ( (unsigned __int64)&v88 < v39 || (unsigned __int64)&v88 >= v39 + 40 * v40 )
      {
        if ( v40 < v38 )
        {
          a1[117].m128i_i64[0] = qvector_reserve((__int64)a1[117].m128i_i64, v39, v38, 40);
          v37 = a1[117].m128i_u64[1];
        }
        for ( ; v37 < v38; ++v37 )
        {
          v73 = v84.m128i_i64[0];
          v74 = a1[117].m128i_i64[0] + 40 * v37;
          sub_123A40(v74);
          *(_QWORD *)(v74 + 16) = 0;
          *(_OWORD *)(v74 + 24) = 0;
          v77 = v90[0];
          if ( v90[0] )
          {
            v78 = (void *)qalloc_or_throw(v90[0], v73, v75, v76);
            *(_QWORD *)(v74 + 16) = v78;
            *(_QWORD *)(v74 + 32) = v77;
            memcpy(v78, v89[1], v77);
            *(_QWORD *)(v74 + 24) = v77;
          }
        }
        a1[117].m128i_i64[1] = v38;
      }
      else
      {
        sub_123A40(&v94);
        v43 = v90[0];
        memset(&src.m256i_u64[1], 0, 24);
        if ( v90[0] )
        {
          src.m256i_i64[1] = qalloc_or_throw(v90[0], (__int64)&v88, v41, v42);
          src.m256i_i64[3] = v43;
          memcpy((void *)src.m256i_i64[1], v89[1], v43);
          src.m256i_i64[2] = v43;
        }
        if ( a1[118].m128i_i64[0] < v38 )
          a1[117].m128i_i64[0] = qvector_reserve((__int64)a1[117].m128i_i64, a1[117].m128i_i64[0], v38, 40);
        v44 = a1[117].m128i_u64[1];
        if ( v44 < v38 )
        {
          do
          {
            v45 = a1[117].m128i_i64[0] + 40 * v44;
            sub_123A40(v45);
            *(_QWORD *)(v45 + 16) = 0;
            *(_OWORD *)(v45 + 24) = 0;
            if ( src.m256i_i64[2] )
            {
              n = src.m256i_u64[2];
              v47 = (void *)qalloc_or_throw(src.m256i_i64[2], (__int64)&v94, src.m256i_i64[2], v46);
              v48 = n;
              *(_QWORD *)(v45 + 16) = v47;
              *(_QWORD *)(v45 + 32) = v48;
              memcpy(v47, (const void *)src.m256i_i64[1], v48);
              *(_QWORD *)(v45 + 24) = n;
            }
            ++v44;
          }
          while ( v38 != v44 );
        }
        v83 = src.m256i_i64[1];
        a1[117].m128i_i64[1] = v38;
        if ( v83 )
        {
          src.m256i_i64[2] = 0;
          qfree(v83);
        }
        sub_11CDA0(&v94);
      }
    }
    if ( v89[1] )
    {
      v90[0] = 0;
      qfree((__int64)v89[1]);
    }
    sub_11CDA0(v84.m128i_i64[0]);
    v37 = a1[117].m128i_u64[1];
  }
  v53 = a1[117].m128i_i64[0];
  if ( 40 * v37 )
  {
    do
    {
      sub_7D150((__int64)&v94, (_QWORD *)a2);
      v56 = v94;
      v57 = _mm_loadu_si128((const __m128i *)&src);
      v94 = 0;
      *(_OWORD *)src.m256i_i8 = 0;
      v58 = *(_QWORD *)(v53 + 16);
      if ( v58 )
      {
        *(_QWORD *)(v53 + 24) = 0;
        v84 = v57;
        qfree(v58);
        v54 = v94;
        v55 = _mm_load_si128(&v84);
        *(_QWORD *)(v53 + 16) = v56;
        *(__m128i *)(v53 + 24) = v55;
        if ( v54 )
        {
          src.m256i_i64[0] = 0;
          qfree(v54);
        }
      }
      else
      {
        *(_QWORD *)(v53 + 16) = v56;
        *(__m128i *)(v53 + 24) = v57;
      }
      if ( !(unsigned __int8)sub_87990(v53, a2) )
        return 0;
      v53 += 40;
    }
    while ( v53 != a1[117].m128i_i64[0] + 40 * a1[117].m128i_i64[1] );
  }
  v63 = sub_7D4F0((_QWORD *)a2);
  if ( v63 < 0 )
    return 0;
  v64 = a1[119].m128i_u64[0];
  v65 = v63;
  if ( v63 != v64 )
  {
    v89[0] = nullptr;
    v66 = a1[118].m128i_u64[1];
    v88 = (__int64 *)0xFFFFFFFF00000000LL;
    if ( v63 < v64 )
    {
      v81 = v63;
      while ( 1 )
      {
        v82 = v81++;
        sub_11CDA0(16 * v82 + v66);
        if ( v81 >= v64 )
          break;
        v66 = a1[118].m128i_u64[1];
      }
      a1[119].m128i_i64[0] = v65;
      v84.m128i_i64[0] = (__int64)&v88;
    }
    else
    {
      v67 = a1[119].m128i_u64[1];
      v84.m128i_i64[0] = (__int64)&v88;
      if ( (unsigned __int64)&v88 < v66 || (unsigned __int64)&v88 >= v66 + 16 * v67 )
      {
        if ( v67 < v65 )
        {
          a1[118].m128i_i64[1] = qvector_reserve((__int64)&a1[118].m128i_i64[1], v66, v65, 16);
          v64 = a1[119].m128i_u64[0];
        }
        while ( v64 < v65 )
          sub_123A40(a1[118].m128i_i64[1] + 16 * v64++);
        a1[119].m128i_i64[0] = v65;
      }
      else
      {
        sub_123A40(&v94);
        if ( a1[119].m128i_i64[1] < v65 )
          a1[118].m128i_i64[1] = qvector_reserve((__int64)&a1[118].m128i_i64[1], a1[118].m128i_i64[1], v65, 16);
        v68 = a1[119].m128i_u64[0];
        if ( v68 < v65 )
        {
          do
            sub_123A40(a1[118].m128i_i64[1] + 16 * v68++);
          while ( v65 != v68 );
        }
        a1[119].m128i_i64[0] = v65;
        sub_11CDA0(&v94);
      }
    }
    sub_11CDA0(v84.m128i_i64[0]);
    v64 = a1[119].m128i_u64[0];
  }
  v69 = a1[118].m128i_i64[1];
  if ( 16 * v64 )
  {
    while ( (unsigned __int8)sub_87990(v69, a2) )
    {
      v69 += 16;
      if ( v69 == a1[118].m128i_i64[1] + 16 * a1[119].m128i_i64[0] )
        goto LABEL_105;
    }
    return 0;
  }
LABEL_105:
  v6 = sub_7D530((_QWORD *)a2, &a1[120].m128i_i64[1]);
  if ( !(_BYTE)v6 )
    return 0;
  if ( (unsigned __int8)sub_7CD00((unsigned __int8 **)a2) != 0xFF )
  {
    if ( !under_debugger )
      sub_383060(50591);
    BUG();
  }
  return v6;
}
