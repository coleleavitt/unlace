void __fastcall sub_1288900(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  void **v14; // r13
  void **v15; // r14
  void **v16; // r13
  void **v17; // r15
  char *v18; // rbp
  void **v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r14
  _QWORD *v28; // r13
  unsigned __int64 v29; // rax
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r14
  void **v33; // r15
  __m128 v34; // xmm1
  void *v35; // r13
  __m256i *p_ptr; // rbp
  __int64 v37; // rsi
  __m128i v38; // xmm1
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rbp
  __m256i *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // r13
  int v47; // r9d
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rdi
  __int64 v57; // rax
  __int64 *v58; // r14
  __int64 *v59; // rax
  _QWORD *v60; // r15
  __int64 v61; // r12
  const char **v62; // rax
  const char *v63; // r13
  size_t v64; // rax
  size_t v65; // r15
  __int64 v66; // rdx
  __int64 *v67; // rdi
  __int64 v68; // rax
  char v69; // r13
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  size_t v75; // rcx
  unsigned __int64 v76; // rax
  _BYTE *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // rdx
  void **v81; // rax
  int v82; // [rsp-8h] [rbp-220h]
  __m128i v84; // [rsp+20h] [rbp-1F8h] BYREF
  void **v85; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 *v86; // [rsp+38h] [rbp-1E0h]
  int v87; // [rsp+4Ch] [rbp-1CCh] BYREF
  __int128 v88; // [rsp+50h] [rbp-1C8h] BYREF
  void *v89[2]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v90[16]; // [rsp+70h] [rbp-1A8h] BYREF
  void *dest; // [rsp+80h] [rbp-198h] BYREF
  size_t v92; // [rsp+88h] [rbp-190h]
  _QWORD v93[2]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v94; // [rsp+A0h] [rbp-178h]
  void *v95; // [rsp+B0h] [rbp-168h] BYREF
  void *v96; // [rsp+B8h] [rbp-160h]
  _BYTE v97[16]; // [rsp+C0h] [rbp-158h] BYREF
  __int16 v98; // [rsp+D0h] [rbp-148h]
  char *v99; // [rsp+E0h] [rbp-138h] BYREF
  void *v100; // [rsp+E8h] [rbp-130h]
  __int16 v101; // [rsp+100h] [rbp-118h]
  void *v102[2]; // [rsp+110h] [rbp-108h] BYREF
  _DWORD v103[4]; // [rsp+120h] [rbp-F8h] BYREF
  __int16 v104; // [rsp+130h] [rbp-E8h]
  __m256i ptr; // [rsp+140h] [rbp-D8h] BYREF
  int v106; // [rsp+160h] [rbp-B8h]

  v3 = a2;
  v84.m128i_i64[1] = a1;
  ptr.m256i_i32[0] = 3053;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    ptr.m256i_i32[0] = 3033;
    v8 = sub_21B6DA0(a2, &ptr, 1);
    v9 = a2[1];
    v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
    v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
    if ( v10 == v11 )
      goto LABEL_9;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
    {
      if ( v11 == ++v10 )
        goto LABEL_9;
    }
    if ( v11 == v10 )
    {
LABEL_9:
      LOWORD(v106) = 257;
      v104 = 257;
      v99 = "include";
      v101 = 259;
      v84.m128i_i64[0] = *(_QWORD *)(v84.m128i_i64[1] + 8);
      sub_1287110((__int64)a2, (__int64)a3, v84.m128i_i64[0] + 248, (__int64)&v99, (__int64)v102, (__int64)&ptr);
    }
    else
    {
      do
      {
        v13 = *(_QWORD *)(*v10 + 16LL);
        if ( !v13 )
          v13 = *v10;
        ++v10;
        *(_BYTE *)(v13 + 44) |= 1u;
        if ( v10 == v11 )
          break;
        while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
        {
          if ( v11 == ++v10 )
            goto LABEL_27;
        }
      }
      while ( v11 != v10 );
    }
LABEL_27:
    sub_21B7150(v102, a2, 2139);
    v14 = (void **)v102[0];
    v15 = (void **)v102[1];
    if ( v102[0] != v102[1] )
    {
      do
      {
        ptr.m256i_i64[0] = (__int64)v14;
        v14 += 4;
        LOWORD(v106) = 260;
        sub_112FA80((__int64)a2, (__int64)a3, (__int64)&ptr);
      }
      while ( v15 != v14 );
      v16 = (void **)v102[1];
      v15 = (void **)v102[0];
      if ( v102[1] != v102[0] )
      {
        do
        {
          while ( *v15 != v15 + 2 )
          {
            operator delete(*v15);
            v15 += 4;
            if ( v16 == v15 )
              goto LABEL_32;
          }
          v15 += 4;
        }
        while ( v16 != v15 );
LABEL_32:
        v15 = (void **)v102[0];
      }
    }
    if ( v15 )
      operator delete(v15);
    sub_21B7150(&v99, a2, 377);
    v17 = (void **)v100;
    if ( v99 != v100 )
    {
      v86 = a2;
      v85 = &v95;
      v18 = v99;
      v84.m128i_i64[0] = (__int64)v103;
      do
      {
        while ( 1 )
        {
          sub_2290A40(v102, *(_QWORD *)v18, *((_QWORD *)v18 + 1));
          if ( (_BYTE)v104 )
          {
            ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
            ptr.m256i_i64[1] = 0x800000000LL;
            v95 = v102[0];
            v96 = v102[1];
            sub_22471D0(v85, &ptr, ";", 1, 0xFFFFFFFFLL, 0);
            if ( ptr.m256i_i32[2] )
              sub_112D6D0(v86, a3, (__int64 *)ptr.m256i_i64[0], ptr.m256i_u32[2]);
            if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
              free((void *)ptr.m256i_i64[0]);
            if ( (_BYTE)v104 && v102[0] != (void *)v84.m128i_i64[0] )
              break;
          }
          v18 += 32;
          if ( v17 == (void **)v18 )
            goto LABEL_46;
        }
        operator delete(v102[0]);
        v18 += 32;
      }
      while ( v17 != (void **)v18 );
LABEL_46:
      v19 = (void **)v100;
      v17 = (void **)v99;
      v3 = v86;
      if ( v100 != v99 )
      {
        do
        {
          while ( *v17 != v17 + 2 )
          {
            operator delete(*v17);
            v17 += 4;
            if ( v19 == v17 )
            {
              v17 = (void **)v99;
              goto LABEL_50;
            }
          }
          v17 += 4;
        }
        while ( v19 != v17 );
        v17 = (void **)v99;
      }
    }
LABEL_50:
    if ( v17 )
      operator delete(v17);
    ptr.m256i_i64[0] = 0xD6C0000011DLL;
    v20 = sub_21B6DA0(v3, &ptr, 2);
    v21 = v3[1];
    ptr.m256i_i64[2] = 0xD6C0000011DLL;
    v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
    v23 = v21 + 8 * HIDWORD(v20);
    v84.m128i_i64[0] = v23;
    *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)v84.m128i_i64);
    if ( v22 == (_QWORD *)v23 )
      goto LABEL_57;
    while ( 1 )
    {
      v24 = *v22;
      if ( *v22 )
      {
        if ( (unsigned __int8)sub_21B9810(*v22, 285) || (unsigned __int8)sub_21B9810(v24, 3436) )
          break;
      }
      ptr.m256i_i64[0] = (__int64)++v22;
      if ( (_QWORD *)v23 == v22 )
        goto LABEL_57;
    }
    v84.m128i_i64[0] = v23;
    ptr.m256i_i64[2] = 0xD6C0000011DLL;
    *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)v84.m128i_i64);
    if ( (_QWORD *)v23 == v22 )
    {
LABEL_57:
      ptr.m256i_i32[0] = 3055;
      v25 = sub_21B6DA0(v3, &ptr, 1);
      v26 = v3[1];
      v27 = (_QWORD *)(v26 + 8LL * (unsigned int)v25);
      v28 = (_QWORD *)(v26 + 8 * HIDWORD(v25));
      if ( v27 != v28 )
      {
        while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, 3055) )
        {
          if ( v28 == ++v27 )
            goto LABEL_61;
        }
        if ( v28 != v27 )
        {
          do
          {
            v57 = *(_QWORD *)(*v27 + 16LL);
            if ( !v57 )
              v57 = *v27;
            ++v27;
            *(_BYTE *)(v57 + 44) |= 1u;
            if ( v27 == v28 )
              break;
            while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, 3055) )
            {
              if ( v28 == ++v27 )
                return;
            }
          }
          while ( v28 != v27 );
          return;
        }
      }
