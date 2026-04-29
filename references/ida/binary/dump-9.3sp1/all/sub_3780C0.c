__int64 __fastcall sub_3780C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rbp
  signed int v10; // r12d
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int *v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // rdx
  size_t v24; // r15
  __int64 v25; // rcx
  size_t v26; // r15
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdx
  int v30; // r15d
  int *v31; // rcx
  int *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbp
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r14
  const char *v43; // r12
  const char *v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rbp
  unsigned __int64 v47; // rdx
  unsigned int v48; // r13d
  int v49; // r14d
  __int64 v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // rdx
  char v53; // cl
  unsigned int v54; // eax
  int v55; // eax
  bool v56; // al
  bool v57; // r15
  char v58; // r9
  char v59; // al
  __int64 v60; // rdi
  char v61; // r12
  int v62; // eax
  __int64 v63; // r12
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r15
  int v67; // edx
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rbp
  __int64 v70; // r14
  _QWORD *v71; // r12
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // r12
  int v78; // eax
  int v79; // edx
  int v80; // edx
  int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rsi
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  void *v86; // rax
  int v87; // edx
  unsigned int v88; // [rsp+4h] [rbp-31Ch]
  int v89; // [rsp+4h] [rbp-31Ch]
  __int64 *v90; // [rsp+8h] [rbp-318h]
  char v91; // [rsp+8h] [rbp-318h]
  char v92; // [rsp+8h] [rbp-318h]
  signed int tinfo_size; // [rsp+10h] [rbp-310h]
  int v94; // [rsp+14h] [rbp-30Ch]
  unsigned int v95; // [rsp+18h] [rbp-308h]
  int v96; // [rsp+1Ch] [rbp-304h]
  unsigned __int64 v97; // [rsp+28h] [rbp-2F8h]
  __int64 v98; // [rsp+30h] [rbp-2F0h]
  __int64 v99; // [rsp+30h] [rbp-2F0h]
  __int64 v100; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v101; // [rsp+38h] [rbp-2E8h]
  char v103; // [rsp+46h] [rbp-2DAh]
  unsigned __int8 tinfo_details; // [rsp+47h] [rbp-2D9h]
  int v105; // [rsp+64h] [rbp-2BCh] BYREF
  int v106; // [rsp+68h] [rbp-2B8h] BYREF
  signed __int64 v107; // [rsp+70h] [rbp-2B0h]
  __int64 v108; // [rsp+78h] [rbp-2A8h] BYREF
  __int128 v109; // [rsp+80h] [rbp-2A0h]
  __int64 v110; // [rsp+90h] [rbp-290h]
  __int64 v111; // [rsp+98h] [rbp-288h]
  __int64 v112; // [rsp+A0h] [rbp-280h]
  __int128 v113; // [rsp+A8h] [rbp-278h]
  __int64 v114; // [rsp+B8h] [rbp-268h]
  __m128i v115; // [rsp+C0h] [rbp-260h] BYREF
  char v116; // [rsp+D0h] [rbp-250h]
  __int64 v117; // [rsp+D8h] [rbp-248h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-240h]
  __int64 v119; // [rsp+F0h] [rbp-230h]
  void *v120; // [rsp+F8h] [rbp-228h]
  size_t v121[2]; // [rsp+100h] [rbp-220h]
  void *src; // [rsp+110h] [rbp-210h]
  size_t n[2]; // [rsp+118h] [rbp-208h]
  __int64 v124; // [rsp+128h] [rbp-1F8h]
  unsigned __int64 v125; // [rsp+130h] [rbp-1F0h]
  __int64 v126; // [rsp+138h] [rbp-1E8h]
  __int64 tinfo_property; // [rsp+148h] [rbp-1D8h] BYREF
  unsigned __int64 v128; // [rsp+150h] [rbp-1D0h]
  __int64 v129; // [rsp+158h] [rbp-1C8h]
  int v130; // [rsp+160h] [rbp-1C0h]
  __int64 v131; // [rsp+168h] [rbp-1B8h]
  __int128 v132; // [rsp+170h] [rbp-1B0h]
  void *v133; // [rsp+180h] [rbp-1A0h]
  __int128 v134; // [rsp+188h] [rbp-198h]
  __int64 v135; // [rsp+198h] [rbp-188h]
  unsigned __int64 v136; // [rsp+1A0h] [rbp-180h]
  __int64 v137; // [rsp+1A8h] [rbp-178h]
  __int64 v138; // [rsp+1B8h] [rbp-168h] BYREF
  __int64 v139; // [rsp+1C0h] [rbp-160h]
  __int64 v140; // [rsp+1C8h] [rbp-158h]
  __int64 v141; // [rsp+1D8h] [rbp-148h]
  __int64 v142; // [rsp+1E0h] [rbp-140h]
  __int64 v143; // [rsp+210h] [rbp-110h]
  __int64 v144; // [rsp+218h] [rbp-108h]
  __int64 v145; // [rsp+228h] [rbp-F8h]
  __int64 v146; // [rsp+230h] [rbp-F0h]
  __int64 v147[7]; // [rsp+240h] [rbp-E0h] BYREF
  __int128 v148; // [rsp+278h] [rbp-A8h]
  __int64 v149; // [rsp+288h] [rbp-98h]
  __int128 v150; // [rsp+290h] [rbp-90h]
  __int64 v151; // [rsp+2A0h] [rbp-80h]
  __int128 v152; // [rsp+2A8h] [rbp-78h]
  __int64 v153; // [rsp+2B8h] [rbp-68h]
  __int64 v154; // [rsp+2C0h] [rbp-60h]
  __int64 v155; // [rsp+2C8h] [rbp-58h]
  int v156; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v157; // [rsp+2E0h] [rbp-40h]

  v157 = __readfsqword(0x28u);
  v116 = 16;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v114 = 0;
  v109 = 0;
  v113 = 0;
  v115 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details )
    goto LABEL_64;
  v4 = *(_QWORD *)(a1 + 1496);
  v103 = *(_BYTE *)(a1 + 320);
  if ( v103 )
  {
    v103 = 0;
  }
  else if ( (v116 & 0xF0u) - 208 <= 0x2F )
  {
    v103 = (*(_BYTE *)(v4 + 606) & 0x10) != 0;
  }
  sub_D10B0((__int64)&v138, v4, 0);
  memset(v147, 0, sizeof(v147));
  v149 = 0;
  v151 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v148 = 0;
  v150 = 0;
  v152 = 0;
  sub_D1810(v147);
  if ( v103 )
  {
    v5 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v5 == 208 || (v6 = 16, v7 = 112, v5 == 64) )
    {
      v6 = 64;
      v7 = 64;
    }
    *(_DWORD *)(a1 + 72) = v6;
    sub_D1A80(&v138, v7);
  }
  v96 = v110 & 0x200;
  v95 = *(_DWORD *)(a1 + 72);
  v94 = *(_DWORD *)(a1 + 440);
  if ( (_QWORD)v109 )
  {
    v88 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = v108 + 80 * v8;
      tinfo_size = get_tinfo_size();
      v10 = tinfo_size;
      sub_1C6010((__int64)&v106, a1, v9, (unsigned int)tinfo_size);
      if ( *(_BYTE *)(a1 + 320) )
        goto LABEL_21;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
        break;
      if ( v103 )
        goto LABEL_126;
LABEL_13:
      if ( v96 )
        goto LABEL_20;
      v11 = v116 & 0xF0;
      if ( (v116 & 0xF0) == 0xC0 )
        v11 = HIDWORD(v110);
      if ( v11 <= 0x10 )
        v11 = getinf();
      if ( v95 != v11 )
      {
LABEL_20:
        v12 = sub_1C3500(&v106);
        if ( v12 != -1 && *(_QWORD *)(a1 + 144) > v12 )
          goto LABEL_94;
      }
LABEL_21:
      v13 = tinfo_size;
      v90 = (__int64 *)(a1 + 432);
      if ( tinfo_size <= 0 )
        v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
      v14 = sub_1F06C0(v90, &v106, v13, 0);
      v105 = v14;
      if ( v14 >= v94 )
      {
        v15 = 13LL * v14;
        v16 = *(_QWORD *)(a1 + 432);
        v17 = (int *)(v16 + 8 * v15);
        if ( *v17 == 1 )
        {
          v54 = v116 & 0xF0;
          if ( (v116 & 0xF0) == 0xC0 )
            v54 = HIDWORD(v110);
          if ( v54 <= 0x10 )
          {
            v54 = getinf();
            if ( v54 <= 0x10 )
              v54 = getinf();
          }
          if ( v54 != 176 && v54 != 256 && !(unsigned __int8)getinf_flag() )
            goto LABEL_121;
          v55 = v95;
          if ( v95 <= 0x10 )
            v55 = getinf();
          if ( v55 == 176 || v55 == 256 || (unsigned __int8)getinf_flag() )
          {
LABEL_121:
            if ( !v96 || v106 != 1 )
            {
              if ( !under_debugger )
                sub_383060(52632);
LABEL_232:
              BUG();
            }
            if ( (v107 & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL)) >= v107 )
            {
              if ( !under_debugger )
                sub_383060(52633);
              goto LABEL_232;
            }
          }
          goto LABEL_94;
        }
        if ( !(unsigned __int8)sub_1F0DE0(v16 + 8 * v15) || (unsigned __int8)sub_1C4AE0(v17, v17[22], &v106, tinfo_size) )
        {
          if ( !under_debugger )
            sub_383060(51584);
          goto LABEL_232;
        }
LABEL_27:
        v18 = *(_QWORD *)(a1 + 440);
        v105 = v18;
        v19 = (int)v18;
        v20 = (int)v18 + 1;
        if ( v20 != v18 )
        {
          v117 = 0;
          v119 = 1;
          v21 = *(_QWORD *)(a1 + 432);
          v120 = nullptr;
          src = nullptr;
          v124 = 0;
          v125 = 0xFFFFFFFF00000000LL;
          v126 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
          *(_OWORD *)v121 = 0;
          *(_OWORD *)n = 0;
          if ( v20 < v18 )
          {
            v99 = v9;
            v68 = (int)v18 + 1;
            v69 = v18;
            v97 = v68;
            v70 = 104 * v20;
            while ( 1 )
            {
              v71 = (_QWORD *)(v21 + v70);
              clear_tinfo_t();
              v72 = v71[7];
              if ( v72 )
              {
                v71[8] = 0;
                qfree(v72);
              }
              v73 = v71[4];
              if ( v73 )
              {
                v71[5] = 0;
                qfree(v73);
              }
              ++v68;
              v70 += 104;
              cleanup_argloc();
              if ( v68 >= v69 )
                break;
              v21 = *(_QWORD *)(a1 + 432);
            }
            v9 = v99;
            v10 = tinfo_size;
            *(_QWORD *)(a1 + 440) = v97;
          }
          else if ( (unsigned __int64)&v117 < v21 || (unsigned __int64)&v117 >= v21 + 104LL * *(_QWORD *)(a1 + 448) )
          {
            sub_88870(v90, v20, (__int64)&v117);
          }
          else
          {
            v22 = &v117;
            v98 = (int)v18 + 1;
            LODWORD(tinfo_property) = 0;
            copy_argloc();
            v24 = v121[0];
            v131 = 0;
            v25 = v98;
            v132 = 0;
            v129 = si128.m128i_i64[1];
            v130 = v119;
            if ( v121[0] )
            {
              v86 = (void *)qalloc_or_throw(v121[0], (__int64)&v117, v23, v98);
              v22 = (__int64 *)v120;
              v131 = (__int64)v86;
              *((_QWORD *)&v132 + 1) = v24;
              memcpy(v86, v120, v24);
              *(_QWORD *)&v132 = v24;
              v25 = v98;
            }
            v26 = n[0];
            v133 = nullptr;
            v134 = 0;
            if ( n[0] )
            {
              v100 = v25;
              v133 = (void *)qalloc_or_throw(n[0], (__int64)v22, v23, v25);
              *((_QWORD *)&v134 + 1) = v26;
              memcpy(v133, src, v26);
              *(_QWORD *)&v134 = v26;
              v25 = v100;
            }
            v101 = v25;
            v135 = 0;
            copy_tinfo_t();
            v136 = v125;
            v137 = v126;
            sub_88870(v90, v101, (__int64)&tinfo_property);
            clear_tinfo_t();
            if ( v133 )
            {
              *(_QWORD *)&v134 = 0;
              qfree((__int64)v133);
            }
            if ( v131 )
            {
              *(_QWORD *)&v132 = 0;
              qfree(v131);
            }
            cleanup_argloc();
          }
          clear_tinfo_t();
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          if ( v120 )
          {
            v121[0] = 0;
            qfree((__int64)v120);
          }
          cleanup_argloc();
          v19 = v105;
        }
        v27 = *(_QWORD *)(a1 + 432) + 104 * v19;
        copy_argloc();
        *(_QWORD *)(v27 + 88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
        if ( (*(_BYTE *)a1 & 1) != 0 )
          *(_QWORD *)(v27 + 16) = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(v27 + 24) |= 0x100u;
        v28 = *(_QWORD *)(a1 + 456);
        v29 = *(_QWORD *)(a1 + 464);
        v30 = v105;
        v31 = (int *)(v28 + 4 * v29);
        if ( (int *)v28 != v31 )
        {
          v32 = *(int **)(a1 + 456);
          while ( v105 != *v32 )
          {
            if ( v31 == ++v32 )
              goto LABEL_163;
          }
          if ( v31 != v32 )
          {
            if ( !under_debugger )
              sub_383060(51603);
            goto LABEL_232;
          }
        }
LABEL_163:
        v64 = v29 + 1;
        if ( *(_QWORD *)(a1 + 472) < v64 )
        {
          v74 = qvector_reserve(a1 + 456, v28, v64, 4);
          v75 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v74;
          v31 = (int *)(v74 + 4 * v75);
        }
        *v31 = v30;
        v65 = *(_QWORD *)(a1 + 1264);
        ++*(_QWORD *)(a1 + 464);
        v66 = *(_QWORD *)(a1 + 1256);
        if ( !(96 * v65) )
          goto LABEL_172;
        while ( (unsigned int)sub_3307E0((int *)v66, (int *)v27) )
        {
          v66 += 96;
          if ( v66 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
            goto LABEL_172;
        }
        if ( v66
          && ((*(_BYTE *)(v66 + 88) & 4) != 0
           || *(_BYTE *)(v66 + 48) && (unsigned __int8)sub_3736B0(a1, (__int64)&v108, v88, v66 + 48)) )
        {
          sub_1F0800(a1, v27, v66, 1);
          v67 = *(_DWORD *)(v27 + 88);
          v14 = v105;
          if ( v67 > v10 )
          {
            v14 = sub_1F06C0(v90, (int *)v27, v67, 0);
            if ( v105 != v14 )
            {
              if ( !under_debugger )
                sub_383060(52600);
              goto LABEL_232;
            }
          }
          tinfo_size = *(_DWORD *)(v66 + 80);
        }
        else
        {
LABEL_172:
          v14 = v105;
        }
        goto LABEL_79;
      }
      if ( v14 < 0 )
        goto LABEL_27;
LABEL_79:
      v40 = 13LL * v14;
      v41 = *(_QWORD *)(a1 + 432);
      v42 = v41 + 8 * v40;
      if ( *(_DWORD *)(v42 + 92) )
      {
        if ( !under_debugger )
          sub_383060(50216);
        goto LABEL_232;
      }
      if ( !(unsigned int)sub_1C2AD0((int *)(v41 + 8 * v40), &v106) )
      {
        if ( (*(_BYTE *)(v42 + 24) & 2) != 0 )
          goto LABEL_82;
        v56 = sub_32CB80((_BYTE *)(v9 + 64), *(_QWORD *)(a1 + 1496));
        v57 = v56;
        if ( *(char *)(v42 + 25) >= 0 )
        {
          if ( tinfo_size > 0 )
            goto LABEL_148;
          goto LABEL_150;
        }
        if ( v56 && (get_tinfo_property() & 0xF) == 0xA )
        {
          if ( tinfo_size <= 0 )
          {
            v58 = 2;
            if ( *(_BYTE *)(a1 + 320) )
              v58 = 16;
            goto LABEL_140;
          }
LABEL_148:
          if ( (unsigned int)sub_1F5580(a1, &v105, tinfo_size) )
          {
            cleanup_argloc();
            tinfo_details = 0;
            goto LABEL_56;
          }
          if ( v42 != *(_QWORD *)(a1 + 432) + 104LL * v105 )
          {
            if ( !under_debugger )
              sub_383060(51718);
            goto LABEL_232;
          }
LABEL_150:
          v58 = 2;
          if ( *(_BYTE *)(a1 + 320) )
            v58 = 16;
          if ( v57 )
          {
LABEL_140:
            v91 = v58;
            v59 = sub_1EF950(v42, *(_QWORD *)(a1 + 1504), (_BYTE *)(v9 + 64), v95, v58);
            v58 = v91;
            if ( !v59 )
              goto LABEL_153;
            if ( (a3 & 2) == 0
              || (v60 = *(_QWORD *)(v9 + 64), !(_BYTE)v60)
              || (v60 & 0xE) == 0 && (v60 & 0x30) != 0
              || (tinfo_property = 0,
                  tinfo_property = get_tinfo_property(),
                  v61 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v61 & 0x3F) == 0x30)
              || !*(_BYTE *)(a1 + 320) && sub_36F6B0(*(_QWORD *)(a1 + 1504), v9, v95, 1u) )
            {
LABEL_154:
              v62 = *(_DWORD *)(v42 + 24) & 2;
              goto LABEL_155;
            }
            *(_DWORD *)(v42 + 24) = *(_DWORD *)(v42 + 24) & 0xFFFBFFFD | 2;
          }
          else
          {
LABEL_153:
            if ( *(_BYTE *)(v42 + 80) )
              goto LABEL_154;
            v76 = *(_QWORD *)(a1 + 1504);
            v77 = *(int *)(v76 + 80);
            if ( tinfo_size <= 0 )
              tinfo_size = *(_DWORD *)(v42 + 88);
            v92 = v58;
            sub_1EEAF0(&tinfo_property, (_DWORD *)v42, (_QWORD *)v76, tinfo_size, 0);
            if ( !sub_1EF950(v42, *(_QWORD *)(a1 + 1504), &tinfo_property, v95, v92)
              && !(unsigned __int8)sub_1EF5A0((_DWORD *)v42, *(_QWORD **)(a1 + 1504), v77, v95, v92) )
            {
              if ( *(_DWORD *)v42 != 1 || !((int)sub_1C3500((_DWORD *)v42) % v77) )
              {
                if ( !under_debugger )
                  sub_383060(52631);
                goto LABEL_232;
              }
              sub_1EF5A0((_DWORD *)v42, *(_QWORD **)(a1 + 1504), 1u, v95, 0);
            }
            clear_tinfo_t();
            v62 = *(_DWORD *)(v42 + 24) & 2;
LABEL_155:
            if ( !v62 )
            {
              v63 = *(_QWORD *)(a1 + 1256);
              if ( 96LL * *(_QWORD *)(a1 + 1264) )
              {
                while ( (unsigned int)sub_3307E0((int *)v63, (int *)v42) )
                {
                  v63 += 96;
                  if ( v63 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
                    goto LABEL_82;
                }
                if ( v63 && (*(_BYTE *)(v63 + 88) & 4) != 0 )
                  *(_DWORD *)(v42 + 24) |= 0x40000u;
              }
            }
          }
        }
LABEL_82:
        if ( v88 )
        {
LABEL_86:
          if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            goto LABEL_92;
          if ( *(_QWORD *)(v9 + 24) )
          {
            v43 = *(const char **)(v9 + 16);
            goto LABEL_89;
          }
        }
        else
        {
          if ( *(_QWORD *)(v9 + 24) )
          {
            v43 = *(const char **)(v9 + 16);
            if ( !strcmp(v43, "this") )
            {
              sub_36A560(v42);
              goto LABEL_86;
            }
            if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            {
LABEL_92:
              if ( (*(_BYTE *)(v9 + 72) & 0x10) != 0 )
                *(_DWORD *)(v42 + 24) |= 0x1000000u;
              goto LABEL_94;
            }
LABEL_89:
            v44 = v43;
LABEL_90:
            if ( !(unsigned __int8)sub_213D50((_QWORD *)a1, v42, v44, 4) )
              sub_214580((_QWORD *)a1, v105);
            goto LABEL_92;
          }
          if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            goto LABEL_92;
        }
        v44 = s1;
        goto LABEL_90;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_383060(50217);
        goto LABEL_232;
      }
LABEL_94:
      cleanup_argloc();
      v8 = (int)++v88;
      if ( (int)v88 >= (unsigned __int64)v109 )
        goto LABEL_95;
    }
    if ( sub_36F6B0(*(_QWORD *)(a1 + 1504), v9, v95, 0) )
      goto LABEL_94;
    if ( !v103 )
      goto LABEL_13;
LABEL_126:
    if ( !(unsigned __int8)sub_D3C00((__int64)&v138, (__int64)&v106, tinfo_size) )
      goto LABEL_94;
    goto LABEL_13;
  }
