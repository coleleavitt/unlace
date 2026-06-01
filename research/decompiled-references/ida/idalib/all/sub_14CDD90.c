__int64 __fastcall sub_14CDD90(__int64 a1, __m128i a2, __m128 a3)
{
  _BYTE *v4; // rbp
  unsigned int v5; // eax
  bool v6; // zf
  char v7; // al
  __int64 v8; // r12
  _BYTE *v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int16 v13; // ax
  unsigned int v14; // r13d
  unsigned __int64 v15; // r15
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r15
  int v27; // r13d
  size_t v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  size_t v32; // rax
  size_t v33; // rax
  void *v34; // rax
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  int v38; // edx
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  __int64 *v42; // rdi
  __int16 v43; // ax
  __int64 *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  void *v47; // rax
  __m128i v48; // xmm4
  __m128i v49; // xmm5
  __m128i v50; // xmm6
  int v51; // edx
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  __int64 *v55; // rdi
  __int64 v56; // rdi
  unsigned int v57; // r13d
  __int16 v58; // ax
  __int64 v59; // rdx
  unsigned int v60; // eax
  int v61; // eax
  __int64 *v62; // rdi
  __int64 *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // r15
  __int64 v69; // r9
  char *v70; // r13
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // rdx
  char *v75; // r13
  __int64 v76; // rax
  void **v77; // rbx
  __int16 v78; // ax
  unsigned int v79; // r13d
  size_t v80; // rax
  __int64 v81; // r10
  __int64 v82; // rdx
  unsigned int v83; // eax
  int v84; // eax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // edx
  __int64 *v89; // rdi
  __int64 v90; // r13
  _BYTE *v91; // r13
  _BYTE *v92; // rbp
  _BYTE *v93; // rdi
  __int64 *v94; // rdi
  unsigned __int64 v95; // rax
  __int64 v96; // rax
  unsigned int v97; // ebx
  __int64 v98; // r15
  __int64 v99; // r8
  __int64 v100; // rax
  __int64 v101; // rdi
  __int16 v102; // ax
  unsigned __int64 v103; // rax
  __int64 *v104; // rdi
  __int64 *v105; // rdi
  __int64 v106; // rax
  int v107; // edx
  __int64 *v108; // rdi
  __int64 v109; // rax
  unsigned int v110; // [rsp+Ch] [rbp-3BCh]
  int *v111; // [rsp+10h] [rbp-3B8h]
  __int64 v112; // [rsp+30h] [rbp-398h]
  __int64 v113; // [rsp+30h] [rbp-398h]
  int v114[2]; // [rsp+38h] [rbp-390h]
  unsigned int v115; // [rsp+50h] [rbp-378h]
  __int64 v116; // [rsp+50h] [rbp-378h]
  __int64 v117; // [rsp+50h] [rbp-378h]
  __int64 v118; // [rsp+58h] [rbp-370h]
  __int64 v119; // [rsp+68h] [rbp-360h] BYREF
  void *ptr; // [rsp+70h] [rbp-358h] BYREF
  int v121[2]; // [rsp+78h] [rbp-350h]
  _BYTE v122[16]; // [rsp+80h] [rbp-348h] BYREF
  void *v123; // [rsp+90h] [rbp-338h] BYREF
  __int64 v124; // [rsp+98h] [rbp-330h]
  _BYTE v125[16]; // [rsp+A0h] [rbp-328h] BYREF
  _BYTE *v126; // [rsp+B0h] [rbp-318h] BYREF
  char v127; // [rsp+B8h] [rbp-310h]
  __int64 v128; // [rsp+C0h] [rbp-308h]
  int v129; // [rsp+C8h] [rbp-300h]
  __int16 v130; // [rsp+CCh] [rbp-2FCh]
  __int64 (__fastcall *v131)(__int64); // [rsp+D0h] [rbp-2F8h]
  __int64 v132; // [rsp+D8h] [rbp-2F0h]
  int v133[4]; // [rsp+E0h] [rbp-2E8h]
  char *v134; // [rsp+F0h] [rbp-2D8h] BYREF
  char v135; // [rsp+F8h] [rbp-2D0h]
  __int64 v136; // [rsp+100h] [rbp-2C8h]
  int v137; // [rsp+108h] [rbp-2C0h]
  __int16 v138; // [rsp+10Ch] [rbp-2BCh]
  __int64 (__fastcall *v139)(__int64); // [rsp+110h] [rbp-2B8h]
  __int64 v140; // [rsp+118h] [rbp-2B0h]
  int v141[2]; // [rsp+120h] [rbp-2A8h]
  _BYTE *v142; // [rsp+130h] [rbp-298h] BYREF
  char v143; // [rsp+138h] [rbp-290h]
  __int64 v144; // [rsp+140h] [rbp-288h]
  void *v145; // [rsp+148h] [rbp-280h]
  __int64 (__fastcall *v146)(__int64); // [rsp+150h] [rbp-278h]
  _QWORD v147[3]; // [rsp+158h] [rbp-270h] BYREF
  __int128 v148; // [rsp+170h] [rbp-258h] BYREF
  void *v149[2]; // [rsp+180h] [rbp-248h]
  _OWORD v150[3]; // [rsp+190h] [rbp-238h] BYREF
  void *v151[6]; // [rsp+1C0h] [rbp-208h] BYREF
  void *v152[2]; // [rsp+1F0h] [rbp-1D8h]
  int v153; // [rsp+200h] [rbp-1C8h] BYREF
  __int64 v154; // [rsp+208h] [rbp-1C0h]
  int v155; // [rsp+210h] [rbp-1B8h]
  __int16 v156; // [rsp+214h] [rbp-1B4h]
  char v157; // [rsp+216h] [rbp-1B2h]
  void *v158; // [rsp+220h] [rbp-1A8h] BYREF
  __int64 v159; // [rsp+228h] [rbp-1A0h] BYREF
  _BYTE *v160; // [rsp+230h] [rbp-198h] BYREF
  __int64 v161; // [rsp+238h] [rbp-190h]
  _BYTE v162[320]; // [rsp+240h] [rbp-188h] BYREF
  __int64 v163; // [rsp+380h] [rbp-48h]
  char v164; // [rsp+388h] [rbp-40h]

  v4 = (_BYTE *)(a1 + 1952);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v111 = (int *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_WORD *)(a1 + 32) == 22;
  *(_QWORD *)v121 = 0x200000000LL;
  v110 = v5;
  ptr = v122;
  LOBYTE(v5) = *(_BYTE *)(a1 + 1952);
  v126 = (_BYTE *)(a1 + 1952);
  v127 = v5;
  v131 = sub_146A990;
  v7 = 1;
  *(_BYTE *)(a1 + 1952) = 1;
  v128 = a1;
  v129 = 1507350;
  v130 = 63;
  v132 = 0;
  *(_QWORD *)v133 = 0;
  if ( v6 )
  {
    v63 = (__int64 *)a1;
    sub_146B5E0((__int64 *)&v142, a1, 0x108u, 1, 0);
    sub_149FA40((__int64)&v126);
    if ( *(_WORD *)(a1 + 32) != 23 )
    {
      v151[0] = nullptr;
      v151[2] = (void *)0x200000000LL;
      v151[1] = &v151[3];
      v151[5] = (void *)(a1 + 504);
      v152[0] = &v153;
      v158 = &v160;
      v152[1] = (void *)0x200000000LL;
      LODWORD(v134) = 0;
      v159 = 0x200000000LL;
      sub_149ADE0(a1, 0x1Au, (int *)v151, (__int64)&v158, (int *)&v134, 0, a2, a3);
      if ( (_DWORD)v134 )
      {
        sub_1564820(&v148, a1, (unsigned int)v134, 1882);
        sub_AEA040((__int64)&v148);
      }
      v68 = (char *)v158;
      v69 = 32LL * (unsigned int)v159;
      v70 = (char *)v158 + v69;
      if ( (char *)v158 + v69 != v158 )
      {
        v71 = v121[0];
        do
        {
          while ( 1 )
          {
            v72 = v71;
            v73 = *((_QWORD *)v68 + 2);
            v74 = v71 + 1LL;
            if ( v74 > (unsigned int)v121[1] )
              break;
            v68 += 32;
            *((_QWORD *)ptr + v72) = v73;
            v71 = ++v121[0];
            if ( v68 == v70 )
              goto LABEL_80;
          }
          v68 += 32;
          v113 = v73;
          sub_2237220(&ptr, v122, v74, 8);
          *((_QWORD *)ptr + (unsigned int)v121[0]) = v113;
          v71 = ++v121[0];
        }
        while ( v70 != v68 );
LABEL_80:
        v75 = (char *)v158;
        v76 = 32LL * (unsigned int)v159;
        v68 = (char *)v158 + v76;
        if ( v158 != (char *)v158 + v76 )
        {
          do
          {
            v68 -= 32;
            v77 = *((void ***)v68 + 3);
            if ( v77 )
            {
              if ( *v77 != v77 + 2 )
                free(*v77);
              operator delete(v77, 0x70u);
            }
          }
          while ( v75 != v68 );
          v68 = (char *)v158;
        }
      }
      if ( v68 != (char *)&v160 )
        free(v68);
      v63 = (__int64 *)&v151[5];
      sub_15DCED0(v151[5], &v151[5]);
      if ( v152[0] != &v153 )
        free(v152[0]);
      if ( v151[1] != &v151[3] )
        free(v151[1]);
    }
    sub_14808E0((__int64)&v126, v63, v64, v65, v66, v67);
    if ( v142 )
      sub_1564F70(v142);
    v7 = *(_BYTE *)(a1 + 1952);
  }
  *(_BYTE *)(a1 + 1952) = 1;
  v135 = v7;
  v138 = 63;
  v134 = (char *)(a1 + 1952);
  v136 = a1;
  v137 = 1638424;
  v139 = sub_1478A90;
  v140 = 0;
  *(_QWORD *)v141 = 0;
  if ( (unsigned __int8)sub_156A040(&v134, 14, &byte_22F0C30, 0) )
  {
    v8 = 1;
    goto LABEL_4;
  }
  v123 = v125;
  v124 = 0x200000000LL;
  v112 = *(_QWORD *)(a1 + 96);
  sub_18C74E0(v112, 0, 0, 4);
  sub_146B5E0(&v119, a1, 8u, 1, 0);
  v158 = *(void **)(a1 + 96);
  v159 = 0;
  v160 = v162;
  v11 = *((_QWORD *)v158 + 64);
  v161 = 0x400000000LL;
  *((_QWORD *)v158 + 64) = &v159;
  v12 = *(_QWORD *)(a1 + 96);
  v163 = v11;
  v164 = 0;
  *(_QWORD *)v114 = sub_19A4980(v12, v110, ptr, (unsigned int)v121[0], *(_QWORD *)(v12 + 608));
  v13 = *(_WORD *)(a1 + 32);
  if ( v13 == 25 )
  {
    v16 = (__int64 *)a1;
    sub_1564840(v151, a1, v111, 1597);
    sub_AEA040((__int64)v151);
    goto LABEL_120;
  }
  while ( 1 )
  {
    switch ( v13 )
    {
      case 24:
        v142 = v4;
        v21 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        v143 = v21;
        WORD2(v145) = 63;
        v144 = a1;
        LODWORD(v145) = 1638424;
        v146 = sub_1478A90;
        v147[0] = 0;
        v147[1] = 0;
        sub_149FA40((__int64)&v142);
        v26 = sub_14BFC10((const __m128i *)a1, 0, a2);
        if ( v26 > 1 )
        {
          if ( (unsigned __int8)sub_14808E0((__int64)&v142, nullptr, v22, v23, v24, v25) )
            goto LABEL_20;
          v78 = *(_WORD *)(a1 + 32);
          v79 = 0;
          if ( v78 == 164 )
          {
            v105 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v105, v111);
            v79 = *(_DWORD *)(a1 + 40);
            v78 = *(_WORD *)(a1 + 32);
          }
          if ( v78 == 63 )
          {
            v109 = sub_19A5B00(*(_QWORD *)(a1 + 96), v26 & 0xFFFFFFFFFFFFFFFELL, v79);
            if ( v109 )
              sub_14C6DB0((__int64)&v123, v109);
            goto LABEL_20;
          }
          if ( v78 == 37 )
          {
            v104 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v104, v111);
          }
          else
          {
            sub_1564840(v151, a1, v111, 1881);
            v80 = j__strlen("->");
            sub_9EC740((__int64)&v148, *(_DWORD *)(a1 + 16), "->", v80, 0);
            if ( (_DWORD)v148 && DWORD1(v148) )
              sub_14C6E00((__int64 *)v151, (unsigned __int64)&v148);
            if ( v149[1] != (char *)v150 + 8 )
              operator delete(v149[1]);
            sub_AEA040((__int64)v151);
          }
          if ( !(unsigned __int8)sub_15570E0(a1) )
          {
            if ( (unsigned __int8)sub_154E540(a1) )
            {
              a2 = 0;
              v6 = *(_WORD *)(a1 + 32) == 416;
              v81 = *(_QWORD *)(a1 + 96);
              memset(v151, 0, sizeof(v151));
              if ( v6 )
              {
                v82 = *(unsigned int *)(a1 + 20);
                v83 = *(_DWORD *)(a1 + 16);
                if ( !(_DWORD)v82 )
                  v82 = v83;
                sub_169D790(v81, *(_QWORD *)(a1 + 24), (v82 << 32) | v83, v151);
                v84 = *(_DWORD *)(a1 + 20);
                v85 = *(__int64 **)(a1 + 8);
                if ( !v84 )
                  v84 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 40) = v84;
                sub_14634E0(v85, v111);
                v81 = *(_QWORD *)(a1 + 96);
              }
              v118 = v81;
              v115 = *(_DWORD *)(a1 + 2548);
              v86 = sub_1565590(a1, v111);
              v87 = sub_19A73F0(v118, v26 & 0xFFFFFFFFFFFFFFFELL, v79, v151, v86, v115);
              v88 = *(_DWORD *)(a1 + 20);
              v89 = *(__int64 **)(a1 + 8);
              v90 = v87;
              if ( !v88 )
                v88 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 40) = v88;
              sub_14634E0(v89, v111);
              if ( v90 )
                sub_14C6DB0((__int64)&v123, v90);
              if ( HIDWORD(v151[3]) )
                free(v151[2]);
              goto LABEL_20;
            }
            sub_1564840(v151, a1, v111, 1878);
            sub_AEA040((__int64)v151);
          }
          LODWORD(v151[0]) = 1638463;
        }
        else
        {
          sub_156E210(&v142);
          LODWORD(v151[0]) = 1638463;
        }
        sub_15680D0(a1, v151, 2, 2);
