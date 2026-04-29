__int64 __fastcall sub_362AA0(__int64 *a1, __int64 a2, char a3, char a4, double a5, double a6)
{
  _QWORD *exception; // r15
  int v7; // eax
  const char *v8; // rax
  size_t v9; // rbx
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  _QWORD *func; // rax
  _QWORD *v17; // r13
  unsigned int v18; // r13d
  __int64 *v20; // r14
  int v21; // eax
  int v22; // eax
  char v23; // r12
  int v24; // r12d
  __int64 v25; // rsi
  __int64 *v26; // r12
  const __m128i *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdx
  int v31; // r15d
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r13
  __int64 *v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // r13
  __int64 *v54; // rax
  __int64 v55; // rdi
  __int64 *v56; // rdx
  __int64 *v57; // rcx
  __int64 *v58; // rcx
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 *v61; // r14
  __int64 v62; // r12
  __int64 i; // rbx
  __int64 *v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 *v68; // r14
  __int64 v69; // r12
  __int64 v70; // rbx
  __int64 *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  _BYTE *v74; // rax
  const char *v75; // r8
  const char *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // r13
  __int64 *v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // r13
  __int64 *v87; // rax
  __int64 v88; // rdi
  __int64 *v89; // rax
  int v90; // esi
  size_t v91; // rdx
  _BYTE *v92; // rsi
  __int64 v93; // r9
  size_t v94; // r8
  __int64 v95; // rdi
  unsigned int v96; // r8d
  unsigned __int64 v97; // rdx
  int v98; // r9d
  void *v99; // rax
  __int64 v100; // [rsp+8h] [rbp-188h]
  __int64 v101; // [rsp+8h] [rbp-188h]
  size_t v102; // [rsp+8h] [rbp-188h]
  __int64 *v103; // [rsp+10h] [rbp-180h]
  __int64 *v104; // [rsp+10h] [rbp-180h]
  __int64 v105; // [rsp+10h] [rbp-180h]
  __int64 v106; // [rsp+18h] [rbp-178h]
  __int64 v107; // [rsp+18h] [rbp-178h]
  __int64 *v108; // [rsp+18h] [rbp-178h]
  __int64 *v109; // [rsp+18h] [rbp-178h]
  __int64 *v110; // [rsp+18h] [rbp-178h]
  __int64 *v111; // [rsp+18h] [rbp-178h]
  __int64 *v112; // [rsp+18h] [rbp-178h]
  __int64 *v113; // [rsp+18h] [rbp-178h]
  __int64 *v114; // [rsp+18h] [rbp-178h]
  __int64 v115; // [rsp+18h] [rbp-178h]
  __int64 v116; // [rsp+18h] [rbp-178h]
  unsigned int v117; // [rsp+30h] [rbp-160h]
  __int64 nsec_stamp; // [rsp+30h] [rbp-160h]
  __int64 v120; // [rsp+38h] [rbp-158h]
  __int64 *v121; // [rsp+40h] [rbp-150h] BYREF
  __int64 v122; // [rsp+48h] [rbp-148h]
  _QWORD *v123; // [rsp+60h] [rbp-130h] BYREF
  __int64 v124; // [rsp+68h] [rbp-128h]
  __int128 v125; // [rsp+70h] [rbp-120h]
  __int64 v126; // [rsp+80h] [rbp-110h] BYREF
  const char *v127; // [rsp+88h] [rbp-108h]
  void *src; // [rsp+90h] [rbp-100h]
  size_t n[3]; // [rsp+98h] [rbp-F8h]
  void *v130; // [rsp+B0h] [rbp-E0h] BYREF
  _BYTE v131[24]; // [rsp+B8h] [rbp-D8h]
  int v132; // [rsp+D0h] [rbp-C0h]
  __int64 v133; // [rsp+D8h] [rbp-B8h]
  char v134; // [rsp+E0h] [rbp-B0h]
  char v135; // [rsp+E1h] [rbp-AFh]
  __int64 v136; // [rsp+E8h] [rbp-A8h]
  char v137[32]; // [rsp+F0h] [rbp-A0h] BYREF
  char v138[64]; // [rsp+110h] [rbp-80h] BYREF
  _BYTE v139[8]; // [rsp+150h] [rbp-40h] BYREF
  unsigned __int64 v140; // [rsp+158h] [rbp-38h]

  v140 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 100) == 3 )
    return 1;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = a2;
  *(_QWORD *)(*a1 + 408) = v12;
  func = (_QWORD *)get_func(v12);
  v17 = func;
  if ( !func || *func != v12 )
  {
    *(_DWORD *)(a2 + 100) = 4;
    return 2;
  }
  show_auto(v12, 0);
  v117 = *(_DWORD *)(*a1 + 1336) & 4;
  if ( !v117 && !sub_13D6E0(*(_QWORD *)(*a1 + 112), v12) )
  {
    v73 = qtime64();
    qstrftime64(v137, 20, "%Y-%m-%d %H:%M:%S", v73);
    v130 = nullptr;
    *(_OWORD *)v131 = 0;
    v74 = (_BYTE *)qvector_reserve(&v130, 0, 4, 1);
    v130 = v74;
    *(_QWORD *)v131 = 4;
    *(_WORD *)v74 = 11822;
    v74[2] = 46;
    v138[0] = 0;
    *((_BYTE *)v130 + 3) = 0;
    v75 = (const char *)*(unsigned int *)(a2 + 112);
    if ( (int)v75 <= 0 )
    {
LABEL_91:
      sub_6CAE0(
        (__int64)"%s decompiling %a size=%08a times=%d%s%s\n",
        v137,
        0.0,
        a6,
        v12,
        *(const char **)(v13 + 40),
        v75);
      if ( v130 )
      {
        *(_QWORD *)v131 = 0;
        qfree(v130);
      }
      goto LABEL_7;
    }
    v126 = 0;
    if ( !(unsigned __int8)sub_3815E0(*a1, v12, &v126, 2) )
    {
LABEL_139:
      v95 = qstpncpy(v138, ";usedcpu ", 64);
      v96 = 0;
      v97 = *(_QWORD *)(v13 + 104) / 0x3B9ACA00uLL;
      v98 = v97;
      if ( (int)v97 > 59 )
      {
        v96 = (int)v97 / 60;
        v98 = (int)v97 % 60;
        if ( (int)v97 > 3599 )
        {
          v117 = v96 / 0x3C;
          v96 %= 0x3Cu;
        }
      }
      qsnprintf(v95, &v139[-v95], "%02d:%02d:%02d", v117, v96, v98);
      clear_tinfo_t(&v126);
      v75 = (const char *)*(unsigned int *)(v13 + 112);
      goto LABEL_91;
    }
    sub_32BB20((__int64 *)&v130, (__int64)&v126, nullptr, 0);
    v91 = *(_QWORD *)v131;
    v92 = v130;
    if ( *(_QWORD *)v131 )
    {
      v93 = *(_QWORD *)v131 + 1LL;
      v94 = *(_QWORD *)v131 - 1LL;
      if ( *(_QWORD *)&v131[8] >= (unsigned __int64)(*(_QWORD *)v131 + 1LL) )
        goto LABEL_136;
    }
    else
    {
      if ( *(_QWORD *)&v131[8] > 1u )
      {
        *(_QWORD *)v131 = 2;
        *((_BYTE *)v130 + 1) = 0;
LABEL_138:
        *(_BYTE *)v130 = 32;
        goto LABEL_139;
      }
      v94 = 0;
      v93 = 2;
    }
    v102 = v94;
    v105 = v93;
    v99 = (void *)qvector_reserve(&v130, v130, v93, 1);
    v94 = v102;
    v130 = v99;
    v92 = v99;
    v93 = v105;
    v91 = v102 + 1;
LABEL_136:
    *(_QWORD *)v131 = v93;
    v92[v91] = 0;
    if ( v94 )
      memmove((char *)v130 + 1, v130, v94);
    goto LABEL_138;
  }
