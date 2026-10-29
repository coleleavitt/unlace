unsigned __int64 __fastcall sub_1A68D90(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  unsigned __int8 v8; // r13
  unsigned __int8 v10; // bp
  __int64 v11; // rax
  __int64 v12; // r14
  void **p_ptr; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  _QWORD *v18; // rdx
  void **v19; // rdi
  unsigned int v20; // r15d
  void *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  bool v39; // zf
  unsigned __int64 v40; // r13
  char v41; // al
  unsigned __int8 v42; // al
  char v43; // bp
  int v44; // eax
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  char *v53; // r15
  char *v54; // rbp
  _BYTE *i; // rax
  __int64 v56; // rsi
  unsigned int v57; // ecx
  __int64 v58; // rdi
  __int64 *v59; // rbp
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 *v63; // r12
  _QWORD *v64; // rdi
  _QWORD *v65; // r15
  _QWORD *v66; // rbp
  char *v67; // rdi
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 (__fastcall *v71)(__int64); // rdx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  size_t v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rbp
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rdx
  __int64 v90; // rsi
  char *v91; // rcx
  _QWORD *v92; // rdx
  char *v93; // rbp
  char *v94; // r13
  __int64 v95; // rax
  __int64 v96; // r15
  char v97; // al
  __int64 v98; // rcx
  __m128i si128; // xmm1
  __int64 v100; // rax
  unsigned __int8 v101; // dl
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // rbx
  int v104; // eax
  __int128 v105; // [rsp-40h] [rbp-2148h]
  __int64 *v106; // [rsp+8h] [rbp-2100h] BYREF
  unsigned __int64 v107; // [rsp+10h] [rbp-20F8h]
  unsigned int v108; // [rsp+1Ch] [rbp-20ECh]
  __int64 v109; // [rsp+20h] [rbp-20E8h]
  _QWORD *v110; // [rsp+28h] [rbp-20E0h]
  __int64 v111; // [rsp+30h] [rbp-20D8h]
  __int64 v112; // [rsp+38h] [rbp-20D0h]
  _QWORD *v113; // [rsp+40h] [rbp-20C8h]
  unsigned int v114; // [rsp+48h] [rbp-20C0h]
  unsigned int v115; // [rsp+4Ch] [rbp-20BCh]
  __int64 v116; // [rsp+50h] [rbp-20B8h]
  __int64 v117; // [rsp+58h] [rbp-20B0h]
  __int64 v118; // [rsp+60h] [rbp-20A8h]
  __int64 v119; // [rsp+68h] [rbp-20A0h]
  __int64 v120; // [rsp+70h] [rbp-2098h]
  __int64 v121; // [rsp+78h] [rbp-2090h]
  void **v122; // [rsp+80h] [rbp-2088h]
  unsigned __int64 v123; // [rsp+88h] [rbp-2080h]
  __int64 v124; // [rsp+90h] [rbp-2078h]
  __int64 v125; // [rsp+98h] [rbp-2070h]
  void **v126; // [rsp+A0h] [rbp-2068h]
  __int64 v127[2]; // [rsp+A8h] [rbp-2060h] BYREF
  __int64 v128; // [rsp+B8h] [rbp-2050h] BYREF
  _DWORD *v129; // [rsp+C0h] [rbp-2048h] BYREF
  unsigned __int64 v130; // [rsp+C8h] [rbp-2040h]
  _DWORD v131[2]; // [rsp+D0h] [rbp-2038h] BYREF
  unsigned __int64 v132; // [rsp+D8h] [rbp-2030h]
  __int64 v133; // [rsp+E0h] [rbp-2028h]
  __m128i v134; // [rsp+F0h] [rbp-2018h]
  unsigned __int64 v135; // [rsp+100h] [rbp-2008h]
  _QWORD *v136; // [rsp+110h] [rbp-1FF8h] BYREF
  __m128 v137; // [rsp+118h] [rbp-1FF0h]
  void *v138; // [rsp+130h] [rbp-1FD8h] BYREF
  __int64 v139; // [rsp+138h] [rbp-1FD0h]
  char v140; // [rsp+140h] [rbp-1FC8h] BYREF
  void *ptr; // [rsp+180h] [rbp-1F88h] BYREF
  __int64 v142; // [rsp+188h] [rbp-1F80h]
  __int64 v143; // [rsp+190h] [rbp-1F78h] BYREF
  __int64 *v144; // [rsp+210h] [rbp-1EF8h] BYREF
  __int64 v145; // [rsp+218h] [rbp-1EF0h]
  _QWORD v146[336]; // [rsp+220h] [rbp-1EE8h] BYREF
  void *v147; // [rsp+CA0h] [rbp-1468h]
  __int64 v148; // [rsp+CA8h] [rbp-1460h]
  int v149; // [rsp+CB0h] [rbp-1458h]
  char v150; // [rsp+CB4h] [rbp-1454h]
  _QWORD v151[17]; // [rsp+CB8h] [rbp-1450h] BYREF
  int v152; // [rsp+D40h] [rbp-13C8h]
  __int64 v153; // [rsp+D48h] [rbp-13C0h]
  __int64 v154; // [rsp+D50h] [rbp-13B8h]
  void *v155; // [rsp+D58h] [rbp-13B0h]
  __int64 v156; // [rsp+D60h] [rbp-13A8h]
  _BYTE v157[32]; // [rsp+D68h] [rbp-13A0h] BYREF
  __int64 *v158; // [rsp+D88h] [rbp-1380h]
  __int64 v159; // [rsp+D90h] [rbp-1378h]
  _QWORD v160[2]; // [rsp+D98h] [rbp-1370h] BYREF
  unsigned int v161; // [rsp+DA8h] [rbp-1360h]
  int v162; // [rsp+DACh] [rbp-135Ch]
  __int64 v163; // [rsp+DB0h] [rbp-1358h]
  char v164; // [rsp+DB8h] [rbp-1350h]
  int v165; // [rsp+DBCh] [rbp-134Ch]
  int v166; // [rsp+20C0h] [rbp-48h]

  v8 = a4;
  v10 = a6;
  v127[0] = a2;
  LODWORD(v106) = a3;
  LODWORD(v107) = a7;
  LODWORD(v109) = a5;
  v108 = a8;
  v11 = *(_QWORD *)(a2 + 128);
  if ( !v11 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
    v11 = *(_QWORD *)(a2 + 128);
    if ( !v11 )
    {
      v127[0] = 0;
      BUG();
    }
  }
  v12 = *(_QWORD *)(v11 + 88);
  p_ptr = &ptr;
  v142 = 0x2000000000LL;
  v14 = *(_DWORD *)(v12 + 24);
  v127[0] = v12;
  v114 = v14;
  ptr = &v143;
  sub_9B7040((__int64)&ptr, v12);
  sub_9B7040((__int64)&ptr, SHIDWORD(v12));
  sub_9B7040((__int64)&ptr, (int)v106);
  sub_9B7040((__int64)&ptr, v8);
  sub_9B7040((__int64)&ptr, (unsigned __int8)v109);
  sub_9B7040((__int64)&ptr, v10);
  sub_9B7040((__int64)&ptr, (unsigned __int8)v107);
  sub_9B7040((__int64)&ptr, (unsigned __int8)v108);
  v15 = sub_2223360(a1 + 1257, &ptr, &v128, off_2BC72B0);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 152);
  }
  else
  {
    v18 = (_QWORD *)sub_9C3B30(a1 + 11, 160, 3u);
    *v18 = 0;
    v19 = (void **)(v18 + 1);
    v18[2] = 0x2000000000LL;
    v20 = v142;
    v110 = v18;
    v21 = v18 + 3;
    v18[1] = v18 + 3;
    if ( v20 && v19 != &ptr )
    {
      v82 = 4LL * v20;
      if ( v20 <= 0x20uLL || (sub_2237220(v19, v21, v20, 4), v82 = 4LL * (unsigned int)v142, v21 = (void *)v110[1], v82) )
        memcpy(v21, ptr, v82);
      *((_DWORD *)v110 + 4) = v20;
    }
    v22 = v110;
    v23 = v128;
    v110[19] = 0;
    sub_2223210(a1 + 1257, v22, v23, off_2BC72B0);
    if ( (_DWORD)v106 == 5 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v127[0] + 104) + 96LL), *(_QWORD *)(v127[0] + 104), v24, v25, v26, v27);
      if ( (*(_BYTE *)(*(_QWORD *)(v127[0] + 128) + 9LL) & 0x20) == 0 )
      {
        v145 = (__int64)a1;
        v144 = v127;
        sub_15F0FC0(
          (__int64)a1,
          *(_DWORD *)(v127[0] + 24),
          (__int64 (__fastcall *)(__int64))sub_1A37D60,
          (__int64)&v144);
      }
      v68 = sub_B97300(v127[0]);
      v106 = (__int64 *)v110[19];
      v69 = v68 | (unsigned __int8)v106 & 7;
      v110[19] = v69;
      v70 = 0;
      if ( v68 )
      {
        v71 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL);
        if ( v71 == sub_B94CD0 )
          v72 = sub_B709C0(v68);
        else
          v72 = v71(v68);
        v69 = v110[19];
        v70 = 4LL * ((*(_BYTE *)(v72 + 82) & 0x40) == 0);
      }
      v16 = v70 | v69 & 0xFFFFFFFFFFFFFFF9LL;
      v110[19] = v16;
    }
    else
    {
      v28 = sub_A7AC20(a1[31], v127[0], v24, v25, v26, v27);
      v129 = nullptr;
      v32 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v28) & 7;
      if ( (_DWORD)v106 )
      {
        v33 = a1[31];
        if ( (unsigned int)((_DWORD)v106 - 1) <= 1 )
        {
          v113 = (_QWORD *)sub_B87BD0(v33 + 17536, v32);
          v73 = *(_QWORD *)(v127[0] + 104);
          sub_7052B0((__int64 *)(v73 + 96), v73, v74, v75, v76, v77);
          if ( (*(_BYTE *)(*(_QWORD *)(v127[0] + 128) + 9LL) & 2) == 0 )
          {
            v144 = v127;
            v145 = (__int64)a1;
            v73 = *(unsigned int *)(v127[0] + 24);
            sub_15F0FC0((__int64)a1, v73, (__int64 (__fastcall *)(__int64))sub_1A37D20, (__int64)&v144);
          }
          if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 && (unsigned __int8)sub_B9C060(v127[0], v73, v78, v79, v80, v81) )
          {
            v144 = v127;
            v145 = (__int64)a1;
            sub_15F0FC0(
              (__int64)a1,
              *(_DWORD *)(v127[0] + 24),
              (__int64 (__fastcall *)(__int64))sub_1A37D40,
              (__int64)&v144);
          }
        }
        else
        {
          v34 = *(_QWORD *)(v127[0] + 104);
          v113 = (_QWORD *)((v33 + 17832) | 6);
          sub_7052B0((__int64 *)(v34 + 96), v34, (unsigned int)v106, v29, v30, v31);
          if ( (*(_BYTE *)(*(_QWORD *)(v127[0] + 128) + 9LL) & 8) == 0 )
          {
            v144 = v127;
            v145 = (__int64)a1;
            v34 = *(unsigned int *)(v127[0] + 24);
            sub_15F0FC0((__int64)a1, v34, (__int64 (__fastcall *)(__int64))sub_1A37D30, (__int64)&v144);
          }
          if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 && (unsigned __int8)sub_B9C100(v127[0], v34, v35, v36, v37, v38) )
          {
            v144 = v127;
            v145 = (__int64)a1;
            sub_15F0FC0(
              (__int64)a1,
              *(_DWORD *)(v127[0] + 24),
              (__int64 (__fastcall *)(__int64))sub_1A37D50,
              (__int64)&v144);
          }
        }
        v39 = v8 == 0;
        v40 = v32;
        if ( !v39 )
          v40 = v32 | 1;
        if ( (_BYTE)v109 )
          v40 = v40 & 7 | 4 | v40 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = ((unsigned int)v106 & 0xFFFFFFFD) == 1;
      }
      else
      {
        v113 = (_QWORD *)sub_B87BD0(a1[31] + 17536, v32);
        v40 = v32;
        if ( (unsigned __int8)sub_B9BFC0(v127[0], v32, v83, v84, v85, v86) )
        {
          v145 = (__int64)a1;
          v144 = v127;
          sub_15F0FC0(
            (__int64)a1,
            *(_DWORD *)(v127[0] + 24),
            (__int64 (__fastcall *)(__int64))sub_1A37D10,
            (__int64)&v144);
        }
        v41 = 1;
      }
      LOWORD(v131[0]) = v131[0] & 0xFE00 | 0x1A;
      if ( unk_2CD7484 )
      {
        LOBYTE(v109) = v41;
        sub_EE9B50(26);
        v41 = v109;
      }
      v132 = v40;
      v133 = 0;
      BYTE1(v131[0]) = (2 * v41) | BYTE1(v131[0]) & 0xF9;
      v131[0] &= 0xFFF007FF;
      v131[1] = v114;
      v42 = sub_B62360((__int64)v131);
      v109 = 0;
      BYTE1(v131[0]) = (v42 << 6) | BYTE1(v131[0]) & 0x3F;
      BYTE2(v131[0]) = BYTE2(v131[0]) & 0xF8 | (v42 >> 2) & 7;
      if ( (_DWORD)v106 )
      {
        v129 = v131;
        v109 = 1;
      }
      if ( (_BYTE)v107 )
        v32 = v32 & 7 | 1 | v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_BYTE)v108 )
        v32 = v32 & 7 | 4 | v32 & 0xFFFFFFFFFFFFFFF8LL;
      v43 = v10 ^ 1;
      LOWORD(v144) = (unsigned __int16)v144 & 0xFE00 | 0x1A;
      if ( unk_2CD7484 )
        sub_EE9B50(26);
      v145 = v32;
      v146[0] = 0;
      BYTE1(v144) = BYTE1(v144) & 0xF9 | (2 * (v43 & 3));
      LODWORD(v144) = (unsigned int)v144 & 0xFFF007FF;
      HIDWORD(v144) = v114;
      v44 = sub_B62360((__int64)&v144);
      BYTE1(v144) = ((_BYTE)v44 << 6) | BYTE1(v144) & 0x3F;
      BYTE2(v144) = BYTE2(v144) & 0xF8 | ((unsigned __int8)v44 >> 2) & 7;
      v46 = sub_C0EB40((__int64)&v144, a1[31], nullptr, (unsigned int)(v44 << 6), v45);
      v148 = 16;
      v115 = v46;
      v144 = v146;
      v145 = 0x1000000000LL;
      v147 = v151;
      v155 = v157;
      v156 = 0x400000000LL;
      v158 = v160;
      v149 = 0;
      v150 = 1;
      v151[16] = 0;
      v152 = 0;
      v153 = 0;
      v154 = 0;
      v159 = 0;
      v160[0] = 0;
      v160[1] = 1;
      v161 = v114;
      v162 = 0;
      v163 = 0;
      v164 = 0;
      v165 = 0;
      v166 = 0;
      v51 = sub_B94670(v127[0] + 64, (__int64)v113, v47, v48, v49, v50);
      if ( (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v87 = 0;
        v122 = &v138;
        v138 = &v140;
        v88 = v51;
        v139 = 0x800000000LL;
        do
        {
          ++v87;
          if ( (v88 & 4) == 0 )
            break;
          v89 = v88 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v89 )
            break;
          v88 = *(_QWORD *)(v89 + 8);
        }
        while ( v88 );
        if ( v87 > 8 )
        {
          v107 = v51;
          sub_2237220(v122, v122 + 2, v87, 8);
          v51 = v107;
          v91 = (char *)v138 + 8 * (unsigned int)v139;
          LODWORD(v87) = v87 + v139;
          v90 = 8LL * (unsigned int)v87;
        }
        else
        {
          v90 = 8LL * (unsigned int)v87;
          v91 = (char *)(v122 + 2);
        }
        while ( 1 )
        {
          v91 += 8;
          v92 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v51 & 4) == 0 )
          {
            *((_QWORD *)v91 - 1) = v92;
            goto LABEL_90;
          }
          if ( !v92 )
            break;
          *((_QWORD *)v91 - 1) = *v92;
          v51 = v92[1];
          if ( !v51 )
            goto LABEL_90;
        }
        *((_QWORD *)v91 - 1) = 0;
