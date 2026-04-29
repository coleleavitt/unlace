__int64 __fastcall sub_1CBA80(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rcx
  char v17; // bl
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  int v25; // r9d
  _QWORD *v26; // r14
  _QWORD *v27; // rbx
  char v28; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // eax
  int v36; // ecx
  size_t v37; // rdx
  char v38; // al
  char v39; // dl
  __m128i *v40; // r12
  unsigned __int64 *v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  char v45; // si
  unsigned __int64 v46; // rcx
  char v47; // dl
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // r13
  _QWORD **v52; // r12
  __int64 *v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // rcx
  __int64 v56; // r14
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // rbx
  _QWORD *v62; // rdi
  _QWORD *v63; // r14
  __int64 v64; // rdi
  __int64 v65; // rdi
  __m128i si128; // xmm1
  unsigned __int8 *v67; // r12
  unsigned __int8 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  size_t v71; // rax
  int tinfo_size; // eax
  __int64 v73; // r14
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdi
  _QWORD *v77; // rdx
  _QWORD **v78; // rbx
  _QWORD **v79; // rax
  _QWORD **v80; // r14
  int v81; // eax
  int v82; // edx
  void *v83; // rdi
  __int64 *v84; // rbx
  _DWORD *v85; // r14
  _QWORD *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // [rsp-8h] [rbp-2B8h]
  int v90; // [rsp+0h] [rbp-2B0h]
  __int64 *v91; // [rsp+8h] [rbp-2A8h]
  _QWORD *v92; // [rsp+10h] [rbp-2A0h]
  __int64 *v93; // [rsp+18h] [rbp-298h]
  _QWORD *v94; // [rsp+28h] [rbp-288h]
  unsigned __int8 v95; // [rsp+3Ah] [rbp-276h]
  char v96; // [rsp+3Bh] [rbp-275h]
  unsigned int i; // [rsp+3Ch] [rbp-274h]
  int v99; // [rsp+58h] [rbp-258h]
  unsigned __int8 v100; // [rsp+5Fh] [rbp-251h]
  unsigned int v101; // [rsp+60h] [rbp-250h]
  int v102; // [rsp+64h] [rbp-24Ch]
  int v104; // [rsp+78h] [rbp-238h]
  char v105; // [rsp+78h] [rbp-238h]
  char *src; // [rsp+80h] [rbp-230h]
  int srcb; // [rsp+80h] [rbp-230h]
  void *srca; // [rsp+80h] [rbp-230h]
  unsigned __int64 v109; // [rsp+88h] [rbp-228h] BYREF
  size_t n; // [rsp+90h] [rbp-220h]
  unsigned __int64 v111; // [rsp+98h] [rbp-218h]
  __int64 v112; // [rsp+A0h] [rbp-210h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-208h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-200h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-1F8h] BYREF
  _QWORD v116[2]; // [rsp+C0h] [rbp-1F0h] BYREF
  __int64 v117; // [rsp+D0h] [rbp-1E0h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-1D8h]
  __m128i v119; // [rsp+E0h] [rbp-1D0h] BYREF
  _DWORD v120[2]; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-1B8h]
  _QWORD **v122; // [rsp+100h] [rbp-1B0h] BYREF
  __int128 v123; // [rsp+108h] [rbp-1A8h]
  _QWORD *v124; // [rsp+120h] [rbp-190h] BYREF
  __int128 v125; // [rsp+128h] [rbp-188h]
  _QWORD v126[2]; // [rsp+140h] [rbp-170h] BYREF
  __int64 v127; // [rsp+150h] [rbp-160h] BYREF
  __int64 v128; // [rsp+158h] [rbp-158h]
  __int64 v129; // [rsp+160h] [rbp-150h] BYREF
  __int128 v130; // [rsp+168h] [rbp-148h]
  char v131[8]; // [rsp+180h] [rbp-130h] BYREF
  _QWORD v132[2]; // [rsp+188h] [rbp-128h]
  char v133; // [rsp+198h] [rbp-118h] BYREF
  void *v134; // [rsp+1A0h] [rbp-110h]
  unsigned __int64 v135; // [rsp+1A8h] [rbp-108h]
  int v136; // [rsp+1C8h] [rbp-E8h]
  char v137[8]; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v138; // [rsp+1D8h] [rbp-D8h]
  __int64 v139; // [rsp+1E0h] [rbp-D0h]
  void *dest; // [rsp+1F0h] [rbp-C0h] BYREF
  unsigned __int64 v141; // [rsp+1F8h] [rbp-B8h]
  unsigned __int64 v142; // [rsp+200h] [rbp-B0h]
  int v143; // [rsp+218h] [rbp-98h]
  char v144[24]; // [rsp+220h] [rbp-90h] BYREF
  char v145; // [rsp+270h] [rbp-40h] BYREF
  unsigned __int64 v146; // [rsp+278h] [rbp-38h]

  LODWORD(n) = a4;
  v96 = a4;
  v146 = __readfsqword(0x28u);
  v6 = *(_BYTE *)a3 == 15;
  v116[0] = 0;
  v116[1] = 0;
  v112 = 0;
  if ( v6 )
  {
    v94 = *(_QWORD **)(a3 + 8);
    v93 = v94 + 6;
  }
  else
  {
    v9 = sub_1C5030((char *)a3, (__int64)v116);
    if ( !(_BYTE)v9 )
      goto LABEL_8;
    v94 = v116;
    v93 = &v112;
  }
  v7 = *(_QWORD *)(a1 + 64);
  v127 = 0;
  v126[1] = v7;
  v126[0] = off_4DE8B8;
  v128 = 0;
  v129 = 0;
  v120[0] = 0;
  v130 = 0;
  copy_argloc();
  sub_1C76E0(&v122, (__int64)v120, *(_DWORD *)(a3 + 4), 0);
  v92 = v126;
  for_all_arglocs();
  v8 = *(int *)(a3 + 4);
  v124 = nullptr;
  *(_QWORD *)&v125 = v8;
  sub_316BB0(&v129, &v124);
  LODWORD(v111) = *(_DWORD *)(a3 + 4);
  v95 = sub_1C8DE0((__int64)v126, (__int64)v93, 8 * (int)v111, 0);
  cleanup_argloc();
  cleanup_argloc();
  if ( !v95 )
    goto LABEL_4;
  if ( (unsigned int)sub_64B20((__int64)&v127) == 2 )
  {
    if ( !sub_64930(&v127, 0) || !sub_64930(&v127, *(_DWORD *)(a3 + 4)) )
    {
      if ( !under_debugger )
        sub_383060(52939);
LABEL_154:
      BUG();
    }
    goto LABEL_4;
  }
  v100 = sub_11E8C0((unsigned int *)a2);
  if ( v100 )
    v100 = a3 == a2 + 64;
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0
    && ((get_tinfo_property() & 0x2F) != 0xD
     || (unsigned __int8)sub_1C3110((__int64)v94, 0, 0)
     || (*(_BYTE *)(a2 + 5) & 8) != 0
     || !v100 && sub_120380((_BYTE *)a2, 1)) )
  {
    if ( !(_BYTE)n )
      goto LABEL_4;
  }
  else
  {
    v96 = 0;
  }
  v101 = sub_138140(*(_QWORD **)(a1 + 64), *(int *)(a3 + 4), 0);
  if ( v101 == -1 )
  {
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12.m128i_i64[0] = 0;
  v117 = 0;
  v118 = 0;
  LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v11 + 1504) + 80LL);
  v123 = 0;
  v122 = nullptr;
  v99 = v11;
  v91 = &v117;
  cleanup_argloc();
  LODWORD(v118) = v101;
  LODWORD(v117) = 3;
  v13 = sub_64960(&v127, 0);
  v14 = v13 + 1;
  v15 = v13;
  for ( i = sub_64960(&v127, v14); ; i = sub_64960(&v127, v14) )
  {
    if ( i == (_DWORD)v128 )
    {
      if ( v96 )
        *((_DWORD *)*v122 + 1) |= 0x40000u;
      if ( v100 )
      {
        v77 = (_QWORD *)a2;
      }
      else
      {
        v77 = *(_QWORD **)(a2 + 16);
        if ( (_QWORD)v130 )
        {
          v111 = *(_QWORD *)(a2 + 16);
          v86 = (_QWORD *)j__qalloc_or_throw(80, v14, (__int64)v77, v16);
          v87 = *(_QWORD *)(a2 + 24);
          v86[5] = 0;
          v86[4] = 0xFFFFFFFF00000000LL;
          v86[6] = 0xFFFFFFFF00000000LL;
          v86[7] = 0;
          v86[8] = 0xFFFFFFFF00000000LL;
          v86[9] = 0;
          sub_330970(v86, v87);
          v88 = v111;
          v12 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
          *((_BYTE *)v86 + 64) = 1;
          *(_DWORD *)v86 = 61;
          v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v101)).m128i_u64[0];
          *(_QWORD *)((char *)v86 + 68) = v12.m128i_i64[0];
          v77 = sub_A3160(a1, v86, v88);
        }
      }
      v78 = &v122[v123];
      v79 = v122;
      if ( v78 != v122 )
      {
        do
        {
          v80 = v79;
          v77 = sub_A3160(a1, *v79, (__int64)v77);
          v79 = v80 + 1;
        }
        while ( v78 != v80 + 1 );
      }
      if ( *(_BYTE *)a3 == 15 )
      {
        v84 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
        sub_1CAA80(v84, 1u);
        v85 = (_DWORD *)*v84;
        cleanup_argloc();
        *v85 = 3;
        v85[2] = v101;
        *(_WORD *)(*v84 + 16) = 0;
        *(_WORD *)(*v84 + 18) = *(_DWORD *)(a3 + 4);
      }
      else
      {
        *(_BYTE *)a3 = 1;
        *(_DWORD *)(a3 + 8) = v101;
      }
      *(_BYTE *)(a3 + 1) |= 0x40u;
      **(_DWORD **)(a1 + 64) &= ~0x10000u;
      v81 = *(_DWORD *)(a1 + 24);
      BYTE1(v81) &= ~2u;
      LOBYTE(v81) = v81 | 0x80;
      *(_DWORD *)(a1 + 24) = v81;
      sub_1B26E0(a3);
      sub_A2520(a1, (__int64)"replace_mop_by_kreg at %a: %s", *(double *)v12.m128i_i64, *(const char **)(a2 + 24));
      v9 = v95;
      goto LABEL_142;
    }
    v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(i - v15));
    v12 = _mm_unpacklo_epi32(v18, _mm_cmpgt_epi32((__m128i)0LL, v18));
    v119 = v12;
    v9 = sub_317E70(&v129, &v119, 0);
    v109 = v119.m128i_u64[1];
    if ( !(_BYTE)v9 )
      break;
    v12.m128i_i64[0] = 0;
    v124 = nullptr;
    v125 = 0;
    if ( v109 + v119.m128i_i64[0] - 1 >= v119.m128i_i64[0] )
    {
      v124 = (_QWORD *)qvector_reserve((__int64)&v124, 0, 1, 16);
      v12 = (__m128i)_mm_loadh_ps((const double *)&v109);
      *(__m128i *)&v124[2 * v125] = v12;
      *(_QWORD *)&v125 = v125 + 1;
    }
    v17 = sub_317F40(&v129, &v124);
    if ( v124 )
    {
      *(_QWORD *)&v125 = 0;
      qfree((__int64)v124);
    }
    if ( !v17 )
    {
      if ( !under_debugger )
        sub_383060(52907);
      goto LABEL_154;
    }