LABEL_7:
  v20 = (__int64 *)(v13 + 8);
  v124 = 0;
  v123 = v17;
  *(_QWORD *)(v13 + 16) = 0;
  v130 = &off_4DA678;
  v21 = *(_DWORD *)(v13 + 112);
  *(_QWORD *)v131 = 0;
  ++v21;
  v134 = 0;
  v132 = 0;
  v133 = 0;
  v135 = 0;
  v136 = v13 + 8;
  *(_DWORD *)(v13 + 112) = v21;
  v125 = 0;
  *(_OWORD *)&v131[8] = 0;
  if ( v21 > 49 )
  {
    if ( !under_debugger )
      sub_3835A0(50016);
    goto LABEL_151;
  }
  v22 = a4 == 0 ? 98 : 96;
  v23 = *(_BYTE *)(*a1 + 1336);
  *(_OWORD *)n = 0;
  v126 = 0;
  v127 = (const char *)-1LL;
  src = nullptr;
  v24 = v22 | ((v23 & 0x10) == 0);
  nsec_stamp = get_nsec_stamp();
  v25 = *a1;
  if ( a3 )
  {
    sub_14C770((__int64 *)&v121, v25, &v123, (__int64)&v130, &v126, v24);
    v26 = v121;
    if ( v121 && !*((_DWORD *)v121 + 26) )
    {
      sub_258D30(v121);
      v78 = v26[23];
      if ( v78 )
      {
        if ( v26[24] )
        {
          v115 = v13;
          v79 = 0;
          v80 = v26[24];
          do
          {
            v81 = (__int64 *)(v78 + 24 * v79);
            v82 = *v81;
            if ( *v81 )
            {
              v81[1] = 0;
              qfree(v82);
              v78 = v26[23];
            }
            ++v79;
          }
          while ( v80 != v79 );
          v13 = v115;
        }
        v26[24] = 0;
        qfree(v78);
      }
      v83 = v26[20];
      if ( v83 )
      {
        v26[21] = 0;
        qfree(v83);
      }
      v84 = v26[16];
      if ( v84 )
      {
        if ( v26[17] )
        {
          v116 = v13;
          v85 = 0;
          v86 = v26[17];
          do
          {
            v87 = (__int64 *)(v84 + 32 * v85);
            v88 = *v87;
            if ( *v87 )
            {
              v87[1] = 0;
              qfree(v88);
              v84 = v26[16];
            }
            ++v85;
          }
          while ( v86 != v85 );
          v13 = v116;
        }
        v26[17] = 0;
        qfree(v84);
      }
      sub_255410((__int64)(v26 + 2));
      j__qfree(v26);
    }
    v18 = 1;
    goto LABEL_12;
  }
  sub_14C800(&v121, *(_QWORD *)(v25 + 112), &v123, &v126, v24);
  v26 = v121;
  if ( !v121 )
  {
    v89 = *(__int64 **)v13;
    if ( *(_QWORD *)v13 )
    {
      v90 = *((_DWORD *)v89 + 26);
      v18 = v90 - 1;
      *((_DWORD *)v89 + 26) = v90 - 1;
      if ( v90 == 1 )
      {
        v57 = *(__int64 **)v13;
        if ( *(_QWORD *)v13 )
          goto LABEL_69;
      }
      else
      {
        *(_QWORD *)v13 = 0;
      }
    }
    v18 = 0;
    goto LABEL_12;
  }
  if ( !*((_DWORD *)v121 + 26) )
  {
    sub_258D30(v121);
    v45 = v26[23];
    if ( v45 )
    {
      if ( v26[24] )
      {
        v106 = v13;
        v46 = 0;
        v47 = v26[24];
        do
        {
          v48 = (__int64 *)(v45 + 24 * v46);
          v49 = *v48;
          if ( *v48 )
          {
            v48[1] = 0;
            qfree(v49);
            v45 = v26[23];
          }
          ++v46;
        }
        while ( v47 != v46 );
        v13 = v106;
      }
      v26[24] = 0;
      qfree(v45);
    }
    v50 = v26[20];
    if ( v50 )
    {
      v26[21] = 0;
      qfree(v50);
    }
    v51 = v26[16];
    if ( v51 )
    {
      if ( v26[17] )
      {
        v107 = v13;
        v52 = 0;
        v53 = v26[17];
        do
        {
          v54 = (__int64 *)(v51 + 32 * v52);
          v55 = *v54;
          if ( *v54 )
          {
            v54[1] = 0;
            qfree(v55);
            v51 = v26[16];
          }
          ++v52;
        }
        while ( v53 != v52 );
        v13 = v107;
      }
      v26[17] = 0;
      qfree(v51);
    }
    sub_255410((__int64)(v26 + 2));
    j__qfree(v26);
  }
  v56 = *(__int64 **)v13;
  if ( !*(_QWORD *)v13
    || (v33 = *((_DWORD *)v56 + 26) == 1, --*((_DWORD *)v56 + 26), !v33)
    || (v57 = *(__int64 **)v13, v18 = 1, !*(_QWORD *)v13) )
  {
    *(_QWORD *)v13 = v26;
    v18 = 1;
LABEL_124:
    ++*((_DWORD *)v26 + 26);
    goto LABEL_12;
  }
