__int64 __fastcall sub_14A550(__int64 a1)
{
  _QWORD *exception; // rdi
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned int **v7; // r13
  __int64 v8; // rax
  unsigned __int8 (__fastcall *v9)(__int64, _QWORD); // rax
  __int64 *v10; // rsi
  __int64 (__fastcall ***v11)(); // rdi
  unsigned int *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // rax
  char v21; // r14
  _BYTE *v22; // rax
  _BYTE *v23; // r12
  __m128i v24; // xmm0
  __int64 v25; // rdi
  int v26; // r14d
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 *v34; // r15
  unsigned int v35; // ebp
  unsigned __int64 *v36; // r12
  __int64 v37; // rsi
  unsigned int *v38; // rdi
  unsigned int *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // r12
  __int64 *v47; // r14
  __int64 v48; // r8
  int v49; // r9d
  _QWORD *v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rbp
  __int64 *v54; // r12
  __int64 v55; // rdx
  __int64 *v56; // rbx
  __int64 v57; // rax
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  __int64 *v60; // rbx
  __int64 *v61; // rdi
  __int64 *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v67; // rdx
  _QWORD *v68; // rsi
  unsigned __int64 v69; // rcx
  unsigned int v70; // ebx
  __int64 (__fastcall *v71)(__int64); // rax
  char tinfo_property; // al
  unsigned __int8 v73; // cl
  unsigned __int64 v74; // rdx
  __m128i v75; // xmm0
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __m128i v86; // xmm0
  unsigned int v87; // [rsp+4h] [rbp-134h]
  unsigned __int8 v88; // [rsp+4h] [rbp-134h]
  unsigned __int64 v89; // [rsp+8h] [rbp-130h]
  unsigned __int8 v90; // [rsp+8h] [rbp-130h]
  unsigned int *v91; // [rsp+10h] [rbp-128h]
  _QWORD *v92; // [rsp+18h] [rbp-120h]
  __int64 v94; // [rsp+28h] [rbp-110h]
  _QWORD *v95; // [rsp+30h] [rbp-108h]
  unsigned int v96; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v97; // [rsp+47h] [rbp-F1h]
  __int64 v98; // [rsp+48h] [rbp-F0h]
  __m128i v99; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v100; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-D0h]
  __int64 v102[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v103; // [rsp+90h] [rbp-A8h]
  __int128 v104; // [rsp+98h] [rbp-A0h]
  __int64 (__fastcall **v105)(); // [rsp+B0h] [rbp-88h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-80h]
  __int64 v107; // [rsp+C0h] [rbp-78h]
  __int64 v108; // [rsp+C8h] [rbp-70h]
  __int64 v109; // [rsp+D0h] [rbp-68h]
  char v110; // [rsp+D8h] [rbp-60h]
  _DWORD v111[5]; // [rsp+DCh] [rbp-5Ch]
  char v112; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v113; // [rsp+F8h] [rbp-40h]

  v113 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 40);
  v99 = 0u;
  v94 = *(_QWORD *)(v4 + 1504);
  v98 = sub_110320(a1, 0);
  if ( !v98 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
LABEL_156:
    BUG();
  }
  v5 = *(_QWORD **)v98;
  ++*(_DWORD *)(v98 + 24);
  v6 = (_QWORD *)*v5;
  v95 = v5;
  if ( !*v5 || !v5[1] )
  {
    v97 = 0;
    goto LABEL_57;
  }
  v97 = 0;
  v92 = (_QWORD *)v6[1];
  if ( v92 == v6 )
    goto LABEL_57;
  do
  {
    v7 = (unsigned int **)(v92 + 3);
    v8 = v92[4];
    if ( !v8 || *((_BYTE *)v92 + 56) != 1 )
      goto LABEL_50;
    if ( v8 == 1 )
    {
      v70 = **v7;
      v71 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v71 != sub_1014E0 )
      {
        if ( v70 == (unsigned int)v71(a1) - 1 )
          goto LABEL_50;
        v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v94 + 216LL);
        if ( *((_BYTE *)v92 + 56) != 1 )
          sub_1340D0(a1);
        goto LABEL_9;
      }
      if ( v70 == *(_DWORD *)(*(_QWORD *)(a1 + 40) + 64LL) - 1 )
        goto LABEL_50;
    }
    v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v94 + 216LL);