LABEL_61:
      ptr.m256i_i32[4] = 3435;
      *(__m128i *)ptr.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A9E40);
      v29 = sub_21B6DA0(v3, &ptr, 5);
      v31 = v3[1];
      v103[0] = 3435;
      v106 = 3435;
      v32 = v31 + 8 * HIDWORD(v29);
      v33 = (void **)(v31 + 8LL * (unsigned int)v29);
      *(__m128i *)v102 = _mm_load_si128((const __m128i *)&xmmword_23A9E40);
      v85 = (void **)v32;
      v84.m128i_i64[0] = v32;
      *(_OWORD *)&ptr.m256i_u64[2] = *(_OWORD *)v102;
      v34 = _mm_loadh_ps((const double *)&v85);
      *(__m128 *)ptr.m256i_i8 = v34;
      if ( v33 != (void **)v32 )
      {
        v85 = (void **)v3;
        do
        {
          v35 = *v33;
          p_ptr = &ptr;
          if ( *v33 )
          {
            do
            {
              v37 = p_ptr->m256i_u32[4];
              if ( !(_DWORD)v37 )
                break;
              if ( (unsigned __int8)sub_21B9810(v35, v37) )
              {
                v3 = (__int64 *)v85;
                v85 = v33;
                v34 = _mm_loadh_ps((const double *)v84.m128i_i64);
                goto LABEL_69;
              }
              p_ptr = (__m256i *)((char *)p_ptr + 4);
            }
            while ( p_ptr != (__m256i *)((char *)&ptr.m256i_u64[2] + 4) );
          }
          ptr.m256i_i64[0] = (__int64)++v33;
        }
        while ( (void **)v32 != v33 );
        v38 = _mm_loadl_epi64(&v84);
        v3 = (__int64 *)v85;
        v34 = (__m128)_mm_unpacklo_epi64(v38, v38);
      }