LABEL_20:
        *v142 = v143;
        goto LABEL_14;
      case 176:
        v34 = *(void **)(a1 + 80);
        v35 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v151[0] = (void *)a1;
        v36 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v37 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v151[5] = v34;
        LODWORD(v34) = *(_DWORD *)(a1 + 32);
        v38 = *(_DWORD *)(a1 + 88);
        v39 = *(_QWORD *)(a1 + 8);
        *(__m128i *)&v151[1] = v35;
        v153 = (int)v34;
        v40 = *(unsigned int *)(a1 + 2712);
        *(__m128i *)&v151[3] = v36;
        v154 = v40;
        LOWORD(v40) = *(_WORD *)(a1 + 92);
        *(__m128i *)v152 = v37;
        v155 = v38;
        v156 = v40;
        sub_1418D30(v39, 0);
        v41 = *(_DWORD *)(a1 + 16);
        v42 = *(__int64 **)(a1 + 8);
        v157 = 1;
        *(_DWORD *)(a1 + 40) = v41;
        sub_14634E0(v42, v111);
        v43 = *(_WORD *)(a1 + 32);
        if ( v43 != 24 )
        {
          if ( v43 != 22 )
            goto LABEL_48;
          sub_146A990(a1);
          if ( (unsigned int)sub_1560FA0(a1, 0, 0, 0) == 1 )
            goto LABEL_48;
          v27 = 1;
          while ( 1 )
          {
            LODWORD(v148) = 1507350;
            if ( !(unsigned __int8)sub_15680D0(a1, &v148, 2, 2) )
            {
LABEL_23:
              if ( *(_WORD *)(a1 + 32) == 24 )
                break;
LABEL_48:
              sub_147B460((__int64)v151);
              v44 = *(__int64 **)(a1 + 8);
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v44, v111);
              v45 = sub_14C4A10((const __m128i *)a1, a2);
              if ( v45 > 1 )
              {
                v46 = sub_19A54E0(*(_QWORD *)(a1 + 96), v45 & 0xFFFFFFFFFFFFFFFELL);
                if ( v46 )
                {
                  sub_14C6DB0((__int64)&v123, v46);
                  goto LABEL_14;
                }
              }
LABEL_12:
              LODWORD(v151[0]) = 1638463;
LABEL_13:
              sub_15680D0(a1, v151, 2, 2);
              goto LABEL_14;
            }
            v102 = *(_WORD *)(a1 + 32);
            if ( v102 == 22 )
            {
              ++v27;
            }
            else
            {
              if ( v102 != 23 )
              {
                sub_149F520(a1, 0);
                continue;
              }
              --v27;
            }
            sub_149F520(a1, 0);
            if ( !v27 )
              goto LABEL_23;
          }
        }
        sub_147B460((__int64)v151);
        v14 = *(_DWORD *)(a1 + 16);
        v15 = sub_14BFC10((const __m128i *)a1, 0, a2);
        if ( v15 <= 1 )
          goto LABEL_12;
        sub_1564820(v151, a1, v14, 1880);
        v28 = j__strlen("requires");
        sub_9EC740((__int64)&v148, v14, "requires", v28, 0);
        if ( (_DWORD)v148 && DWORD1(v148) )
          sub_14C6E00((__int64 *)v151, (unsigned __int64)&v148);
        if ( v149[1] != (char *)v150 + 8 )
          operator delete(v149[1]);
        sub_AEA040((__int64)v151);
        goto LABEL_31;
      case 151:
        v47 = *(void **)(a1 + 80);
        v48 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v151[0] = (void *)a1;
        v49 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v50 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v151[5] = v47;
        LODWORD(v47) = *(_DWORD *)(a1 + 32);
        v51 = *(_DWORD *)(a1 + 88);
        v52 = *(_QWORD *)(a1 + 8);
        *(__m128i *)&v151[1] = v48;
        v153 = (int)v47;
        v53 = *(unsigned int *)(a1 + 2712);
        *(__m128i *)&v151[3] = v49;
        v154 = v53;
        LOWORD(v53) = *(_WORD *)(a1 + 92);
        *(__m128i *)v152 = v50;
        v155 = v51;
        v156 = v53;
        sub_1418D30(v52, 0);
        v54 = *(_DWORD *)(a1 + 16);
        v55 = *(__int64 **)(a1 + 8);
        v157 = 1;
        *(_DWORD *)(a1 + 40) = v54;
        sub_14634E0(v55, v111);
        v56 = *(_QWORD *)(a1 + 8);
        v57 = *(_DWORD *)(a1 + 40);
        v58 = *(_WORD *)(a1 + 32);
        if ( (*(_BYTE *)(*(_QWORD *)(v56 + 56) + 1LL) & 8) == 0 )
        {
LABEL_52:
          a2 = 0;
          v148 = 0;
          *(_OWORD *)v149 = 0;
          v150[0] = 0;
          if ( v58 == 416 )
          {
            v59 = *(unsigned int *)(a1 + 20);
            v60 = *(_DWORD *)(a1 + 16);
            if ( !(_DWORD)v59 )
              v59 = v60;
            sub_169D790(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 24), (v59 << 32) | v60, &v148);
            v61 = *(_DWORD *)(a1 + 20);
            v62 = *(__int64 **)(a1 + 8);
            if ( !v61 )
              v61 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v61;
            sub_14634E0(v62, v111);
            v58 = *(_WORD *)(a1 + 32);
          }
          if ( v58 != 418 && v58 != 5 )
            goto LABEL_60;
          v56 = *(_QWORD *)(a1 + 8);
