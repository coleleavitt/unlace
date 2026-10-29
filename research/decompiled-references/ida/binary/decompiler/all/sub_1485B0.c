__int64 __fastcall sub_1485B0(__int64 a1)
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
  _QWORD *v47; // r14
  _QWORD *v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  __int64 *v52; // r12
  __int64 v53; // rdx
  __int64 *v54; // rbx
  __int64 v55; // rax
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 *v58; // rbx
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v65; // rdx
  _QWORD *v66; // rsi
  unsigned __int64 v67; // rcx
  unsigned int v68; // ebx
  __int64 (__fastcall *v69)(__int64); // rax
  char tinfo_property; // al
  unsigned __int8 v71; // cl
  unsigned __int64 v72; // rdx
  __m128i v73; // xmm0
  unsigned __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  __m128i v84; // xmm0
  unsigned int v85; // [rsp+4h] [rbp-134h]
  unsigned __int8 v86; // [rsp+4h] [rbp-134h]
  unsigned __int64 v87; // [rsp+8h] [rbp-130h]
  unsigned __int8 v88; // [rsp+8h] [rbp-130h]
  unsigned int *v89; // [rsp+10h] [rbp-128h]
  _QWORD *v90; // [rsp+18h] [rbp-120h]
  __int64 v92; // [rsp+28h] [rbp-110h]
  _QWORD *v93; // [rsp+30h] [rbp-108h]
  unsigned int v94; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v95; // [rsp+47h] [rbp-F1h]
  __int64 v96; // [rsp+48h] [rbp-F0h]
  __m128i v97; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v98; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+68h] [rbp-D0h]
  __int64 v100[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+90h] [rbp-A8h]
  __int128 v102; // [rsp+98h] [rbp-A0h]
  __int64 (__fastcall **v103)(); // [rsp+B0h] [rbp-88h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-80h]
  __int64 v105; // [rsp+C0h] [rbp-78h]
  __int64 v106; // [rsp+C8h] [rbp-70h]
  __int64 v107; // [rsp+D0h] [rbp-68h]
  char v108; // [rsp+D8h] [rbp-60h]
  _DWORD v109[5]; // [rsp+DCh] [rbp-5Ch]
  char v110; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 40);
  v97 = 0u;
  v92 = *(_QWORD *)(v4 + 1504);
  v96 = sub_10F6E0(a1, 0);
  if ( !v96 )
  {
    if ( !under_debugger )
      sub_37EA20(50446);
LABEL_156:
    BUG();
  }
  v5 = *(_QWORD **)v96;
  ++*(_DWORD *)(v96 + 24);
  v6 = (_QWORD *)*v5;
  v93 = v5;
  if ( !*v5 || !v5[1] )
  {
    v95 = 0;
    goto LABEL_57;
  }
  v95 = 0;
  v90 = (_QWORD *)v6[1];
  if ( v90 == v6 )
    goto LABEL_57;
  do
  {
    v7 = (unsigned int **)(v90 + 3);
    v8 = v90[4];
    if ( !v8 || *((_BYTE *)v90 + 56) != 1 )
      goto LABEL_50;
    if ( v8 == 1 )
    {
      v68 = **v7;
      v69 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v69 != sub_1002A0 )
      {
        if ( v68 == (unsigned int)v69(a1) - 1 )
          goto LABEL_50;
        v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v92 + 216LL);
        if ( *((_BYTE *)v90 + 56) != 1 )
          sub_132160(a1);
        goto LABEL_9;
      }
      if ( v68 == *(_DWORD *)(*(_QWORD *)(a1 + 40) + 64LL) - 1 )
        goto LABEL_50;
    }
    v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v92 + 216LL);