LABEL_95:
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
  if ( (unsigned __int8)getinf() )
    LODWORD(v46) = (unsigned __int8)getinf();
  else
    v46 = *(_QWORD *)(v45 + 120);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_55;
    v78 = v110;
    v81 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v110;
    v80 = v81 & 1;
    goto LABEL_208;
  }
  v47 = *(_QWORD *)(v45 + 120);
  v48 = v46;
  if ( v47 >= (int)v46 || (v89 = v46 - v47, !*(_QWORD *)(a1 + 440)) )
  {
    if ( (a3 & 1) == 0 )
    {
LABEL_110:
      sub_376E40(a1, 0, 0);
      goto LABEL_56;
    }
    v78 = v110;
    v79 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v110;
    v80 = v79 & 1;
LABEL_205:
    if ( v80 )
      *(_DWORD *)(a1 + 400) = v78 | 2;
    goto LABEL_110;
  }
  v49 = 0;
  v50 = 0;
  while ( 1 )
  {
    v51 = *(_QWORD *)(a1 + 432) + 104 * v50;
    if ( *(_DWORD *)(v51 + 88) == v47 && *(_DWORD *)v51 == 1 )
      break;
    v50 = ++v49;
    if ( (unsigned __int64)v49 >= *(_QWORD *)(a1 + 440) )
      goto LABEL_108;
LABEL_102:
    v47 = *(_QWORD *)(v45 + 120);
  }
  v128 = 0;
  v52 = *(_QWORD *)(v51 + 8) + v47;
  LODWORD(tinfo_property) = 1;
  v128 = v52;
  if ( (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)&tinfo_property, v89, 0) == -1 )
    sub_1EF5A0((_DWORD *)v51, *(_QWORD **)(a1 + 1504), v48, v95, 2);
  ++v49;
  cleanup_argloc();
  v50 = v49;
  if ( (unsigned __int64)v49 < *(_QWORD *)(a1 + 440) )
    goto LABEL_102;
