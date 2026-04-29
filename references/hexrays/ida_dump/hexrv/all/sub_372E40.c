__int64 __fastcall sub_372E40(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r12d
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  int *v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  size_t v23; // r15
  unsigned __int64 v24; // rcx
  size_t v25; // r15
  __int64 v26; // r14
  int *v27; // rsi
  __int64 v28; // rdx
  int v29; // r15d
  int *v30; // rcx
  int *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbp
  _QWORD *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  int v39; // eax
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
  unsigned int v55; // eax
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
  int v86; // edx
  int v87; // [rsp+4h] [rbp-31Ch]
  int v88; // [rsp+4h] [rbp-31Ch]
  __int64 *v89; // [rsp+8h] [rbp-318h]
  char v90; // [rsp+8h] [rbp-318h]
  char v91; // [rsp+8h] [rbp-318h]
  int tinfo_size; // [rsp+10h] [rbp-310h]
  int v93; // [rsp+14h] [rbp-30Ch]
  unsigned int v94; // [rsp+18h] [rbp-308h]
  int v95; // [rsp+1Ch] [rbp-304h]
  unsigned __int64 v96; // [rsp+28h] [rbp-2F8h]
  unsigned __int64 v97; // [rsp+30h] [rbp-2F0h]
  __int64 v98; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v99; // [rsp+30h] [rbp-2F0h]
  unsigned __int64 v100; // [rsp+38h] [rbp-2E8h]
  char v102; // [rsp+46h] [rbp-2DAh]
  unsigned __int8 tinfo_details; // [rsp+47h] [rbp-2D9h]
  int v104; // [rsp+64h] [rbp-2BCh] BYREF
  __int64 v105; // [rsp+68h] [rbp-2B8h] BYREF
  signed __int64 v106; // [rsp+70h] [rbp-2B0h]
  __int64 v107; // [rsp+78h] [rbp-2A8h] BYREF
  __int128 v108; // [rsp+80h] [rbp-2A0h]
  __int64 v109; // [rsp+90h] [rbp-290h]
  __int64 v110; // [rsp+98h] [rbp-288h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v112; // [rsp+A8h] [rbp-278h]
  __int64 v113; // [rsp+B8h] [rbp-268h]
  __m128i v114; // [rsp+C0h] [rbp-260h] BYREF
  char v115; // [rsp+D0h] [rbp-250h]
  __int64 v116; // [rsp+D8h] [rbp-248h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-240h]
  __int64 v118; // [rsp+F0h] [rbp-230h]
  void *v119; // [rsp+F8h] [rbp-228h]
  size_t v120[2]; // [rsp+100h] [rbp-220h]
  void *src; // [rsp+110h] [rbp-210h]
  size_t n[2]; // [rsp+118h] [rbp-208h]
  __int64 v123; // [rsp+128h] [rbp-1F8h] BYREF
  unsigned __int64 v124; // [rsp+130h] [rbp-1F0h]
  __int64 v125; // [rsp+138h] [rbp-1E8h]
  __int64 tinfo_property; // [rsp+148h] [rbp-1D8h] BYREF
  unsigned __int64 v127; // [rsp+150h] [rbp-1D0h]
  __int64 v128; // [rsp+158h] [rbp-1C8h]
  int v129; // [rsp+160h] [rbp-1C0h]
  void *v130; // [rsp+168h] [rbp-1B8h]
  __int128 v131; // [rsp+170h] [rbp-1B0h]
  void *v132; // [rsp+180h] [rbp-1A0h]
  __int128 v133; // [rsp+188h] [rbp-198h]
  _QWORD v134[4]; // [rsp+198h] [rbp-188h] BYREF
  __int64 v135; // [rsp+1B8h] [rbp-168h] BYREF
  __int64 v136; // [rsp+1C0h] [rbp-160h]
  __int64 v137; // [rsp+1C8h] [rbp-158h]
  __int64 v138; // [rsp+1D8h] [rbp-148h]
  __int64 v139; // [rsp+1E0h] [rbp-140h]
  __int64 v140; // [rsp+210h] [rbp-110h]
  __int64 v141; // [rsp+218h] [rbp-108h]
  __int64 v142; // [rsp+228h] [rbp-F8h]
  __int64 v143; // [rsp+230h] [rbp-F0h]
  _QWORD v144[7]; // [rsp+240h] [rbp-E0h] BYREF
  __int128 v145; // [rsp+278h] [rbp-A8h]
  __int64 v146; // [rsp+288h] [rbp-98h]
  __int128 v147; // [rsp+290h] [rbp-90h]
  __int64 v148; // [rsp+2A0h] [rbp-80h]
  __int128 v149; // [rsp+2A8h] [rbp-78h]
  __int64 v150; // [rsp+2B8h] [rbp-68h]
  __int64 v151; // [rsp+2C0h] [rbp-60h]
  __int64 v152; // [rsp+2C8h] [rbp-58h]
  int v153; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v154; // [rsp+2E0h] [rbp-40h]

  v4 = *a2;
  v154 = __readfsqword(0x28u);
  v115 = 16;
  v107 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v113 = 0;
  v108 = 0;
  v112 = 0;
  v114 = 0;
  tinfo_details = get_tinfo_details(v4, 12, &v107);
  if ( !tinfo_details )
    goto LABEL_64;
  v5 = *(_QWORD *)(a1 + 1496);
  v102 = *(_BYTE *)(a1 + 320);
  if ( v102 )
  {
    v102 = 0;
  }
  else
  {
    v39 = v115 & 0xF0;
    if ( (v115 & 0xF0) == 0xC0 )
      v39 = HIDWORD(v109);
    if ( (unsigned int)(v39 - 208) <= 0x2F )
      v102 = (*(_BYTE *)(v5 + 606) & 0x10) != 0;
  }
  sub_CCBF0((__int64)&v135, v5, 0);
  memset(v144, 0, sizeof(v144));
  v146 = 0;
  v148 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v145 = 0;
  v147 = 0;
  v149 = 0;
  sub_CD350(v144);
  if ( v102 )
  {
    v6 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v6 == 208 || (v7 = 16, v8 = 112, v6 == 64) )
    {
      v7 = 64;
      v8 = 64;
    }
    *(_DWORD *)(a1 + 72) = v7;
    sub_CD5C0(&v135, v8);
  }
  v95 = v109 & 0x200;
  v94 = *(_DWORD *)(a1 + 72);
  v93 = *(_DWORD *)(a1 + 440);
  if ( (_QWORD)v108 )
  {
    v87 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = v107 + 80 * v9;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 64), 0);
      v11 = tinfo_size;
      sub_1C1990((__int64)&v105, a1, v10, tinfo_size);
      if ( *(_BYTE *)(a1 + 320) )
        goto LABEL_21;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
        break;
      if ( v102 )
        goto LABEL_128;