LABEL_9:
    if ( !v9(v92, *((unsigned int *)v90 + 12)) )
      goto LABEL_50;
    if ( *((_BYTE *)v90 + 56) != 1 )
      sub_132160(v92);
    v10 = (__int64 *)*((unsigned int *)v90 + 12);
    v11 = (__int64 (__fastcall ***)())v92;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v92 + 88LL))(
           v92,
           v10,
           *((unsigned int *)v90 + 16)) )
    {
      if ( *((_BYTE *)v90 + 56) != 1 )
        sub_132160(v92);
      v10 = (__int64 *)v92;
      sub_1C3F20(&v103, v92, *((unsigned int *)v90 + 12), *((unsigned int *)v90 + 16));
      v11 = &v103;
      if ( (unsigned int)((_DWORD)v103 - 3) <= 1 )
      {
        cleanup_argloc();
        goto LABEL_50;
      }
      cleanup_argloc();
    }
    v98 = 0;
    v99 = 0;
    v89 = *v7;
    if ( !(4LL * v90[4]) )
      goto LABEL_50;
    do
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *v89;
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
        sub_132180(v11, v10, v15, v12, v13, v14);
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
      v85 = *((_DWORD *)v90 + 16);
      if ( *((_BYTE *)v90 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_37EA20(51892);
        goto LABEL_156;
      }
      v18 = *((_DWORD *)v90 + 12);
      v100[0] = 0;
      v19 = *(_QWORD *)(v17 + 48);
      v94 = v18;
      v100[1] = 0;
      sub_63580(v100, v18, v85);
      v20 = *(_QWORD *)(v17 + 480);
      v101 = 0;
      v102 = 0;
      v21 = *(_BYTE *)(v20 + 130);
      while ( 1 )
      {
        v10 = v100;
        v22 = (_BYTE *)sub_A9010(v17, v100, v19, 0, 1u);
        v23 = v22;
        v24.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v94), _mm_cvtsi32_si128(v85)).m128i_u64[0];
        if ( !v22 )
          break;
        v104 = 0;
        v105 = 0;
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v103 = off_4DD208;
        *(_QWORD *)&v109[3] = &v98;
        v110 = v21;
        *(_QWORD *)v109 = v24.m128i_i64[0];
        if ( (int)sub_11C4C0(v22, (__int64)&v103) < 0 )
        {
          if ( v101 )
          {
            *(_QWORD *)&v102 = 0;
            qfree();
          }
          qfree();
          v25 = v98;
          if ( (unsigned int *)(v90[3] + 4LL * v90[4]) != v89 )
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
      if ( v101 )
      {
        *(_QWORD *)&v102 = 0;
        qfree();
      }
      v11 = (__int64 (__fastcall ***)())v100[0];
      qfree();
      v12 = ++v89;
    }
    while ( v89 != (unsigned int *)(v90[3] + 4LL * v90[4]) );
    v25 = v98;
LABEL_23:
    if ( !(_QWORD)v99 )
      goto LABEL_93;
    v26 = 0;
    v27 = 0;
LABEL_37:
    v34 = (__int64 *)(v25 + 16 * v27);
    if ( *((_BYTE *)v90 + 56) != 1 )
      sub_132160(v25);
    v35 = v90[6] - *(_DWORD *)(v34[1] + 8);
    if ( !sub_11A640(v35) )
      goto LABEL_35;
    v36 = *(unsigned __int64 **)(*v34 + 72);
    if ( *(_DWORD *)*v34 == 56 && (v36[35] & 4) != 0 )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
        goto LABEL_35;
    }
    sub_328FE0(&v103, v92, v35, 0);
    v86 = sub_32D2C0(v36, -858993459 * (unsigned int)((__int64)(v34[1] - v36[3]) >> 4), &v103, *(double *)v24.m128i_i64);
    if ( v86 )
    {
      sub_131FF0(v92, v34[1], v35);
      *(_DWORD *)(v34[1] + 4) = v35;
      copy_tinfo_t();
      v28 = *v36;
      if ( *v36 == -1 )
        goto LABEL_34;
      v29 = v97.m128i_i64[0];
      if ( !v97.m128i_i64[0] )
      {
        v79 = qalloc();
        v80 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
        if ( !v79 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v79 + 32) = 0;
        *(_OWORD *)(v79 + 16) = 0;
        *(__m128i *)(v79 + 8) = v80;
        *(_QWORD *)v79 = v79 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v97.m128i_i64[0] = v79;
        *(_QWORD *)v79 = v79 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v79 & 3LL;
        v81 = v97.m128i_i64[0];
        v82 = (__m128i)v97.m128i_u64[0];
        *(_QWORD *)v97.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v81 + 8) = _mm_unpacklo_epi64(v82, v82);
        *(_QWORD *)v97.m128i_i64[0] |= 2uLL;
        v29 = v97.m128i_i64[0];
LABEL_28:
        v30 = qalloc();
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
        v31 = _mm_loadl_epi64(&v97);
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v32 = v97.m128i_i64[0];
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
      if ( !v97.m128i_i64[1] )
        goto LABEL_28;
      v71 = v86;
      v72 = *(_QWORD *)v97.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v72 & 2) != 0 )
      {
LABEL_115:
        v88 = v71;
        v30 = qalloc();
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
        v73 = _mm_loadl_epi64(&v97);
        *(_QWORD *)v30 = v29 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v32 = v97.m128i_i64[0];
        v24 = _mm_unpacklo_epi64(v73, v73);
        *(__m128i *)(v30 + 8) = v24;
        if ( v29 != v32 )
        {
          if ( v88 )
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
          v87 = v30;
          sub_148270(&v97, v30);
          v30 = v87;
LABEL_32:
          ++v97.m128i_i64[1];
          goto LABEL_33;
        }
LABEL_129:
        v24 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
        *(_QWORD *)v29 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
        *(__m128i *)(v97.m128i_i64[0] + 8) = v24;
        v78 = *(_QWORD *)v30 & 2LL;
        *(_QWORD *)v30 &= ~1uLL;
        *(_QWORD *)v30 = v78 | v97.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_32;
      }
      while ( 1 )
      {
        v29 = v72;
        v74 = *(_QWORD *)(v72 + 24);
        if ( v28 >= v74 )
        {
          if ( v74 >= v28 )
          {
            if ( !v29 )
              goto LABEL_115;
            v30 = v29;
LABEL_33:
            *(_QWORD *)(v30 + 32) = v36;
LABEL_34:
            clear_tinfo_t();
            v95 = v86;
LABEL_35:
            v27 = ++v26;
            if ( v26 >= (unsigned __int64)v99 )
              goto LABEL_43;
LABEL_36:
            v25 = v98;
            goto LABEL_37;
          }
          v72 = *(_QWORD *)(v29 + 16);
          v71 = 0;
        }
        else
        {
          v72 = *(_QWORD *)(v29 + 8);
          v71 = v86;
        }
        if ( (*(_BYTE *)v72 & 2) != 0 )
          goto LABEL_115;
      }
    }
    ++v26;
    clear_tinfo_t();
    v27 = v26;
    if ( v26 < (unsigned __int64)v99 )
      goto LABEL_36;
