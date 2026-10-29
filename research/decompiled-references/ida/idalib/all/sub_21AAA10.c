__int64 *__fastcall sub_21AAA10(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // rsi
  __int64 v9; // rsi
  _BYTE *v10; // rcx
  _BYTE *v11; // r8
  _BYTE *v12; // r14
  _BYTE *v13; // r12
  char v14; // al
  char *v15; // rsi
  unsigned int v16; // r12d
  unsigned __int8 *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebp
  bool v23; // r13
  char *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rsi
  char v29; // al
  const __m128i *v30; // rbp
  __int64 v31; // rax
  void *v32; // rdx
  void *v33; // rax
  const void *v34; // r13
  _BYTE *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // r8
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbp
  void *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rbp
  char *v46; // rax
  _QWORD *v47; // rdi
  unsigned int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rsi
  const __m128i *v53; // rsi
  __int8 *v54; // rcx
  const __m128i *v55; // rsi
  __int8 *v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdi
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  void *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rdx
  void **v67; // rax
  unsigned int v68; // r9d
  void **v69; // r8
  void **v70; // rcx
  unsigned int v71; // eax
  char *v72; // rsi
  char *v73; // rsi
  const char *v74; // rax
  const __m128i *v75; // rdx
  const __m128i *v76; // rsi
  __int64 v77; // rbx
  void *v78; // rax
  void *v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rsi
  bool v83; // zf
  void *v84; // rax
  void *v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rsi
  void *v89; // rax
  void *v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int32 v92; // eax
  char **v93; // r14
  unsigned __int32 v94; // ebp
  __int64 v95; // rax
  char *v96; // rsi
  __int64 v97; // rsi
  unsigned __int64 v98; // rcx
  void **v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  void *v109; // rax
  void *v110; // rdx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rsi
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rdx
  void *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rdx
  void *v119; // rdx
  void *v120; // rdx
  void *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 *v127; // [rsp+8h] [rbp-3C0h] BYREF
  void **v128; // [rsp+10h] [rbp-3B8h]
  __int64 v129; // [rsp+18h] [rbp-3B0h]
  char **v130; // [rsp+20h] [rbp-3A8h]
  void **v131; // [rsp+28h] [rbp-3A0h]
  unsigned __int64 v132; // [rsp+38h] [rbp-390h] BYREF
  __int8 *v133; // [rsp+40h] [rbp-388h] BYREF
  __int8 *v134; // [rsp+48h] [rbp-380h] BYREF
  void **v135; // [rsp+50h] [rbp-378h] BYREF
  unsigned __int64 v136; // [rsp+58h] [rbp-370h] BYREF
  void *ptr; // [rsp+60h] [rbp-368h] BYREF
  __m128i si128; // [rsp+68h] [rbp-360h]
  void *v139[2]; // [rsp+80h] [rbp-348h] BYREF
  void *v140; // [rsp+90h] [rbp-338h]
  void *v141[2]; // [rsp+A0h] [rbp-328h] BYREF
  void *v142; // [rsp+B0h] [rbp-318h]
  void *v143[2]; // [rsp+C0h] [rbp-308h] BYREF
  void *v144; // [rsp+D0h] [rbp-2F8h]
  void *v145[2]; // [rsp+E0h] [rbp-2E8h] BYREF
  void *v146; // [rsp+F0h] [rbp-2D8h]
  __m128i v147; // [rsp+100h] [rbp-2C8h] BYREF
  void *v148; // [rsp+110h] [rbp-2B8h]
  void *v149; // [rsp+118h] [rbp-2B0h]
  __int16 v150; // [rsp+120h] [rbp-2A8h]
  __m128i v151[2]; // [rsp+130h] [rbp-298h] BYREF
  __int16 v152; // [rsp+150h] [rbp-278h]
  __m128i v153[3]; // [rsp+160h] [rbp-268h] BYREF
  __m128i v154[2]; // [rsp+190h] [rbp-238h] BYREF
  __int16 v155; // [rsp+1B0h] [rbp-218h]
  __m128i v156[3]; // [rsp+1C0h] [rbp-208h] BYREF
  __m128i v157[2]; // [rsp+1F0h] [rbp-1D8h] BYREF
  __int16 v158; // [rsp+210h] [rbp-1B8h]
  __m128i v159[3]; // [rsp+220h] [rbp-1A8h] BYREF
  __m128i v160[2]; // [rsp+250h] [rbp-178h] BYREF
  __int16 v161; // [rsp+270h] [rbp-158h]
  __m128i v162[2]; // [rsp+280h] [rbp-148h] BYREF
  __int16 v163; // [rsp+2A0h] [rbp-128h]
  __m128i v164[2]; // [rsp+2B0h] [rbp-118h] BYREF
  __int16 v165; // [rsp+2D0h] [rbp-F8h]
  __m128i v166[3]; // [rsp+2E0h] [rbp-E8h] BYREF
  void *src[2]; // [rsp+310h] [rbp-B8h] BYREF
  unsigned __int8 v168; // [rsp+320h] [rbp-A8h] BYREF
  int v169; // [rsp+324h] [rbp-A4h]
  __m128i v170; // [rsp+328h] [rbp-A0h] BYREF
  char v171; // [rsp+338h] [rbp-90h]
  __m128i v172; // [rsp+340h] [rbp-88h] BYREF
  __m128i v173; // [rsp+350h] [rbp-78h] BYREF
  __m128i v174; // [rsp+360h] [rbp-68h] BYREF
  unsigned int v175; // [rsp+370h] [rbp-58h] BYREF
  __m128 v176; // [rsp+378h] [rbp-50h]

  v5 = sub_21A2A40(a3);
  v6 = *(_QWORD *)(a2 + 560);
  v7 = v5;
  v129 = a2 + 560;
  if ( *(_QWORD *)(a2 + 568) != v6 )
    *(_QWORD *)(a2 + 568) = v6;
  sub_21A4580((const __m128i **)(a2 + 560), v5);
  v8 = (__int64)(*(_QWORD *)(a2 + 432) - *(_QWORD *)(a2 + 424)) >> 4;
  ptr = nullptr;
  v140 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  *(_OWORD *)v139 = 0;
  *(_OWORD *)v141 = 0;
  *(_OWORD *)v143 = 0;
  *(_OWORD *)v145 = 0;
  v142 = nullptr;
  v144 = nullptr;
  v146 = nullptr;
  sub_21A46C0((__int64)v139, 0xCCCCCCCCCCCCCCCDLL * v8);
  sub_21A46C0((__int64)v141, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a2 + 432) - *(_QWORD *)(a2 + 424)) >> 4));
  v9 = (__int64)(*(_QWORD *)(a2 + 432) - *(_QWORD *)(a2 + 424)) >> 4;
  v128 = v143;
  sub_21A46C0((__int64)v143, 0xCCCCCCCCCCCCCCCDLL * v9);
  sub_21A46C0((__int64)v145, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a2 + 432) - *(_QWORD *)(a2 + 424)) >> 4));
  v10 = *(_BYTE **)(a2 + 424);
  v11 = *(_BYTE **)(a2 + 432);
  v127 = (__int64 *)src;
  if ( v10 != v11 )
  {
    v131 = v145;
    v12 = v11;
    v130 = (char **)v139;
    v13 = v10;
    while ( 1 )
    {
      v14 = v13[32];
      if ( v14 )
        break;
      src[0] = v13;
      v15 = (char *)v141[1];
      if ( v141[1] == v142 )
      {
        sub_21A56F0((__int64)v141, v141[1], v127);
LABEL_8:
        v13 += 80;
        if ( v13 == v12 )
          goto LABEL_12;
      }
      else
      {
        *(_QWORD *)v141[1] = v13;
        v13 += 80;
        v141[1] = v15 + 8;
        if ( v13 == v12 )
          goto LABEL_12;
      }
    }
    switch ( v14 )
    {
      case 3:
        src[0] = v13;
        v24 = (char *)v139[1];
        if ( v139[1] == v140 )
        {
          sub_21A56F0((__int64)v130, v139[1], v127);
        }
        else
        {
          *(_QWORD *)v139[1] = v13;
          v139[1] = v24 + 8;
        }
        break;
      case 4:
        src[0] = v13;
        v72 = (char *)v143[1];
        if ( v143[1] == v144 )
        {
          sub_21A56F0((__int64)v128, v143[1], v127);
        }
        else
        {
          *(_QWORD *)v143[1] = v13;
          v143[1] = v72 + 8;
        }
        break;
      case 1:
        src[0] = v13;
        v73 = (char *)v145[1];
        if ( v145[1] == v146 )
        {
          sub_21A56F0((__int64)v131, v145[1], v127);
        }
        else
        {
          *(_QWORD *)v145[1] = v13;
          v145[1] = v73 + 8;
        }
        break;
    }
    goto LABEL_8;
  }