LABEL_69:
      v39 = v84.m128i_i64[0];
      *(__m128 *)ptr.m256i_i8 = v34;
      if ( (void **)v84.m128i_i64[0] != v33 )
      {
        v84.m128i_i64[0] = (__int64)v3;
        v40 = (__int64)v33;
LABEL_71:
        v41 = *(_QWORD *)(*(_QWORD *)v40 + 16LL);
        if ( !v41 )
          v41 = *(_QWORD *)v40;
        v42 = (__int64 *)(v40 + 8);
        *(_BYTE *)(v41 + 44) |= 1u;
        for ( ptr.m256i_i64[0] = (__int64)v42; (__int64 *)v39 != v42; ptr.m256i_i64[0] = (__int64)v42 )
        {
          v43 = *v42;
          v44 = &ptr;
          if ( *v42 )
          {
            do
            {
              v45 = v44->m256i_u32[4];
              if ( !(_DWORD)v45 )
                break;
              if ( (unsigned __int8)sub_21B9810(v43, v45) )
              {
                v40 = ptr.m256i_i64[0];
                if ( v39 != ptr.m256i_i64[0] )
                  goto LABEL_71;
                goto LABEL_79;
              }
              v44 = (__m256i *)((char *)v44 + 4);
            }
            while ( v44 != (__m256i *)((char *)&ptr.m256i_u64[2] + 4) );
          }
          ++v42;
        }
LABEL_79:
        v3 = (__int64 *)v84.m128i_i64[0];
        goto LABEL_80;
      }
      sub_2290A40(v102, "INCLUDE", 7);
      v69 = v104;
      if ( (_BYTE)v104 )
      {
        ptr.m256i_i64[1] = 0x800000000LL;
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
        v99 = (char *)v102[0];
        v100 = v102[1];
        sub_22471D0(&v99, &ptr, ";", 1, 0xFFFFFFFFLL, 0);
        if ( ptr.m256i_i32[2] )
        {
          sub_112D6D0(v3, a3, (__int64 *)ptr.m256i_i64[0], ptr.m256i_u32[2]);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
            free((void *)ptr.m256i_i64[0]);
          if ( (_BYTE)v104 && v102[0] != v103 )
            operator delete(v102[0]);
          goto LABEL_142;
        }
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
          free((void *)ptr.m256i_i64[0]);
        if ( (_BYTE)v104 && v102[0] != v103 )
          operator delete(v102[0]);
      }
      v69 = 0;
