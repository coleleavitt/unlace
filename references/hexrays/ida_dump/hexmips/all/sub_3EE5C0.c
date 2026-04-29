__int64 __fastcall sub_3EE5C0(__int64 a1, __int64 a2, signed int a3, unsigned int a4, int a5)
{
  const char *v6; // rsi
  __m128i si128; // xmm1
  __m128i v8; // xmm0
  __m128i *v9; // rax
  const char *v10; // r13
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r12
  int v14; // eax
  char v15; // al
  __int64 v16; // rsi
  char *v17; // r13
  char *v18; // r14
  char *i; // r12
  size_t v20; // r8
  size_t v21; // rax
  __int64 v22; // r14
  unsigned int v23; // r15d
  size_t v24; // r8
  size_t v25; // rdx
  __int64 v26; // r14
  char *v27; // rdi
  __int64 v28; // r10
  unsigned int j; // eax
  __int64 v30; // rdx
  char *v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // r12d
  char *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rdi
  _WORD *v39; // rsi
  _BYTE *v40; // rsi
  __int64 v41; // rsi
  int v42; // r8d
  _BYTE *v43; // rax
  char *v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rcx
  _QWORD *v49; // r12
  int v50; // edx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  __int64 v55; // r15
  size_t v56; // r9
  size_t v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // r13
  size_t v60; // rax
  size_t v61; // r8
  size_t v62; // r15
  size_t v63; // rdx
  __int64 v64; // rax
  _WORD *v65; // rsi
  _BYTE *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 *v71; // r12
  __m128i v72; // xmm1
  __m128i v73; // xmm1
  _DWORD *v74; // rsi
  _DWORD *v75; // rsi
  _BYTE *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rax
  __m128i v79; // xmm0
  _BYTE *v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  _DWORD *v83; // rsi
  __int64 v84; // rax
  _BYTE *v85; // rsi
  __int64 v86; // rax
  _WORD *v87; // rsi
  __int64 v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rax
  unsigned __int64 v91; // r13
  __int64 v92; // r12
  char *v93; // r14
  _BYTE *v94; // rsi
  __int64 v95; // r11
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  _DWORD *v100; // rsi
  size_t v101; // [rsp+8h] [rbp-3F8h]
  size_t v102; // [rsp+10h] [rbp-3F0h]
  size_t v103; // [rsp+18h] [rbp-3E8h]
  size_t v104; // [rsp+18h] [rbp-3E8h]
  char *src; // [rsp+28h] [rbp-3D8h]
  void *srca; // [rsp+28h] [rbp-3D8h]
  int v110; // [rsp+44h] [rbp-3BCh]
  char *v111[2]; // [rsp+50h] [rbp-3B0h] BYREF
  _BYTE *v112; // [rsp+60h] [rbp-3A0h]
  __int64 v113; // [rsp+68h] [rbp-398h]
  __int64 v114; // [rsp+70h] [rbp-390h] BYREF
  __int64 v115; // [rsp+78h] [rbp-388h] BYREF
  __int64 v116; // [rsp+80h] [rbp-380h] BYREF
  __int64 v117; // [rsp+88h] [rbp-378h] BYREF
  char *s; // [rsp+90h] [rbp-370h] BYREF
  __m128i v119; // [rsp+98h] [rbp-368h]
  __int64 v120[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 *v121; // [rsp+C0h] [rbp-340h] BYREF
  __m128i v122; // [rsp+C8h] [rbp-338h]
  __int64 v123; // [rsp+E0h] [rbp-320h]
  __int64 v124; // [rsp+E8h] [rbp-318h]
  __int64 *v125; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v126; // [rsp+F8h] [rbp-308h]
  _BYTE v127[24]; // [rsp+110h] [rbp-2F0h] BYREF
  __m128i v128; // [rsp+128h] [rbp-2D8h] BYREF
  _BYTE v129[4]; // [rsp+140h] [rbp-2C0h] BYREF
  unsigned __int64 v130; // [rsp+144h] [rbp-2BCh]
  __int64 v131; // [rsp+158h] [rbp-2A8h] BYREF
  _BYTE *v132; // [rsp+160h] [rbp-2A0h] BYREF
  __int64 v133; // [rsp+168h] [rbp-298h]
  unsigned __int64 v134; // [rsp+170h] [rbp-290h]
  char v135[4]; // [rsp+190h] [rbp-270h] BYREF
  unsigned __int64 v136; // [rsp+194h] [rbp-26Ch]
  __int64 v137; // [rsp+1A8h] [rbp-258h] BYREF
  _BYTE *v138; // [rsp+1B0h] [rbp-250h] BYREF
  __int64 v139; // [rsp+1B8h] [rbp-248h]
  unsigned __int64 v140; // [rsp+1C0h] [rbp-240h]
  char v141[4]; // [rsp+1E0h] [rbp-220h] BYREF
  int v142; // [rsp+1E4h] [rbp-21Ch]
  signed int v143; // [rsp+1E8h] [rbp-218h]
  char v144[8]; // [rsp+1F8h] [rbp-208h] BYREF
  _QWORD v145[6]; // [rsp+200h] [rbp-200h] BYREF
  char v146[24]; // [rsp+230h] [rbp-1D0h] BYREF
  char v147[296]; // [rsp+248h] [rbp-1B8h] BYREF
  char v148; // [rsp+370h] [rbp-90h] BYREF
  char v149; // [rsp+3C0h] [rbp-40h] BYREF
  unsigned __int64 v150; // [rsp+3C8h] [rbp-38h]

  v113 = a2;
  v150 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 48) == 506 && *(_QWORD *)(a1 + 72) )
    return 0;
  v6 = v129;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v8.m128i_i64[0] = 0;
  v9 = (__m128i *)v129;
  do
  {
    v9->m128i_i32[1] = -1;
    v9 += 5;
    v9[-5].m128i_i16[0] = 0;
    v9[-5].m128i_i16[1] = 0;
    v9[-5].m128i_i64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128i_i32[2] = 0;
    v9[-1].m128i_i64[0] = 0;
    v9[-1].m128i_i32[2] = 0;
  }
  while ( &v149 != (char *)v9 );
  v112 = v129;
  v114 = 1;
  v10 = *(const char **)v113;
  v120[0] = 0;
  v120[1] = 0;
  v121 = nullptr;
  v123 = 0;
  v124 = 0;
  v125 = nullptr;
  s = nullptr;
  v122 = 0;
  v126 = 0;
  v119 = 0;
  if ( v10 )
  {
    v11 = strlen(v10);
    v12 = v11 + 1;
    v13 = v11;
    v6 = v10;
    s = (char *)qvector_reserve(&s, 0, v11 + 1, 1);
    v119.m128i_i64[0] = v12;
    memmove(s, v10, v13);
    s[v13] = 0;
  }
  v110 = *(unsigned __int16 *)(v113 + 10);
  if ( v110 == 0xFFFF )
    v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
  v14 = *(_DWORD *)(v113 + 12);
  if ( (v14 & 0x20) == 0 )
  {
    v16 = (unsigned int)v110;
    if ( !v110 || v110 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) )
      goto LABEL_34;
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(a1 + 52) & 4) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC5u, (__int64)v6, 0.0);
LABEL_191:
    BUG();
  }
  v15 = *(_BYTE *)(a1 + 56);
  if ( v15 == 112 )
  {
LABEL_47:
    v34 = 0;
    goto LABEL_48;
  }
  if ( v15 == 115 )
  {
    *(_QWORD *)v127 = 9;
    v16 = (__int64)v127;
    copy_tinfo_t(&v114, v127);
    clear_tinfo_t(v127);
    v110 = 4;
    v111[0] = "f";
    goto LABEL_14;
  }
  if ( v15 != 100 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC6u, (__int64)v6, 0.0);
    goto LABEL_191;
  }
  *(_QWORD *)v127 = 25;
  v16 = (__int64)v127;
  copy_tinfo_t(&v114, v127);
  clear_tinfo_t(v127);
  v110 = 8;
  v111[0] = (char *)&unk_414AAC;