LABEL_12:
  v16 = v7 - 1;
  if ( !v7 )
  {
LABEL_116:
    *a1 = 0;
    goto LABEL_29;
  }
  v171 = 0;
  v130 = (char **)(a3 + 8);
  v17 = *(unsigned __int8 **)(a3 + 8);
  src[0] = nullptr;
  src[1] = nullptr;
  v173.m128i_i8[0] = 0;
  v174.m128i_i8[8] = 0;
  v132 = 0;
  v133 = nullptr;
  v134 = nullptr;
  if ( v17 == *(unsigned __int8 **)(a3 + 16) )
LABEL_58:
    sub_21A2960();
  while ( 2 )
  {
    *(_QWORD *)(a3 + 8) = v17 + 1;
    v168 = *v17;
    v18 = sub_21A2A40(a3);
    v169 = v18;
    v22 = v18 & 0x10;
    v23 = v22 == 0;
    switch ( v168 )
    {
      case 0u:
        v64 = sub_21A2A40(a3);
        v65 = *(unsigned int *)(a2 + 680);
        v66 = *(_QWORD *)(a2 + 544) - *(_QWORD *)(a2 + 536);
        v175 = v64;
        if ( v64 >= (unsigned __int64)(v65 + (v66 >> 7)) || v23 != v64 >= (unsigned int)v65 )
        {
          sub_21A2C10(v166[0].m128i_i64, "invalid function symbol index");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        if ( !v22 )
        {
          v109 = (void *)sub_21A2A80(a3);
          v111 = *(_QWORD *)(a2 + 536) + ((unsigned __int64)(v175 - *(_DWORD *)(a2 + 680)) << 7);
          src[0] = v109;
          v112 = v111;
          v113 = *(unsigned int *)(v111 + 4);
          src[1] = v110;
          v83 = *(_QWORD *)(v112 + 96) == 0;
          v132 = *(_QWORD *)(a2 + 304) + (v113 << 6);
          if ( !v83 )
            goto LABEL_68;
          *(_QWORD *)(v112 + 88) = v109;
          v29 = v169;
          *(_QWORD *)(v112 + 96) = v110;
          goto LABEL_25;
        }
        v30 = *((const __m128i **)v141[0] + v64);
        v29 = v169;
        if ( (v169 & 0x40) == 0 )
          goto LABEL_73;
        src[0] = (void *)sub_21A2A80(a3);
        src[1] = v116;
        if ( !v173.m128i_i8[0] )
          goto LABEL_108;
        goto LABEL_107;
      case 1u:
        src[0] = (void *)sub_21A2A80(a3);
        src[1] = v63;
        if ( v22 )
          goto LABEL_68;
        v92 = sub_21A2A40(a3);
        v93 = v130;
        v94 = v92;
        v95 = sub_21A29A0(v130, *(char **)(a3 + 16));
        v96 = *(char **)(a3 + 16);
        v135 = (void **)v95;
        v127 = (__int64 *)sub_21A29A0(v93, v96);
        v29 = v169;
        if ( (v169 & 0x200) != 0 )
        {
          v99 = v135;
        }
        else
        {
          v97 = *(_QWORD *)(a2 + 496);
          v19 = v94;
          if ( v94 >= (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(a2 + 504) - v97) >> 3)) )
          {
            v162[0].m128i_i32[0] = v94;
            v74 = "invalid data segment index: ";
            v163 = 265;
LABEL_86:
            v164[0].m128i_i64[0] = (__int64)v74;
            v75 = v162;
            v165 = 259;
            v76 = v164;
            goto LABEL_87;
          }
          v98 = *(_QWORD *)(v97 + 104LL * v94 + 64);
          v99 = v135;
          v136 = v98;
          if ( (unsigned __int64)v135 > v98 )
          {
            v164[0].m128i_i64[0] = (__int64)")";
            v160[0].m128i_i64[0] = (__int64)&v136;
            v157[0].m128i_i64[0] = (__int64)" segment size: ";
            v154[0].m128i_i64[0] = (__int64)&v135;
            v151[0].m128i_i64[0] = (__int64)"` (offset: ";
            v147.m128i_i64[0] = (__int64)"invalid data symbol offset: `";
            v150 = 1283;
            v148 = src[0];
            v152 = 259;
            v165 = 259;
            v161 = 267;
            v158 = 259;
            v155 = 267;
            v149 = src[1];
            sub_A41580(v153, &v147, v151, v98, 259, 267);
            sub_A41580(v156, v153, v154, v100, v101, v102);
            sub_A41580(v159, v156, v157, v103, v104, v105);
            sub_A41580(v162, v159, v160, v106, v107, v108);
            v75 = v164;
            v76 = v162;
LABEL_87:
            sub_A41580(v166, v76, v75, v19, v20, v21);
            v77 = operator new(0x38u);
            sub_2195A00(v77, (__int64)v166, 3);
            *a1 = v77;
            goto LABEL_29;
          }
        }
        v128 = v99;
        v175 = v94;
        v176 = _mm_loadh_ps((const double *)&v127);
        goto LABEL_25;
      case 2u:
        v49 = sub_21A2A40(a3);
        v50 = (__int64)(*(_QWORD *)(a2 + 384) - *(_QWORD *)(a2 + 376)) >> 3;
        v51 = *(_DWORD *)(a2 + 672);
        v52 = v49;
        v175 = v49;
        if ( v49 >= (unsigned __int64)v51 - 0x71C71C71C71C71C7LL * v50 || v23 != v49 >= v51 )
        {
          sub_21A2C10(v166[0].m128i_i64, "invalid global symbol index");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        if ( !v22 )
        {
          v84 = (void *)sub_21A2A80(a3);
          v86 = *(_QWORD *)(a2 + 376);
          v87 = v175 - *(_DWORD *)(a2 + 672);
          src[0] = v84;
          src[1] = v85;
          v88 = v86 + 72 * v87;
          v83 = *(_QWORD *)(v88 + 56) == 0;
          v133 = (__int8 *)(v88 + 4);
          if ( !v83 )
            goto LABEL_68;
          *(_QWORD *)(v88 + 48) = v84;
          v29 = v169;
          *(_QWORD *)(v88 + 56) = v85;
          goto LABEL_25;
        }
        v29 = v169;
        if ( (v169 & 3) == 1 )
        {
LABEL_123:
          sub_21A2C10(v166[0].m128i_i64, "undefined weak global symbol");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        v30 = *((const __m128i **)v139[0] + v52);
        if ( (v169 & 0x40) != 0 )
        {
          src[0] = (void *)sub_21A2A80(a3);
          src[1] = v119;
          if ( v173.m128i_i8[0] )
          {
            v29 = v169;
            v172 = _mm_loadu_si128(v30 + 1);
          }
          else
          {
            v122 = v30[1].m128i_i64[1];
            v123 = v30[1].m128i_i64[0];
            v173.m128i_i8[0] = 1;
            v172.m128i_i64[1] = v122;
            v29 = v169;
            v172.m128i_i64[0] = v123;
          }
        }
        else
        {
          *(__m128i *)src = _mm_loadu_si128(v30 + 1);
        }
        v133 = &v30[2].m128i_i8[8];
        if ( !v171 )
          goto LABEL_100;
        v170 = _mm_loadu_si128(v30);
        if ( (v29 & 3) != 2 )
          goto LABEL_26;
        goto LABEL_54;
      case 3u:
        if ( (v18 & 3) != 2 )
        {
          sub_21A2C10(v166[0].m128i_i64, "section symbols must have local binding");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        v175 = sub_21A2A40(a3);
        v31 = *(_QWORD *)(a2 + 72) + 80LL * v175;
        v32 = *(void **)(v31 + 16);
        v33 = *(void **)(v31 + 8);
        src[1] = v32;
        src[0] = v33;
        v29 = v169;
        goto LABEL_25;
      case 4u:
        v25 = sub_21A2A40(a3);
        v26 = (__int64)(*(_QWORD *)(a2 + 408) - *(_QWORD *)(a2 + 400)) >> 3;
        v27 = *(_DWORD *)(a2 + 684);
        v28 = v25;
        v175 = v25;
        if ( v25 >= (unsigned __int64)v27 - 0x5555555555555555LL * v26 || v23 != v25 >= v27 )
        {
          sub_21A2C10(v166[0].m128i_i64, "invalid tag symbol index");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        if ( !v22 )
        {
          v78 = (void *)sub_21A2A80(a3);
          v80 = *(_QWORD *)(a2 + 400);
          v81 = v175 - *(_DWORD *)(a2 + 684);
          src[0] = v78;
          src[1] = v79;
          v82 = v80 + 24 * v81;
          v83 = *(_QWORD *)(v82 + 16) == 0;
          v132 = *(_QWORD *)(a2 + 304) + ((unsigned __int64)*(unsigned int *)(v82 + 4) << 6);
          if ( !v83 )
            goto LABEL_68;
          *(_QWORD *)(v82 + 8) = v78;
          v29 = v169;
          *(_QWORD *)(v82 + 16) = v79;
          goto LABEL_25;
        }
        v29 = v169;
        if ( (v169 & 3) == 1 )
          goto LABEL_123;
        v30 = *((const __m128i **)v143[0] + v28);
        if ( (v169 & 0x40) != 0 )
        {
          src[0] = (void *)sub_21A2A80(a3);
          src[1] = v121;
          if ( v173.m128i_i8[0] )
          {
LABEL_107:
            v29 = v169;
            v172 = _mm_loadu_si128(v30 + 1);
          }
          else
          {
LABEL_108:
            v117 = v30[1].m128i_i64[1];
            v118 = v30[1].m128i_i64[0];
            v173.m128i_i8[0] = 1;
            v172.m128i_i64[1] = v117;
            v29 = v169;
            v172.m128i_i64[0] = v118;
          }
        }
        else
        {
LABEL_73:
          *(__m128i *)src = _mm_loadu_si128(v30 + 1);
        }
        v132 = *(_QWORD *)(a2 + 304) + ((unsigned __int64)v30[2].m128i_u32[2] << 6);
        if ( !v171 )
          goto LABEL_100;
        goto LABEL_66;
      case 5u:
        v59 = sub_21A2A40(a3);
        v60 = *(unsigned int *)(a2 + 676);
        v61 = *(_QWORD *)(a2 + 336) - *(_QWORD *)(a2 + 328);
        v62 = v59;
        v175 = v59;
        if ( v59 >= (unsigned __int64)(v60 + (v61 >> 6)) || v23 != v59 >= (unsigned int)v60 )
        {
          sub_21A2C10(v166[0].m128i_i64, "invalid table symbol index");
          *a1 = v166[0].m128i_i64[0];
          goto LABEL_29;
        }
        if ( !v22 )
        {
          v89 = (void *)sub_21A2A80(a3);
          v91 = *(_QWORD *)(a2 + 328) + ((unsigned __int64)(v175 - *(_DWORD *)(a2 + 676)) << 6);
          src[0] = v89;
          src[1] = v90;
          v83 = *(_QWORD *)(v91 + 56) == 0;
          v134 = (__int8 *)(v91 + 8);
          if ( v83 )
          {
            *(_QWORD *)(v91 + 48) = v89;
            v29 = v169;
            *(_QWORD *)(v91 + 56) = v90;
          }
          else
          {
LABEL_68:
            v29 = v169;
          }
          goto LABEL_25;
        }
        v29 = v169;
        if ( (v169 & 3) != 1 )
        {
          v30 = *((const __m128i **)v145[0] + v62);
          if ( (v169 & 0x40) != 0 )
          {
            src[0] = (void *)sub_21A2A80(a3);
            src[1] = v120;
            if ( v173.m128i_i8[0] )
            {
              v29 = v169;
              v172 = _mm_loadu_si128(v30 + 1);
            }
            else
            {
              v124 = v30[1].m128i_i64[1];
              v125 = v30[1].m128i_i64[0];
              v173.m128i_i8[0] = 1;
              v172.m128i_i64[1] = v124;
              v29 = v169;
              v172.m128i_i64[0] = v125;
            }
          }
          else
          {
            *(__m128i *)src = _mm_loadu_si128(v30 + 1);
          }
          v134 = &v30[2].m128i_i8[8];
          if ( v171 )
          {
LABEL_66:
            v170 = _mm_loadu_si128(v30);
          }
          else
          {
LABEL_100:
            v114 = v30->m128i_i64[0];
            v115 = v30->m128i_i64[1];
            v171 = 1;
            v170.m128i_i64[0] = v114;
            v170.m128i_i64[1] = v115;
          }
LABEL_25:
          if ( (v29 & 3) == 2 )
          {
LABEL_54:
            v53 = *(const __m128i **)(a2 + 568);
            if ( v53 == *(const __m128i **)(a2 + 576) )
              goto LABEL_80;
          }
          else
          {
LABEL_26:
            v34 = src[0];
            v35 = src[1];
            v36 = sub_2244B30(src[0], src[1]);
            v37 = (unsigned int)sub_2244CB0(&ptr, v34, v35, v36);
            v39 = (__int64 *)((char *)ptr + 8 * v37);
            if ( *v39 )
            {
              if ( *v39 != -8 )
              {
                sub_A45C10((__int64 **)v166, v39, 0);
                v163 = 261;
                v162[0] = *(__m128i *)src;
                v165 = 259;
                v164[0].m128i_i64[0] = (__int64)"duplicate symbol name ";
                sub_A41580(v166, v164, v162, 259, v40, v41);
                v42 = operator new(0x38u);
                sub_2195A00(v42, (__int64)v166, 3);
                *a1 = v42;
                goto LABEL_29;
              }
              --si128.m128i_i32[2];
            }
            v128 = (void **)((char *)ptr + 8 * v37);
            LODWORD(v127) = v37;
            v67 = (void **)sub_22300B0(v35 + 9, 8, v37, v38, v39, v37);
            v68 = (unsigned int)v127;
            v69 = v128;
            v70 = v67;
            if ( v35 )
            {
              v131 = v128;
              v128 = v67;
              memcpy(v67 + 1, v34, (size_t)v35);
              v69 = v131;
              v70 = v128;
              v68 = (unsigned int)v127;
            }
            v35[(_QWORD)v70 + 8] = 0;
            *v70 = v35;
            *v69 = v70;
            ++si128.m128i_i32[1];
            v71 = sub_22450D0(&ptr, v68);
            sub_A45C10((__int64 **)v166, (__int64 *)ptr + v71, 0);
            v53 = *(const __m128i **)(a2 + 568);
            if ( v53 == *(const __m128i **)(a2 + 576) )
            {
LABEL_80:
              sub_21A5310(v129, v53, (const __m128i *)src, &v133, &v134, &v132);
              goto LABEL_56;
            }
          }
          v54 = v133;
          v55 = v53 + 9;
          v56 = v134;
          v57 = v132;
          v55[-9] = _mm_load_si128((const __m128i *)src);
          v55[-8] = _mm_load_si128((const __m128i *)&v168);
          v55[-7] = _mm_load_si128((const __m128i *)&v170.m128i_u64[1]);
          v55[-6] = _mm_load_si128(&v172);
          v55[-5] = _mm_load_si128(&v173);
          v55[-4] = _mm_load_si128(&v174);
          v55[-3] = _mm_load_si128((const __m128i *)&v175);
          v58 = v176.m128_u64[1];
          v55[-2].m128i_i64[1] = (__int64)v54;
          v55[-2].m128i_i64[0] = v58;
          v55[-1].m128i_i64[0] = (__int64)v56;
          v55[-1].m128i_i64[1] = v57;
          *(_QWORD *)(a2 + 568) = v55;
LABEL_56:
          if ( --v16 == -1 )
            goto LABEL_116;
          src[0] = nullptr;
          v17 = *(unsigned __int8 **)(a3 + 8);
          src[1] = nullptr;
          v171 = 0;
          v173.m128i_i8[0] = 0;
          v174.m128i_i8[8] = 0;
          v132 = 0;
          v133 = nullptr;
          v134 = nullptr;
          if ( v17 == *(unsigned __int8 **)(a3 + 16) )
            goto LABEL_58;
          continue;
        }
        sub_21A2C10(v166[0].m128i_i64, "undefined weak table symbol");
        *a1 = v166[0].m128i_i64[0];
LABEL_29:
        if ( v145[0] )
          operator delete(v145[0]);
        if ( v143[0] )
          operator delete(v143[0]);
        if ( v141[0] )
          operator delete(v141[0]);
        if ( v139[0] )
          operator delete(v139[0]);
        v43 = ptr;
        if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
        {
          v44 = 0;
          v45 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
          v46 = (char *)ptr;
          do
          {
            v47 = *(_QWORD **)&v46[v44];
            if ( v47 && v47 != (_QWORD *)-8LL )
            {
              operator delete(v47, *v47 + 9LL, 8);
              v46 = (char *)ptr;
            }
            v44 += 8;
          }
          while ( v44 != v45 );
          v43 = v46;
        }
        free(v43);
        return a1;
      default:
        v162[0].m128i_i32[0] = v168;
        v74 = "invalid symbol type: ";
        v163 = 265;
        goto LABEL_86;
    }
  }
}