LABEL_13:
      if ( v95 )
        goto LABEL_20;
      v12 = v115 & 0xF0;
      if ( (v115 & 0xF0) == 0xC0 )
        v12 = HIDWORD(v109);
      if ( v12 <= 0x10 )
        v12 = getinf(99);
      if ( v94 != v12 )
      {
LABEL_20:
        v13 = sub_1BEE80(&v105);
        if ( v13 != -1 && *(_QWORD *)(a1 + 144) > v13 )
          goto LABEL_96;
      }
LABEL_21:
      v14 = tinfo_size;
      v89 = (__int64 *)(a1 + 432);
      if ( tinfo_size <= 0 )
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
      v15 = sub_1EBAC0(v89, (int *)&v105, v14, 0);
      v104 = v15;
      if ( v15 >= v93 )
      {
        v16 = 13LL * v15;
        v17 = *(_QWORD *)(a1 + 432);
        v18 = (int *)(v17 + 8 * v16);
        if ( *v18 == 1 )
        {
          v54 = v115 & 0xF0;
          if ( (v115 & 0xF0) == 0xC0 )
            v54 = HIDWORD(v109);
          if ( v54 <= 0x10 )
          {
            v54 = getinf(99);
            if ( v54 <= 0x10 )
              v54 = getinf(99);
          }
          if ( v54 != 176 && v54 != 256 && !(unsigned __int8)getinf_flag(67, 2) )
            goto LABEL_123;
          v55 = v94;
          if ( v94 <= 0x10 )
            v55 = getinf(99);
          if ( v55 == 176 || v55 == 256 || (unsigned __int8)getinf_flag(67, 2) )
          {
LABEL_123:
            if ( !v95 || (_DWORD)v105 != 1 )
            {
              if ( !under_debugger )
                sub_37DDE0(52632);
LABEL_234:
              BUG();
            }
            if ( (v106 & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL)) >= v106 )
            {
              if ( !under_debugger )
                sub_37DDE0(52633);
              goto LABEL_234;
            }
          }
          goto LABEL_96;
        }
        if ( !(unsigned __int8)sub_1EC1E0(v17 + 8 * v16)
          || (unsigned __int8)sub_1C0460(v18, v18[22], (int *)&v105, tinfo_size) )
        {
          if ( !under_debugger )
            sub_37DDE0(51584);
          goto LABEL_234;
        }