LABEL_137:
          v95 = *(_QWORD *)(v56 + 2944);
          if ( v95 >= *(unsigned int *)(v56 + 2912) )
            v96 = sub_14180A0(v56, 1u);
          else
            v96 = *(_QWORD *)(v56 + 2904) + 24 * v95;
          if ( ((*(_WORD *)(v96 + 16) - 22) & 0xFFFD) == 0 )
          {
LABEL_60:
            sub_147B460((__int64)v151);
            if ( HIDWORD(v149[1]) )
              free(v149[0]);
            break;
          }
          sub_14C5EA0((__int64 *)v151);
          v97 = *(_DWORD *)(a1 + 16);
          if ( *(_WORD *)(a1 + 32) == 5 )
          {
            *(_DWORD *)(a1 + 40) = v97;
            v98 = 0;
            v116 = *(_QWORD *)(a1 + 24);
            sub_14634E0(*(__int64 **)(a1 + 8), v111);
            v99 = v116;
          }
          else
          {
            v106 = sub_1565590(a1, v111);
            v107 = *(_DWORD *)(a1 + 20);
            v108 = *(__int64 **)(a1 + 8);
            v98 = v106;
            if ( !v107 )
              v107 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v107;
            sub_14634E0(v108, v111);
            if ( !*(_DWORD *)(v98 + 32) || *(_BYTE *)(v98 + 48) )
              goto LABEL_144;
            v99 = 0;
          }
          v100 = sub_19A5130(*(_QWORD *)(a1 + 96), v57, &v148, v97, v99, v98);
          if ( v100 )
            sub_14C6DB0((__int64)&v123, v100);