LABEL_21:
    v15 = i;
    v14 = i + 1;
  }
  v113 = v119.m128i_i64[0];
  v114 = v119.m128i_i64[0];
  sub_123A40((__int64)v120, (unsigned __int8 *)a3, v19, v20);
  if ( (unsigned __int8)sub_1C50C0((__int64)v91, *(_QWORD *)(a1 + 480), &v113, v109, *(int *)(a3 + 4)) )
  {
    v21 = v109;
    if ( (unsigned __int8)sub_1C50C0((__int64)v94, *(_QWORD *)(a1 + 480), &v114, v109, *(int *)(a3 + 4)) )
    {
      v102 = v21;
      v23 = (unsigned int)v114;
      if ( LOBYTE(v120[0]) == 15 )
      {
        if ( !(unsigned __int8)sub_126980((__int64)v120, v114, v21, 3) )
          goto LABEL_85;
      }
      else
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
        if ( !(unsigned __int8)sub_126F10((unsigned __int64)v120, v23, v114, v22) )
          goto LABEL_85;
        v120[1] = v109;
      }
      v115 = 0;
      if ( LOBYTE(v120[0]) != 5 || v109 <= 0x10 )
      {
        v28 = 0;
        if ( v109 )
          goto LABEL_49;
LABEL_126:
        clear_tinfo_t();
        sub_11CDA0((__int64)v120);
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v121 + 8) < *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
      {
        v23 = 2;
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v12.m128i_i64[0] = 0;
          v23 = (__int64)v93;
          v124 = nullptr;
          v125 = 0;
          sub_3349B0((unsigned int)&v124, (_DWORD)v93, v119.m128i_i32[0], 0, 3, v25);
          v26 = v124;
          v27 = &v124[8 * (_QWORD)v125];
          if ( v27 != v124 )
          {
            do
            {
              v23 = v26[7];
              if ( v109 == get_tinfo_size() )
              {
                v23 = 2;
                if ( (get_tinfo_property() & 0x2F) == 0xD )
                {
                  v59 = v115;
                  v115 = v26[7];
                  v26[7] = v59;
                  v26 = v124;
                  goto LABEL_102;
                }
              }
              v26 += 8;
            }
            while ( v26 != v27 );
            v26 = v124;
          }
LABEL_102:
          if ( v26 )
          {
            v60 = v125;
            if ( (_QWORD)v125 )
            {
              v61 = 0;
              v62 = v26;
              do
              {
                v63 = &v62[8 * v61];
                clear_tinfo_t();
                v64 = v63[4];
                if ( v64 )
                {
                  v63[5] = 0;
                  qfree(v64);
                }
                v65 = v63[1];
                if ( v65 )
                {
                  v63[2] = 0;
                  qfree(v65);
                }
                ++v61;
                v62 = v124;
              }
              while ( v60 != v61 );
              v26 = v124;
            }
            *(_QWORD *)&v125 = 0;
            qfree((__int64)v26);
          }
        }
        v28 = v115;
        if ( (_BYTE)v115 )
          goto LABEL_49;
        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
        v67 = (unsigned __int8 *)&v145;
        v12.m128i_i64[0] = 0;
        v68 = (unsigned __int8 *)v131;
        do
        {
          *((_DWORD *)v68 + 1) = -1;
          v68 += 80;
          *((_WORD *)v68 - 40) = 0;
          *((_WORD *)v68 - 39) = 0;
          *((_QWORD *)v68 - 9) = 0;
          *((__m128i *)v68 - 4) = si128;
          *((_QWORD *)v68 - 6) = 0;
          *(_OWORD *)(v68 - 40) = 0;
          *((_DWORD *)v68 - 6) = 0;
          *((_QWORD *)v68 - 2) = 0;
          *((_DWORD *)v68 - 2) = 0;
        }
        while ( &v145 != (char *)v68 );
        sub_11CA10(v131, (char *)v120);
        sub_11C950((unsigned __int8 *)v131, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v69, v70);
        sub_125180((__int64)v137, (unsigned __int8 *)v131);
        v139 = v132[1];
        copy_tinfo_t();
        v111 = v135;
        if ( v135 && (n = v135 - 1, v135 != 1) )
        {
          v83 = dest;
          srca = v134;
          if ( v142 < v111 )
          {
            dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v111, 1);
            v83 = dest;
          }
          v141 = v111;
          memmove(v83, srca, n);
          *((char *)dest + v111 - 1) = 0;
        }
        else
        {
          v141 = 0;
        }
        copy_argloc();
        v143 = v136;
        srcb = v113 + v101;
        v111 = v100;
        n = v132[10 * v100];
        sub_11CDA0(n);
        v71 = n;
        *(_DWORD *)(n + 8) = srcb;
        *(_BYTE *)v71 = 1;
        *(_DWORD *)(v71 + 4) = v102;
        copy_tinfo_t();
        copy_tinfo_t();
        v124 = (_QWORD *)&byte_7;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v100 )
        {
          v82 = v102;
          v102 = 0;
          *(_DWORD *)(v138 + 16) = v82;
        }
        else
        {
          *(_DWORD *)(v132[0] + 16LL) = 0;
        }
        *(_DWORD *)(v132[10 * v111] + 20LL) = v102;
        v111 = *(_QWORD *)(a2 + 24);
        tinfo_size = get_tinfo_size();
        sub_120A10((__int64)v144, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v109, tinfo_size, v111, 2);
        v73 = sub_335B10(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(a2 + 24),
                (unsigned int)"memcpy",
                (unsigned int)&v133,
                3,
                (unsigned int)v131,
                1,
                v89,
                v90,
                (_DWORD)v91,
                (_DWORD)v92,
                (_DWORD)v93);
        *(_DWORD *)(*(_QWORD *)(v73 + 72) + 284LL) = 5;
        v74 = v123;
        v75 = (__int64)v122;
        if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)(v123 + 1) )
        {
          v122 = (_QWORD **)qvector_reserve((__int64)&v122, (__int64)v122, v123 + 1, 8);
          v75 = (__int64)v122;
          v74 = v123;
        }
        *(_QWORD *)(v75 + 8 * v74) = v73;
        *(_QWORD *)&v123 = v123 + 1;
        do
        {
          v67 -= 80;
          cleanup_argloc();
          v76 = *((_QWORD *)v67 + 4);
          if ( v76 )
          {
            *((_QWORD *)v67 + 5) = 0;
            qfree(v76);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)v67);
        }
        while ( v67 != (unsigned __int8 *)v131 );
        goto LABEL_126;
      }
      v28 = 0;
