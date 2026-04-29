__int64 __fastcall sub_1CBA80(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned int v13; // ebx
  char v14; // bl
  __m128i v15; // xmm0
  int v16; // r14d
  int v17; // r9d
  _QWORD *v18; // r14
  _QWORD *v19; // rbx
  __int64 tinfo_size; // rax
  char v21; // al
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // eax
  int v28; // ecx
  size_t v29; // rdx
  char v30; // al
  char v31; // dl
  __m128i *v32; // r12
  unsigned __int64 *v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  char v37; // si
  unsigned __int64 v38; // rcx
  char v39; // dl
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // r14
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rbx
  _QWORD *v54; // rdi
  _QWORD *v55; // r14
  __int64 v56; // rdi
  __int64 v57; // rdi
  __m128i si128; // xmm1
  unsigned __int8 *v59; // r12
  unsigned __int8 *v60; // rax
  size_t v61; // rax
  int v62; // eax
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  _QWORD *v67; // rdx
  __int64 v68; // rbx
  _QWORD **v69; // rax
  _QWORD **v70; // r14
  int v71; // eax
  int v72; // edx
  void *v73; // rdi
  _QWORD *v74; // rbx
  _DWORD *v75; // r14
  _QWORD *v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // [rsp-8h] [rbp-2B8h]
  int v80; // [rsp+0h] [rbp-2B0h]
  __int64 *v81; // [rsp+8h] [rbp-2A8h]
  _QWORD *v82; // [rsp+10h] [rbp-2A0h]
  __int64 *v83; // [rsp+18h] [rbp-298h]
  _QWORD *v84; // [rsp+28h] [rbp-288h]
  unsigned __int8 v85; // [rsp+3Ah] [rbp-276h]
  char v86; // [rsp+3Bh] [rbp-275h]
  unsigned int i; // [rsp+3Ch] [rbp-274h]
  int v89; // [rsp+58h] [rbp-258h]
  unsigned __int8 v90; // [rsp+5Fh] [rbp-251h]
  unsigned int v91; // [rsp+60h] [rbp-250h]
  int v92; // [rsp+64h] [rbp-24Ch]
  int v94; // [rsp+78h] [rbp-238h]
  char v95; // [rsp+78h] [rbp-238h]
  char *src; // [rsp+80h] [rbp-230h]
  int srcb; // [rsp+80h] [rbp-230h]
  void *srca; // [rsp+80h] [rbp-230h]
  unsigned __int64 v99; // [rsp+88h] [rbp-228h] BYREF
  size_t n; // [rsp+90h] [rbp-220h]
  unsigned __int64 v101; // [rsp+98h] [rbp-218h]
  __int64 v102; // [rsp+A0h] [rbp-210h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-208h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-200h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-1F8h] BYREF
  _QWORD v106[2]; // [rsp+C0h] [rbp-1F0h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-1E0h] BYREF
  __int64 v108; // [rsp+D8h] [rbp-1D8h]
  __m128i v109; // [rsp+E0h] [rbp-1D0h] BYREF
  _DWORD v110[2]; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-1B8h]
  __int64 v112; // [rsp+100h] [rbp-1B0h] BYREF
  __int128 v113; // [rsp+108h] [rbp-1A8h]
  _QWORD *v114; // [rsp+120h] [rbp-190h] BYREF
  __int128 v115; // [rsp+128h] [rbp-188h]
  _QWORD v116[2]; // [rsp+140h] [rbp-170h] BYREF
  __int64 v117; // [rsp+150h] [rbp-160h] BYREF
  __int64 v118; // [rsp+158h] [rbp-158h]
  __int64 v119; // [rsp+160h] [rbp-150h] BYREF
  __int128 v120; // [rsp+168h] [rbp-148h]
  char v121[8]; // [rsp+180h] [rbp-130h] BYREF
  _QWORD v122[2]; // [rsp+188h] [rbp-128h]
  char v123[8]; // [rsp+198h] [rbp-118h] BYREF
  void *v124; // [rsp+1A0h] [rbp-110h]
  unsigned __int64 v125; // [rsp+1A8h] [rbp-108h]
  char v126[16]; // [rsp+1B8h] [rbp-F8h] BYREF
  int v127; // [rsp+1C8h] [rbp-E8h]
  char v128[8]; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v129; // [rsp+1D8h] [rbp-D8h]
  __int64 v130; // [rsp+1E0h] [rbp-D0h]
  char v131[8]; // [rsp+1E8h] [rbp-C8h] BYREF
  void *dest; // [rsp+1F0h] [rbp-C0h] BYREF
  unsigned __int64 v133; // [rsp+1F8h] [rbp-B8h]
  unsigned __int64 v134; // [rsp+200h] [rbp-B0h]
  char v135[16]; // [rsp+208h] [rbp-A8h] BYREF
  int v136; // [rsp+218h] [rbp-98h]
  char v137[24]; // [rsp+220h] [rbp-90h] BYREF
  __int64 v138[7]; // [rsp+238h] [rbp-78h] BYREF
  char v139; // [rsp+270h] [rbp-40h] BYREF
  unsigned __int64 v140; // [rsp+278h] [rbp-38h]

  LODWORD(n) = a4;
  v86 = a4;
  v140 = __readfsqword(0x28u);
  v6 = *(_BYTE *)a3 == 15;
  v106[0] = 0;
  v106[1] = 0;
  v102 = 0;
  if ( v6 )
  {
    v84 = *(_QWORD **)(a3 + 8);
    v83 = v84 + 6;
  }
  else
  {
    v9 = sub_1C5030((char *)a3, (__int64)v106);
    if ( !(_BYTE)v9 )
      goto LABEL_8;
    v84 = v106;
    v83 = &v102;
  }
  v7 = *(_QWORD *)(a1 + 64);
  v117 = 0;
  v116[1] = v7;
  v116[0] = off_4DE8B8;
  v118 = 0;
  v119 = 0;
  v110[0] = 0;
  v120 = 0;
  copy_argloc(v110, v84);
  sub_1C76E0(&v112, (__int64)v110, *(_DWORD *)(a3 + 4), 0);
  v82 = v116;
  for_all_arglocs(v116, &v112, *(unsigned int *)(a3 + 4), 0);
  v8 = *(int *)(a3 + 4);
  v114 = nullptr;
  *(_QWORD *)&v115 = v8;
  sub_316BB0(&v119, &v114);
  LODWORD(v101) = *(_DWORD *)(a3 + 4);
  v85 = sub_1C8DE0((__int64)v116, v83, 8 * (int)v101, 0);
  cleanup_argloc(&v112);
  cleanup_argloc(v110);
  if ( !v85 )
    goto LABEL_4;
  if ( (unsigned int)sub_64B20((__int64)&v117) == 2 )
  {
    if ( !sub_64930(&v117, 0) || !sub_64930(&v117, *(_DWORD *)(a3 + 4)) )
    {
      if ( !under_debugger )
        sub_383060(52939);
LABEL_154:
      BUG();
    }
    goto LABEL_4;
  }
  v90 = sub_11E8C0((unsigned int *)a2);
  if ( v90 )
    v90 = a3 == a2 + 64;
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0
    && ((get_tinfo_property(*v83, 2) & 0x2F) != 0xD
     || (unsigned __int8)sub_1C3110((__int64)v84, 0, 0)
     || (*(_BYTE *)(a2 + 5) & 8) != 0
     || !v90 && sub_120380((_BYTE *)a2, 1)) )
  {
    if ( !(_BYTE)n )
      goto LABEL_4;
  }
  else
  {
    v86 = 0;
  }
  v91 = sub_138140(*(_QWORD **)(a1 + 64), *(int *)(a3 + 4), 0);
  if ( v91 == -1 )
  {
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12.m128i_i64[0] = 0;
  v107 = 0;
  v108 = 0;
  LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v11 + 1504) + 80LL);
  v113 = 0;
  v112 = 0;
  v89 = v11;
  v81 = &v107;
  cleanup_argloc(&v107);
  LODWORD(v108) = v91;
  LODWORD(v107) = 3;
  v13 = sub_64960(&v117, 0);
  for ( i = sub_64960(&v117, v13 + 1); ; i = sub_64960(&v117, i + 1) )
  {
    if ( i == (_DWORD)v118 )
    {
      if ( v86 )
        *(_DWORD *)(*(_QWORD *)v112 + 4LL) |= 0x40000u;
      if ( v90 )
      {
        v67 = (_QWORD *)a2;
      }
      else
      {
        v67 = *(_QWORD **)(a2 + 16);
        if ( (_QWORD)v120 )
        {
          v101 = *(_QWORD *)(a2 + 16);
          v76 = (_QWORD *)j__qalloc_or_throw(80);
          v77 = *(_QWORD *)(a2 + 24);
          v76[5] = 0;
          v76[4] = 0xFFFFFFFF00000000LL;
          v76[6] = 0xFFFFFFFF00000000LL;
          v76[7] = 0;
          v76[8] = 0xFFFFFFFF00000000LL;
          v76[9] = 0;
          sub_330970(v76, v77);
          v78 = v101;
          v12 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
          *((_BYTE *)v76 + 64) = 1;
          *(_DWORD *)v76 = 61;
          v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v91)).m128i_u64[0];
          *(_QWORD *)((char *)v76 + 68) = v12.m128i_i64[0];
          v67 = sub_A3160(a1, v76, v78);
        }
      }
      v68 = v112 + 8 * v113;
      v69 = (_QWORD **)v112;
      if ( v68 != v112 )
      {
        do
        {
          v70 = v69;
          v67 = sub_A3160(a1, *v69, (__int64)v67);
          v69 = v70 + 1;
        }
        while ( (_QWORD **)v68 != v70 + 1 );
      }
      if ( *(_BYTE *)a3 == 15 )
      {
        v74 = *(_QWORD **)(*(_QWORD *)(a3 + 8) + 8LL);
        sub_1CAA80(v74, 1u);
        v75 = (_DWORD *)*v74;
        cleanup_argloc(*v74);
        *v75 = 3;
        v75[2] = v91;
        *(_WORD *)(*v74 + 16LL) = 0;
        *(_WORD *)(*v74 + 18LL) = *(_DWORD *)(a3 + 4);
      }
      else
      {
        *(_BYTE *)a3 = 1;
        *(_DWORD *)(a3 + 8) = v91;
      }
      *(_BYTE *)(a3 + 1) |= 0x40u;
      **(_DWORD **)(a1 + 64) &= ~0x10000u;
      v71 = *(_DWORD *)(a1 + 24);
      BYTE1(v71) &= ~2u;
      LOBYTE(v71) = v71 | 0x80;
      *(_DWORD *)(a1 + 24) = v71;
      sub_1B26E0(a3);
      sub_A2520(a1, (__int64)"replace_mop_by_kreg at %a: %s", *(double *)v12.m128i_i64, *(const char **)(a2 + 24));
      v9 = v85;
      goto LABEL_142;
    }
    v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(i - v13));
    v12 = _mm_unpacklo_epi32(v15, _mm_cmpgt_epi32((__m128i)0LL, v15));
    v109 = v12;
    v9 = sub_317E70(&v119, &v109, 0);
    v99 = v109.m128i_u64[1];
    if ( !(_BYTE)v9 )
      break;
    v12.m128i_i64[0] = 0;
    v114 = nullptr;
    v115 = 0;
    if ( v99 + v109.m128i_i64[0] - 1 >= v109.m128i_i64[0] )
    {
      v114 = (_QWORD *)qvector_reserve(&v114, 0, 1, 16);
      v12 = (__m128i)_mm_loadh_ps((const double *)&v99);
      *(__m128i *)&v114[2 * v115] = v12;
      *(_QWORD *)&v115 = v115 + 1;
    }
    v14 = sub_317F40(&v119, &v114);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree(v114);
    }
    if ( !v14 )
    {
      if ( !under_debugger )
        sub_383060(52907);
      goto LABEL_154;
    }
