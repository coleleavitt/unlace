__int64 __fastcall sub_4D8970(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8)
{
  char **v8; // r12
  char **v9; // r12
  char **v10; // r12
  char **v11; // r12
  char **v12; // r12
  char **exception; // r12
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD *i; // rbx
  unsigned int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  unsigned int v20; // r12d
  unsigned int v21; // ebp
  _QWORD *v22; // rax
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  unsigned int v26; // eax
  __m128 v27; // xmm1
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  _QWORD *v30; // rdx
  int v31; // r13d
  _QWORD *v32; // rdi
  __int64 v33; // rax
  _DWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  unsigned int *v37; // rax
  _QWORD *v38; // r8
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rsi
  int v42; // eax
  _QWORD *v43; // rsi
  unsigned int v44; // r15d
  unsigned int *v45; // rax
  unsigned int v46; // r8d
  size_t v47; // rsi
  _DWORD *v48; // rax
  unsigned int v49; // r9d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  unsigned int v53; // r9d
  unsigned int v54; // edx
  size_t v55; // rsi
  _DWORD *v56; // rax
  unsigned int v57; // edx
  size_t v58; // rsi
  _DWORD *v59; // rax
  _QWORD *v60; // rax
  __m128 v61; // xmm1
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  unsigned __int32 *v64; // r15
  unsigned int *v65; // r14
  unsigned __int32 v66; // eax
  unsigned __int32 v67; // edx
  __int64 v68; // rdi
  unsigned __int32 v69; // r9d
  __int64 v70; // r10
  unsigned __int32 v71; // r11d
  __int64 v72; // r9
  _QWORD *v73; // r13
  __int64 v74; // rax
  int *v75; // rax
  int *v76; // rsi
  int v77; // edi
  __int64 v78; // rax
  __int64 v79; // r9
  __m128 v80; // xmm0
  _QWORD *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rsi
  int v84; // eax
  __int64 *v85; // rsi
  __int64 v86; // rdi
  unsigned int j; // r8d
  unsigned int v88; // eax
  __int64 v89; // rdx
  unsigned int v90; // ecx
  unsigned int *v91; // rdi
  __int64 v92; // r8
  unsigned int *v93; // r9
  unsigned int v94; // eax
  __int64 v95; // rdx
  unsigned int v96; // ecx
  _DWORD *v97; // rsi
  unsigned int v98; // r11d
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rsi
  unsigned int v102; // r11d
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // r8
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 result; // rax
  __m128 v109; // xmm1
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __m128i v112; // [rsp+0h] [rbp-178h] BYREF
  __m128i v113; // [rsp+10h] [rbp-168h] BYREF
  __m128i v114; // [rsp+20h] [rbp-158h] BYREF
  unsigned int v115; // [rsp+34h] [rbp-144h]
  unsigned int v116; // [rsp+38h] [rbp-140h]
  unsigned int v117; // [rsp+3Ch] [rbp-13Ch]
  __m128i *v118; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v119; // [rsp+48h] [rbp-130h]
  unsigned int v120; // [rsp+4Ch] [rbp-12Ch]
  int v121; // [rsp+50h] [rbp-128h]
  int v122; // [rsp+54h] [rbp-124h]
  __int64 v123; // [rsp+58h] [rbp-120h]
  __int64 *v124; // [rsp+60h] [rbp-118h]
  _BYTE *v125; // [rsp+68h] [rbp-110h]
  unsigned __int32 *v126; // [rsp+70h] [rbp-108h]
  unsigned int *v127; // [rsp+78h] [rbp-100h]
  __int64 v128; // [rsp+90h] [rbp-E8h] BYREF
  int v129; // [rsp+98h] [rbp-E0h]
  __int64 v130[4]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v131; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v132[48]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v133; // [rsp+100h] [rbp-78h] BYREF
  __int128 v134; // [rsp+110h] [rbp-68h]
  _QWORD *v135; // [rsp+120h] [rbp-58h]
  __m128i v136; // [rsp+128h] [rbp-50h] BYREF

  v120 = a6;
  v122 = a3;
  v126 = (unsigned __int32 *)a4;
  v127 = (unsigned int *)a5;
  v129 = 0;
  v128 = 0;
  v124 = &v128;
  sub_4D84B0(a1, a2, a3, a4, a5, (__int64)&v128);
  v14 = *(_DWORD *)(a2 + 8);
  v123 = v128;
  v15 = *(_DWORD *)(a1 + 8);
  v121 = v14;
  v119 = v15;
  if ( !(v14 | v15) )
  {
    sub_4D76C0(v124, v120, a7, a8);
    result = v123;
    if ( v123 )
      return sub_186B220((void *)(v123 - 8));
    return result;
  }
  i = *(_DWORD **)a2;
  if ( *(_QWORD *)a1 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)a1 - 4LL);
    v117 = v17;
    if ( !i )
    {
      v113.m128i_i32[0] = 0;
      v18 = v17;
      v19 = v17;
LABEL_5:
      v20 = v19 - v119;
      v115 = v113.m128i_i32[0] - v121;
      v21 = v113.m128i_i32[0] - v121 + v20;
      if ( v18 )
      {
        v22 = (_QWORD *)sub_186B270(0x10u);
        *v22 = 2;
        for ( i = v22 + 1; ; i = v25 + 2 )
        {
          v26 = *(i - 2);
          if ( v26 >= v18 )
            break;
          v23 = (3 * v26 + 1) >> 1;
          v24 = 4 * v23 + 8;
          if ( 4 * v26 + 8 >= (unsigned int)v24 || v26 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v133.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v133);
            sub_233E40((__int64)&v133);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(i - 2, v24);
          *v25 = v23;
        }
        *(i - 1) = v18;
        memset(i, 0, 4LL * v18);
        v118 = &v133;
        v131 = 0;
        v27 = _mm_loadh_ps((const double *)&v118);
        v125 = v132;
        v114 = (__m128i)v27;
        v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v131, (__m128i)(unsigned __int64)&v131);
        sub_180C0A0(v132);
        v28 = _mm_load_si128(&v112);
        v29 = _mm_load_si128(&v114);
        v30 = nullptr;
        v31 = 0;
        v135 = nullptr;
        v133 = v28;
        v112.m128i_i64[0] = (__int64)&v136;
        v134 = 0;
        v136 = v29;
        while ( 1 )
        {
          if ( v30 )
          {
            v44 = *((_DWORD *)v30 - 1);
            v45 = (unsigned int *)v30 + v44;
            if ( v44 == *((_DWORD *)v30 - 2) )
            {
              v46 = (3 * v44 + 1) >> 1;
              v47 = 4 * v46 + 8;
              if ( 4 * v44 + 8 >= (unsigned int)v47 || v44 >= v46 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v114.m128i_i32[0] = (3 * v44 + 1) >> 1;
              v48 = (_DWORD *)sub_186B300(v30 - 1, v47);
              v30 = v48 + 2;
              *(_QWORD *)&v134 = v48 + 2;
              *v48 = v114.m128i_i32[0];
              v45 = &v48[v48[1] + 2];
            }
          }
          else
          {
            v60 = (_QWORD *)sub_186B270(0x10u);
            v30 = v60 + 1;
            v44 = 0;
            *(_QWORD *)&v134 = v60 + 1;
            *v60 = 2;
            v45 = (unsigned int *)(v60 + 1);
          }
          v32 = *((_QWORD **)&v134 + 1);
          *v45 = v44;
          ++*((_DWORD *)v30 - 1);
          if ( v32 )
          {
            v33 = *((unsigned int *)v32 - 1);
            if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
            {
              v54 = (unsigned int)(3 * v33 + 1) >> 1;
              v55 = 4 * v54 + 8;
              if ( 4 * (int)v33 + 8 >= (unsigned int)v55 || (unsigned int)v33 >= v54 )
              {
                v11 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *v11 = (char *)off_1C63128;
                sub_2333C0(v11 + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v114.m128i_i32[0] = (unsigned int)(3 * v33 + 1) >> 1;
              v56 = (_DWORD *)sub_186B300(v32 - 1, v55);
              v32 = v56 + 2;
              *((_QWORD *)&v134 + 1) = v56 + 2;
              *v56 = v114.m128i_i32[0];
              v34 = &v56[v56[1] + 2];
            }
            else
            {
              v34 = (_DWORD *)v32 + v33;
            }
          }
          else
          {
            v106 = (_QWORD *)sub_186B270(0x10u);
            v32 = v106 + 1;
            *((_QWORD *)&v134 + 1) = v106 + 1;
            *v106 = 2;
            v34 = v106 + 1;
          }
          *v34 = 1;
          ++*((_DWORD *)v32 - 1);
          v35 = v135;
          if ( v135 )
          {
            v36 = *((unsigned int *)v135 - 1);
            if ( (_DWORD)v36 == *((_DWORD *)v135 - 2) )
            {
              v57 = (unsigned int)(3 * v36 + 1) >> 1;
              v58 = 4 * v57 + 8;
              if ( 4 * (int)v36 + 8 >= (unsigned int)v58 || (unsigned int)v36 >= v57 )
              {
                v12 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *v12 = (char *)off_1C63128;
                sub_2333C0(v12 + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v114.m128i_i32[0] = (unsigned int)(3 * v36 + 1) >> 1;
              v59 = (_DWORD *)sub_186B300(v135 - 1, v58);
              v35 = v59 + 2;
              v135 = v59 + 2;
              *v59 = v114.m128i_i32[0];
              v37 = &v59[v59[1] + 2];
            }
            else
            {
              v37 = (unsigned int *)v135 + v36;
            }
          }
          else
          {
            v103 = (_QWORD *)sub_186B270(0x10u);
            v35 = v103 + 1;
            v135 = v103 + 1;
            *v103 = 2;
            v37 = (unsigned int *)(v103 + 1);
          }
          v38 = (_QWORD *)v133.m128i_i64[1];
          *v37 = v44;
          ++*((_DWORD *)v35 - 1);
          v39 = (_QWORD *)*v38;
          if ( *v38 )
          {
            v40 = *((_DWORD *)v39 - 1);
            if ( v40 == *((_DWORD *)v39 - 2) )
            {
              v49 = (3 * v40 + 1) >> 1;
              v50 = 8 * v49 + 8;
              if ( 8 * v40 + 8 >= (unsigned int)v50 || v40 >= v49 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v116 = (3 * v40 + 1) >> 1;
              v114.m128i_i64[0] = (__int64)v38;
              v51 = (unsigned int *)sub_186B300(v39 - 1, v50);
              v52 = v51[1];
              v39 = v51 + 2;
              v53 = v116;
              *(_QWORD *)v114.m128i_i64[0] = v51 + 2;
              *v51 = v53;
              LODWORD(v51) = v52;
              v43 = &v39[v52];
              v42 = (_DWORD)v51 + 1;
            }
            else
            {
              v41 = v40;
              v42 = v40 + 1;
              v43 = &v39[v41];
            }
          }
          else
          {
            v114.m128i_i64[0] = (__int64)v38;
            v104 = (_QWORD *)sub_186B270(0x18u);
            v105 = (_QWORD *)v114.m128i_i64[0];
            v39 = v104 + 1;
            v43 = v39;
            *v104 = 2;
            v42 = 1;
            *v105 = v39;
          }
          *v43 = v112.m128i_i64[0];
          *((_DWORD *)v39 - 1) = v42;
          if ( v44 != v31 )
          {
            sub_1872CE0("");
            sub_1873130(114, 189);
          }
          if ( ++v31 == v18 )
            break;
          v30 = (_QWORD *)v134;
        }
      }
      else
      {
        v118 = &v133;
        v131 = 0;
        v61 = _mm_loadh_ps((const double *)&v118);
        v125 = v132;
        v114 = (__m128i)v61;
        v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v131, (__m128i)(unsigned __int64)&v131);
        sub_180C0A0(v132);
        v62 = _mm_load_si128(&v112);
        v63 = _mm_load_si128(&v114);
        i = nullptr;
        v135 = nullptr;
        v133 = v62;
        v134 = 0;
        v136 = v63;
      }
      goto LABEL_41;
    }
LABEL_4:
    v113.m128i_i32[0] = *(i - 1);
    v18 = v113.m128i_i32[0] + v117;
    v19 = v117;
    goto LABEL_5;
  }
  if ( i )
  {
    v117 = 0;
    goto LABEL_4;
  }
  v115 = -v14;
  v20 = -v119;
  v131 = 0;
  v21 = -v119 - v14;
  v118 = &v133;
  v109 = _mm_loadh_ps((const double *)&v118);
  v125 = v132;
  v113 = (__m128i)v109;
  v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v131, (__m128i)(unsigned __int64)&v131);
  sub_180C0A0(v132);
  v110 = _mm_load_si128(&v112);
  v111 = _mm_load_si128(&v113);
  v135 = nullptr;
  v113.m128i_i32[0] = 0;
  v133 = v110;
  v117 = 0;
  v134 = 0;
  v136 = v111;
LABEL_41:
  if ( v122 )
  {
    v64 = v126;
    v65 = v127;
    v114.m128i_i64[0] = (__int64)&v126[v122];
    v116 = v21 + v119 - v117;
    v117 += v121;
    do
    {
      v66 = *v64;
      if ( *v64 >= v20 )
        v66 = *v64 + v116;
      v67 = *v65 + v117 - v113.m128i_i32[0];
      if ( *v65 < v115 )
        v67 = v20 + *v65;
      do
      {
        v68 = v66;
        v69 = v66;
        v66 = *(_DWORD *)(v134 + 4LL * v66);
      }
      while ( v69 != v66 );
      do
      {
        v70 = v67;
        v71 = v67;
        v67 = *(_DWORD *)(v134 + 4LL * v67);
      }
      while ( v71 != v67 );
      if ( v69 != v67 )
      {
        v72 = *((_QWORD *)&v134 + 1);
        if ( *(_DWORD *)(*((_QWORD *)&v134 + 1) + 4 * v70) >= *(_DWORD *)(*((_QWORD *)&v134 + 1) + 4 * v68) )
        {
          v67 = v66;
          v66 = v71;
        }
        v73 = (_QWORD *)v133.m128i_i64[1];
        v112.m128i_i32[0] = v67;
        *(_DWORD *)(v134 + 4LL * v67) = v66;
        v74 = 4LL * v66;
        *(_DWORD *)(v72 + v74) += *(_DWORD *)(v72 + 4LL * v67);
        v75 = (int *)((char *)v135 + v74);
        v76 = (int *)v135 + v67;
        v77 = *v76;
        *v76 = *v75;
        *v75 = v77;
        v78 = sub_180C100(v73 + 2, 24);
        v79 = v78;
        v80 = _mm_loadh_ps((const double *)&v118);
        *(_DWORD *)(v78 + 16) = v112.m128i_i32[0];
        *(__m128 *)v78 = v80;
        v81 = (_QWORD *)*v73;
        if ( *v73 )
        {
          v82 = *((_DWORD *)v81 - 1);
          if ( v82 == *((_DWORD *)v81 - 2) )
          {
            v98 = (3 * v82 + 1) >> 1;
            v99 = 8 * v98 + 8;
            if ( 8 * v82 + 8 >= (unsigned int)v99 || v82 >= v98 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v130, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v130);
              sub_233E40((__int64)v130);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v119 = (3 * v82 + 1) >> 1;
            v112.m128i_i64[0] = v79;
            v100 = (unsigned int *)sub_186B300(v81 - 1, v99);
            v101 = v100[1];
            v102 = v119;
            v81 = v100 + 2;
            *v73 = v100 + 2;
            v79 = v112.m128i_i64[0];
            *v100 = v102;
            LODWORD(v100) = v101;
            v85 = &v81[v101];
            v84 = (_DWORD)v100 + 1;
          }
          else
          {
            v83 = v82;
            v84 = v82 + 1;
            v85 = &v81[v83];
          }
        }
        else
        {
          v112.m128i_i64[0] = v78;
          v107 = (_QWORD *)sub_186B270(0x18u);
          v81 = v107 + 1;
          *v107 = 2;
          v79 = v112.m128i_i64[0];
          v84 = 1;
          *v73 = v81;
          v85 = v81;
        }
        *v85 = v79;
        *((_DWORD *)v81 - 1) = v84;
      }
      ++v64;
      ++v65;
    }
    while ( (unsigned __int32 *)v114.m128i_i64[0] != v64 );
  }
  if ( v21 )
  {
    v86 = v134;
    for ( j = 0; j != v21; ++j )
    {
      v88 = j;
      do
      {
        v89 = v88;
        v90 = v88;
        v88 = *(_DWORD *)(v86 + 4LL * v88);
      }
      while ( v90 != v88 );
      ++i[v89];
    }
  }
  if ( v120 )
  {
    v91 = a7;
    v92 = v134;
    v93 = &a7[v120];
    while ( 1 )
    {
      while ( 1 )
      {
        v94 = *v91;
        if ( *v91 < v21 )
          break;
        if ( ++v91 == v93 )
          goto LABEL_69;
      }
      do
      {
        v95 = v94;
        v96 = v94;
        v94 = *(_DWORD *)(v92 + 4LL * v94);
      }
      while ( v96 != v94 );
      v97 = &i[v95];
      if ( *v97 <= 1u )
        break;
      ++v91;
      --*v97;
      if ( v91 == v93 )
        goto LABEL_69;
    }
    sub_4D76C0(v124, v120, a7, a8);
  }
  else
  {
LABEL_69:
    sub_4D7960(v124, v120, a7, a8);
  }
  if ( v135 )
    sub_186B220(v135 - 1);
  if ( *((_QWORD *)&v134 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v134 + 1) - 8LL));
  if ( (_QWORD)v134 )
    sub_186B220((void *)(v134 - 8));
  sub_180C0E0(v125);
  if ( *((_QWORD *)&v131 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v131 + 1) - 8LL));
  if ( (_QWORD)v131 )
    sub_186B220((void *)(v131 - 8));
  if ( i )
    sub_186B220(i - 2);
  result = v123;
  if ( v123 )
    return sub_186B220((void *)(v123 - 8));
  return result;
}