LABEL_108:
  v53 = *(_BYTE *)(a1 + 320);
  if ( (a3 & 1) != 0 )
  {
    v78 = v110;
    v87 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v110;
    v80 = v87 & 1;
    if ( v53 )
    {
LABEL_208:
      if ( (v78 & 1) != 0 )
      {
        v82 = *(_QWORD *)(a1 + 336);
        v83 = v114;
        *(_DWORD *)a1 |= 0x20u;
        v84 = _mm_loadu_si128((const __m128i *)(a1 + 344));
        v85 = _mm_loadu_si128(&v115);
        *(_QWORD *)(a1 + 336) = v83;
        v114 = v82;
        *(__m128i *)(a1 + 344) = v85;
        v115 = v84;
      }
      if ( v80 )
        *(_DWORD *)(a1 + 400) = v78 | 2;
      goto LABEL_55;
    }
    goto LABEL_205;
  }
  if ( !v53 )
    goto LABEL_110;
LABEL_55:
  *(_DWORD *)(a1 + 4) |= 0x40u;
LABEL_56:
  sub_1990E0(v147);
  if ( v145 )
  {
    v146 = 0;
    qfree(v145);
  }
  if ( v143 )
  {
    v144 = 0;
    qfree(v143);
  }
  if ( v141 )
  {
    v142 = 0;
    qfree(v141);
  }
  if ( v139 )
  {
    v140 = 0;
    qfree(v139);
  }
LABEL_64:
  if ( v114 )
  {
    v115.m128i_i64[0] = 0;
    qfree(v114);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v33 = v108;
  if ( v108 )
  {
    v34 = v109;
    if ( (_QWORD)v109 )
    {
      v35 = 0;
      do
      {
        v36 = (_QWORD *)(v33 + 80 * v35);
        clear_tinfo_t();
        v37 = v36[5];
        if ( v37 )
        {
          v36[6] = 0;
          qfree(v37);
        }
        v38 = v36[2];
        if ( v38 )
        {
          v36[3] = 0;
          qfree(v38);
        }
        ++v35;
        cleanup_argloc();
        v33 = v108;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v33);
  }
  return tinfo_details;
}
