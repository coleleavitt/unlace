__int64 __fastcall sub_88A620(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r14d
  _QWORD *v16; // rbx
  unsigned int v17; // r12d
  unsigned __int64 *v18; // r15
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdi
  const __m128i *v26; // rbx
  __m128i v27; // xmm0
  __int16 v28; // dx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  char v34; // bl
  unsigned int v35; // r15d
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r11
  unsigned int v41; // ebx
  __int64 v42; // r14
  void *v43; // rax
  __int64 v44; // r12
  char v45; // al
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rdx
  void *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // r13
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  void *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // r15
  __int64 *v64; // r13
  __int64 v65; // rsi
  __int64 *v66; // r13
  __int64 *v67; // r12
  __int64 v68; // rsi
  __int64 *v69; // r15
  __int64 *v70; // r13
  __int64 v71; // rsi
  char v72; // al
  __int64 v73; // rdi
  char v74; // dl
  _BYTE *v75; // rax
  unsigned int v76; // r12d
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 *v82; // rdi
  __int64 *v83; // rbx
  __int64 *v84; // r13
  __int64 v85; // rsi
  void **v87; // rbx
  void **v88; // rbp
  __int64 *v89; // r12
  __int64 *v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rcx
  char v95; // al
  char v96; // bl
  __int64 v97; // rdx
  unsigned __int8 **v98; // rdi
  unsigned __int64 v99; // [rsp+0h] [rbp-268h]
  unsigned int v100; // [rsp+0h] [rbp-268h]
  __int64 v101; // [rsp+0h] [rbp-268h]
  __int64 v102; // [rsp+10h] [rbp-258h]
  unsigned __int64 v103; // [rsp+10h] [rbp-258h]
  unsigned __int64 v104; // [rsp+20h] [rbp-248h]
  unsigned __int64 v105; // [rsp+28h] [rbp-240h]
  __int64 v106; // [rsp+40h] [rbp-228h]
  int v108; // [rsp+50h] [rbp-218h]
  unsigned int v109; // [rsp+54h] [rbp-214h]
  __int64 v111; // [rsp+68h] [rbp-200h]
  unsigned __int64 v112; // [rsp+70h] [rbp-1F8h]
  unsigned int v114; // [rsp+90h] [rbp-1D8h]
  unsigned int v115; // [rsp+90h] [rbp-1D8h]
  unsigned __int8 v116; // [rsp+97h] [rbp-1D1h]
  __int64 v117; // [rsp+98h] [rbp-1D0h]
  void *v118; // [rsp+A0h] [rbp-1C8h]
  __int64 *v119; // [rsp+A8h] [rbp-1C0h]
  void *v120; // [rsp+B0h] [rbp-1B8h] BYREF
  unsigned int v121; // [rsp+B8h] [rbp-1B0h]
  char v122; // [rsp+BCh] [rbp-1ACh]
  void *v123; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 *v124; // [rsp+C8h] [rbp-1A0h]
  void *v125; // [rsp+E0h] [rbp-188h] BYREF
  __int64 *v126; // [rsp+E8h] [rbp-180h]
  void *v127; // [rsp+100h] [rbp-168h] BYREF
  __int64 *v128; // [rsp+108h] [rbp-160h]
  unsigned int v129; // [rsp+120h] [rbp-148h] BYREF
  char v130; // [rsp+124h] [rbp-144h]
  void *v131; // [rsp+160h] [rbp-108h] BYREF
  void *v132; // [rsp+168h] [rbp-100h] BYREF
  __int64 *v133; // [rsp+170h] [rbp-F8h]
  __m128i v134; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+1B0h] [rbp-B8h]
  unsigned int v136; // [rsp+1B8h] [rbp-B0h]
  _QWORD *v137; // [rsp+1C0h] [rbp-A8h]
  __int64 v138; // [rsp+1C8h] [rbp-A0h]
  void *ptr; // [rsp+1D0h] [rbp-98h] BYREF
  __int64 v140; // [rsp+1D8h] [rbp-90h]
  _BYTE v141[64]; // [rsp+1E0h] [rbp-88h] BYREF
  __int16 v142; // [rsp+220h] [rbp-48h]

  v7 = a6;
  v8 = a1;
  v9 = *(_QWORD **)(*a1 + 16);
  if ( (a6 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    v7 = *(_QWORD *)(a2 + 8);
  v10 = sub_6D9A50(v9, v7);
  v111 = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 2 < 2;
    v13 = 0;
    if ( v12 )
      v13 = v11;
    v111 = v13;
  }
  v14 = v8[2];
  v130 &= ~1u;
  v129 = 0;
  if ( *(_DWORD *)v14 == 9 )
  {
    v97 = *(unsigned int *)(v14 + 16);
    if ( *(_DWORD *)(v14 + 20) != (_DWORD)v97 )
      sub_6A63E0((__int64)&v129, *(_QWORD *)(v14 + 8) + 56 * v97);
  }
  v15 = a4;
  v16 = *(_QWORD **)(v111 + 40);
  if ( (*(_BYTE *)(v111 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v16 + 2) <= 0x40u )
      v16 = (_QWORD *)*v16;
    else
      v16 = *(_QWORD **)*v16;
  }
  v17 = (unsigned int)v16;
  if ( (_DWORD)a4 == (_DWORD)v16 || (v109 = (unsigned int)v16, !(unsigned __int8)sub_8255F0(a5)) )
  {
    v18 = &a3[a4];
    if ( v18 != a3 )
    {
      v19 = a3;
      do
      {
        v20 = sub_80F310(*v19);
        if ( (*(_WORD *)v20 & 0x1FF) == 0x43 )
          v15 = v15 + *(_DWORD *)(v20 + 52) - 1;
        ++v19;
      }
      while ( v19 != v18 );
    }
    if ( v17 <= v15 )
      v15 = v17;
    v109 = v15;
  }
  v134.m128i_i8[4] &= ~1u;
  v134.m128i_i32[0] = 0;
  sub_6A3820((__int64)&v134, v109, v17);
  sub_6A01B0(v8[2], (__int64)&v134);
  if ( v134.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v134);
  if ( v129 > 1 )
  {
    v21 = v8[2];
    v22 = *(unsigned int *)(v21 + 16);
    if ( (_DWORD)v22 )
    {
      v23 = 0;
      v24 = 56 * v22;
      do
      {
        v25 = v23 + *(_QWORD *)(v21 + 8);
        v23 += 56;
        sub_6A63E0(v25, (__int64)&v129);
        v21 = v8[2];
      }
      while ( v23 != v24 );
      v22 = *(unsigned int *)(v21 + 16);
    }
    if ( *(_DWORD *)(v21 + 20) != (_DWORD)v22 )
      sub_6A63E0(*(_QWORD *)(v21 + 8) + 56 * v22, (__int64)&v129);
  }
  v26 = (const __m128i *)v8[1];
  v27 = _mm_loadu_si128(v26);
  v135 = v26[1].m128i_i64[0];
  v134 = v27;
  v136 = v26[1].m128i_u32[2];
  v137 = (_QWORD *)v26[2].m128i_i64[0];
  v138 = v26[2].m128i_i64[1];
  ptr = v141;
  v140 = 0x800000000LL;
  if ( v26[3].m128i_i32[2] )
    sub_820650((__int64)&ptr, (__int64)v26[3].m128i_i64);
  v28 = v26[8].m128i_i16[0];
  LOBYTE(v28) = v28 & 3;
  v142 = v28 | v142 & 0xFC;
  if ( (v136 & 1) == 0 )
  {
    if ( (v136 & 2) != 0
      || ((_DWORD)v140 != 1 || (v136 & 4) == 0) && (v136 & 8) != 0 && *((_QWORD **)ptr + (int)((v136 >> 4) - 1)) == v137 )
    {
      v98 = (unsigned __int8 **)sub_A2E240(*v8, a2, 2264, 0);
      if ( v98 )
        sub_823450(v98, 3);
      LOBYTE(v136) = v136 | 1;
      LODWORD(v140) = 0;
    }
    else
    {
      v29 = (unsigned int)v140;
      v30 = (unsigned int)v140 + 1LL;
      if ( HIDWORD(v140) < v30 )
      {
        sub_25D6060(&ptr, v141, v30, 8);
        v29 = (unsigned int)v140;
      }
      *((_QWORD *)ptr + v29) = 0;
      v31 = v140 + 1;
      LODWORD(v140) = v140 + 1;
      v32 = *(_QWORD *)(v111 + 32);
      LOBYTE(v136) = v136 | 8;
      v138 = v32;
      v33 = *(_QWORD **)(v111 + 40);
      if ( (*(_BYTE *)(v111 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v33 + 2) <= 0x40u )
          v33 = (_QWORD *)*v33;
        else
          v33 = *(_QWORD **)*v33;
      }
      v137 = v33;
      v136 = v136 & 0xF | (16 * v31);
    }
  }
  v106 = *(_QWORD *)(v111 + 32);
  v105 = v106 & 0xFFFFFFFFFFFFFFF0LL;
  v34 = sub_B0FF70(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL));
  v121 = sub_6F6DE0(*(_QWORD *)(*v8 + 16), *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v121 > 0x40 )
    sub_2585A50(&v120, 0, 0);
  else
    v120 = nullptr;
  v122 = v34;
  if ( !v109 )
  {
    v76 = 1;
    goto LABEL_117;
  }
  v116 = 1;
  v35 = 0;
  v36 = 0;
  while ( 1 )
  {
LABEL_45:
    v37 = a5;
    if ( v36 < a4 )
      v37 = a3[v36];
    v99 = v36;
    if ( v35 >= v109 )
      goto LABEL_116;
    v102 = v37;
    v38 = sub_80F310(v37);
    v39 = v102;
    v40 = v99;
    if ( (*(_WORD *)v38 & 0x1FF) == 0x43 )
      break;
    v81 = *v8;
    if ( (*(_BYTE *)(v102 + 2) & 2) == 0 )
    {
      v103 = v99;
      v101 = v39;
      v72 = sub_88A010(*(_QWORD *)(v8[2] + 8) + 56LL * v35, v81, &v134, v39, 0);
      v73 = *v8;
      v40 = v103;
      if ( !v72 )
        goto LABEL_110;
      v94 = *(_QWORD *)(v111 + 32);
      BYTE4(v132) = 0;
      LODWORD(v132) = 64;
      v131 = &dword_0 + 1;
      v95 = sub_835AB0(v73, v101, (__int64)&v134, v94, (__int64)&v131);
      v40 = v103;
      v96 = v95;
      if ( (unsigned int)v132 > 0x40 && v131 )
      {
        operator delete[](v131);
        v40 = v103;
      }
      if ( !v96 )
      {
        v73 = *v8;
LABEL_110:
        if ( !*(_DWORD *)(v73 + 48) )
          goto LABEL_140;
        v74 = *(_BYTE *)(v73 + 963);
        v75 = *(_BYTE **)(v73 + 24);
        if ( *(_BYTE *)(v73 + 962) )
        {
          *v75 = 1;
        }
        else
        {
          *v75 |= v74;
          if ( !v74 )
            goto LABEL_140;
        }
        v116 = 0;
      }
LABEL_114:
      ++v35;
      goto LABEL_115;
    }
    **(_BYTE **)(v81 + 24) = 1;
    if ( *(_DWORD *)(v81 + 964) > 2u || *(_BYTE *)(v81 + 962) )
      goto LABEL_114;
    if ( !*(_BYTE *)(v81 + 963) )
      goto LABEL_140;
    ++v35;
LABEL_115:
    v36 = v40 + 1;
    if ( v36 == v109 )
      goto LABEL_116;
  }
  v41 = *(_DWORD *)(v38 + 48);
  v42 = **(_QWORD **)(v38 + 40);
  if ( !*(_DWORD *)(v38 + 52) )
    goto LABEL_115;
  v100 = v35;
  v104 = v38;
  v108 = *(_DWORD *)(v38 + 52);
  v112 = v40;
  do
  {
    if ( ((*(_WORD *)(v42 + 2) >> 6) & 7) == 2 )
    {
      v58 = *(unsigned __int16 *)(v42 + 2LL * v41 + 4LL * *(unsigned int *)(v42 + 4) + 20);
    }
    else
    {
      v57 = *(unsigned int *)(v42 + 4);
      if ( ((*(_WORD *)(v42 + 2) >> 6) & 7) == 4 )
        v58 = *(unsigned int *)(v42 + 4 * (v41 + v57) + 20);
      else
        v58 = *(unsigned __int8 *)(v41 + v42 + 4 * v57 + 20);
    }
    if ( v121 <= 0x40 )
    {
      v43 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v121) & v58);
      if ( !v121 )
        v43 = nullptr;
      v120 = v43;
    }
    else
    {
      *(_QWORD *)v120 = v58;
      memset((char *)v120 + 8, 0, 8 * (unsigned int)(((unsigned __int64)v121 + 63) >> 6) - 8);
    }
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v105 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v45 = *(_BYTE *)(v44 + 16);
    if ( v45 == 13 )
    {
      if ( (((*(_WORD *)(v44 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        goto LABEL_56;
      goto LABEL_79;
    }
    if ( v45 == 46 )
    {
      v62 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v105 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      if ( ((*(_BYTE *)(v62 + 74) & 1) != 0 || *(_QWORD *)(v62 + 128) > 7u) && *(char *)(sub_B14A40(v44) + 76) >= 0 )
        goto LABEL_79;
LABEL_56:
      v46 = *(_QWORD *)(*(_QWORD *)(*v8 + 16) + 2160LL);
      sub_8175F0(v102, v46);
      v48 = sub_2575D00(v102, v46, v47);
      sub_2580BE0(&v131, 0.0);
      sub_257EDC0(&v123, &v131, v48);
      sub_25769A0(&v131);
      v49 = *v8;
      if ( !(unsigned __int8)sub_834DF0(*v8, v102, (__int64)&v120, v106, &v123) )
      {
        sub_5FF3B0((__int64 *)&v123);
        goto LABEL_140;
      }
      v51 = (void *)sub_2575D20(v49, v102, v50);
      if ( v123 == v51 )
        sub_257CF50(&v125, &v123);
      else
        sub_25768A0(&v125, &v123);
      BYTE4(v131) &= ~1u;
      LODWORD(v131) = 0;
      sub_2580BE0(&v127, 0.0);
      sub_257EDC0(&v132, &v127, v48);
      sub_25769A0(&v127);
      LODWORD(v131) = 3;
      if ( v51 == v125 )
        sub_257D000(&v127, &v125, v52, v53);
      else
        sub_2576960(&v127, &v125);
      v56 = v127;
      if ( v51 == v132 )
      {
        v82 = v133;
        if ( v51 == v127 )
        {
          if ( v133 )
          {
            if ( &v133[3 * *(v133 - 1)] == v133 )
            {
              v93 = 0;
            }
            else
            {
              v115 = v41;
              v87 = (void **)v133;
              v119 = v8;
              v88 = (void **)&v133[3 * *(v133 - 1)];
              v117 = v42;
              v118 = v51;
              do
              {
                while ( 1 )
                {
                  v88 -= 3;
                  if ( *v88 == v56 )
                    break;
                  sub_25769A0(v88);
                  if ( v88 == v87 )
                    goto LABEL_163;
                }
                v89 = (__int64 *)v88[1];
                if ( v89 )
                {
                  v90 = &v89[3 * *(v89 - 1)];
                  if ( v89 == v90 )
                  {
                    v91 = 0;
                  }
                  else
                  {
                    do
                    {
                      v90 -= 3;
                      sub_5FF3B0(v90);
                    }
                    while ( v89 != v90 );
                    v91 = 24 * *(v89 - 1);
                  }
                  operator delete[](v89 - 1, v91 + 8);
                }
                v88[1] = nullptr;
              }
              while ( v88 != v87 );
LABEL_163:
              v82 = (__int64 *)v87;
              v42 = v117;
              v51 = v118;
              v92 = (__int64)*(v87 - 1);
              v41 = v115;
              v8 = v119;
              v93 = 24 * v92;
            }
            operator delete[](v82 - 1, v93 + 8);
          }
          v133 = nullptr;
          sub_257D000(&v132, &v127, v54, v55);
          goto LABEL_64;
        }
        if ( !v133 )
          goto LABEL_121;
        if ( &v133[3 * *(v133 - 1)] == v133 )
        {
          v85 = 0;
        }
        else
        {
          v114 = v41;
          v83 = &v133[3 * *(v133 - 1)];
          v84 = v133;
          do
          {
            v83 -= 3;
            sub_5FF3B0(v83);
          }
          while ( v83 != v84 );
          v41 = v114;
          v82 = v84;
          v85 = 24 * *(v84 - 1);
        }
        operator delete[](v82 - 1, v85 + 8);
        v133 = nullptr;
        if ( v51 != v127 )
          goto LABEL_121;
      }
      else
      {
        if ( v51 != v127 )
        {
          sub_2576350(&v132, &v127, v54, v55);
LABEL_64:
          if ( v51 == v127 )
          {
            v63 = v128;
            if ( v128 )
            {
              v64 = &v128[3 * *(v128 - 1)];
              if ( v128 == v64 )
              {
                v65 = 0;
              }
              else
              {
                do
                {
                  v64 -= 3;
                  sub_5FF3B0(v64);
                }
                while ( v63 != v64 );
                v65 = 24 * *(v63 - 1);
              }
              operator delete[](v63 - 1, v65 + 8);
            }
          }
          else
          {
            sub_25769A0(&v127);
          }
          sub_6A01B0(*(_QWORD *)(v8[2] + 8) + 56LL * v100, (__int64)&v131);
          if ( (unsigned int)v131 > 1 )
            sub_69F740((__int64)&v131);
          if ( v51 == v125 )
          {
            v69 = v126;
            if ( v126 )
            {
              v70 = &v126[3 * *(v126 - 1)];
              if ( v126 == v70 )
              {
                v71 = 0;
              }
              else
              {
                do
                {
                  v70 -= 3;
                  sub_5FF3B0(v70);
                }
                while ( v69 != v70 );
                v71 = 24 * *(v69 - 1);
              }
              operator delete[](v69 - 1, v71 + 8);
            }
          }
          else
          {
            sub_25769A0(&v125);
          }
          if ( v51 == v123 )
          {
            v66 = v124;
            if ( v124 )
            {
              v67 = &v124[3 * *(v124 - 1)];
              if ( v124 == v67 )
              {
                v68 = 0;
              }
              else
              {
                do
                {
                  v67 -= 3;
                  sub_5FF3B0(v67);
                }
                while ( v66 != v67 );
                v68 = 24 * *(v66 - 1);
              }
              operator delete[](v66 - 1, v68 + 8);
            }
          }
          else
          {
            sub_25769A0(&v123);
          }
          goto LABEL_72;
        }
        sub_25769A0(&v132);
        if ( v51 != v127 )
        {
LABEL_121:
          sub_2576960(&v132, &v127);
          goto LABEL_64;
        }
      }
      sub_257D000(&v132, &v127, v79, v80);
      goto LABEL_64;
    }
    if ( v45 != 10 )
      goto LABEL_56;
LABEL_79:
    v59 = v121;
    LODWORD(v128) = v121;
    if ( v121 > 0x40 )
    {
      sub_2585B30(&v127);
      v59 = (unsigned int)v128;
      v60 = v127;
    }
    else
    {
      v60 = v120;
      v127 = v120;
    }
    v132 = v60;
    v61 = v8[2];
    LODWORD(v133) = v59;
    BYTE4(v128) = v122;
    BYTE4(v133) = v122;
    BYTE4(v131) &= ~1u;
    LODWORD(v131) = 2;
    LODWORD(v128) = 0;
    sub_6A01B0(*(_QWORD *)(v61 + 8) + 56LL * v100, (__int64)&v131);
    if ( (unsigned int)v131 > 1 )
      sub_69F740((__int64)&v131);
    if ( (unsigned int)v128 > 0x40 && v127 )
      operator delete[](v127);
LABEL_72:
    ++v41;
    ++v100;
  }
  while ( *(_DWORD *)(v104 + 48) + v108 != v41 );
  v35 = v100;
  v36 = v112 + 1;
  if ( v112 + 1 != v109 )
    goto LABEL_45;
LABEL_116:
  v76 = v116;
LABEL_117:
  v77 = v8[2];
  v78 = *(unsigned int *)(v77 + 16);
  if ( (_DWORD)v78 != *(_DWORD *)(v77 + 20)
    && !(unsigned __int8)sub_88A010(*(_QWORD *)(v77 + 8) + 56 * v78, *v8, &v134, a5, 0) )
  {
LABEL_140:
    v76 = 0;
  }
  if ( v121 > 0x40 && v120 )
    operator delete[](v120);
  if ( ptr != v141 )
    free(ptr);
  if ( v129 > 1 )
    sub_69F740((__int64)&v129);
  return v76;
}