LABEL_27:
        v19 = *(_QWORD *)(a1 + 440);
        v104 = v19;
        v20 = (int)v19;
        v21 = (int)v19 + 1;
        if ( v21 != v19 )
        {
          v116 = 0;
          v118 = 1;
          v22 = *(_QWORD *)(a1 + 432);
          v119 = nullptr;
          src = nullptr;
          v123 = 0;
          v124 = 0xFFFFFFFF00000000LL;
          v125 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
          *(_OWORD *)v120 = 0;
          *(_OWORD *)n = 0;
          if ( v21 < v19 )
          {
            v98 = v10;
            v68 = (int)v19 + 1;
            v69 = v19;
            v96 = v68;
            v70 = 104 * v21;
            while ( 1 )
            {
              v71 = (_QWORD *)(v22 + v70);
              clear_tinfo_t(v22 + v70 + 80);
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
              cleanup_argloc(v71);
              if ( v68 >= v69 )
                break;
              v22 = *(_QWORD *)(a1 + 432);
            }
            v10 = v98;
            v11 = tinfo_size;
            *(_QWORD *)(a1 + 440) = v96;
          }
          else if ( (unsigned __int64)&v116 < v22 || (unsigned __int64)&v116 >= v22 + 104LL * *(_QWORD *)(a1 + 448) )
          {
            sub_843B0(v89, v21, (__int64)&v116);
          }
          else
          {
            v97 = (int)v19 + 1;
            LODWORD(tinfo_property) = 0;
            copy_argloc(&tinfo_property, &v116);
            v23 = v120[0];
            v130 = nullptr;
            v24 = v97;
            v131 = 0;
            v128 = si128.m128i_i64[1];
            v129 = v118;
            if ( v120[0] )
            {
              v130 = (void *)qalloc_or_throw(v120[0]);
              *((_QWORD *)&v131 + 1) = v23;
              memcpy(v130, v119, v23);
              *(_QWORD *)&v131 = v23;
              v24 = v97;
            }
            v25 = n[0];
            v132 = nullptr;
            v133 = 0;
            if ( n[0] )
            {
              v99 = v24;
              v132 = (void *)qalloc_or_throw(n[0]);
              *((_QWORD *)&v133 + 1) = v25;
              memcpy(v132, src, v25);
              *(_QWORD *)&v133 = v25;
              v24 = v99;
            }
            v100 = v24;
            v134[0] = 0;
            copy_tinfo_t(v134, &v123);
            v134[1] = v124;
            v134[2] = v125;
            sub_843B0(v89, v100, (__int64)&tinfo_property);
            clear_tinfo_t(v134);
            if ( v132 )
            {
              *(_QWORD *)&v133 = 0;
              qfree(v132);
            }
            if ( v130 )
            {
              *(_QWORD *)&v131 = 0;
              qfree(v130);
            }
            cleanup_argloc(&tinfo_property);
          }
          clear_tinfo_t(&v123);
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
          if ( v119 )
          {
            v120[0] = 0;
            qfree(v119);
          }
          cleanup_argloc(&v116);
          v20 = v104;
        }
        v26 = *(_QWORD *)(a1 + 432) + 104 * v20;
        copy_argloc(v26, &v105);
        *(_QWORD *)(v26 + 88) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
        if ( (*(_BYTE *)a1 & 1) != 0 )
          *(_QWORD *)(v26 + 16) = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(v26 + 24) |= 0x100u;
        v27 = *(int **)(a1 + 456);
        v28 = *(_QWORD *)(a1 + 464);
        v29 = v104;
        v30 = &v27[v28];
        if ( v27 != v30 )
        {
          v31 = *(int **)(a1 + 456);
          while ( v104 != *v31 )
          {
            if ( v30 == ++v31 )
              goto LABEL_165;
          }
          if ( v30 != v31 )
          {
            if ( !under_debugger )
              sub_37DDE0(51603);
            goto LABEL_234;
          }
        }