LABEL_9:
    if ( !v9(v94, *((unsigned int *)v92 + 12)) )
      goto LABEL_50;
    if ( *((_BYTE *)v92 + 56) != 1 )
      sub_1340D0(v94);
    v10 = (__int64 *)*((unsigned int *)v92 + 12);
    v11 = (__int64 (__fastcall ***)())v94;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v94 + 88LL))(
           v94,
           v10,
           *((unsigned int *)v92 + 16)) )
    {
      if ( *((_BYTE *)v92 + 56) != 1 )
        sub_1340D0(v94);
      v10 = (__int64 *)v94;
      sub_1C63E0(&v105, v94, *((unsigned int *)v92 + 12), *((unsigned int *)v92 + 16));
      v11 = &v105;
      if ( (unsigned int)((_DWORD)v105 - 3) <= 1 )
      {
        cleanup_argloc(&v105);
        goto LABEL_50;
      }
      cleanup_argloc(&v105);
    }
    v100 = 0;
    v101 = 0;
    v91 = *v7;
    if ( !(4LL * v92[4]) )
      goto LABEL_50;
    do
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *v91;
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
        sub_1340F0(v11, v10, v15, v12, v13, v14);
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
      v87 = *((_DWORD *)v92 + 16);
      if ( *((_BYTE *)v92 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_3835A0(51892);
        goto LABEL_156;
      }
      v18 = *((_DWORD *)v92 + 12);
      v102[0] = 0;
      v19 = *(_QWORD *)(v17 + 48);
      v96 = v18;
      v102[1] = 0;
      sub_63880(v102, v18, v87);
      v20 = *(_QWORD *)(v17 + 480);
      v103 = 0;
      v104 = 0;
      v21 = *(_BYTE *)(v20 + 130);
      while ( 1 )
      {
        v10 = v102;
        v22 = (_BYTE *)sub_A97D0(v17, v102, v19, 0, 1u);
        v23 = v22;
        v24.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v96), _mm_cvtsi32_si128(v87)).m128i_u64[0];
        if ( !v22 )
          break;
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v105 = &off_4D8190;
        *(_QWORD *)&v111[3] = &v100;
        v112 = v21;
        *(_QWORD *)v111 = v24.m128i_i64[0];
        if ( (int)sub_11E340(v22, (__int64)&v105) < 0 )
        {
          if ( v103 )
          {
            *(_QWORD *)&v104 = 0;
            qfree(v103);
          }
          qfree(v102[0]);
          v25 = v100;
          if ( (unsigned int *)(v92[3] + 4LL * v92[4]) != v91 )
          {
LABEL_93:
            if ( v25 )
              goto LABEL_49;
            goto LABEL_50;
          }
          goto LABEL_23;
        }
        v19 = *((_QWORD *)v23 + 1);
      }
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      v11 = (__int64 (__fastcall ***)())v102[0];
      qfree(v102[0]);
      v12 = ++v91;
    }
    while ( v91 != (unsigned int *)(v92[3] + 4LL * v92[4]) );
    v25 = v100;
LABEL_23:
    if ( !(_QWORD)v101 )
      goto LABEL_93;
    v26 = 0;
    v27 = 0;