LABEL_144:
          if ( HIDWORD(v149[1]) )
            free(v149[0]);
          goto LABEL_14;
        }
        if ( v58 != 72 && v58 != 5 )
        {
          if ( v58 != 418 )
          {
LABEL_69:
            if ( v58 != 329 && v58 != 163 )
              goto LABEL_52;
            goto LABEL_71;
          }
          v103 = *(_QWORD *)(v56 + 2944);
          if ( v103 < *(unsigned int *)(v56 + 2912) )
          {
            if ( *(_WORD *)(*(_QWORD *)(v56 + 2904) + 24 * v103 + 16) != 72 )
            {
              a2 = 0;
              v148 = 0;
              *(_OWORD *)v149 = 0;
              v150[0] = 0;
              goto LABEL_137;
            }
            goto LABEL_71;
          }
          if ( *(_WORD *)(sub_14180A0(v56, 1u) + 16) != 72 )
          {
            v58 = *(_WORD *)(a1 + 32);
            goto LABEL_69;
          }
        }
LABEL_71:
        if ( (unsigned __int8)sub_1566C80(a1, 0) )
        {
          sub_14C5EA0((__int64 *)v151);
          LODWORD(v148) = 1638463;
          sub_15680D0(a1, &v148, 2, 2);
          goto LABEL_14;
        }
        v58 = *(_WORD *)(a1 + 32);
        goto LABEL_52;
    }
    v14 = *(_DWORD *)(a1 + 16);
    v15 = sub_14BFC10((const __m128i *)a1, 0, a2);
    if ( v15 <= 1 )
      goto LABEL_12;