LABEL_142:
      sub_2290A40(v102, "EXTERNAL_INCLUDE", 16);
      if ( (_BYTE)v104 )
      {
        ptr.m256i_i64[1] = 0x800000000LL;
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
        v99 = (char *)v102[0];
        v100 = v102[1];
        sub_22471D0(&v99, &ptr, ";", 1, 0xFFFFFFFFLL, 0);
        if ( ptr.m256i_i32[2] )
        {
          sub_112D6D0(v3, a3, (__int64 *)ptr.m256i_i64[0], ptr.m256i_u32[2]);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
            free((void *)ptr.m256i_i64[0]);
          if ( !(_BYTE)v104 )
            return;
          v56 = v102[0];
          if ( v102[0] == v103 )
            return;
LABEL_97:
          operator delete(v56);
          return;
        }
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
          free((void *)ptr.m256i_i64[0]);
        if ( (_BYTE)v104 && v102[0] != v103 )
          operator delete(v102[0]);
      }
      if ( v69 )
        return;
LABEL_80:
      if ( !*(_QWORD *)(v84.m128i_i64[1] + 2464) )
        return;
      v46 = v84.m128i_i64[1] + 2456;
      sub_22CA5A0(
        (unsigned int)v102,
        1,
        *(_DWORD *)(v84.m128i_i64[1] + 2488),
        v84.m128i_i32[2] + 2456,
        *(_DWORD *)(v84.m128i_i64[1] + 48),
        v30,
        (__int64)&byte_22F0C30,
        0);
      LOWORD(v106) = 260;
      ptr.m256i_i64[0] = (__int64)v102;
      sub_112FA80((__int64)v3, (__int64)a3, (__int64)&ptr);
      v47 = v82;
      if ( v102[0] != v103 )
        operator delete(v102[0]);
      sub_22CA5A0(
        (unsigned int)v102,
        1,
        *(_DWORD *)(v84.m128i_i64[1] + 2488),
        v46,
        *(_DWORD *)(v84.m128i_i64[1] + 48),
        v47,
        (__int64)"atlmfc",
        6);
      LOWORD(v106) = 260;
      ptr.m256i_i64[0] = (__int64)v102;
      sub_112FA80((__int64)v3, (__int64)a3, (__int64)&ptr);
      if ( v102[0] != v103 )
        operator delete(v102[0]);
      v48 = v84.m128i_i64[1];
      v49 = sub_112C5D0(v84.m128i_i64[1]);
      if ( (unsigned __int8)sub_22CAAC0(*(unsigned int *)(v48 + 2488), v46, *(unsigned int *)(v48 + 48), v49) )
      {
        v70 = v84.m128i_i64[1];
        v92 = 0;
        LOBYTE(v93[0]) = 0;
        dest = v93;
        v95 = v97;
        v96 = nullptr;
        v97[0] = 0;
        v71 = sub_112C5D0(v84.m128i_i64[1]);
        if ( (unsigned __int8)sub_22CADD0(
                                v71,
                                &dest,
                                &v95,
                                v72,
                                v73,
                                v74,
                                *(_QWORD *)(v70 + 2384),
                                *(_QWORD *)(v70 + 2392),
                                *(_QWORD *)(v70 + 2400),
                                *(_QWORD *)(v70 + 2408),
                                *(_QWORD *)(v70 + 2416),
                                *(_QWORD *)(v70 + 2424),
                                *(_QWORD *)(v70 + 2432),
                                *(_QWORD *)(v70 + 2440),
                                *(_QWORD *)(v70 + 2448)) )
        {
          if ( !*(_BYTE *)(v70 + 2400) && !*(_BYTE *)(v70 + 2448) && *(_BYTE *)(v70 + 2424) )
            sub_99BDC0(
              &v95,
              0,
              (unsigned __int64)v96,
              *(_BYTE **)(v84.m128i_i64[1] + 2408),
              *(_QWORD *)(v84.m128i_i64[1] + 2416));
          ptr.m256i_i64[0] = (__int64)"ucrt";
          LOWORD(v106) = 259;
          v104 = 260;
          v99 = "Include";
          v102[0] = &v95;
          v101 = 259;
          sub_1287110((__int64)v3, (__int64)a3, (__int64)&dest, (__int64)&v99, (__int64)v102, (__int64)&ptr);
        }
        if ( v95 != v97 )
          operator delete(v95);
        if ( dest != v93 )
          operator delete(dest);
      }
      v89[1] = nullptr;
      v90[0] = 0;
      v89[0] = v90;
      v87 = 0;
      dest = v93;
      v92 = 0;
      LOBYTE(v93[0]) = 0;
      v95 = v97;
      v96 = nullptr;
      v97[0] = 0;
      v50 = sub_112C5D0(v84.m128i_i64[1]);
      if ( !(unsigned __int8)sub_22CAC70(
                               v50,
                               v89,
                               &v87,
                               &dest,
                               &v95,
                               v51,
                               *(_QWORD *)(v84.m128i_i64[1] + 2384),
                               *(_QWORD *)(v84.m128i_i64[1] + 2392),
                               *(_QWORD *)(v84.m128i_i64[1] + 2400),
                               *(_QWORD *)(v84.m128i_i64[1] + 2408),
                               *(_QWORD *)(v84.m128i_i64[1] + 2416),
                               *(_QWORD *)(v84.m128i_i64[1] + 2424),
                               *(_QWORD *)(v84.m128i_i64[1] + 2432),
                               *(_QWORD *)(v84.m128i_i64[1] + 2440),
                               *(_QWORD *)(v84.m128i_i64[1] + 2448)) )
        goto LABEL_92;
      v52 = v87;
      if ( v87 > 9 )
      {
        if ( *(_BYTE *)(v84.m128i_i64[1] + 2400)
          || *(_BYTE *)(v84.m128i_i64[1] + 2448)
          || !*(_BYTE *)(v84.m128i_i64[1] + 2424) )
        {
LABEL_91:
          LOWORD(v106) = 259;
          v101 = 259;
          v104 = 260;
          ptr.m256i_i64[0] = (__int64)"shared";
          v102[0] = &dest;
          v99 = "Include";
          sub_1287110((__int64)v3, (__int64)a3, (__int64)v89, (__int64)&v99, (__int64)v102, (__int64)&ptr);
          LOWORD(v106) = 259;
          ptr.m256i_i64[0] = (__int64)"um";
          v104 = 260;
          v101 = 259;
          v102[0] = &dest;
          v99 = "Include";
          sub_1287110((__int64)v3, (__int64)a3, (__int64)v89, (__int64)&v99, (__int64)v102, (__int64)&ptr);
          ptr.m256i_i64[0] = (__int64)"winrt";
          LOWORD(v106) = 259;
          v104 = 260;
          v102[0] = &dest;
          v99 = "Include";
          v101 = 259;
          sub_1287110((__int64)v3, (__int64)a3, (__int64)v89, (__int64)&v99, (__int64)v102, (__int64)&ptr);
          if ( v87 > 9 )
          {
            v88 = 0;
            if ( !(unsigned __int8)sub_22578D0(&v88, dest, v92, v53, v54, v55)
              && SBYTE11(v88) < 0
              && (DWORD2(v88) & 0x7FFFFFFFu) > 0x42ED )
            {
              v102[0] = &dest;
              ptr.m256i_i64[0] = (__int64)"cppwinrt";
              LOWORD(v106) = 259;
              v104 = 260;
              v99 = "Include";
              goto LABEL_178;
            }
          }
LABEL_92:
          if ( v95 != v97 )
            operator delete(v95);
          if ( dest != v93 )
            operator delete(dest);
          v56 = v89[0];
          if ( v89[0] == v90 )
            return;
          goto LABEL_97;
        }
        v84.m128i_i64[0] = (__int64)sub_99BDC0(
                                      &v95,
                                      0,
                                      (unsigned __int64)v96,
                                      *(_BYTE **)(v84.m128i_i64[1] + 2408),
                                      *(_QWORD *)(v84.m128i_i64[1] + 2416));
        if ( (void **)v84.m128i_i64[0] != &dest )
        {
          v75 = *(_QWORD *)(v84.m128i_i64[0] + 8);
          if ( dest == v93 )
            v76 = 15;
          else
            v76 = v93[0];
          if ( v75 > v76 )
          {
            if ( (v75 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v78 = 2 * v76;
            v79 = *(_QWORD *)(v84.m128i_i64[0] + 8);
            if ( v75 < v78 )
            {
              v80 = 0x7FFFFFFFFFFFFFFFLL;
              if ( v78 >= 0 )
                v80 = v78;
              v79 = v80;
            }
            v84.m128i_i64[1] = *(_QWORD *)(v84.m128i_i64[0] + 8);
            v81 = (void **)operator new(v79 + 1);
            v75 = v84.m128i_u64[1];
            if ( dest != v93 )
            {
              v85 = v81;
              operator delete(dest);
              v81 = v85;
              v75 = v84.m128i_u64[1];
            }
            dest = v81;
            v93[0] = v79;
          }
          if ( v75 )
          {
            v77 = *(_BYTE **)v84.m128i_i64[0];
            if ( v75 == 1 )
            {
              *(_BYTE *)dest = *v77;
            }
            else
            {
              v84.m128i_i64[0] = v75;
              memcpy(dest, v77, v75);
              v75 = v84.m128i_i64[0];
            }
          }
          v92 = v75;
          *((_BYTE *)dest + v75) = 0;
        }
        v52 = v87;
      }
      if ( v52 <= 7 )
      {
        LOWORD(v106) = 257;
        v104 = 257;
        v99 = "Include";
LABEL_178:
        v101 = 259;
        sub_1287110((__int64)v3, (__int64)a3, (__int64)v89, (__int64)&v99, (__int64)v102, (__int64)&ptr);
        goto LABEL_92;
      }
      goto LABEL_91;
    }
    do
    {
      v58 = (__int64 *)*v22;
      v59 = *(__int64 **)(*v22 + 16LL);
      if ( !v59 )
        v59 = (__int64 *)*v22;
      v60 = v22 + 1;
      *((_BYTE *)v59 + 44) |= 1u;
      ptr.m256i_i64[0] = (__int64)v60;
      if ( v60 == (_QWORD *)v23 )
        break;
      while ( 1 )
      {
        v61 = *v60;
        if ( *v60 )
        {
          if ( (unsigned __int8)sub_21B9810(*v60, 285) || (unsigned __int8)sub_21B9810(v61, 3436) )
            break;
        }
        ptr.m256i_i64[0] = (__int64)++v60;
        if ( (_QWORD *)v23 == v60 )
          goto LABEL_122;
      }
      v22 = (_QWORD *)ptr.m256i_i64[0];
    }
    while ( v23 != ptr.m256i_i64[0] );
LABEL_122:
    v62 = (const char **)v58[6];
    v63 = *v62;
    if ( *v62 )
    {
      v64 = strlen(*v62);
      v65 = v64;
      v66 = v64;
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v64 <= 0x80 )
      {
        if ( !v64 )
          goto LABEL_126;
        v67 = &ptr.m256i_i64[3];
      }
      else
      {
        sub_2236E10(&ptr, &ptr.m256i_u64[3], v64, 1);
        v67 = (__int64 *)(ptr.m256i_i64[0] + ptr.m256i_i64[1]);
      }
      memcpy(v67, v63, v65);
      v66 = v65 + ptr.m256i_i64[1];
    }
    else
    {
      v66 = 0;
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    }
LABEL_126:
    v68 = *v58;
    ptr.m256i_i64[1] = v66;
    if ( *(_DWORD *)(v68 + 40) == 3436 )
    {
      v104 = 257;
      v98 = 257;
      dest = "DIA SDK";
      v101 = 257;
      v94 = 259;
      sub_228A3B0(&ptr, &dest, &v95, &v99, v102);
      v66 = ptr.m256i_i64[1];
    }
    v104 = 257;
    v101 = 257;
    v95 = "include";
    v98 = 259;
    dest = v93;
    sub_1287050(&dest, ptr.m256i_i64[0], ptr.m256i_i64[0] + v66);
    sub_1287110((__int64)v3, (__int64)a3, (__int64)&dest, (__int64)&v95, (__int64)&v99, (__int64)v102);
    if ( dest != v93 )
      operator delete(dest);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
      free((void *)ptr.m256i_i64[0]);
    goto LABEL_57;
  }
  do
  {
    v12 = *v6;
    if ( *(_QWORD *)(*v6 + 16LL) )
      v12 = *(_QWORD *)(*v6 + 16LL);
    ++v6;
    *(_BYTE *)(v12 + 44) |= 1u;
    if ( v6 == v7 )
      break;
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
    {
      if ( v7 == ++v6 )
        return;
    }
  }
  while ( v7 != v6 );
}