LABEL_37:
    v34 = (__int64 *)(v25 + 16 * v27);
    if ( *((_BYTE *)v92 + 56) != 1 )
      sub_1340D0(v25);
    v35 = v92[6] - *(_DWORD *)(v34[1] + 8);
    if ( !sub_11C4C0(v35) )
      goto LABEL_35;
    v36 = *(unsigned __int64 **)(*v34 + 72);
    if ( *(_DWORD *)*v34 == 56 && (v36[35] & 4) != 0 )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(v34[1] + 24), 2);
      if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
        goto LABEL_35;
    }
    sub_32C760(&v105, v94, v35, 0);
    v88 = sub_330A80(v36, -858993459 * (unsigned int)((__int64)(v34[1] - v36[3]) >> 4), &v105, *(double *)v24.m128i_i64);
    if ( v88 )
    {
      sub_133F60(v94, v34[1], v35);
      *(_DWORD *)(v34[1] + 4) = v35;
      copy_tinfo_t(v34[1] + 24, &v105);
      v28 = *v36;
      if ( *v36 == -1 )
        goto LABEL_34;
      v29 = v99.m128i_i64[0];
      if ( !v99.m128i_i64[0] )
      {
        v81 = qalloc(40);
        v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v81, (__m128i)(unsigned __int64)v81);
        if ( !v81 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v81 + 32) = 0;
        *(_OWORD *)(v81 + 16) = 0;
        *(__m128i *)(v81 + 8) = v82;
        *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v99.m128i_i64[0] = v81;
        *(_QWORD *)v81 = v81 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v81 & 3LL;
        v83 = v99.m128i_i64[0];
        v84 = (__m128i)v99.m128i_u64[0];
        *(_QWORD *)v99.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64(v84, v84);
        *(_QWORD *)v99.m128i_i64[0] |= 2uLL;
        v29 = v99.m128i_i64[0];
LABEL_28:
        v30 = qalloc(40);
        if ( !v30 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v30 + 32) = 0;
        *(_OWORD *)v30 = 0;
        *(_OWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = *v36;
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
        v31 = _mm_loadl_epi64(&v99);
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v32 = v99.m128i_i64[0];
        v24 = _mm_unpacklo_epi64(v31, v31);
        *(__m128i *)(v30 + 8) = v24;
        if ( v32 != v29 )
        {
          *(_QWORD *)(v29 + 8) = v30;
          if ( *(_QWORD *)(v32 + 8) == v29 )
            goto LABEL_119;
          goto LABEL_31;
        }
        goto LABEL_129;
      }
      if ( !v99.m128i_i64[1] )
        goto LABEL_28;
      v73 = v88;
      v74 = *(_QWORD *)v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v74 & 2) != 0 )
      {
LABEL_115:
        v90 = v73;
        v30 = qalloc(40);
        if ( !v30 )
        {
          v2 = __cxa_allocate_exception(8u);
          *v2 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v2,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v30 + 32) = 0;
        *(_OWORD *)v30 = 0;
        *(_OWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = *v36;
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
        v75 = _mm_loadl_epi64(&v99);
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v32 = v99.m128i_i64[0];
        v24 = _mm_unpacklo_epi64(v75, v75);
        *(__m128i *)(v30 + 8) = v24;
        if ( v29 != v32 )
        {
          if ( v90 )
          {
            *(_QWORD *)(v29 + 8) = v30;
            if ( v29 == *(_QWORD *)(v32 + 8) )
LABEL_119:
              *(_QWORD *)(v32 + 8) = v30;
          }
          else
          {
            *(_QWORD *)(v29 + 16) = v30;
            if ( v29 == *(_QWORD *)(v32 + 16) )
              *(_QWORD *)(v32 + 16) = v30;
          }
LABEL_31:
          v89 = v30;
          sub_14A210(&v99, v30);
          v30 = v89;
LABEL_32:
          ++v99.m128i_i64[1];
          goto LABEL_33;
        }
LABEL_129:
        v24 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
        *(_QWORD *)v29 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
        *(__m128i *)(v99.m128i_i64[0] + 8) = v24;
        v80 = *(_QWORD *)v30 & 2LL;
        *(_QWORD *)v30 &= ~1uLL;
        *(_QWORD *)v30 = v80 | v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_32;
      }
      while ( 1 )
      {
        v29 = v74;
        v76 = *(_QWORD *)(v74 + 24);
        if ( v28 >= v76 )
        {
          if ( v76 >= v28 )
          {
            if ( !v29 )
              goto LABEL_115;
            v30 = v29;
LABEL_33:
            *(_QWORD *)(v30 + 32) = v36;
LABEL_34:
            clear_tinfo_t(&v105);
            v97 = v88;
LABEL_35:
            v27 = ++v26;
            if ( v26 >= (unsigned __int64)v101 )
              goto LABEL_43;
LABEL_36:
            v25 = v100;
            goto LABEL_37;
          }
          v74 = *(_QWORD *)(v29 + 16);
          v73 = 0;
        }
        else
        {
          v74 = *(_QWORD *)(v29 + 8);
          v73 = v88;
        }
        if ( (*(_BYTE *)v74 & 2) != 0 )
          goto LABEL_115;
      }
    }
    ++v26;
    clear_tinfo_t(&v105);
    v27 = v26;
    if ( v26 < (unsigned __int64)v101 )
      goto LABEL_36;