LABEL_165:
        v64 = v28 + 1;
        if ( *(_QWORD *)(a1 + 472) < v64 )
        {
          v74 = qvector_reserve(a1 + 456, v27, v64, 4);
          v75 = *(_QWORD *)(a1 + 464);
          *(_QWORD *)(a1 + 456) = v74;
          v30 = (int *)(v74 + 4 * v75);
        }
        *v30 = v29;
        v65 = *(_QWORD *)(a1 + 1264);
        ++*(_QWORD *)(a1 + 464);
        v66 = *(_QWORD *)(a1 + 1256);
        if ( !(96 * v65) )
          goto LABEL_174;
        while ( (unsigned int)sub_32B410((int *)v66, (int *)v26) )
        {
          v66 += 96;
          if ( v66 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
            goto LABEL_174;
        }
        if ( v66
          && ((*(_BYTE *)(v66 + 88) & 4) != 0
           || *(_BYTE *)(v66 + 48) && (unsigned __int8)sub_36E430(a1, (__int64)&v107, v87, v66 + 48)) )
        {
          sub_1EBC00(a1, v26, v66, 1);
          v67 = *(_DWORD *)(v26 + 88);
          v15 = v104;
          if ( v67 > v11 )
          {
            v15 = sub_1EBAC0(v89, (int *)v26, v67, 0);
            if ( v104 != v15 )
            {
              if ( !under_debugger )
                sub_37DDE0(52600);
              goto LABEL_234;
            }
          }
          tinfo_size = *(_DWORD *)(v66 + 80);
        }
        else
        {
LABEL_174:
          v15 = v104;
        }
        goto LABEL_81;
      }
      if ( v15 < 0 )
        goto LABEL_27;