LABEL_14:
  v8.m128i_i64[0] = 0;
  v17 = nullptr;
  memset(v127, 0, sizeof(v127));
  src = (char *)s1;
  if ( v119.m128i_i64[0] )
  {
    v16 = 36;
    src = s;
    v17 = strchr(s, 36);
  }
  v18 = src;
  for ( i = nullptr; v17; v17 = strchr(v17 + 1, 36) )
  {
    v20 = v17 - v18;
    if ( v17 != v18 )
    {
      v55 = *(_QWORD *)&v127[8];
      v56 = v17 - v18;
      if ( *(_QWORD *)&v127[8] )
      {
        v55 = *(_QWORD *)&v127[8] - 1LL;
        v56 = v20 + *(_QWORD *)&v127[8] - 1LL;
      }
      v57 = v56 + 1;
      if ( *(_QWORD *)&v127[16] < v56 + 1 )
      {
        v101 = v56;
        v104 = v56 + 1;
        *(_QWORD *)v127 = qvector_reserve(v127, i, v57, 1);
        v56 = v101;
        i = *(char **)v127;
        v20 = v17 - v18;
        v57 = v104;
      }
      *(_QWORD *)&v127[8] = v57;
      i[v56] = 0;
      memmove((void *)(v55 + *(_QWORD *)v127), v18, v20);
      i = *(char **)v127;
    }
    v21 = strlen(v111[0]);
    v22 = *(_QWORD *)&v127[8];
    v23 = v21;
    v24 = v21;
    if ( *(_QWORD *)&v127[8] )
    {
      v22 = *(_QWORD *)&v127[8] - 1LL;
      v24 = v21 + *(_QWORD *)&v127[8] - 1LL;
    }
    v25 = v24 + 1;
    if ( *(_QWORD *)&v127[16] < v24 + 1 )
    {
      v102 = v24;
      v103 = v24 + 1;
      *(_QWORD *)v127 = qvector_reserve(v127, i, v25, 1);
      v24 = v102;
      i = *(char **)v127;
      v25 = v103;
    }
    *(_QWORD *)&v127[8] = v25;
    i[v24] = 0;
    i = *(char **)v127;
    v26 = *(_QWORD *)v127 + v22;
    if ( v23 )
    {
      v27 = v111[0];
      v28 = (__int64)v112;
      for ( j = 0; j < v23; ++j )
      {
        v30 = j;
        *(_BYTE *)(v26 + v30) = v27[v30];
      }
      v112 = (_BYTE *)v28;
      i = *(char **)v127;
    }
    v18 = v17 + 1;
    v16 = 36;
  }
  if ( v18 == src )
  {
    v31 = i;
  }
  else
  {
    if ( *v18 && v18 )
    {
      v59 = *(_QWORD *)&v127[8];
      v60 = strlen(v18);
      v61 = v60;
      v62 = v60;
      if ( v59 )
      {
        --v59;
        v62 = v60 + v59;
      }
      v63 = v62 + 1;
      if ( *(_QWORD *)&v127[16] < v62 + 1 )
      {
        srca = (void *)v60;
        v111[0] = (char *)(v62 + 1);
        *(_QWORD *)v127 = qvector_reserve(v127, i, v63, 1);
        v61 = (size_t)srca;
        i = *(char **)v127;
        v63 = v62 + 1;
      }
      *(_QWORD *)&v127[8] = v63;
      v16 = (__int64)v18;
      i[v62] = 0;
      memmove((void *)(v59 + *(_QWORD *)v127), v18, v61);
      i = *(char **)v127;
    }
    v31 = s;
    s = i;
    v8 = _mm_loadu_si128((const __m128i *)&v127[8]);
    *(_QWORD *)v127 = v31;
    *(_QWORD *)&v127[16] = v119.m128i_i64[1];
    v119 = v8;
  }
  if ( v31 )
  {
    *(_QWORD *)&v127[8] = 0;
    qfree(v31);
  }
  v14 = *(_DWORD *)(v113 + 12);