LABEL_43:
    v37 = v90[4];
    v38 = *v7;
    v39 = *v7;
    if ( 4 * v37 )
    {
      do
      {
        v40 = *(_QWORD *)(a1 + 40);
        v41 = *v39;
        if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 64) )
          sub_132180(v38, v37, v39, v40, a1, v33);
        v42 = *(_QWORD *)(*(_QWORD *)(v40 + 528) + 8 * v41);
        if ( *(_DWORD *)(v42 + 76) != 1 )
        {
          v43 = *(_DWORD *)(v42 + 24);
          BYTE1(v43) &= ~2u;
          LOBYTE(v43) = v43 | 0x80;
          *(_DWORD *)(v42 + 24) = v43;
          v37 = v90[4];
          v38 = *v7;
        }
        ++v39;
      }
      while ( v39 != &v38[v37] );
    }
    if ( v98 )
    {
LABEL_49:
      *(_QWORD *)&v99 = 0;
      qfree();
    }
LABEL_50:
    if ( (*v90 & 2) == 0 )
    {
      v44 = (_QWORD *)v90[2];
      if ( (*(_BYTE *)v44 & 2) != 0 )
      {
        v45 = (_QWORD *)(*v90 & 0xFFFFFFFFFFFFFFFCLL);
        v65 = *v45;
        if ( (*v45 & 2) == 0 )
        {
          v66 = v90;
          while ( (_QWORD *)v45[2] == v66 )
          {
            v66 = v45;
            v67 = v65 & 0xFFFFFFFFFFFFFFFCLL;
            v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v65 & 2) != 0 )
            {
              v90 = (_QWORD *)v67;
              goto LABEL_54;
            }
            v45 = (_QWORD *)v67;
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
      v90 = v45;
    }
LABEL_54:
    ;
  }
  while ( (_QWORD *)*v93 != v90 );