LABEL_21:
    v13 = i;
  }
  v103 = v109.m128i_i64[0];
  v104 = v109.m128i_i64[0];
  sub_123A40((__int64)v110, (unsigned __int8 *)a3);
  if ( (unsigned __int8)sub_1C50C0((__int64)v81, *(_QWORD *)(a1 + 480), &v103, v99, *(int *)(a3 + 4)) )
  {
    v16 = v99;
    if ( (unsigned __int8)sub_1C50C0((__int64)v84, *(_QWORD *)(a1 + 480), &v104, v99, *(int *)(a3 + 4)) )
    {
      v92 = v16;
      if ( LOBYTE(v110[0]) == 15 )
      {
        if ( !(unsigned __int8)sub_126980((__int64)v110, v104, v16, 3) )
          goto LABEL_85;
      }
      else
      {
        if ( !(unsigned __int8)sub_126F10((unsigned __int64)v110, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v104) )
          goto LABEL_85;
        v110[1] = v99;
      }
      v105 = 0;
      if ( LOBYTE(v110[0]) != 5 || v99 <= 0x10 )
      {
        v21 = 0;
        if ( v99 )
          goto LABEL_49;
LABEL_126:
        clear_tinfo_t(&v105);
        sub_11CDA0((__int64)v110);
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v111 + 8) < *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
      {
        if ( (get_tinfo_property(*v83, 2) & 0x2F) == 0xD )
        {
          v12.m128i_i64[0] = 0;
          v114 = nullptr;
          v115 = 0;
          sub_3349B0((unsigned int)&v114, (_DWORD)v83, v109.m128i_i32[0], 0, 3, v17);
          v18 = v114;
          v19 = &v114[8 * (_QWORD)v115];
          if ( v19 != v114 )
          {
            do
            {
              tinfo_size = get_tinfo_size(0, v18[7], 0);
              if ( v99 == tinfo_size && (get_tinfo_property(v18[7], 2) & 0x2F) == 0xD )
              {
                v51 = v105;
                v105 = v18[7];
                v18[7] = v51;
                v18 = v114;
                goto LABEL_102;
              }
              v18 += 8;
            }
            while ( v18 != v19 );
            v18 = v114;
          }
LABEL_102:
          if ( v18 )
          {
            v52 = v115;
            if ( (_QWORD)v115 )
            {
              v53 = 0;
              v54 = v18;
              do
              {
                v55 = &v54[8 * v53];
                clear_tinfo_t(v55 + 7);
                v56 = v55[4];
                if ( v56 )
                {
                  v55[5] = 0;
                  qfree(v56);
                }
                v57 = v55[1];
                if ( v57 )
                {
                  v55[2] = 0;
                  qfree(v57);
                }
                ++v53;
                v54 = v114;
              }
              while ( v52 != v53 );
              v18 = v114;
            }
            *(_QWORD *)&v115 = 0;
            qfree(v18);
          }
        }
        v21 = v105;
        if ( (_BYTE)v105 )
          goto LABEL_49;
        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
        v59 = (unsigned __int8 *)&v139;
        v12.m128i_i64[0] = 0;
        v60 = (unsigned __int8 *)v121;
        do
        {
          *((_DWORD *)v60 + 1) = -1;
          v60 += 80;
          *((_WORD *)v60 - 40) = 0;
          *((_WORD *)v60 - 39) = 0;
          *((_QWORD *)v60 - 9) = 0;
          *((__m128i *)v60 - 4) = si128;
          *((_QWORD *)v60 - 6) = 0;
          *(_OWORD *)(v60 - 40) = 0;
          *((_DWORD *)v60 - 6) = 0;
          *((_QWORD *)v60 - 2) = 0;
          *((_DWORD *)v60 - 2) = 0;
        }
        while ( &v139 != (char *)v60 );
        sub_11CA10(v121, (char *)v110);
        sub_11C950(v121, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL));
        sub_125180((__int64)v128, (unsigned __int8 *)v121);
        v130 = v122[1];
        copy_tinfo_t(v131, v123);
        v101 = v125;
        if ( v125 && (n = v125 - 1, v125 != 1) )
        {
          v73 = dest;
          srca = v124;
          if ( v134 < v101 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v101, 1);
            v73 = dest;
          }
          v133 = v101;
          memmove(v73, srca, n);
          *((char *)dest + v101 - 1) = 0;
        }
        else
        {
          v133 = 0;
        }
        copy_argloc(v135, v126);
        v136 = v127;
        srcb = v103 + v91;
        v101 = v90;
        n = v122[10 * v90];
        sub_11CDA0(n);
        v61 = n;
        *(_DWORD *)(n + 8) = srcb;
        *(_BYTE *)v61 = 1;
        *(_DWORD *)(v61 + 4) = v92;
        copy_tinfo_t(v123, *(_QWORD *)(a1 + 480) + 232LL);
        copy_tinfo_t(v131, *(_QWORD *)(a1 + 480) + 240LL);
        v114 = (_QWORD *)&byte_7;
        copy_tinfo_t(v138, &v114);
        clear_tinfo_t(&v114);
        if ( v90 )
        {
          v72 = v92;
          v92 = 0;
          *(_DWORD *)(v129 + 16) = v72;
        }
        else
        {
          *(_DWORD *)(v122[0] + 16LL) = 0;
        }
        *(_DWORD *)(v122[10 * v101] + 20LL) = v92;
        v101 = *(_QWORD *)(a2 + 24);
        v62 = get_tinfo_size(0, v138[0], 0);
        sub_120A10((__int64)v137, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v99, v62, v101, 2);
        v63 = sub_335B10(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(a2 + 24),
                (unsigned int)"memcpy",
                (unsigned int)v123,
                3,
                (unsigned int)v121,
                1,
                v79,
                v80,
                (_DWORD)v81,
                (_DWORD)v82,
                (_DWORD)v83);
        *(_DWORD *)(*(_QWORD *)(v63 + 72) + 284LL) = 5;
        v64 = v113;
        v65 = v112;
        if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
        {
          v112 = qvector_reserve(&v112, v112, v113 + 1, 8);
          v65 = v112;
          v64 = v113;
        }
        *(_QWORD *)(v65 + 8 * v64) = v63;
        *(_QWORD *)&v113 = v113 + 1;
        do
        {
          v59 -= 80;
          cleanup_argloc(v59 + 56);
          v66 = *((_QWORD *)v59 + 4);
          if ( v66 )
          {
            *((_QWORD *)v59 + 5) = 0;
            qfree(v66);
          }
          clear_tinfo_t(v59 + 24);
          sub_11CDA0((__int64)v59);
        }
        while ( v59 != (unsigned __int8 *)v121 );
        goto LABEL_126;
      }
      v21 = 0;