LABEL_81:
      v40 = 13LL * v15;
      v41 = *(_QWORD *)(a1 + 432);
      v42 = v41 + 8 * v40;
      if ( *(_DWORD *)(v42 + 92) )
      {
        if ( !under_debugger )
          sub_37DDE0(50216);
        goto LABEL_234;
      }
      if ( !(unsigned int)sub_1BE450((int *)(v41 + 8 * v40), (int *)&v105) )
      {
        if ( (*(_BYTE *)(v42 + 24) & 2) != 0 )
          goto LABEL_84;
        v56 = sub_3278C0((_QWORD *)(v10 + 64), *(_QWORD *)(a1 + 1496), -1);
        v57 = v56;
        if ( *(char *)(v42 + 25) >= 0 )
        {
          if ( tinfo_size > 0 )
            goto LABEL_150;
          goto LABEL_152;
        }
        if ( v56 && (get_tinfo_property(*(_QWORD *)(v10 + 64), 2) & 0xF) == 0xA )
        {
          if ( tinfo_size <= 0 )
          {
            v58 = 2;
            if ( *(_BYTE *)(a1 + 320) )
              v58 = 16;
            goto LABEL_142;
          }
LABEL_150:
          if ( (unsigned int)sub_1F0980(a1, &v104, tinfo_size) )
          {
            cleanup_argloc(&v105);
            tinfo_details = 0;
            goto LABEL_56;
          }
          if ( v42 != *(_QWORD *)(a1 + 432) + 104LL * v104 )
          {
            if ( !under_debugger )
              sub_37DDE0(51718);
            goto LABEL_234;
          }
LABEL_152:
          v58 = 2;
          if ( *(_BYTE *)(a1 + 320) )
            v58 = 16;
          if ( v57 )
          {
LABEL_142:
            v90 = v58;
            v59 = sub_1EAD50(v42, *(_QWORD *)(a1 + 1504), (_QWORD *)(v10 + 64), v94, v58);
            v58 = v90;
            if ( !v59 )
              goto LABEL_155;
            if ( (a3 & 2) == 0
              || (v60 = *(_QWORD *)(v10 + 64), !(_BYTE)v60)
              || (v60 & 0xE) == 0 && (v60 & 0x30) != 0
              || (tinfo_property = 0,
                  tinfo_property = get_tinfo_property(v60, 9),
                  v61 = get_tinfo_property(tinfo_property, 2),
                  clear_tinfo_t(&tinfo_property),
                  (v61 & 0x3F) == 0x30)
              || !*(_BYTE *)(a1 + 320) && sub_36A430(*(_QWORD *)(a1 + 1504), v10, v94, 1u) )
            {
LABEL_156:
              v62 = *(_DWORD *)(v42 + 24) & 2;
              goto LABEL_157;
            }
            *(_DWORD *)(v42 + 24) = *(_DWORD *)(v42 + 24) & 0xFFFBFFFD | 2;
          }
          else
          {
LABEL_155:
            if ( *(_BYTE *)(v42 + 80) )
              goto LABEL_156;
            v76 = *(_QWORD *)(a1 + 1504);
            v77 = *(int *)(v76 + 80);
            if ( tinfo_size <= 0 )
              tinfo_size = *(_DWORD *)(v42 + 88);
            v91 = v58;
            sub_1E9EF0(&tinfo_property, (_DWORD *)v42, (_QWORD *)v76, tinfo_size, 0);
            if ( !sub_1EAD50(v42, *(_QWORD *)(a1 + 1504), &tinfo_property, v94, v91)
              && !(unsigned __int8)sub_1EA9A0((_DWORD *)v42, *(_QWORD **)(a1 + 1504), v77, v94, v91) )
            {
              if ( *(_DWORD *)v42 != 1 || !((int)sub_1BEE80((_DWORD *)v42) % v77) )
              {
                if ( !under_debugger )
                  sub_37DDE0(52631);
                goto LABEL_234;
              }
              sub_1EA9A0((_DWORD *)v42, *(_QWORD **)(a1 + 1504), 1u, v94, 0);
            }
            clear_tinfo_t(&tinfo_property);
            v62 = *(_DWORD *)(v42 + 24) & 2;
LABEL_157:
            if ( !v62 )
            {
              v63 = *(_QWORD *)(a1 + 1256);
              if ( 96LL * *(_QWORD *)(a1 + 1264) )
              {
                while ( (unsigned int)sub_32B410((int *)v63, (int *)v42) )
                {
                  v63 += 96;
                  if ( v63 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
                    goto LABEL_84;
                }
                if ( v63 && (*(_BYTE *)(v63 + 88) & 4) != 0 )
                  *(_DWORD *)(v42 + 24) |= 0x40000u;
              }
            }
          }
        }
LABEL_84:
        if ( v87 )
        {
LABEL_88:
          if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            goto LABEL_94;
          if ( *(_QWORD *)(v10 + 24) )
          {
            v43 = *(const char **)(v10 + 16);
            goto LABEL_91;
          }
        }
        else
        {
          if ( *(_QWORD *)(v10 + 24) )
          {
            v43 = *(const char **)(v10 + 16);
            if ( !strcmp(v43, "this") )
            {
              sub_3652E0(v42);
              goto LABEL_88;
            }
            if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            {
LABEL_94:
              if ( (*(_BYTE *)(v10 + 72) & 0x10) != 0 )
                *(_DWORD *)(v42 + 24) |= 0x1000000u;
              goto LABEL_96;
            }
LABEL_91:
            v44 = v43;
LABEL_92:
            if ( !(unsigned __int8)sub_20F150((_QWORD *)a1, v42, v44, 4) )
              sub_20F980((_QWORD *)a1, v104);
            goto LABEL_94;
          }
          if ( (*(_BYTE *)(v42 + 24) & 4) != 0 )
            goto LABEL_94;
        }
        v44 = s1;
        goto LABEL_92;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(50217);
        goto LABEL_234;
      }
LABEL_96:
      cleanup_argloc(&v105);
      v9 = ++v87;
      if ( v87 >= (unsigned __int64)v108 )
        goto LABEL_97;
    }
    if ( sub_36A430(*(_QWORD *)(a1 + 1504), v10, v94, 0) )
      goto LABEL_96;
    if ( !v102 )
      goto LABEL_13;