LABEL_34:
  if ( (v14 & 0x40) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL) == a3 )
  {
    v32 = a3;
  }
  else
  {
    if ( (v14 & 0x80u) == 0 )
      goto LABEL_38;
    v16 = a4;
    v32 = (int)a4;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL) != a4 )
      goto LABEL_38;
  }
  v16 = 3;
  sub_1D1F50(a1, 3u, v110, 0, 0x3BEA45E214ADDC55LL, v32, 0);
LABEL_38:
  v33 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v33 > 0x269u )
  {
    if ( (_WORD)v33 == 1723 )
    {
      *(_QWORD *)v127 = 36;
      copy_tinfo_t(&v114, v127);
      clear_tinfo_t(v127);
      v129[0] = 1;
      *(_QWORD *)v127 = 36;
      v130 = __PAIR64__(a4, v110);
      copy_tinfo_t(&v131, v127);
      clear_tinfo_t(v127);
      sub_11C810((__int64)v135, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), 1, -1, 0);
      *(_QWORD *)v127 = 34;
      copy_tinfo_t(&v137, v127);
      clear_tinfo_t(v127);
      sub_11C810((__int64)v141, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 192), 1, -1, 0);
      *(_QWORD *)v127 = 34;
      copy_tinfo_t(v144, v127);
      clear_tinfo_t(v127);
      sub_11C810((__int64)v146, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 232), 1, -1, 0);
      *(_QWORD *)v127 = 34;
      copy_tinfo_t(v147, v127);
      clear_tinfo_t(v127);
    }
    else if ( (unsigned __int16)v33 > 0x6BBu )
    {
      if ( (unsigned __int16)(v33 - 1759) > 4u )
        goto LABEL_113;
LABEL_116:
      *(_QWORD *)v127 = 36;
      copy_tinfo_t(&v114, v127);
      clear_tinfo_t(v127);
      v129[0] = 1;
      *(_QWORD *)v127 = 36;
      v130 = __PAIR64__(a4, v110);
      copy_tinfo_t(&v131, v127);
      clear_tinfo_t(v127);
    }
    else
    {
      if ( (unsigned __int16)(v33 - 755) > 1u )
        goto LABEL_113;
      *(_QWORD *)v127 = 36;
      copy_tinfo_t(&v114, v127);
      clear_tinfo_t(v127);
      v129[0] = 1;
      HIDWORD(v130) = a3;
      LODWORD(v130) = 4;
      *(_QWORD *)v127 = 36;
      copy_tinfo_t(&v131, v127);
      clear_tinfo_t(v127);
    }
  }
  else
  {
    if ( (unsigned __int16)v33 > 0x1F1u )
    {
      LOWORD(v33) = v33 - 498;
      switch ( v33 )
      {
        case 0LL:
        case 1LL:
        case 60LL:
        case 61LL:
          v64 = 37;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) == 4 )
            v64 = 36;
          *(_QWORD *)v127 = v64;
          copy_tinfo_t(&v114, v127);
          clear_tinfo_t(v127);
          v129[0] = 1;
          v130 = __PAIR64__(a4, v110);
          *(_QWORD *)v127 = (v110 != 4) + 36LL;
          copy_tinfo_t(&v131, v127);
          clear_tinfo_t(v127);
LABEL_120:
          v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          goto LABEL_74;
        case 8LL:
        case 12LL:
        case 59LL:
          goto LABEL_74;
        case 11LL:
        case 13LL:
          *(_QWORD *)v127 = 36;
          copy_tinfo_t(&v114, v127);
          clear_tinfo_t(v127);
          goto LABEL_74;
        case 34LL:
          v86 = 37;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) == 4 )
            v86 = 36;
          *(_QWORD *)v127 = v86;
          copy_tinfo_t(&v114, v127);
          clear_tinfo_t(v127);
          v129[0] = 1;
          HIDWORD(v130) = a4;
          LODWORD(v130) = 1;
          *(_QWORD *)v127 = 34;
          copy_tinfo_t(&v131, v127);
          clear_tinfo_t(v127);
          v87 = v132;
          if ( v134 <= 2 )
          {
            v132 = (_BYTE *)qvector_reserve(&v132, v132, 3, 1);
            v87 = v132;
          }
          v133 = 3;
          *v87 = 29544;
          v132[2] = 0;
          if ( a5 != -1 )
          {
            v135[0] = 1;
            HIDWORD(v136) = a5;
            LODWORD(v136) = 1;
            *(_QWORD *)v127 = 34;
            copy_tinfo_t(&v137, v127);
            clear_tinfo_t(v127);
            v66 = v138;
            if ( v140 <= 3 )
            {
LABEL_165:
              v138 = (_BYTE *)qvector_reserve(&v138, v66, 4, 1);
              v66 = v138;
            }
LABEL_124:
            v139 = 4;
            *(_WORD *)v66 = 25971;
            v66[2] = 108;
            v138[3] = 0;
          }
          goto LABEL_74;
        case 35LL:
          v84 = 37;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) == 4 )
            v84 = 36;
          *(_QWORD *)v127 = v84;
          copy_tinfo_t(&v114, v127);
          clear_tinfo_t(v127);
          v129[0] = 1;
          HIDWORD(v130) = a4;
          LODWORD(v130) = 1;
          *(_QWORD *)v127 = 34;
          copy_tinfo_t(&v131, v127);
          clear_tinfo_t(v127);
          v85 = v132;
          if ( v134 <= 5 )
          {
            v132 = (_BYTE *)qvector_reserve(&v132, v132, 6, 1);
            v85 = v132;
          }
          v133 = 6;
          *(_DWORD *)v85 = 1852269938;
          v85[4] = 111;
          v132[5] = 0;
          goto LABEL_74;
        case 41LL:
          v81 = *(_QWORD *)(a1 + 800);
          v129[0] = 1;
          v130 = _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v81 + 112) + 84LL)),
                   _mm_cvtsi32_si128(a3)).m128i_u64[0];
          copy_tinfo_t(&v131, v81 + 232);
          v82 = v131;
          if ( (_BYTE)v131 )
          {
            LOBYTE(v82) = v131 & 0x3F | 0x80;
            v131 = v82;
          }
          v83 = v132;
          if ( v134 <= 4 )
          {
            v132 = (_BYTE *)qvector_reserve(&v132, v132, 5, 1);
            v83 = v132;
          }
          v133 = 5;
          *v83 = 1919181921;
          v132[4] = 0;
          goto LABEL_74;
        case 42LL:
          v129[0] = 1;
          LODWORD(v130) = 1;
          HIDWORD(v130) = a3;
          *(_QWORD *)v127 = 34;
          copy_tinfo_t(&v131, v127);
          clear_tinfo_t(v127);
          v76 = v132;
          if ( v134 <= 5 )
          {
            v132 = (_BYTE *)qvector_reserve(&v132, v132, 6, 1);
            v76 = v132;
          }
          v133 = 6;
          v77 = 37;
          *(_DWORD *)v76 = 1852269938;
          v76[4] = 111;
          v132[5] = 0;
          v78 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
          v79 = _mm_cvtsi32_si128(*(_DWORD *)(v78 + 80));
          v135[0] = 1;
          v136 = _mm_unpacklo_epi32(v79, _mm_cvtsi32_si128(a4)).m128i_u64[0];
          if ( *(_DWORD *)(v78 + 80) == 4 )
            v77 = 36;
          *(_QWORD *)v127 = v77;
          copy_tinfo_t(&v137, v127);
          clear_tinfo_t(v127);
          v80 = v138;
          if ( v140 <= 5 )
          {
            v138 = (_BYTE *)qvector_reserve(&v138, v138, 6, 1);
            v80 = v138;
          }
          v139 = 6;
          *(_DWORD *)v80 = 1970037110;
          v80[4] = 101;
          v138[5] = 0;
          goto LABEL_74;
        case 43LL:
        case 119LL:
          goto LABEL_116;
        default:
          goto LABEL_113;
      }
    }
    if ( (unsigned __int16)v33 > 0xB1u )
    {
      if ( (_WORD)v33 != 206 )
        goto LABEL_113;
    }
    else
    {
      if ( (unsigned __int16)v33 > 0x81u )
      {
        LOWORD(v33) = v33 - 130;
        switch ( v33 )
        {
          case 0LL:
            *(_QWORD *)v127 = 36;
            copy_tinfo_t(&v114, v127);
            clear_tinfo_t(v127);
            v88 = *(_QWORD *)(a1 + 800);
            v129[0] = 1;
            v89 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v88 + 112) + 84LL));
            v115 = 36;
            v116 = 0;
            v117 = 0;
            v130 = _mm_unpacklo_epi32(v89, _mm_cvtsi32_si128(a4)).m128i_u64[0];
            *(_OWORD *)v127 = 0;
            copy_tinfo_t(&v127[8], &v117);
            *(_QWORD *)&v127[16] = 0;
            copy_tinfo_t(&v127[16], &v116);
            v128.m128i_i32[0] = 0;
            v128.m128i_i16[2] = 0;
            clear_tinfo_t(&v117);
            clear_tinfo_t(&v116);
            copy_tinfo_t(v127, &v115);
            create_tinfo(&v131, 10, 10, v127);
            clear_tinfo_t(&v127[16]);
            clear_tinfo_t(&v127[8]);
            clear_tinfo_t(v127);
            clear_tinfo_t(&v115);
            v90 = v131;
            if ( (_BYTE)v131 )
            {
              LOBYTE(v90) = v131 & 0x3F | 0x80;
              v131 = v90;
            }
            goto LABEL_74;
          case 13LL:
          case 17LL:
            v67 = 37;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) == 4 )
              v67 = 36;
            *(_QWORD *)v127 = v67;
            copy_tinfo_t(&v114, v127);
            clear_tinfo_t(v127);
            v129[0] = 1;
            v130 = __PAIR64__(a3, v110);
            *(_QWORD *)v127 = (v110 != 4) + 36LL;
            copy_tinfo_t(&v131, v127);
            clear_tinfo_t(v127);
            v68 = *(_QWORD *)(a1 + 800);
            v135[0] = 1;
            v69 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v68 + 112) + 84LL));
            v115 = (v110 != 4) + 36LL;
            v116 = 0;
            v117 = 0;
            v136 = _mm_unpacklo_epi32(v69, _mm_cvtsi32_si128(a4)).m128i_u64[0];
            *(_OWORD *)v127 = 0;
            copy_tinfo_t(&v127[8], &v117);
            *(_QWORD *)&v127[16] = 0;
            copy_tinfo_t(&v127[16], &v116);
            v128.m128i_i32[0] = 0;
            v128.m128i_i16[2] = 0;
            clear_tinfo_t(&v117);
            clear_tinfo_t(&v116);
            copy_tinfo_t(v127, &v115);
            create_tinfo(&v137, 10, 10, v127);
            clear_tinfo_t(&v127[16]);
            clear_tinfo_t(&v127[8]);
            clear_tinfo_t(v127);
            clear_tinfo_t(&v115);
            v70 = v137;
            if ( (_BYTE)v137 )
            {
              LOBYTE(v70) = v137 & 0x3F | 0x80;
              v137 = v70;
            }
            if ( *(_BYTE *)(a1 + 105) == 2 )
            {
              sub_11E920(v120, *(_QWORD *)(a1 + 120), v110);
            }
            else
            {
              memset(v127, 0, sizeof(v127));
              v128 = 0;
              *(_QWORD *)&v127[16] = qvector_reserve(&v127[16], 0, 1, 16);
              *(__m128i *)(*(_QWORD *)&v127[16] + 16 * v128.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_407240);
              sub_606D0(v120, (__int64 *)v127);
              v71 = *(__int64 **)&v127[16];
              *(_QWORD *)&v127[16] = 0;
              v72 = _mm_loadu_si128(&v128);
              v128 = 0;
              if ( v121 )
              {
                *(__m128i *)v111 = v72;
                v122.m128i_i64[0] = 0;
                qfree(v121);
                v73 = _mm_load_si128((const __m128i *)v111);
                v121 = v71;
                v122 = v73;
                if ( *(_QWORD *)&v127[16] )
                {
                  v128.m128i_i64[0] = 0;
                  qfree(*(_QWORD *)&v127[16]);
                }
              }
              else
              {
                v121 = v71;
                v122 = v72;
              }
              qfree(*(_QWORD *)v127);
            }
            goto LABEL_120;
          case 22LL:
            goto LABEL_74;
          case 32LL:
          case 47LL:
            v129[0] = 1;
            v130 = __PAIR64__(a4, v110);
            copy_tinfo_t(&v131, &v114);
            goto LABEL_74;
          default:
            goto LABEL_113;
        }
      }
      if ( (unsigned __int16)v33 <= 0x50u )
      {
        if ( (unsigned __int16)v33 > 0x30u )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case '1':
            case '5':
              *(_QWORD *)v127 = (v110 != 4) + 36LL;
              copy_tinfo_t(&v114, v127);
              clear_tinfo_t(v127);
              v129[0] = 1;
              HIDWORD(v130) = a4;
              LODWORD(v130) = 1;
              *(_QWORD *)v127 = 34;
              copy_tinfo_t(&v131, v127);
              clear_tinfo_t(v127);
              v65 = v132;
              if ( v134 <= 2 )
              {
                v132 = (_BYTE *)qvector_reserve(&v132, v132, 3, 1);
                v65 = v132;
              }
              v133 = 3;
              *v65 = 28274;
              v132[2] = 0;
              v135[0] = 1;
              HIDWORD(v136) = a5;
              LODWORD(v136) = 1;
              *(_QWORD *)v127 = 34;
              copy_tinfo_t(&v137, v127);
              clear_tinfo_t(v127);
              v66 = v138;
              if ( v140 > 3 )
                goto LABEL_124;
              goto LABEL_165;
            case '3':
            case '8':
              v129[0] = 1;
              LODWORD(v130) = 1;
              HIDWORD(v130) = a4;
              *(_QWORD *)v127 = 34;
              copy_tinfo_t(&v131, v127);
              clear_tinfo_t(v127);
              v39 = v132;
              if ( v134 <= 2 )
              {
                v132 = (_BYTE *)qvector_reserve(&v132, v132, 3, 1);
                v39 = v132;
              }
              v133 = 3;
              *v39 = 28274;
              v132[2] = 0;
              v135[0] = 1;
              HIDWORD(v136) = a5;
              LODWORD(v136) = 1;
              *(_QWORD *)v127 = 34;
              copy_tinfo_t(&v137, v127);
              clear_tinfo_t(v127);
              v40 = v138;
              if ( v140 <= 3 )
              {
                v138 = (_BYTE *)qvector_reserve(&v138, v138, 4, 1);
                v40 = v138;
              }
              v139 = 4;
              *(_WORD *)v40 = 25971;
              v40[2] = 108;
              v138[3] = 0;
              v141[0] = 1;
              v143 = a3;
              v142 = v110;
              *(_QWORD *)v127 = (v110 != 4) + 36LL;
              copy_tinfo_t(v144, v127);
              clear_tinfo_t(v127);
              v41 = v145[0];
              if ( v145[2] <= 5u )
              {
                v145[0] = qvector_reserve(v145, v145[0], 6, 1);
                v41 = v145[0];
              }
              v145[1] = 6;
              *(_DWORD *)v41 = 1970037110;
              *(_BYTE *)(v41 + 4) = 101;
              *(_BYTE *)(v145[0] + 5LL) = 0;
              goto LABEL_74;
            case 'P':
              v129[0] = 1;
              LODWORD(v130) = 2;
              HIDWORD(v130) = a3;
              *(_QWORD *)v127 = 35;
              copy_tinfo_t(&v131, v127);
              clear_tinfo_t(v127);
              v74 = v132;
              if ( v134 <= 4 )
              {
                v132 = (_BYTE *)qvector_reserve(&v132, v132, 5, 1);
                v74 = v132;
              }
              v133 = 5;
              *v74 = 1701080931;
              v132[4] = 0;
              if ( a4 != -1 )
              {
                v135[0] = 1;
                HIDWORD(v136) = a4;
                LODWORD(v136) = 2;
                *(_QWORD *)v127 = 35;
                copy_tinfo_t(&v137, v127);
                clear_tinfo_t(v127);
                v75 = v138;
                if ( v140 <= 7 )
                {
                  v138 = (_BYTE *)qvector_reserve(&v138, v138, 8, 1);
                  v75 = v138;
                }
                v139 = 8;
                *v75 = 1667396979;
                *(_DWORD *)((char *)v75 + 3) = 1701080931;
                v138[7] = 0;
              }
              goto LABEL_74;
            default:
              goto LABEL_113;
          }
        }
        goto LABEL_113;
      }
      if ( (_WORD)v33 != 119 )
      {
LABEL_113:
        if ( !under_debugger )
          sub_37E160(0xCCB2u, v16, *(double *)v8.m128i_i64);
        goto LABEL_191;
      }
    }
    v129[0] = 1;
    LODWORD(v130) = 1;
    HIDWORD(v130) = a3;
    *(_QWORD *)v127 = 34;
    copy_tinfo_t(&v131, v127);
    clear_tinfo_t(v127);
    if ( *(_WORD *)(a1 + 48) == 119 )
    {
      v91 = 3;
      v92 = 2;
      v93 = "op";
    }
    else
    {
      v91 = 5;
      v92 = 4;
      v93 = "hint";
    }
    v94 = v132;
    if ( v134 < v91 )
    {
      v132 = (_BYTE *)qvector_reserve(&v132, v132, v91, 1);
      v94 = v132;
    }
    v133 = v91;
    v95 = (__int64)v112;
    v96 = 0;
    do
    {
      v97 = v96++;
      v94[v97] = v93[v97];
    }
    while ( v96 < (unsigned int)v92 );
    v112 = (_BYTE *)v95;
    v132[v92] = 0;
    v98 = *(_QWORD *)(a1 + 800);
    v135[0] = 1;
    v136 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v98 + 112) + 84LL)), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    copy_tinfo_t(&v137, v98 + 232);
    v99 = v137;
    if ( (_BYTE)v137 )
    {
      LOBYTE(v99) = v137 & 0x3F | 0x80;
      v137 = v99;
    }
    v100 = v138;
    if ( v140 <= 4 )
    {
      v138 = (_BYTE *)qvector_reserve(&v138, v138, 5, 1);
      v100 = v138;
    }
    v139 = 5;
    *v100 = 1919181921;
    v138[4] = 0;
  }