LABEL_49:
      n = 0;
      while ( 1 )
      {
        v101 = v99;
        if ( !v21 )
          v101 = (unsigned int)round_down_power2((unsigned int)v99);
        if ( LOBYTE(v110[0]) == 5 )
        {
          v22 = v89;
          if ( v101 <= v89 )
            v22 = v101;
          v101 = v22;
        }
        v23 = j__qalloc_or_throw(80);
        v24 = sub_332AB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 40) = 0;
        *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 56) = 0;
        *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 72) = 0;
        src = (char *)(v23 + 32);
        sub_330970(v23, v24);
        v25 = v113;
        v26 = v112;
        if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
        {
          v112 = qvector_reserve(&v112, v112, v113 + 1, 8);
          v26 = v112;
          v25 = v113;
        }
        *(_QWORD *)(v26 + 8 * v25) = v23;
        *(_QWORD *)&v113 = v113 + 1;
        *(_DWORD *)v23 = 4;
        sub_125180(v23 + 64, (unsigned __int8 *)v110);
        v27 = v103 + v91;
        *(_BYTE *)(v23 + 32) = 1;
        v28 = v101;
        v29 = n;
        *(_DWORD *)(v23 + 40) = v27;
        v94 = v28;
        *(_DWORD *)(v23 + 36) = v92;
        if ( !(unsigned __int8)sub_1C81D0(*(_QWORD *)(a1 + 480), v23 + 64, v29, v28)
          || (v30 = sub_1C81D0(*(_QWORD *)(a1 + 480), (unsigned __int64)src, n, v94), (v31 = v30) == 0) )
        {
          v21 = v105;
          goto LABEL_49;
        }
        *(_BYTE *)(v23 + 33) |= 0x40u;
        *(_BYTE *)(v23 + 65) |= 0x40u;
        if ( !v90 )
        {
          v95 = v30;
          sub_11CA10(src, (char *)(v23 + 64));
          v31 = v95;
        }
        if ( (_BYTE)v105 )
          break;