LABEL_69:
  v108 = v57;
  sub_258D30(v57);
  v58 = v108;
  v59 = v108[23];
  if ( v59 )
  {
    v60 = v108[24];
    if ( v60 )
    {
      v109 = v20;
      v61 = v58;
      v103 = v26;
      v62 = v60;
      v100 = v13;
      for ( i = 0; i != v62; ++i )
      {
        v64 = (__int64 *)(v59 + 24 * i);
        v65 = *v64;
        if ( *v64 )
        {
          v64[1] = 0;
          qfree(v65);
          v59 = v61[23];
        }
      }
      v58 = v61;
      v26 = v103;
      v20 = v109;
      v13 = v100;
    }
    v58[24] = 0;
    v110 = v58;
    qfree(v59);
    v58 = v110;
  }
  v66 = v58[20];
  if ( v66 )
  {
    v58[21] = 0;
    v111 = v58;
    qfree(v66);
    v58 = v111;
  }
  v67 = v58[16];
  if ( v67 )
  {
    if ( v58[17] )
    {
      v112 = v20;
      v68 = v58;
      v104 = v26;
      v69 = v58[17];
      v101 = v13;
      v70 = 0;
      do
      {
        v71 = (__int64 *)(v67 + 32 * v70);
        v72 = *v71;
        if ( *v71 )
        {
          v71[1] = 0;
          qfree(v72);
          v67 = v68[16];
        }
        ++v70;
      }
      while ( v69 != v70 );
      v58 = v68;
      v26 = v104;
      v20 = v112;
      v13 = v101;
    }
    v58[17] = 0;
    v113 = v58;
    qfree(v67);
    v58 = v113;
  }
  v114 = v58;
  sub_255410((__int64)(v58 + 2));
  j__qfree(v114);
  *(_QWORD *)v13 = v26;
  if ( v26 )
    goto LABEL_124;