LABEL_90:
        LODWORD(v139) = v87;
        v93 = (char *)v138;
        v108 = (_DWORD)v106 - 3;
        v113 = &v129;
        if ( v138 != (char *)v138 + v90 )
        {
          v123 = v32;
          v94 = (char *)v138 + v90;
          v126 = &ptr;
          do
          {
            v102 = *(_QWORD *)v93;
            if ( *(char *)(*(_QWORD *)v93 + 28LL) >= 0 )
            {
              v136 = *(_QWORD **)v93;
              v103 = v102 & 0xFFFFFFFFFFFFFFF8LL;
              v130 = v102;
              if ( (*(_BYTE *)((v102 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x51 )
              {
                v106 = nullptr;
                v96 = 0;
                v134 = 0;
                v135 = 0;
              }
              else
              {
                v95 = sub_16C47B0(v102 & 0xFFFFFFFFFFFFFFF8LL);
                v106 = nullptr;
                v96 = v95;
                v136 = (_QWORD *)(v103 | (*(_BYTE *)(v95 + 29) >> 5) & 3);
                v97 = *(_BYTE *)(v95 + 28) & 0x7F;
                if ( v97 == 71 )
                {
                  v98 = *(_QWORD *)(v96 + 48);
                  v106 = (__int64 *)v96;
                  v96 = v98;
                  v97 = *(_BYTE *)(v98 + 28) & 0x7F;
                }
                if ( v97 != 38 )
                  v96 = 0;
                v107 = v96;
                v137 = _mm_loadh_ps((const double *)&v106);
                si128 = _mm_load_si128((const __m128i *)&v136);
                v135 = v137.m128_u64[1];
                v134 = si128;
              }
              v100 = sub_16C47B0(v103);
              v101 = *(_BYTE *)(v100 + 28) & 0x7F;
              if ( (unsigned int)v101 - 35 > 3 )
              {
                if ( v101 == 71 )
                {
                  if ( v108 <= 1 )
                  {
                    v124 = (__int64)v113;
                    v125 = v109;
                    *((_QWORD *)&v105 + 1) = v113;
                    *(_QWORD *)&v105 = v115;
                    sub_1BF07D0((_DWORD)a1, v100, v130, v127[0], 0, v123, v105, v109, (__int64)&v144, 1, 0, 0);
                  }
                  else if ( v96 )
                  {
                    sub_1BF2330(
                      (_DWORD)a1,
                      (_DWORD)v106,
                      v134.m128i_i32[0],
                      0,
                      (_DWORD)v113,
                      v109,
                      (__int64)&v144,
                      1,
                      0,
                      1,
                      0,
                      0,
                      0);
                  }
                  else
                  {
                    sub_1BF2330((_DWORD)a1, v100, v130, 0, (_DWORD)v113, v109, (__int64)&v144, 1, 0, 1, 0, 0, 0);
                  }
                }
              }
              else if ( v108 <= 1 )
              {
                v118 = 0;
                v116 = (__int64)v113;
                v119 = 0;
                v117 = v109;
                sub_1BEF9D0(
                  (_DWORD)a1,
                  v100,
                  v130,
                  v127[0],
                  v123,
                  v115,
                  (__int64)v113,
                  v109,
                  (__int64)&v144,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              else if ( v96 )
              {
                v111 = 0;
                v112 = 0;
                sub_1BF10B0(
                  (_DWORD)a1,
                  v96,
                  v134.m128i_i32[0],
                  (_DWORD)v113,
                  v109,
                  (unsigned int)&v144,
                  1,
                  0,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              else
              {
                v120 = 0;
                v121 = 0;
                sub_1BF10B0(
                  (_DWORD)a1,
                  v100,
                  v130,
                  (_DWORD)v113,
                  v109,
                  (unsigned int)&v144,
                  1,
                  0,
                  1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
            }
            v93 += 8;
          }
          while ( v94 != v93 );
          p_ptr = v126;
        }
        v104 = sub_1BF27B0(&v144, a1, v114, &v136);
        if ( v104 == 1 )
        {
          v110[19] &= 1uLL;
        }
        else if ( v104 )
        {
          if ( v104 == 2 )
          {
            v106 = (__int64 *)v110[19];
            v110[19] = (unsigned __int8)v106 & 1 | 2LL;
          }
          else if ( v104 == 3 )
          {
            v106 = (__int64 *)v110[19];
            v110[19] = *v136 & 0xFFFFFFFFFFFFFFF9LL | (unsigned __int8)v106 & 1;
          }
        }
        else
        {
          v106 = (__int64 *)v110[19];
          v110[19] = *v136 & 0xFFFFFFFFFFFFFFF9LL | (unsigned __int8)v106 & 1 | 4;
        }
        v16 = v110[19];
        if ( v138 != v122 + 2 )
          free(v138);
      }
      else
      {
        v52 = v110;
        v110[19] &= 1uLL;
        v16 = v52[19];
      }
      sub_1BD27A0(&v144);
      v53 = (char *)v155;
      v54 = (char *)v155 + 8 * (unsigned int)v156;
      if ( v155 != v54 )
      {
        for ( i = v155; ; i = v155 )
        {
          v56 = 0x40000000000LL;
          v57 = (unsigned int)((v53 - i) >> 3) >> 7;
          if ( v57 <= 0x1D )
            v56 = 4096LL << v57;
          v58 = *(_QWORD *)v53;
          v53 += 8;
          operator delete(v58, v56, 16);
          if ( v54 == v53 )
            break;
        }
      }
      v59 = v158;
      v60 = &v158[2 * (unsigned int)v159];
      if ( v158 != v60 )
      {
        do
        {
          v61 = v59[1];
          v62 = *v59;
          v59 += 2;
          operator delete(v62, v61, 16);
        }
        while ( v60 != v59 );
        v60 = v158;
      }
      if ( v60 != v160 )
        free(v60);
      if ( v155 != v157 )
        free(v155);
      if ( !v150 )
        free(v147);
      v106 = v144;
      v63 = &v144[21 * (unsigned int)v145];
      if ( v144 != v63 )
      {
        do
        {
          while ( 1 )
          {
            v63 -= 21;
            v64 = (_QWORD *)v63[8];
            v65 = (_QWORD *)v63[9];
            v66 = v64;
            if ( v65 != v64 )
            {
              do
              {
                while ( 1 )
                {
                  v67 = (char *)v66[3];
                  if ( v67 == (char *)(v66 + 5) )
                    break;
                  operator delete(v67);
                  v66 += 8;
                  if ( v65 == v66 )
                    goto LABEL_53;
                }
                v66 += 8;
              }
              while ( v65 != v66 );
LABEL_53:
              v64 = (_QWORD *)v63[8];
            }
            if ( !v64 )
              break;
            operator delete(v64);
            if ( v106 == v63 )
              goto LABEL_56;
          }
        }
        while ( v106 != v63 );
LABEL_56:
        v63 = v144;
      }
      if ( v63 != v146 )
        free(v63);
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v16;
}