LABEL_61:
        n += v101;
        v99 -= v101;
        if ( !v99 )
          goto LABEL_126;
        v21 = v105;
      }
      *(_BYTE *)(v23 + 33) |= 2u;
      *(_BYTE *)(v23 + 65) |= 2u;
      v32 = *(__m128i **)(a1 + 64);
      v114 = (_QWORD *)(v23 + 24);
      v33 = (unsigned __int64 *)v32[87].m128i_i64[0];
      if ( v33 )
      {
        if ( v32[87].m128i_i64[1] )
        {
          v34 = *v33 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v39 = 1;
          }
          else
          {
            v35 = *(_QWORD *)(v23 + 24);
            v36 = *(_QWORD *)(v34 + 24);
            v37 = v31;
            if ( v35 >= v36 )
              goto LABEL_74;
LABEL_72:
            v38 = *(_QWORD *)(v34 + 8);
            v37 = v31;
            if ( (*(_BYTE *)v38 & 2) == 0 )
            {
              while ( 1 )
              {
                v34 = v38;
                v36 = *(_QWORD *)(v38 + 24);
                if ( v35 < v36 )
                  goto LABEL_72;
LABEL_74:
                if ( v36 >= v35 )
                  break;
                v38 = *(_QWORD *)(v34 + 16);
                v37 = 0;
                if ( (*(_BYTE *)v38 & 2) != 0 )
                  goto LABEL_76;
              }
              if ( v34 )
              {
LABEL_68:
                copy_tinfo_t(v34 + 32, &v105);
                goto LABEL_61;
              }
            }
LABEL_76:
            v39 = v37;
            v33 = (unsigned __int64 *)v34;
          }
          v34 = sub_C7DB0(v32 + 87, v33, v39, &v114);
          goto LABEL_68;
        }
      }
      else
      {
        v40 = qalloc(40);
        v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
        if ( !v40 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v40 + 32) = 0;
        *(_OWORD *)(v40 + 16) = 0;
        *(__m128i *)(v40 + 8) = v41;
        *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v32[87].m128i_i64[0] = v40;
        *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v40 & 3LL;
        v42 = v32[87].m128i_i64[0];
        v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
        *(__m128i *)(v42 + 8) = v12;
        *(_QWORD *)v32[87].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v32[87].m128i_i64[0] |= 2uLL;
        v33 = (unsigned __int64 *)v32[87].m128i_i64[0];
      }
      v34 = sub_C7DB0(v32 + 87, v33, 1, &v114);
      goto LABEL_68;
    }
  }