LABEL_49:
      n = 0;
      while ( 1 )
      {
        v29 = v109;
        v111 = v109;
        if ( !v28 )
          v111 = (unsigned int)round_down_power2();
        if ( LOBYTE(v120[0]) == 5 )
        {
          v29 = v111;
          v30 = v99;
          if ( v111 <= v99 )
            v30 = v111;
          v111 = v30;
        }
        v31 = j__qalloc_or_throw(80, v23, v29, v24);
        v32 = sub_332AB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(v31 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v31 + 40) = 0;
        *(_QWORD *)(v31 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v31 + 56) = 0;
        *(_QWORD *)(v31 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v31 + 72) = 0;
        src = (char *)(v31 + 32);
        sub_330970(v31, v32);
        v33 = v123;
        v34 = (__int64)v122;
        if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)(v123 + 1) )
        {
          v122 = (_QWORD **)qvector_reserve((__int64)&v122, (__int64)v122, v123 + 1, 8);
          v34 = (__int64)v122;
          v33 = v123;
        }
        *(_QWORD *)(v34 + 8 * v33) = v31;
        *(_QWORD *)&v123 = v123 + 1;
        *(_DWORD *)v31 = 4;
        sub_125180(v31 + 64, (unsigned __int8 *)v120);
        v35 = v113 + v101;
        *(_BYTE *)(v31 + 32) = 1;
        v23 = v31 + 64;
        v36 = v111;
        v37 = n;
        *(_DWORD *)(v31 + 40) = v35;
        v104 = v36;
        *(_DWORD *)(v31 + 36) = v102;
        if ( !(unsigned __int8)sub_1C81D0(*(_QWORD *)(a1 + 480), v31 + 64, v37, v36)
          || (v23 = v31 + 32, v38 = sub_1C81D0(*(_QWORD *)(a1 + 480), (unsigned __int64)src, n, v104), (v39 = v38) == 0) )
        {
          v28 = v115;
          goto LABEL_49;
        }
        *(_BYTE *)(v31 + 33) |= 0x40u;
        *(_BYTE *)(v31 + 65) |= 0x40u;
        if ( !v100 )
        {
          v23 = v31 + 64;
          v105 = v38;
          sub_11CA10(src, (char *)(v31 + 64));
          v39 = v105;
        }
        if ( (_BYTE)v115 )
          break;