LABEL_31:
    v29 = sub_19A5B10(*(_QWORD *)(a1 + 96), v15 & 0xFFFFFFFFFFFFFFFELL);
    if ( !v29 )
    {
      LODWORD(v151[0]) = 1638463;
      goto LABEL_13;
    }
    v30 = (unsigned int)v124;
    v31 = (unsigned int)v124 + 1LL;
    if ( v31 > HIDWORD(v124) )
    {
      v117 = v29;
      sub_2237220(&v123, v125, v31, 8);
      v30 = (unsigned int)v124;
      v29 = v117;
    }
    *((_QWORD *)v123 + v30) = v29;
    LODWORD(v124) = v124 + 1;
    if ( *(_WORD *)(a1 + 32) == 164 )
    {
      sub_1564840(v151, a1, v111, 1883);
      v32 = j__strlen("{");
      sub_9EC740((__int64)&v142, v14, "{", v32, 0);
      if ( (_DWORD)v142 && HIDWORD(v142) )
        sub_14C6E00((__int64 *)v151, (unsigned __int64)&v142);
      v33 = j__strlen("}");
      sub_9EC740((__int64)&v148, *(_DWORD *)(a1 + 16), "}", v33, 0);
      if ( (_DWORD)v148 && DWORD1(v148) )
        sub_14C6E00((__int64 *)v151, (unsigned __int64)&v148);
      if ( v149[1] != (char *)v150 + 8 )
        operator delete(v149[1]);
      if ( v145 != v147 )
        operator delete(v145);
      sub_AEA040((__int64)v151);
      goto LABEL_12;
    }