LABEL_85:
  sub_11CDA0((__int64)v110);
  v43 = v112;
  v44 = v112 + 8 * v113;
  if ( v44 == v112 )
    goto LABEL_144;
  while ( 2 )
  {
    v46 = *(_QWORD *)(a1 + 64);
    v47 = *(__int64 **)(v46 + 1392);
    v48 = *(_QWORD *)v43;
    if ( v47 )
    {
      v45 = (__int64 *)(*v47 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v45 )
        goto LABEL_100;
      if ( (*(_BYTE *)(*v47 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)v43 + 24LL);
        while ( 2 )
        {
          v50 = v45[3];
          if ( v49 < v50 )
          {
            v45 = (__int64 *)v45[1];
LABEL_88:
            if ( (*(_BYTE *)v45 & 2) == 0 )
              continue;
          }
          else
          {
            if ( v50 < v49 )
            {
              v45 = (__int64 *)v45[2];
              goto LABEL_88;
            }
            if ( v45 != v47 )
LABEL_100:
              sub_1CB6E0((unsigned __int64 **)(v46 + 1392), v45);
          }
          break;
        }
      }
    }
    if ( v48 )
    {
      sub_11CDA0(v48 + 64);
      sub_11CDA0(v48 + 48);
      sub_11CDA0(v48 + 32);
      j__qfree(v48);
    }
    v43 += 8;
    if ( v44 != v43 )
      continue;
    break;
  }
LABEL_144:
  sub_137FB0(*(_QWORD *)(a1 + 64), v91, *(int *)(a3 + 4));
  sub_A2520(a1, (__int64)"replace_mop_by_kreg at %a: failed", *(double *)v12.m128i_i64);
LABEL_142:
  cleanup_argloc(v81);
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v112);
  }
LABEL_5:
  v116[0] = off_4DE8B8;
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  qfree(v117);
LABEL_8:
  clear_tinfo_t(&v102);
  cleanup_argloc(v106);
  return v9;
}