LABEL_74:
  v42 = 0;
  v43 = v112;
  do
  {
    if ( !*v43 )
      break;
    ++v42;
    v43 += 80;
  }
  while ( v42 != 8 );
  v44 = (char *)s1;
  v45 = *(_QWORD *)(a1 + 8);
  LOBYTE(v111[0]) = *(_BYTE *)(v113 + 12);
  if ( v119.m128i_i64[0] )
    v44 = s;
  v46 = sub_3308F0(v45, *(_QWORD *)(a1 + 40), (__int64)v44, &v114, v42, (__int64)v112, ((__int64)v111[0] & 0x10) == 0);
  v47 = *(_QWORD *)(v46 + 72);
  v48 = v113;
  v49 = (_QWORD *)v46;
  v50 = *(_DWORD *)(v47 + 280);
  *(_DWORD *)(v47 + 280) = v50 | 4;
  v51 = *(_DWORD *)(v48 + 12);
  if ( (v51 & 2) != 0 )
  {
    *(_DWORD *)(v47 + 280) = v50 | 0xC;
    v51 = *(_DWORD *)(v48 + 12);
  }
  if ( (v51 & 1) == 0 )
    *(_DWORD *)(v47 + 280) |= 0x10u;
  sub_60080((__int64 *)(v47 + 136), v120);
  sub_311F30((__int64 *)(v47 + 152), &v121);
  sub_311F30((__int64 *)(v47 + 216), &v121);
  sub_311F30((__int64 *)(v47 + 216), &v125);
  if ( *(_WORD *)(a1 + 48) == 617 )
    *(_DWORD *)(v47 + 284) = 12;
  v52 = v113;
  v53 = *(_DWORD *)(v113 + 12);
  if ( (v53 & 4) != 0 )
  {
    *((_DWORD *)v49 + 1) |= 0x80000u;
    v53 = *(_DWORD *)(v52 + 12);
  }
  if ( (v53 & 0x10) == 0 && a3 != -1 )
  {
    v58 = _mm_cvtsi32_si128(*((_DWORD *)v49 + 17));
    *(_DWORD *)v127 = 1;
    *(_QWORD *)&v127[4] = _mm_unpacklo_epi32(v58, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v49 = sub_121060((__int64)v49, v127);
    sub_118BA0((__int64)v127);
    v53 = *(_DWORD *)(v113 + 12);
  }
  if ( (v53 & 8) != 0 )
    *((_DWORD *)v49 + 1) |= 0x20000u;
  sub_B1090(*(_QWORD **)(a1 + 16), (__int64)v49);
  v54 = *(_DWORD *)(v113 + 12);
  if ( (v54 & 0x10) == 0 && a3 != -1 )
  {
    if ( (v54 & 0x20) != 0 )
    {
      if ( v110 == 4 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        sub_1D1F50(a1, 0x3Du, 4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, a3 + 4, 0);
    }
    else
    {
      sub_3EE280(a1, v110, a3);
    }
  }
  v34 = 1;
LABEL_48:
  if ( s )
  {
    v119.m128i_i64[0] = 0;
    qfree(s);
  }
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree(v125);
  }
  qfree(v123);
  if ( v121 )
  {
    v122.m128i_i64[0] = 0;
    qfree(v121);
  }
  v35 = &v148;
  qfree(v120[0]);
  clear_tinfo_t(&v114);
  v36 = (__int64)v112;
  while ( 1 )
  {
    cleanup_argloc(v35 + 56);
    v37 = *((_QWORD *)v35 + 4);
    if ( v37 )
    {
      *((_QWORD *)v35 + 5) = 0;
      qfree(v37);
    }
    clear_tinfo_t(v35 + 24);
    sub_118BA0((__int64)v35);
    if ( (char *)v36 == v35 )
      break;
    v35 -= 80;
  }
  return v34;
}
