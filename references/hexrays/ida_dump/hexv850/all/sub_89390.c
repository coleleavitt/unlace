__int64 __fastcall sub_89390(const __m128i *a1, __int64 a2)
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
  size_t v41; // r13
  unsigned __int64 v42; // r15
  __int64 v43; // r13
  void *v44; // rax
  size_t v45; // rdx
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rdi
  __m128i v52; // xmm0
  __int64 v53; // r13
  __m128i v54; // xmm0
  __int64 v55; // rdi
  _QWORD *v56; // rax
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // r14
  int v60; // eax
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // r8
  int v68; // eax
  __int64 v69; // r15
  __int64 v70; // r14
  size_t v71; // r15
  void *v72; // rax
  unsigned __int64 v73; // r14
  __int64 v74; // rax
  unsigned __int64 v75; // r14
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  __m128i v78; // [rsp+0h] [rbp-128h] BYREF
  size_t n; // [rsp+18h] [rbp-110h]
  _QWORD *m128i_i64; // [rsp+20h] [rbp-108h]
  __m256i *p_src; // [rsp+28h] [rbp-100h]
  __int64 *v82; // [rsp+30h] [rbp-F8h] BYREF
  void *v83[2]; // [rsp+38h] [rbp-F0h] BYREF
  size_t v84[2]; // [rsp+48h] [rbp-E0h]
  _QWORD v85[2]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v86[2]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v87[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+90h] [rbp-98h] BYREF
  __m256i src; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v90[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v91[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v92[10]; // [rsp+D8h] [rbp-50h] BYREF

  v92[2] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 40) = 1;
  if ( !(unsigned __int8)sub_874C0((__int64)a1, a2, 0) )
    return 0;
  a1[94].m128i_i32[2] = sub_782A0((_QWORD *)a2);
  LOBYTE(n) = sub_82630((__int64)a1[95].m128i_i64, a2);
  if ( !(_BYTE)n )
    return 0;
  v8 = sub_78A70((_QWORD *)a2);
  if ( v8 < 0 )
    return 0;
  v78.m128i_i64[0] = v8;
  v9 = v8;
  v10 = a1[115].m128i_i64[0];
  if ( v9 == v10 )
    goto LABEL_18;
  v82 = nullptr;
  v85[0] = 0xFFFFFFFF00000000LL;
  v85[1] = 0;
  v86[0] = 0xFFFFFFFF00000000LL;
  v86[1] = 0;
  v87[0] = 0xFFFFFFFF00000000LL;
  v87[1] = 0;
  sub_32ADE0(v83, -1);
  v11 = a1[115].m128i_u64[0];
  if ( v78.m128i_i64[0] < v11 )
  {
    v56 = (_QWORD *)v78.m128i_i64[0];
    v57 = 88 * v78.m128i_i64[0];
    do
    {
      v58 = a1[114].m128i_i64[1];
      m128i_i64 = v56;
      v59 = v57 + v58;
      v57 += 88;
      sub_1181E0(v59 + 72);
      sub_1181E0(v59 + 56);
      sub_1181E0(v59 + 40);
      v56 = (_QWORD *)((char *)m128i_i64 + 1);
    }
    while ( (unsigned __int64)m128i_i64 + 1 < v11 );
LABEL_83:
    a1[115].m128i_i64[0] = v78.m128i_i64[0];
    goto LABEL_17;
  }
  if ( v11 < v78.m128i_i64[0] )
  {
    v12 = a1[114].m128i_u64[1];
    v13 = a1[115].m128i_u64[1];
    if ( (unsigned __int64)&v82 >= v12 && (unsigned __int64)&v82 < v12 + 88 * v13 )
    {
      v90[1] = 0;
      v91[1] = 0;
      LODWORD(v88) = (_DWORD)v82;
      v90[0] = 0xFFFFFFFF00000000LL;
      v91[0] = 0xFFFFFFFF00000000LL;
      v92[0] = 0xFFFFFFFF00000000LL;
      p_src = &src;
      v92[1] = 0;
      *(_OWORD *)&src.m256i_u64[1] = 0;
      sub_1207E0(&src, v83);
      if ( a1[115].m128i_i64[1] < (unsigned __int64)v78.m128i_i64[0] )
        a1[114].m128i_i64[1] = qvector_reserve(&a1[114].m128i_u64[1], a1[114].m128i_i64[1], v78.m128i_i64[0], 88);
      v14 = a1[115].m128i_u64[0];
      if ( v14 < v78.m128i_i64[0] )
      {
        v15 = 88 * v14;
        do
        {
          v16 = a1[114].m128i_i64[1];
          m128i_i64 = (_QWORD *)v14;
          v17 = p_src;
          v18 = v15 + v16;
          *(_DWORD *)v18 = v88;
          *(_QWORD *)(v18 + 40) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 48) = 0;
          *(_QWORD *)(v18 + 56) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 64) = 0;
          *(_QWORD *)(v18 + 72) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 80) = 0;
          *(_OWORD *)(v18 + 16) = 0;
          sub_1207E0(v18 + 8, v17);
          v15 += 88;
          v14 = (unsigned __int64)m128i_i64 + 1;
        }
        while ( (_QWORD *)v78.m128i_i64[0] != (_QWORD *)((char *)m128i_i64 + 1) );
      }
      a1[115].m128i_i64[0] = v78.m128i_i64[0];
      sub_1181E0(v92);
      sub_1181E0(v91);
      sub_1181E0(v90);
      goto LABEL_17;
    }
    if ( v13 >= v78.m128i_i64[0]
      || (v73 = v78.m128i_i64[0],
          v74 = qvector_reserve(&a1[114].m128i_u64[1], v12, v78.m128i_i64[0], 88),
          v11 = a1[115].m128i_u64[0],
          a1[114].m128i_i64[1] = v74,
          v12 = v74,
          v11 < v73) )
    {
      v67 = 88 * v11;
      while ( 1 )
      {
        v68 = (int)v82;
        v69 = v12 + v67;
        *(_QWORD *)(v69 + 40) = 0xFFFFFFFF00000000LL;
        *(_DWORD *)v69 = v68;
        *(_QWORD *)(v69 + 48) = 0;
        *(_QWORD *)(v69 + 56) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v69 + 64) = 0;
        *(_QWORD *)(v69 + 72) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v69 + 80) = 0;
        *(_OWORD *)(v69 + 16) = 0;
        m128i_i64 = (_QWORD *)v67;
        sub_1207E0(v12 + v67 + 8, v83);
        ++v11;
        v67 = (__int64)(m128i_i64 + 11);
        if ( v11 >= v78.m128i_i64[0] )
          break;
        v12 = a1[114].m128i_u64[1];
      }
    }
    goto LABEL_83;
  }