LABEL_12:
  v27 = (const __m128i *)*a1;
  v28 = *(_QWORD *)(*a1 + 112);
  if ( !*(_DWORD *)(v28 + 16) && *(_DWORD *)(v28 + 84) == 8 )
  {
    sub_362390(v13 + 80, (__int64)v26);
    v27 = (const __m128i *)*a1;
  }
  *(__m128i *)(v13 + 48) = _mm_loadu_si128(v27 + 61);
  v29 = _mm_loadu_si128(v27 + 62);
  *(__m128i *)(v13 + 64) = v29;
  v30 = get_nsec_stamp();
  *(_QWORD *)(v13 + 104) = v30 + *(_QWORD *)(v13 + 104) - nsec_stamp;
  if ( a3 )
  {
    if ( v26 )
    {
      v31 = 0;
      v32 = 0;
      v120 = v26[1];
      if ( *(_QWORD *)(v120 + 736) )
      {
        do
        {
          sub_FA510(
            v20,
            (__int64)"// %a: %s\n",
            *(double *)v29.m128i_i64,
            *(const char **)(*(_QWORD *)(v120 + 728) + 40 * v32));
          v32 = ++v31;
        }
        while ( (unsigned __int64)v31 < *(_QWORD *)(v120 + 736) );
      }
      *(_DWORD *)(v13 + 100) = 1;
      goto LABEL_20;
    }
    if ( (unsigned int)~(_DWORD)v126 <= 0x22 )
    {
      ++*((_DWORD *)a1 + ~(_DWORD)v126 + 84);
      sub_331410((__int64)&v121, (__int64)&v126, v30);
      v76 = s1;
      if ( v122 )
        LODWORD(v76) = (_DWORD)v121;
      sub_6B2B0(v20, (__int64)"#error \"%a: %s (funcsize=%d)\"\n", *(double *)v29.m128i_i64, v127, (_DWORD)v76);
      if ( v121 )
      {
        v122 = 0;
        qfree(v121);
      }
      if ( (_DWORD)v126 == -18 )
      {
        v18 = -1;
      }
      else
      {
        if ( (_DWORD)v126 == -1 )
        {
          exception = __cxa_allocate_exception(0x30u);
          *exception = off_4D6390;
          v7 = v126;
          exception[3] = 0;
          *((_DWORD *)exception + 2) = v7;
          v8 = v127;
          *((_OWORD *)exception + 2) = 0;
          exception[2] = v8;
          v9 = n[0];
          if ( n[0] )
          {
            v10 = (void *)qalloc_or_throw(n[0]);
            exception[3] = v10;
            v11 = src;
            exception[5] = v9;
            memcpy(v10, v11, v9);
            exception[4] = v9;
          }
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
        }
        if ( (*(_BYTE *)(*a1 + 1336) & 4) == 0 )
        {
          sub_331410((__int64)&v121, (__int64)&v126, v77);
          sub_6CAE0((__int64)"%a: %s\n", *(double *)v29.m128i_i64, v127);
          if ( v121 )
          {
            v122 = 0;
            qfree(v121);
          }
        }
        *(_DWORD *)(v13 + 100) = 2;
        v18 = 0;
      }
      goto LABEL_38;
    }
    if ( !under_debugger )
      sub_3835A0(50017);
LABEL_151:
    BUG();
  }
  if ( v26 )
  {
LABEL_20:
    v33 = (*((_DWORD *)v26 + 26))-- == 1;
    if ( v33 )
    {
      sub_258D30(v26);
      v34 = v26[23];
      if ( v34 )
      {
        if ( v26[24] )
        {
          v35 = 0;
          v36 = v26[24];
          do
          {
            v37 = (__int64 *)(v34 + 24 * v35);
            v38 = *v37;
            if ( *v37 )
            {
              v37[1] = 0;
              qfree(v38);
              v34 = v26[23];
            }
            ++v35;
          }
          while ( v36 != v35 );
        }
        v26[24] = 0;
        qfree(v34);
      }
      v39 = v26[20];
      if ( v39 )
      {
        v26[21] = 0;
        qfree(v39);
      }
      v40 = v26[16];
      if ( v40 )
      {
        if ( v26[17] )
        {
          v41 = 0;
          v42 = v26[17];
          do
          {
            v43 = (__int64 *)(v40 + 32 * v41);
            v44 = *v43;
            if ( *v43 )
            {
              v43[1] = 0;
              qfree(v44);
              v40 = v26[16];
            }
            ++v41;
          }
          while ( v42 != v41 );
        }
        v26[17] = 0;
        qfree(v40);
      }
      sub_255410((__int64)(v26 + 2));
      j__qfree(v26);
    }
  }
LABEL_38:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  v130 = &off_4DDCF8;
  if ( *(_QWORD *)v131 )
  {
    *(_QWORD *)&v131[8] = 0;
    qfree(*(_QWORD *)v131);
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree(v124);
  }
  return v18;
}