LABEL_43:
    v37 = v92[4];
    v38 = *v7;
    v39 = *v7;
    if ( 4 * v37 )
    {
      do
      {
        v40 = *(_QWORD *)(a1 + 40);
        v41 = *v39;
        if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 64) )
          sub_1340F0(v38, v37, v39, v40, a1, v33);
        v42 = *(_QWORD *)(*(_QWORD *)(v40 + 528) + 8 * v41);
        if ( *(_DWORD *)(v42 + 76) != 1 )
        {
          v43 = *(_DWORD *)(v42 + 24);
          BYTE1(v43) &= ~2u;
          LOBYTE(v43) = v43 | 0x80;
          *(_DWORD *)(v42 + 24) = v43;
          v37 = v92[4];
          v38 = *v7;
        }
        ++v39;
      }
      while ( v39 != &v38[v37] );
    }
    v25 = v100;
    if ( v100 )
    {
LABEL_49:
      *(_QWORD *)&v101 = 0;
      qfree(v25);
    }
LABEL_50:
    if ( (*v92 & 2) == 0 )
    {
      v44 = (_QWORD *)v92[2];
      if ( (*(_BYTE *)v44 & 2) != 0 )
      {
        v45 = (_QWORD *)(*v92 & 0xFFFFFFFFFFFFFFFCLL);
        v67 = *v45;
        if ( (*v45 & 2) == 0 )
        {
          v68 = v92;
          while ( (_QWORD *)v45[2] == v68 )
          {
            v68 = v45;
            v69 = v67 & 0xFFFFFFFFFFFFFFFCLL;
            v67 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v67 & 2) != 0 )
            {
              v92 = (_QWORD *)v69;
              goto LABEL_54;
            }
            v45 = (_QWORD *)v69;
          }
        }
      }
      else
      {
        do
        {
          v45 = v44;
          v44 = (_QWORD *)v44[1];
        }
        while ( (*(_BYTE *)v44 & 2) == 0 );
      }
      v92 = v45;
    }
LABEL_54:
    ;
  }
  while ( (_QWORD *)*v95 != v92 );