LABEL_57:
  if ( v97.m128i_i64[1] )
  {
    if ( v97.m128i_i64[0] )
    {
      v46 = *(_QWORD **)(v97.m128i_i64[0] + 8);
      while ( (_QWORD *)v97.m128i_i64[0] != v46 )
      {
        v47 = (_QWORD *)v46[4];
        sub_332E10(&v103, v47);
        sub_E7180(*(_QWORD *)(a1 + 40), *v47, &v103, 67108866);
        clear_tinfo_t();
        if ( (*v46 & 2) == 0 )
        {
          v48 = (_QWORD *)v46[2];
          if ( (*(_BYTE *)v48 & 2) != 0 )
          {
            v75 = (_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFFCLL);
            v76 = *v75;
            if ( (*v75 & 2) == 0 )
            {
              while ( v46 == (_QWORD *)v75[2] )
              {
                v46 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
                v76 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v76 & 2) != 0 )
                  goto LABEL_63;
                v77 = v75;
                v75 = v46;
                v46 = v77;
              }
            }
            v46 = v75;
          }
          else
          {
            do
            {
              v46 = v48;
              v48 = (_QWORD *)v48[1];
            }
            while ( (*(_BYTE *)v48 & 2) == 0 );
          }
        }
LABEL_63:
        ;
      }
    }
    v104 = 0;
    v103 = off_4DD230;
    v105 = 0;
    v49 = *(_QWORD *)(a1 + 40);
    v108 = 0;
    v106 = 0;
    v107 = 0;
    *(_QWORD *)&v109[1] = &v97;
    sub_11D770(v49, (__int64)&v103);
    *(_DWORD *)(a1 + 48) = 63;
    sub_666A0(*(_QWORD *)(a1 + 40), 1u, (__int64)"refine_input_argument_sizes");
    v95 = 1;
  }
  sub_103910(v96);
  v50 = v97.m128i_i64[0];
  if ( !v97.m128i_i64[0] )
    return v95;
  v51 = *(_QWORD *)v97.m128i_i64[0];
  if ( !v97.m128i_i64[1] )
  {
    *(_QWORD *)v97.m128i_i64[0] = *(_QWORD *)v97.m128i_i64[0] & 3LL | v97.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v83 = v97.m128i_i64[0];
    v84 = (__m128i)v97.m128i_u64[0];
    *(_QWORD *)v97.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64(v84, v84);
    *(_QWORD *)v97.m128i_i64[0] |= 2uLL;
    goto LABEL_87;
  }
  v52 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  v53 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v53 & 2) != 0 )
    goto LABEL_86;
  v54 = (__int64 *)v52[1];
  v55 = *v54;
  if ( (*v54 & 2) != 0 )
  {
    v58 = (__int64 *)v52[2];
    if ( (*(_BYTE *)v58 & 2) == 0 )
      goto LABEL_76;
LABEL_141:
    *v52 = v53 | 2;
    goto LABEL_83;
  }
  v56 = (__int64 *)v54[1];
  if ( (*(_BYTE *)v56 & 2) != 0 )
  {
    v57 = (__int64 *)v54[2];
    if ( (*(_BYTE *)v57 & 2) == 0 )
    {
LABEL_71:
      sub_132940(v57);
      goto LABEL_72;
    }
    goto LABEL_148;
  }
  sub_132940(v56);
  v57 = (__int64 *)v54[2];
  if ( (*(_BYTE *)v57 & 2) == 0 )
    goto LABEL_71;
LABEL_72:
  v55 = *v54;
  if ( (*v54 & 2) == 0 )
LABEL_148:
    *v54 = v55 | 2;
  if ( v54 )
    qfree();
  v58 = (__int64 *)v52[2];
  if ( (*(_BYTE *)v58 & 2) == 0 )
  {
LABEL_76:
    v59 = (__int64 *)v58[1];
    if ( (*(_BYTE *)v59 & 2) != 0 )
    {
      v60 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v60 & 2) == 0 )
      {
LABEL_78:
        sub_132940(v60);
        goto LABEL_79;
      }
      v61 = *v58;
    }
    else
    {
      sub_132940(v59);
      v60 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v60 & 2) == 0 )
        goto LABEL_78;
LABEL_79:
      v61 = *v58;
      if ( (*v58 & 2) != 0 )
      {
LABEL_80:
        if ( v58 )
          qfree();
        goto LABEL_82;
      }
    }
    *v58 = v61 | 2;
    goto LABEL_80;
  }
LABEL_82:
  v53 = *v52;
  if ( (*v52 & 2) == 0 )
    goto LABEL_141;
LABEL_83:
  if ( v51 > 3 )
    qfree();
  v50 = v97.m128i_i64[0];
  v51 = *(_QWORD *)v97.m128i_i64[0];
LABEL_86:
  *(_QWORD *)v50 = v51 & 3 | v50 & 0xFFFFFFFFFFFFFFFCLL;
  v62 = v97.m128i_i64[0];
  v63 = (__m128i)v97.m128i_u64[0];
  *(_QWORD *)v97.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v63, v63);
  *(_QWORD *)v97.m128i_i64[0] |= 2uLL;
  v97.m128i_i64[1] = 0;
LABEL_87:
  if ( v97.m128i_i64[0] )
    qfree();
  return v95;
}