LABEL_61:
        v24 = v111;
        n += v111;
        v109 -= v111;
        if ( !v109 )
          goto LABEL_126;
        v28 = v115;
      }
      *(_BYTE *)(v31 + 33) |= 2u;
      *(_BYTE *)(v31 + 65) |= 2u;
      v40 = *(__m128i **)(a1 + 64);
      v124 = (_QWORD *)(v31 + 24);
      v41 = (unsigned __int64 *)v40[87].m128i_i64[0];
      if ( v41 )
      {
        if ( v40[87].m128i_i64[1] )
        {
          v42 = *v41 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v42 & 2) != 0 )
          {
            v47 = 1;
          }
          else
          {
            v43 = *(_QWORD *)(v31 + 24);
            v44 = *(_QWORD *)(v42 + 24);
            v45 = v39;
            if ( v43 >= v44 )
              goto LABEL_74;
LABEL_72:
            v46 = *(_QWORD *)(v42 + 8);
            v45 = v39;
            if ( (*(_BYTE *)v46 & 2) == 0 )
            {
              while ( 1 )
              {
                v42 = v46;
                v44 = *(_QWORD *)(v46 + 24);
                if ( v43 < v44 )
                  goto LABEL_72;
LABEL_74:
                if ( v44 >= v43 )
                  break;
                v46 = *(_QWORD *)(v42 + 16);
                v45 = 0;
                if ( (*(_BYTE *)v46 & 2) != 0 )
                  goto LABEL_76;
              }
              if ( v42 )
              {
LABEL_68:
                v23 = (__int64)&v115;
                copy_tinfo_t();
                goto LABEL_61;
              }
            }
LABEL_76:
            v47 = v45;
            v41 = (unsigned __int64 *)v42;
          }
          sub_C7DB0(v40 + 87, v41, v47, &v124);
          goto LABEL_68;
        }
      }
      else
      {
        v48 = qalloc();
        v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)(unsigned __int64)v48);
        if ( !v48 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v48 + 32) = 0;
        *(_OWORD *)(v48 + 16) = 0;
        *(__m128i *)(v48 + 8) = v49;
        *(_QWORD *)v48 = v48 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v40[87].m128i_i64[0] = v48;
        *(_QWORD *)v48 = v48 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v48 & 3LL;
        v50 = v40[87].m128i_i64[0];
        v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v50);
        *(__m128i *)(v50 + 8) = v12;
        *(_QWORD *)v40[87].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v40[87].m128i_i64[0] |= 2uLL;
        v41 = (unsigned __int64 *)v40[87].m128i_i64[0];
      }
      sub_C7DB0(v40 + 87, v41, 1, &v124);
      goto LABEL_68;
    }
  }