LABEL_57:
  if ( v99.m128i_i64[1] )
  {
    if ( v99.m128i_i64[0] )
    {
      v46 = *(_QWORD **)(v99.m128i_i64[0] + 8);
      while ( (_QWORD *)v99.m128i_i64[0] != v46 )
      {
        v47 = (__int64 *)v46[4];
        sub_3363F0(&v105, v47);
        sub_F2F00(*(_QWORD *)(a1 + 40), *v47, &v105, 67108866, v48, v49);
        clear_tinfo_t(&v105);
        if ( (*v46 & 2) == 0 )
        {
          v50 = (_QWORD *)v46[2];
          if ( (*(_BYTE *)v50 & 2) != 0 )
          {
            v77 = (_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFFCLL);
            v78 = *v77;
            if ( (*v77 & 2) == 0 )
            {
              while ( v46 == (_QWORD *)v77[2] )
              {
                v46 = (_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
                v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v78 & 2) != 0 )
                  goto LABEL_63;
                v79 = v77;
                v77 = v46;
                v46 = v79;
              }
            }
            v46 = v77;
          }
          else
          {
            do
            {
              v46 = v50;
              v50 = (_QWORD *)v50[1];
            }
            while ( (*(_BYTE *)v50 & 2) == 0 );
          }
        }
LABEL_63:
        ;
      }
    }
    v106 = 0;
    v105 = &off_4D81B8;
    v107 = 0;
    v51 = *(_QWORD *)(a1 + 40);
    v110 = 0;
    v108 = 0;
    v109 = 0;
    *(_QWORD *)&v111[1] = &v99;
    sub_11F5F0(v51, (__int64)&v105);
    *(_DWORD *)(a1 + 48) = 63;
    sub_669A0(*(_QWORD *)(a1 + 40), 1u, (__int64)"refine_input_argument_sizes");
    v97 = 1;
  }
  sub_104850(v98);
  v52 = v99.m128i_i64[0];
  if ( !v99.m128i_i64[0] )
    return v97;
  v53 = *(_QWORD *)v99.m128i_i64[0];
  if ( !v99.m128i_i64[1] )
  {
    *(_QWORD *)v99.m128i_i64[0] = *(_QWORD *)v99.m128i_i64[0] & 3LL | v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v85 = v99.m128i_i64[0];
    v86 = (__m128i)v99.m128i_u64[0];
    *(_QWORD *)v99.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v86, v86);
    *(_QWORD *)v99.m128i_i64[0] |= 2uLL;
    goto LABEL_87;
  }
  v54 = (__int64 *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
  v55 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v55 & 2) != 0 )
    goto LABEL_86;
  v56 = (__int64 *)v54[1];
  v57 = *v56;
  if ( (*v56 & 2) != 0 )
  {
    v60 = (__int64 *)v54[2];
    if ( (*(_BYTE *)v60 & 2) == 0 )
      goto LABEL_76;
LABEL_141:
    *v54 = v55 | 2;
    goto LABEL_83;
  }
  v58 = (__int64 *)v56[1];
  if ( (*(_BYTE *)v58 & 2) != 0 )
  {
    v59 = (__int64 *)v56[2];
    if ( (*(_BYTE *)v59 & 2) == 0 )
    {
LABEL_71:
      sub_1348A0(v59);
      goto LABEL_72;
    }
    goto LABEL_148;
  }
  sub_1348A0(v58);
  v59 = (__int64 *)v56[2];
  if ( (*(_BYTE *)v59 & 2) == 0 )
    goto LABEL_71;
LABEL_72:
  v57 = *v56;
  if ( (*v56 & 2) == 0 )
LABEL_148:
    *v56 = v57 | 2;
  if ( v56 )
    qfree(v56);
  v60 = (__int64 *)v54[2];
  if ( (*(_BYTE *)v60 & 2) == 0 )
  {
LABEL_76:
    v61 = (__int64 *)v60[1];
    if ( (*(_BYTE *)v61 & 2) != 0 )
    {
      v62 = (__int64 *)v60[2];
      if ( (*(_BYTE *)v62 & 2) == 0 )
      {
LABEL_78:
        sub_1348A0(v62);
        goto LABEL_79;
      }
      v63 = *v60;
    }
    else
    {
      sub_1348A0(v61);
      v62 = (__int64 *)v60[2];
      if ( (*(_BYTE *)v62 & 2) == 0 )
        goto LABEL_78;
LABEL_79:
      v63 = *v60;
      if ( (*v60 & 2) != 0 )
      {
LABEL_80:
        if ( v60 )
          qfree(v60);
        goto LABEL_82;
      }
    }
    *v60 = v63 | 2;
    goto LABEL_80;
  }
LABEL_82:
  v55 = *v54;
  if ( (*v54 & 2) == 0 )
    goto LABEL_141;
LABEL_83:
  if ( v53 > 3 )
    qfree(v53 & 0xFFFFFFFFFFFFFFFCLL);
  v52 = v99.m128i_i64[0];
  v53 = *(_QWORD *)v99.m128i_i64[0];
LABEL_86:
  *(_QWORD *)v52 = v53 & 3 | v52 & 0xFFFFFFFFFFFFFFFCLL;
  v64 = v99.m128i_i64[0];
  v65 = (__m128i)v99.m128i_u64[0];
  *(_QWORD *)v99.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v64 + 8) = _mm_unpacklo_epi64(v65, v65);
  *(_QWORD *)v99.m128i_i64[0] |= 2uLL;
  v99.m128i_i64[1] = 0;
LABEL_87:
  if ( v99.m128i_i64[0] )
    qfree(v99.m128i_i64[0]);
  return v97;
}