LABEL_17:
  sub_1181E0(v87);
  sub_1181E0(v86);
  sub_1181E0(v85);
  v10 = a1[115].m128i_i64[0];
LABEL_18:
  v19 = a1[114].m128i_i64[1];
  if ( 88 * v10 )
  {
    while ( (unsigned __int8)sub_83810(v19 + 8, a2) )
    {
      v19 += 88;
      *(_DWORD *)(v19 - 88) = sub_782A0((_QWORD *)a2);
      if ( v19 == a1[114].m128i_i64[1] + 88 * a1[115].m128i_i64[0] )
        goto LABEL_23;
    }
    return 0;
  }
LABEL_23:
  v20 = 0;
  v78.m128i_i32[0] = sub_782A0((_QWORD *)a2);
  m128i_i64 = a1[116].m128i_i64;
  if ( v78.m128i_i32[0] > 0 )
  {
LABEL_32:
    v25 = sub_782A0((_QWORD *)a2);
    v26 = sub_782A0((_QWORD *)a2);
    v27 = sub_782A0((_QWORD *)a2);
    HIDWORD(v88) = v26;
    v28 = a1[116].m128i_u64[0];
    LODWORD(v88) = v25;
    src.m256i_i32[0] = v27;
    v82 = &v88;
    if ( !v28 )
    {
      v33 = qalloc(40);
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
      v21 = qalloc(40);
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
      *(_QWORD *)(v21 + 24) = v88;
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
        sub_84FB0(m128i_i64, v22);
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
      sub_85280((__m128i *)m128i_i64, (unsigned __int64 *)v28, v32, &v82);
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
          if ( v78.m128i_i32[0] == ++v20 )
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
  v36 = sub_78A70((_QWORD *)a2);
  if ( v36 < 0 )
    return 0;
  v37 = a1[117].m128i_u64[1];
  v38 = v36;
  if ( v36 != v37 )
  {
    v39 = a1[117].m128i_u64[0];
    v82 = (__int64 *)0xFFFFFFFF00000000LL;
    *(_OWORD *)v83 = 0;
    *(_OWORD *)v84 = 0;
    if ( v36 < v37 )
    {
      v46 = v36;
      while ( 1 )
      {
        v47 = v39 + 40 * v46;
        v48 = *(_QWORD *)(v47 + 16);
        if ( v48 )
        {
          *(_QWORD *)(v47 + 24) = 0;
          qfree(v48);
        }
        v49 = v39 + 40 * v46++;
        sub_1181E0(v49);
        if ( v46 >= v37 )
          break;
        v39 = a1[117].m128i_u64[0];
      }
      a1[117].m128i_i64[1] = v38;
      v78.m128i_i64[0] = (__int64)&v82;
    }
    else
    {
      v40 = a1[118].m128i_u64[0];
      v78.m128i_i64[0] = (__int64)&v82;
      if ( (unsigned __int64)&v82 < v39 || (unsigned __int64)&v82 >= v39 + 40 * v40 )
      {
        if ( v40 < v38 )
        {
          a1[117].m128i_i64[0] = qvector_reserve(&a1[117], v39, v38, 40);
          v37 = a1[117].m128i_u64[1];
        }
        for ( ; v37 < v38; ++v37 )
        {
          v70 = a1[117].m128i_i64[0] + 40 * v37;
          sub_11EE80(v70, v78.m128i_i64[0]);
          *(_QWORD *)(v70 + 16) = 0;
          *(_OWORD *)(v70 + 24) = 0;
          v71 = v84[0];
          if ( v84[0] )
          {
            v72 = (void *)qalloc_or_throw(v84[0]);
            *(_QWORD *)(v70 + 16) = v72;
            *(_QWORD *)(v70 + 32) = v71;
            memcpy(v72, v83[1], v71);
            *(_QWORD *)(v70 + 24) = v71;
          }
        }
        a1[117].m128i_i64[1] = v38;
      }
      else
      {
        sub_11EE80(&v88, &v82);
        v41 = v84[0];
        memset(&src.m256i_u64[1], 0, 24);
        if ( v84[0] )
        {
          src.m256i_i64[1] = qalloc_or_throw(v84[0]);
          src.m256i_i64[3] = v41;
          memcpy((void *)src.m256i_i64[1], v83[1], v41);
          src.m256i_i64[2] = v41;
        }
        if ( a1[118].m128i_i64[0] < v38 )
          a1[117].m128i_i64[0] = qvector_reserve(&a1[117], a1[117].m128i_i64[0], v38, 40);
        v42 = a1[117].m128i_u64[1];
        if ( v42 < v38 )
        {
          do
          {
            v43 = a1[117].m128i_i64[0] + 40 * v42;
            sub_11EE80(v43, &v88);
            *(_QWORD *)(v43 + 16) = 0;
            *(_OWORD *)(v43 + 24) = 0;
            if ( src.m256i_i64[2] )
            {
              n = src.m256i_u64[2];
              v44 = (void *)qalloc_or_throw(src.m256i_i64[2]);
              v45 = n;
              *(_QWORD *)(v43 + 16) = v44;
              *(_QWORD *)(v43 + 32) = v45;
              memcpy(v44, (const void *)src.m256i_i64[1], v45);
              *(_QWORD *)(v43 + 24) = n;
            }
            ++v42;
          }
          while ( v38 != v42 );
        }
        v77 = src.m256i_i64[1];
        a1[117].m128i_i64[1] = v38;
        if ( v77 )
        {
          src.m256i_i64[2] = 0;
          qfree(v77);
        }
        sub_1181E0(&v88);
      }
    }
    if ( v83[1] )
    {
      v84[0] = 0;
      qfree(v83[1]);
    }
    sub_1181E0(v78.m128i_i64[0]);
    v37 = a1[117].m128i_u64[1];
  }
  v50 = a1[117].m128i_i64[0];
  if ( 40 * v37 )
  {
    do
    {
      sub_786D0((__int64)&v88, (_QWORD *)a2);
      v53 = v88;
      v54 = _mm_loadu_si128((const __m128i *)&src);
      v88 = 0;
      *(_OWORD *)src.m256i_i8 = 0;
      v55 = *(_QWORD *)(v50 + 16);
      if ( v55 )
      {
        *(_QWORD *)(v50 + 24) = 0;
        v78 = v54;
        qfree(v55);
        v51 = v88;
        v52 = _mm_load_si128(&v78);
        *(_QWORD *)(v50 + 16) = v53;
        *(__m128i *)(v50 + 24) = v52;
        if ( v51 )
        {
          src.m256i_i64[0] = 0;
          qfree(v51);
        }
      }
      else
      {
        *(_QWORD *)(v50 + 16) = v53;
        *(__m128i *)(v50 + 24) = v54;
      }
      if ( !(unsigned __int8)sub_82DD0(v50, a2) )
        return 0;
      v50 += 40;
    }
    while ( v50 != a1[117].m128i_i64[0] + 40 * a1[117].m128i_i64[1] );
  }
  v60 = sub_78A70((_QWORD *)a2);
  if ( v60 < 0 )
    return 0;
  v61 = a1[119].m128i_u64[0];
  v62 = v60;
  if ( v60 != v61 )
  {
    v83[0] = nullptr;
    v63 = a1[118].m128i_u64[1];
    v82 = (__int64 *)0xFFFFFFFF00000000LL;
    if ( v60 < v61 )
    {
      v75 = v60;
      while ( 1 )
      {
        v76 = v75++;
        sub_1181E0(16 * v76 + v63);
        if ( v75 >= v61 )
          break;
        v63 = a1[118].m128i_u64[1];
      }
      a1[119].m128i_i64[0] = v62;
      v78.m128i_i64[0] = (__int64)&v82;
    }
    else
    {
      v64 = a1[119].m128i_u64[1];
      v78.m128i_i64[0] = (__int64)&v82;
      if ( (unsigned __int64)&v82 < v63 || (unsigned __int64)&v82 >= v63 + 16 * v64 )
      {
        if ( v64 < v62 )
        {
          a1[118].m128i_i64[1] = qvector_reserve(&a1[118].m128i_u64[1], v63, v62, 16);
          v61 = a1[119].m128i_u64[0];
        }
        while ( v61 < v62 )
          sub_11EE80(a1[118].m128i_i64[1] + 16 * v61++, v78.m128i_i64[0]);
        a1[119].m128i_i64[0] = v62;
      }
      else
      {
        sub_11EE80(&v88, &v82);
        if ( a1[119].m128i_i64[1] < v62 )
          a1[118].m128i_i64[1] = qvector_reserve(&a1[118].m128i_u64[1], a1[118].m128i_i64[1], v62, 16);
        v65 = a1[119].m128i_u64[0];
        if ( v65 < v62 )
        {
          do
            sub_11EE80(a1[118].m128i_i64[1] + 16 * v65++, &v88);
          while ( v62 != v65 );
        }
        a1[119].m128i_i64[0] = v62;
        sub_1181E0(&v88);
      }
    }
    sub_1181E0(v78.m128i_i64[0]);
    v61 = a1[119].m128i_u64[0];
  }
  v66 = a1[118].m128i_i64[1];
  if ( 16 * v61 )
  {
    while ( (unsigned __int8)sub_82DD0(v66, a2) )
    {
      v66 += 16;
      if ( v66 == a1[118].m128i_i64[1] + 16 * a1[119].m128i_i64[0] )
        goto LABEL_105;
    }
    return 0;
  }
LABEL_105:
  v6 = sub_78AB0((_QWORD *)a2, &a1[120].m128i_i64[1]);
  if ( !(_BYTE)v6 )
    return 0;
  if ( (unsigned __int8)sub_78280((unsigned __int8 **)a2) != 0xFF )
  {
    if ( !under_debugger )
      sub_37CFE0(50591);
    BUG();
  }
  return v6;
}