LABEL_85:
  sub_11CDA0((__int64)v120);
  v51 = (__int64)v122;
  v52 = &v122[v123];
  if ( v52 == v122 )
    goto LABEL_144;
  while ( 2 )
  {
    v54 = *(_QWORD *)(a1 + 64);
    v55 = *(__int64 **)(v54 + 1392);
    v56 = *(_QWORD *)v51;
    if ( v55 )
    {
      v53 = (__int64 *)(*v55 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v53 )
        goto LABEL_100;
      if ( (*(_BYTE *)(*v55 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v57 = *(_QWORD *)(*(_QWORD *)v51 + 24LL);
        while ( 2 )
        {
          v58 = v53[3];
          if ( v57 < v58 )
          {
            v53 = (__int64 *)v53[1];
LABEL_88:
            if ( (*(_BYTE *)v53 & 2) == 0 )
              continue;
          }
          else
          {
            if ( v58 < v57 )
            {
              v53 = (__int64 *)v53[2];
              goto LABEL_88;
            }
            if ( v53 != v55 )
LABEL_100:
              sub_1CB6E0((unsigned __int64 **)(v54 + 1392), v53);
          }
          break;
        }
      }
    }
    if ( v56 )
    {
      sub_11CDA0(v56 + 64);
      sub_11CDA0(v56 + 48);
      sub_11CDA0(v56 + 32);
      j__qfree(v56);
    }
    v51 += 8;
    if ( v52 != (_QWORD **)v51 )
      continue;
    break;
  }
LABEL_144:
  sub_137FB0(*(_QWORD *)(a1 + 64), v101, *(int *)(a3 + 4));
  sub_A2520(a1, (__int64)"replace_mop_by_kreg at %a: failed", *(double *)v12.m128i_i64);
LABEL_142:
  cleanup_argloc();
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree((__int64)v122);
  }
LABEL_5:
  v126[0] = off_4DE8B8;
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v129);
  }
  qfree(v127);
LABEL_8:
  clear_tinfo_t();
  cleanup_argloc();
  return v9;
}