LABEL_128:
    if ( !(unsigned __int8)sub_CF740((__int64)&v135, &v105, tinfo_size) )
      goto LABEL_96;
    goto LABEL_13;
  }
LABEL_97:
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
  if ( (unsigned __int8)getinf(66) )
    LODWORD(v46) = (unsigned __int8)getinf(66);
  else
    v46 = *(_QWORD *)(v45 + 120);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_55;
    v78 = v109;
    v81 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v109;
    v80 = v81 & 1;
    goto LABEL_210;
  }
  v47 = *(_QWORD *)(v45 + 120);
  v48 = v46;
  if ( v47 >= (int)v46 || (v88 = v46 - v47, !*(_QWORD *)(a1 + 440)) )
  {
    if ( (a3 & 1) == 0 )
    {
LABEL_112:
      sub_371BC0(a1, 0, 0);
      goto LABEL_56;
    }
    v78 = v109;
    v79 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v109;
    v80 = v79 & 1;
LABEL_207:
    if ( v80 )
      *(_DWORD *)(a1 + 400) = v78 | 2;
    goto LABEL_112;
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
      goto LABEL_110;
LABEL_104:
    v47 = *(_QWORD *)(v45 + 120);
  }
  v127 = 0;
  v52 = *(_QWORD *)(v51 + 8) + v47;
  LODWORD(tinfo_property) = 1;
  v127 = v52;
  if ( (unsigned int)sub_1EBAC0((__int64 *)(a1 + 432), (int *)&tinfo_property, v88, 0) == -1 )
    sub_1EA9A0((_DWORD *)v51, *(_QWORD **)(a1 + 1504), v48, v94, 2);
  ++v49;
  cleanup_argloc(&tinfo_property);
  v50 = v49;
  if ( (unsigned __int64)v49 < *(_QWORD *)(a1 + 440) )
    goto LABEL_104;
LABEL_110:
  v53 = *(_BYTE *)(a1 + 320);
  if ( (a3 & 1) != 0 )
  {
    v78 = v109;
    v86 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 400) = v109;
    v80 = v86 & 1;
    if ( v53 )
    {
LABEL_210:
      if ( (v78 & 1) != 0 )
      {
        v82 = *(_QWORD *)(a1 + 336);
        v83 = v113;
        *(_DWORD *)a1 |= 0x20u;
        v84 = _mm_loadu_si128((const __m128i *)(a1 + 344));
        v85 = _mm_loadu_si128(&v114);
        *(_QWORD *)(a1 + 336) = v83;
        v113 = v82;
        *(__m128i *)(a1 + 344) = v85;
        v114 = v84;
      }
      if ( v80 )
        *(_DWORD *)(a1 + 400) = v78 | 2;
      goto LABEL_55;
    }
    goto LABEL_207;
  }
  if ( !v53 )
    goto LABEL_112;
LABEL_55:
  *(_DWORD *)(a1 + 4) |= 0x40u;
LABEL_56:
  sub_194C20(v144);
  if ( v142 )
  {
    v143 = 0;
    qfree(v142);
  }
  if ( v140 )
  {
    v141 = 0;
    qfree(v140);
  }
  if ( v138 )
  {
    v139 = 0;
    qfree(v138);
  }
  if ( v136 )
  {
    v137 = 0;
    qfree(v136);
  }
LABEL_64:
  if ( v113 )
  {
    v114.m128i_i64[0] = 0;
    qfree(v113);
  }
  cleanup_argloc(&v111);
  clear_tinfo_t(&v110);
  v32 = v107;
  if ( v107 )
  {
    v33 = v108;
    if ( (_QWORD)v108 )
    {
      v34 = 0;
      do
      {
        v35 = (_QWORD *)(v32 + 80 * v34);
        clear_tinfo_t(v35 + 8);
        v36 = v35[5];
        if ( v36 )
        {
          v35[6] = 0;
          qfree(v36);
        }
        v37 = v35[2];
        if ( v37 )
        {
          v35[3] = 0;
          qfree(v37);
        }
        ++v34;
        cleanup_argloc(v35);
        v32 = v107;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v108 = 0;
    qfree(v32);
  }
  return tinfo_details;
}
