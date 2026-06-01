__int64 __fastcall sub_136A650(__m128i **a1, __int64 a2, __int64 a3, __m128i **a4, __int64 a5, _QWORD *a6)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __m128i **v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  char v20; // al
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // r15
  char *v34; // r12
  _WORD *v35; // rax
  __int64 v36; // rdx
  _BYTE *v37; // rsi
  __int64 v38; // rdx
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 *v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  char v44; // al
  _QWORD *v45; // rbp
  _QWORD *v46; // rbx
  __int64 v47; // r12
  unsigned __int8 *v48; // rbp
  __int64 v49; // r13
  __m128i *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 *v54; // r8
  __int64 v55; // r9
  __m128i *v56; // rbp
  unsigned __int8 *v57; // rbx
  unsigned __int64 v58; // rsi
  __int64 v59; // rax
  int v60; // r14d
  __int64 v61; // rax
  char *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  char *v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rax
  char *v72; // r13
  __int64 v73; // rdx
  __int64 v74; // rdx
  unsigned __int64 v75; // rsi
  __m128i *v76; // rcx
  __m128i *v77; // rax
  __m128i *v78; // rdx
  __int64 v79; // rdx
  int v80; // eax
  unsigned __int8 *v81; // r13
  __int64 v82; // rbp
  unsigned __int8 *v83; // rbx
  unsigned __int64 v84; // rax
  unsigned __int8 *v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r14
  __int64 v90; // rbx
  void *v91; // rdi
  __m128i *v92; // r13
  __m128i **v93; // [rsp+0h] [rbp-618h]
  __int64 v94; // [rsp+0h] [rbp-618h]
  __int64 v95; // [rsp+0h] [rbp-618h]
  __int64 v96; // [rsp+0h] [rbp-618h]
  __int64 v97; // [rsp+0h] [rbp-618h]
  __int64 v99; // [rsp+8h] [rbp-610h]
  __m128i v101; // [rsp+30h] [rbp-5E8h] BYREF
  __int64 v102; // [rsp+40h] [rbp-5D8h]
  __int64 v103; // [rsp+48h] [rbp-5D0h]
  void **p_ptr; // [rsp+50h] [rbp-5C8h]
  char *v105; // [rsp+58h] [rbp-5C0h]
  __int64 v106; // [rsp+60h] [rbp-5B8h]
  _QWORD *v107; // [rsp+68h] [rbp-5B0h]
  _QWORD *v108; // [rsp+70h] [rbp-5A8h]
  char *v109; // [rsp+78h] [rbp-5A0h]
  _QWORD v110[2]; // [rsp+80h] [rbp-598h] BYREF
  char v111[8]; // [rsp+90h] [rbp-588h] BYREF
  _QWORD *v112; // [rsp+98h] [rbp-580h]
  volatile signed __int32 *v113; // [rsp+A0h] [rbp-578h]
  _QWORD v114[4]; // [rsp+B0h] [rbp-568h] BYREF
  __int16 v115; // [rsp+D0h] [rbp-548h]
  char v116[32]; // [rsp+E0h] [rbp-538h] BYREF
  __int16 v117; // [rsp+100h] [rbp-518h]
  void *v118[2]; // [rsp+110h] [rbp-508h] BYREF
  _WORD v119[16]; // [rsp+120h] [rbp-4F8h] BYREF
  void *v120[2]; // [rsp+140h] [rbp-4D8h] BYREF
  _BYTE v121[16]; // [rsp+150h] [rbp-4C8h] BYREF
  __int64 v122; // [rsp+160h] [rbp-4B8h]
  _BYTE v123[16]; // [rsp+170h] [rbp-4A8h] BYREF
  __m128i v124[2]; // [rsp+180h] [rbp-498h] BYREF
  void *v125; // [rsp+1A0h] [rbp-478h]
  __int64 v126; // [rsp+1A8h] [rbp-470h]
  __m128i v127; // [rsp+1B0h] [rbp-468h] BYREF
  void *src; // [rsp+1C0h] [rbp-458h]
  size_t n; // [rsp+1C8h] [rbp-450h]
  __m128i v130; // [rsp+1D0h] [rbp-448h] BYREF
  unsigned __int64 v131; // [rsp+1E0h] [rbp-438h]
  char v132; // [rsp+1E8h] [rbp-430h]
  void *v133; // [rsp+1F0h] [rbp-428h]
  __int64 v134; // [rsp+1F8h] [rbp-420h]
  __m128i v135; // [rsp+200h] [rbp-418h] BYREF
  void *v136; // [rsp+210h] [rbp-408h]
  size_t v137; // [rsp+218h] [rbp-400h]
  __m128i v138; // [rsp+220h] [rbp-3F8h] BYREF
  unsigned __int64 v139; // [rsp+230h] [rbp-3E8h]
  char v140; // [rsp+238h] [rbp-3E0h]
  void *ptr; // [rsp+240h] [rbp-3D8h] BYREF
  __int64 v142; // [rsp+248h] [rbp-3D0h]
  __int64 v143; // [rsp+250h] [rbp-3C8h]
  __int64 v144; // [rsp+258h] [rbp-3C0h] BYREF
  char *s; // [rsp+2E0h] [rbp-338h] BYREF
  __m128i v146; // [rsp+2E8h] [rbp-330h]
  __int64 v147; // [rsp+2F8h] [rbp-320h] BYREF
  void *v148; // [rsp+380h] [rbp-298h] BYREF
  __int64 v149; // [rsp+388h] [rbp-290h]
  char v150; // [rsp+390h] [rbp-288h] BYREF
  char v151; // [rsp+391h] [rbp-287h]
  __int16 v152; // [rsp+3A0h] [rbp-278h]
  __m128i *v153; // [rsp+490h] [rbp-188h] BYREF
  __int64 v154; // [rsp+498h] [rbp-180h] BYREF
  __m128i v155; // [rsp+4A0h] [rbp-178h] BYREF
  __m128i *v156; // [rsp+4B0h] [rbp-168h] BYREF
  size_t v157; // [rsp+4B8h] [rbp-160h]
  __m128i v158; // [rsp+4C0h] [rbp-158h] BYREF
  unsigned __int64 v159; // [rsp+4D0h] [rbp-148h]

  v93 = a4;
  if ( (*(_BYTE *)(a5 + 904) & 4) == 0 )
    goto LABEL_2;
  v7 = a5;
  v8 = (__int64)a1;
  a1 = a4;
  sub_1401A10(a4, a5, 0, 0);
  if ( *(_DWORD *)(v7 + 712) )
  {
    v47 = *(_QWORD *)(v7 + 704);
    sub_FC70B0((__int64)&v153, a3, *(_DWORD *)(v47 + 4), 36);
    v48 = (unsigned __int8 *)v153;
    v49 = *(unsigned __int8 *)(v47 + 40);
    if ( !v153 )
    {
      v79 = v154;
      v80 = *(_DWORD *)(v154 + 14976);
      if ( v80 )
      {
        v87 = (unsigned int)(v80 - 1);
        *(_DWORD *)(v154 + 14976) = v87;
        v48 = *(unsigned __int8 **)(v79 + 8 * v87 + 14848);
        v88 = *((unsigned int *)v48 + 134);
        *v48 = 0;
        v89 = *((_QWORD *)v48 + 66);
        *((_DWORD *)v48 + 106) = 0;
        v90 = v89 + (v88 << 6);
        while ( v89 != v90 )
        {
          while ( 1 )
          {
            v90 -= 64;
            v91 = *(void **)(v90 + 24);
            if ( v91 == (void *)(v90 + 40) )
              break;
            operator delete(v91);
            if ( v89 == v90 )
              goto LABEL_112;
          }
        }
LABEL_112:
        *((_DWORD *)v48 + 134) = 0;
      }
      else
      {
        v48 = (unsigned __int8 *)operator new(0x3A0u);
        *v48 = 0;
        *((_QWORD *)v48 + 12) = v48 + 112;
        *((_QWORD *)v48 + 16) = v48 + 144;
        *((_QWORD *)v48 + 20) = v48 + 176;
        *((_QWORD *)v48 + 24) = v48 + 208;
        *((_QWORD *)v48 + 28) = v48 + 240;
        *((_QWORD *)v48 + 32) = v48 + 272;
        *((_QWORD *)v48 + 36) = v48 + 304;
        *((_QWORD *)v48 + 40) = v48 + 336;
        *((_QWORD *)v48 + 44) = v48 + 368;
        *((_QWORD *)v48 + 48) = v48 + 400;
        *((_QWORD *)v48 + 52) = v48 + 432;
        *((_QWORD *)v48 + 13) = 0;
        v48[112] = 0;
        *((_QWORD *)v48 + 17) = 0;
        v48[144] = 0;
        *((_QWORD *)v48 + 21) = 0;
        v48[176] = 0;
        *((_QWORD *)v48 + 25) = 0;
        v48[208] = 0;
        *((_QWORD *)v48 + 29) = 0;
        v48[240] = 0;
        *((_QWORD *)v48 + 33) = 0;
        v48[272] = 0;
        *((_QWORD *)v48 + 37) = 0;
        v48[304] = 0;
        *((_QWORD *)v48 + 41) = 0;
        v48[336] = 0;
        *((_QWORD *)v48 + 45) = 0;
        v48[368] = 0;
        *((_QWORD *)v48 + 49) = 0;
        v48[400] = 0;
        *((_QWORD *)v48 + 53) = 0x800000000LL;
        *((_QWORD *)v48 + 66) = v48 + 544;
        *((_QWORD *)v48 + 67) = 0x600000000LL;
      }
      v153 = (__m128i *)v48;
    }
    v48[*v48 + 1] = 2;
    v50 = v153;
    v51 = v153->m128i_u8[0];
    v153->m128i_i8[0] = v51 + 1;
    v50[1].m128i_i64[v51] = v49;
    sub_AEC220((unsigned __int8 **)&v153, *(_BYTE **)(v47 + 8), *(_QWORD *)(v47 + 16));
    a1 = &v153;
    sub_AEA040((__int64)&v153);
    goto LABEL_2;
  }
  v153 = (__m128i *)0x200000000LL;
  v12 = &v153;
  do
  {
    v13 = v7 + 4LL * *(int *)v12;
    v14 = 9LL * *(unsigned int *)(v13 + 420);
    v15 = 9LL * *(unsigned int *)(v13 + 424);
    v16 = 8 * v14;
    v17 = v16 + *(_QWORD *)(v7 + 448);
    v18 = *(_QWORD *)(v7 + 448) + 8 * v15;
    while ( v18 != v17 )
    {
      v19 = *(_QWORD *)(v17 + 64);
      v17 += 72;
      sub_FF6C00(v7, v19, v16, v15, v10, v11);
      a1 = *(__m128i ***)(v17 - 40);
      sub_1365800(a1, *(_QWORD *)(v17 - 32), a6, v8, *(char *)(v7 + 904) < 0);
    }
    v12 = (__m128i **)((char *)v12 + 4);
  }
  while ( v12 != (__m128i **)&v154 );
  v20 = *(_BYTE *)(v7 + 96);
  if ( v20 == 1 )
  {
    v37 = *(_BYTE **)(v7 + 128);
    v38 = (__int64)&v37[*(_QWORD *)(v7 + 136)];
    v153 = &v155;
    sub_1365180(&v153, v37, v38);
    v39 = *(_BYTE **)(v7 + 160);
    v40 = *(_QWORD *)(v7 + 168);
    v156 = &v158;
    sub_1365180(&v156, v39, (__int64)&v39[v40]);
    v159 = *(_QWORD *)(v7 + 88);
    v125 = &v127;
    if ( v153 == &v155 )
    {
      v127 = _mm_load_si128(&v155);
    }
    else
    {
      v125 = v153;
      v127.m128i_i64[0] = v155.m128i_i64[0];
    }
    v43 = v154;
    v154 = 0;
    v155.m128i_i8[0] = 0;
    v126 = v43;
    v153 = &v155;
    src = &v130;
    if ( v156 == &v158 )
    {
      v130 = _mm_load_si128(&v158);
    }
    else
    {
      src = v156;
      v130.m128i_i64[0] = v158.m128i_i64[0];
    }
    a1 = (__m128i **)v7;
    v132 = 1;
    n = v157;
    v131 = v159;
    sub_FF6C00(v7, v159, (__int64)&v158, (__int64)&v153, v41, v42);
    if ( *(_QWORD *)(v7 + 40) )
    {
      a1 = (__m128i **)src;
      sub_1365800(src, n, a6, v8, *(char *)(v7 + 904) < 0);
      v44 = v132;
      goto LABEL_32;
    }
LABEL_55:
    v44 = v132;
LABEL_32:
    if ( v44 )
    {
      if ( src != &v130 )
        operator delete(src);
      a1 = (__m128i **)v125;
      if ( v125 != &v127 )
        operator delete(v125);
    }
    goto LABEL_37;
  }
  v132 = 0;
  if ( v20 == 2 )
  {
    v21 = *(_BYTE **)(v7 + 128);
    v22 = (__int64)&v21[*(_QWORD *)(v7 + 136)];
    v153 = &v155;
    sub_1365180(&v153, v21, v22);
    v23 = *(_BYTE **)(v7 + 160);
    v24 = *(_QWORD *)(v7 + 168);
    v156 = &v158;
    sub_1365180(&v156, v23, (__int64)&v23[v24]);
    v159 = *(_QWORD *)(v7 + 88);
    v133 = &v135;
    if ( v153 == &v155 )
    {
      v135 = _mm_load_si128(&v155);
    }
    else
    {
      v133 = v153;
      v135.m128i_i64[0] = v155.m128i_i64[0];
    }
    v25 = v154;
    v154 = 0;
    v155.m128i_i8[0] = 0;
    v134 = v25;
    v153 = &v155;
    v136 = &v138;
    if ( v156 == &v158 )
    {
      v138 = _mm_load_si128(&v158);
    }
    else
    {
      v136 = v156;
      v138.m128i_i64[0] = v158.m128i_i64[0];
    }
    v140 = 1;
    LODWORD(v110[0]) = 0;
    v139 = v159;
    v26 = (unsigned __int8 *)(v159 + 32);
    v137 = v157;
    v110[1] = std::_V2::system_category((std::_V2 *)&v156);
    ptr = &v144;
    v142 = 0;
    v143 = 128;
    v27 = *((_QWORD *)v26 - 4);
    v153 = (__m128i *)v26;
    p_ptr = &ptr;
    v154 = v27;
    LOWORD(v156) = 261;
    sub_228FF50(&v153, &ptr, 0);
    v152 = 261;
    v28 = *(_QWORD *)(a2 + 8);
    v153 = &v155;
    v154 = 0x800000000LL;
    v148 = ptr;
    v149 = v142;
    sub_2261190(v111, v28, &v148, v110);
    v32 = v112;
    if ( v112 )
    {
      v31 = LODWORD(v110[0]);
      if ( !LODWORD(v110[0]) )
      {
        v106 = v8;
        v33 = v110;
        v107 = a6;
        v34 = v111;
        v105 = (char *)&v147;
        v102 = v7;
        while ( 1 )
        {
          v35 = (_WORD *)sub_228AB90(
                           *(_QWORD *)(*(_QWORD *)(v32[1] - 16LL) + 8LL),
                           *(_QWORD *)(*(_QWORD *)(v32[1] - 16LL) + 16LL),
                           0);
          v151 = 0;
          v148 = v35;
          v149 = v36;
          LOBYTE(s) = 1;
          if ( v36 == 2 && *v35 == 26670 )
          {
            v150 = 1;
          }
          else
          {
            if ( !(unsigned __int8)sub_B7E0A0((__int64)&v148, (char *)&s, ".H", 2)
              && !(unsigned __int8)sub_B7E0A0((__int64)&v148, (char *)&s, ".hh", 3) )
            {
              sub_B7E0A0((__int64)&v148, (char *)&s, ".hpp", 4);
            }
            if ( !v151 )
              goto LABEL_19;
          }
          if ( v150 )
          {
            v59 = sub_12ED8B0(
                    a2,
                    *(const void **)(*(_QWORD *)(v112[1] - 16LL) + 8LL),
                    *(_QWORD *)(*(_QWORD *)(v112[1] - 16LL) + 16LL),
                    0,
                    1u);
            v103 = v59;
            if ( v59 )
            {
              if ( !(unsigned __int8)sub_1403150(v93, v59, v102) )
              {
                v60 = 0;
                v149 = 0x1000000000LL;
                v148 = &v150;
                v61 = *(_QWORD *)(v112[1] - 16LL);
                v62 = *(char **)(v61 + 8);
                sub_2289790(v123, v62, *(_QWORD *)(v61 + 16), 0);
                if ( (unsigned int)((__int64)(v112[1] - *v112) >> 4) )
                {
                  do
                  {
                    v63 = (unsigned int)v149;
                    v64 = HIDWORD(v149);
                    si128 = _mm_load_si128(v124);
                    v66 = (unsigned int)v149 + 1LL;
                    if ( v66 > HIDWORD(v149) )
                    {
                      v62 = &v150;
                      v101 = si128;
                      sub_2237220(&v148, &v150, v66, 16);
                      v63 = (unsigned int)v149;
                      si128 = _mm_load_si128(&v101);
                    }
                    ++v60;
                    *((__m128i *)v148 + v63) = si128;
                    LODWORD(v149) = v149 + 1;
                    sub_2289610(v123, v62, v66, v64);
                  }
                  while ( v60 != (unsigned int)((__int64)(v112[1] - *v112) >> 4) );
                }
                s = v105;
                v146 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                sub_A1FE50(&s, v136, (_BYTE *)v136 + v137);
                v67 = 16LL * (unsigned int)v149;
                v101.m128i_i64[0] = (__int64)v148;
                if ( v148 != (char *)v148 + v67 )
                {
                  v108 = v33;
                  v109 = v34;
                  v68 = (char *)v148 + v67;
                  do
                  {
                    LOWORD(v122) = 257;
                    v69 = *((_QWORD *)v68 - 2);
                    v68 -= 16;
                    v119[8] = 257;
                    v114[0] = v69;
                    v70 = *((_QWORD *)v68 + 1);
                    v117 = 257;
                    v115 = 261;
                    v114[1] = v70;
                    sub_228A3B0(&s, v114, v116, v118, v120);
                  }
                  while ( (char *)v101.m128i_i64[0] != v68 );
                  v33 = v108;
                  v34 = v109;
                }
                v71 = v146.m128i_i64[0];
                if ( (unsigned __int64)(v146.m128i_i64[0] + 1) > v146.m128i_i64[1] )
                {
                  sub_2236E10(&s, v105, v146.m128i_i64[0] + 1, 1);
                  v71 = v146.m128i_i64[0];
                }
                s[v71] = 0;
                v72 = s;
                v73 = -1;
                v118[0] = v119;
                if ( s )
                  v73 = (__int64)&v72[j__strlen(s)];
                sub_13650C0(v118, v72, v73);
                v120[0] = v121;
                sub_1365180(v120, (_BYTE *)v118[0], (__int64)v118[0] + (unsigned __int64)v118[1]);
                v74 = (unsigned int)v154;
                v122 = v103;
                v75 = (unsigned int)v154 + 1LL;
                if ( v75 > HIDWORD(v154) )
                {
                  v92 = v153;
                  if ( v153 > (__m128i *)v120 || v120 >= (void **)v153 + 5 * (unsigned int)v154 )
                  {
                    sub_1369E40((__int64)&v153, v75);
                    v74 = (unsigned int)v154;
                    v77 = (__m128i *)v120;
                    v76 = v153;
                  }
                  else
                  {
                    sub_1369E40((__int64)&v153, v75);
                    v76 = v153;
                    v74 = (unsigned int)v154;
                    v77 = (__m128i *)((char *)v153 + (char *)v120 - (char *)v92);
                  }
                }
                else
                {
                  v76 = v153;
                  v77 = (__m128i *)v120;
                }
                v78 = (__m128i *)((char *)v76 + 40 * v74);
                v78->m128i_i64[0] = (__int64)v78[1].m128i_i64;
                if ( (__m128i *)v77->m128i_i64[0] == &v77[1] )
                {
                  v78[1] = _mm_loadu_si128(v77 + 1);
                }
                else
                {
                  v78->m128i_i64[0] = v77->m128i_i64[0];
                  v78[1].m128i_i64[0] = v77[1].m128i_i64[0];
                }
                v78->m128i_i64[1] = v77->m128i_i64[1];
                v77->m128i_i64[0] = (__int64)v77[1].m128i_i64;
                v77->m128i_i64[1] = 0;
                v77[1].m128i_i8[0] = 0;
                v78[2].m128i_i64[0] = v77[2].m128i_i64[0];
                LODWORD(v154) = v154 + 1;
                if ( v120[0] != v121 )
                  operator delete(v120[0]);
                if ( v118[0] != v119 )
                  operator delete(v118[0]);
                if ( s != v105 )
                  free(s);
                if ( v148 != &v150 )
                  free(v148);
              }
            }
          }
LABEL_19:
          sub_2260F50(v34, v33);
          v32 = v112;
          if ( v112 )
          {
            v30 = LODWORD(v110[0]);
            if ( !LODWORD(v110[0]) )
              continue;
          }
          v8 = v106;
          v7 = v102;
          a6 = v107;
          break;
        }
      }
    }
    if ( v113 )
      sub_4343A0(v113);
    if ( LODWORD(v110[0]) )
    {
      v99 = v110[0];
      sub_13659B0((__int64)&v153);
      result = v99;
      if ( ptr != p_ptr + 3 )
      {
        free(ptr);
        result = v99;
      }
      if ( v140 )
      {
        if ( v136 != &v138 )
        {
          v96 = result;
          operator delete(v136);
          result = v96;
        }
        if ( v133 != &v135 )
        {
          v97 = result;
          operator delete(v133);
          result = v97;
        }
      }
      if ( v132 )
      {
        if ( src != &v130 )
        {
          v94 = result;
          operator delete(src);
          result = v94;
        }
        if ( v125 != &v127 )
        {
          v95 = result;
          operator delete(v125);
          return v95;
        }
      }
      return result;
    }
    v81 = (unsigned __int8 *)v153;
    v82 = 40LL * (unsigned int)v154;
    v83 = &v153->m128i_u8[v82];
    if ( v153 != (__m128i *)&v153->m128i_i8[v82] )
    {
      _BitScanReverse64(&v84, 0xCCCCCCCCCCCCCCCDLL * (v82 >> 3));
      sub_136A200(
        v153,
        (__int64)&v153->m128i_i64[(unsigned __int64)v82 / 8],
        2LL * (int)(63 - (v84 ^ 0x3F)),
        v29,
        v30,
        v31,
        (char)v93);
      if ( (unsigned __int64)v82 <= 0x280 )
      {
        sub_1366240((__int64)v81, (__int64)v83);
      }
      else
      {
        v85 = v81 + 640;
        sub_1366240((__int64)v81, (__int64)(v81 + 640));
        if ( v83 != v81 + 640 )
        {
          do
          {
            v86 = (__int64)v85;
            v85 += 40;
            sub_13660E0(v86);
          }
          while ( v83 != v85 );
        }
      }
      v56 = v153;
      v57 = (unsigned __int8 *)v153 + 40 * (unsigned int)v154;
      if ( v153 != (__m128i *)v57 )
      {
        do
        {
          v58 = v56[2].m128i_u64[0];
          v56 = (__m128i *)((char *)v56 + 40);
          sub_FF6C00(v7, v58, v52, v53, v54, v55);
          sub_1365800((void *)v56[-3].m128i_i64[1], v56[-2].m128i_u64[0], a6, v8, *(char *)(v7 + 904) < 0);
        }
        while ( v57 != (unsigned __int8 *)v56 );
      }
    }
    sub_13659B0((__int64)&v153);
    a1 = (__m128i **)ptr;
    if ( ptr != p_ptr + 3 )
      free(ptr);
    if ( v140 )
    {
      if ( v136 != &v138 )
        operator delete(v136);
      a1 = (__m128i **)v133;
      if ( v133 != &v135 )
        operator delete(v133);
    }
    goto LABEL_55;
  }
LABEL_37:
  if ( *(_QWORD *)(v7 + 264) == *(_QWORD *)(v7 + 256) )
  {
LABEL_2:
    std::_V2::system_category((std::_V2 *)a1);
    return 0;
  }
  v45 = *(_QWORD **)(v7 + 264);
  v46 = *(_QWORD **)(v7 + 256);
  while ( 1 )
  {
    a1 = (__m128i **)v8;
    result = sub_136A650(v8, a2, a3, v93, *v46, a6);
    if ( (_DWORD)result )
      return result;
    if ( v45 == ++v46 )
      goto LABEL_2;
  }
}