LABEL_14:
    v16 = elf_gnu_hash_indexes + 970;
    if ( (unsigned __int8)sub_156A150(a1, 1650, &byte_22F0C30, 0) )
      break;
    v13 = *(_WORD *)(a1 + 32);
    if ( v13 == 25 )
      goto LABEL_119;
  }
  v16 = (__int64 *)v151;
  LODWORD(v151[0]) = 1638463;
  sub_15680D0(a1, v151, 2, 2);
  if ( *(_WORD *)(a1 + 32) == 63 )
  {
    v94 = *(__int64 **)(a1 + 8);
    v16 = (__int64 *)v111;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v94, v111);
  }
LABEL_119:
  if ( (_DWORD)v124 )
  {
LABEL_120:
    sub_14808E0((__int64)&v134, v16, v17, v18, v19, v20);
    sub_19A4BD0(*(_QWORD *)(a1 + 96));
    if ( !v164 )
    {
      sub_1818070(v158, v163, *(_QWORD *)v114);
      v164 = 1;
    }
    v8 = sub_19A4C10(
           *(_QWORD *)(a1 + 96),
           v110,
           v114[0],
           v133[0],
           (int)ptr,
           v121[0],
           v133[1],
           v123,
           (unsigned int)v124,
           v141[1]);
  }
  else
  {
    sub_14808E0((__int64)&v134, v16, v17, v18, v19, v20);
    v101 = *(_QWORD *)(a1 + 96);
    v8 = 1;
    sub_19A4BD0(v101);
  }
  if ( !v164 )
  {
    sub_1818070(v158, v163, 0);
    v164 = 1;
  }
  v91 = v160;
  v92 = &v160[80 * (unsigned int)v161];
  if ( v160 != v92 )
  {
    do
    {
      v93 = v91;
      v91 += 80;
      sub_15B6850(v93);
    }
    while ( v92 != v91 );
    v92 = v160;
  }
  if ( v92 != v162 )
    free(v92);
  if ( v119 )
    sub_1564F70(v119);
  sub_190D5E0(v112);
  if ( v123 != v125 )
    free(v123);
LABEL_4:
  v9 = ptr;
  *v134 = v135;
  *v126 = v127;
  if ( v9 != v122 )
    free(v9);
  return v8;
}
