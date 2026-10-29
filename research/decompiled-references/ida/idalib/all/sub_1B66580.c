unsigned __int64 __fastcall sub_1B66580(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, _DWORD *a4, double a5)
{
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // r13
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  char v13; // dl
  __int64 *v14; // r12
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rbx
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r14
  unsigned int *v30; // r12
  char *v31; // r15
  __int64 v32; // rax
  void **v33; // rbp
  void **v34; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  unsigned __int64 v47; // r13
  __int64 v48; // r10
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r14
  unsigned int v56; // esi
  __int64 v57; // r8
  unsigned int v58; // ecx
  _QWORD *v59; // r12
  _QWORD *v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rsi
  __int64 v70; // r12
  __int64 v71; // rax
  unsigned __int64 *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  _WORD *v75; // r12
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int64 v79; // rbx
  int v80; // r12d
  void **v81; // rcx
  void **v82; // rax
  void **v83; // rdx
  _BYTE *v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  unsigned __int64 *v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r12
  unsigned int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int64 v100; // r12
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  unsigned int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  _QWORD *v110; // rcx
  int v111; // esi
  int v112; // esi
  __int64 v113; // rdi
  unsigned int v114; // eax
  int v115; // esi
  int v116; // esi
  __int64 v117; // rdi
  unsigned int v118; // eax
  _QWORD *v119; // r11
  int v120; // r9d
  int v121; // eax
  int v122; // r9d
  _QWORD *v123; // r8
  int v124; // r9d
  unsigned __int64 *v125; // [rsp+8h] [rbp-820h]
  char **v126; // [rsp+8h] [rbp-820h]
  unsigned int v127; // [rsp+40h] [rbp-7E8h]
  _QWORD *v128; // [rsp+40h] [rbp-7E8h]
  __int64 v129; // [rsp+40h] [rbp-7E8h]
  __int64 v130; // [rsp+40h] [rbp-7E8h]
  __int64 v131; // [rsp+40h] [rbp-7E8h]
  __int64 v132; // [rsp+40h] [rbp-7E8h]
  __int64 v133; // [rsp+40h] [rbp-7E8h]
  unsigned int v134; // [rsp+40h] [rbp-7E8h]
  int v135; // [rsp+40h] [rbp-7E8h]
  int v137; // [rsp+58h] [rbp-7D0h]
  __int64 v138; // [rsp+58h] [rbp-7D0h]
  __int64 v139; // [rsp+58h] [rbp-7D0h]
  __int64 v140; // [rsp+60h] [rbp-7C8h]
  __int64 v141; // [rsp+68h] [rbp-7C0h]
  unsigned int v142; // [rsp+7Ch] [rbp-7ACh] BYREF
  _WORD *v143; // [rsp+80h] [rbp-7A8h] BYREF
  __int64 v144; // [rsp+88h] [rbp-7A0h] BYREF
  _QWORD v145[2]; // [rsp+90h] [rbp-798h] BYREF
  __m128i v146; // [rsp+A0h] [rbp-788h] BYREF
  __int64 v147; // [rsp+B0h] [rbp-778h] BYREF
  __m128i v148; // [rsp+C0h] [rbp-768h] BYREF
  char v149; // [rsp+D0h] [rbp-758h] BYREF
  __int64 v150[6]; // [rsp+E0h] [rbp-748h] BYREF
  _QWORD v151[20]; // [rsp+110h] [rbp-718h] BYREF
  void *v152; // [rsp+1B0h] [rbp-678h] BYREF
  __int64 v153; // [rsp+1B8h] [rbp-670h]
  _BYTE v154[128]; // [rsp+1C0h] [rbp-668h] BYREF
  void **v155; // [rsp+240h] [rbp-5E8h] BYREF
  __int64 v156; // [rsp+248h] [rbp-5E0h]
  _BYTE v157[1152]; // [rsp+250h] [rbp-5D8h] BYREF
  void *v158; // [rsp+6D0h] [rbp-158h] BYREF
  __int64 v159; // [rsp+6D8h] [rbp-150h]
  _BYTE v160[128]; // [rsp+6E0h] [rbp-148h] BYREF
  void *ptr; // [rsp+760h] [rbp-C8h]
  __int64 v162; // [rsp+768h] [rbp-C0h]
  _BYTE v163[184]; // [rsp+770h] [rbp-B8h] BYREF

  v151[19] = a3;
  v151[18] = a2;
  v152 = v154;
  v155 = (void **)v157;
  v153 = 0x1000000000LL;
  v156 = 0x800000000LL;
  v158 = v160;
  v159 = 0x1000000000LL;
  ptr = v163;
  v162 = 0x1000000000LL;
  if ( a3 > 8 )
  {
    sub_1B5B6F0((__int64)&v155, a3);
    if ( a3 > HIDWORD(v159) )
      sub_2237220(&v158, v160, a3, 8);
  }
  v125 = &a2[a3];
  if ( a2 != v125 )
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = *v7;
      v9 = &v143;
      v142 = 0;
      v10 = *a1;
      v143 = (_WORD *)v8;
      v144 = 0;
      v12 = (_QWORD *)sub_1B31D70(v10, (unsigned __int64 *)&v143, &v142, &v144, (__int64)&byte_22F0C30, 0, a5);
      if ( v13 )
      {
        v88 = (unsigned int)v153;
        v11 = HIDWORD(v153);
        v89 = (unsigned int)v153 + 1LL;
        if ( v89 > HIDWORD(v153) )
        {
          v9 = v154;
          sub_2237220(&v152, v154, v89, 8);
          v88 = (unsigned int)v153;
        }
        *((_QWORD *)v152 + v88) = v8;
        LODWORD(v153) = v153 + 1;
      }
      if ( !v12 )
        goto LABEL_17;
      v14 = (__int64 *)(v12[6] & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *v14;
      if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 <= 1 )
        break;
      v36 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v11 = (unsigned int)(v36 - 43);
      if ( (unsigned int)v11 <= 1 )
      {
        v15 = sub_F63050(*v14, v9, v36, v11);
        if ( v15 )
          break;
        LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      }
LABEL_36:
      if ( (_BYTE)v36 == 42 )
      {
LABEL_43:
        sub_1AFBE90((__int64)v150, a1[1], (__int64)v12);
        if ( (unsigned __int8)sub_FFEF20(SHIDWORD(v150[0])) )
        {
          v127 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
          sub_168B9F0((__int64)v151, a1, v142, 0x1224u, 0);
          sub_1AF81E0(&v146, HIDWORD(v150[0]));
          v18 = sub_1682AF0((__int64)v151, (__int64)&v146);
          sub_1AF81E0(&v148, 0x33u);
          v19 = sub_1682AF0(v18, (__int64)&v148);
          v20 = a1[1];
          v21 = 103;
          v22 = v19;
          v23 = *(unsigned int *)(v20 + 344);
          if ( (_DWORD)v23 )
          {
            v24 = *(_QWORD *)(v20 + 336) + 6776 * v23 - 6776;
            if ( *(_QWORD *)(v24 + 6768) == *(_QWORD *)(v20 + 328) )
            {
              v105 = *(unsigned int *)(v24 + 8);
              v106 = *(unsigned int *)(v20 + 27504);
              if ( (unsigned int)v105 > (unsigned int)v106 )
              {
                v107 = v105 - v106;
                if ( v107 )
                {
                  v108 = *(_QWORD *)v24 + 1688 * (v107 - 1);
                  if ( v108 )
                    v21 = *(unsigned int *)(v108 + 976);
                }
              }
            }
          }
          v145[0] = sub_20EAB70(v21, v127);
          v145[1] = v25;
          sub_166BAF0(v22, (__int64)v145);
          if ( (char *)v148.m128i_i64[0] != &v149 )
            operator delete((void *)v148.m128i_i64[0]);
          if ( (__int64 *)v146.m128i_i64[0] != &v147 )
            operator delete((void *)v146.m128i_i64[0]);
          sub_15F7200(v151);
          sub_1B20830(*a1, a1[1], (__int64)v12, (unsigned int *)v150, 0);
LABEL_17:
          if ( v125 == ++v7 )
            goto LABEL_18;
        }
        else
        {
          v40 = a1[1];
          v151[0] = &v146;
          v41 = *(unsigned int *)(v40 + 344);
          if ( !(_DWORD)v41 )
            goto LABEL_46;
          v42 = *(_QWORD *)(v40 + 336) + 6776 * v41 - 6776;
          if ( *(_QWORD *)(v42 + 6768) != *(_QWORD *)(v40 + 328) )
            goto LABEL_46;
          v92 = *(_DWORD *)(v42 + 8);
          v93 = *(unsigned int *)(v40 + 27504);
          if ( v92 <= (unsigned int)v93 )
            goto LABEL_46;
          v94 = *(_QWORD *)v42;
          v95 = *(_QWORD *)v42 + 1688 * (v92 - v93);
          if ( v94 == v95 )
            goto LABEL_46;
          v96 = *(_QWORD *)(v95 - 984);
          v97 = *(unsigned int *)(v95 - 968);
          if ( !(_DWORD)v97 )
            goto LABEL_46;
          LODWORD(v98) = (v97 - 1) & (((unsigned int)v12 >> 4) ^ ((unsigned int)v12 >> 9));
          v99 = v96 + 1184LL * (unsigned int)v98;
          if ( v12 == *(_QWORD **)v99 )
          {
LABEL_89:
            if ( v99 == v96 + 1184 * v97 || !(9LL * *(unsigned int *)(v99 + 16)) )
              goto LABEL_46;
            ++v7;
            v100 = ***(_QWORD ***)(v99 + 8);
            sub_168B9F0((__int64)v151, a1, v142, 0x11C6u, 0);
            v100 &= 0xFFFFFFFFFFFFFFFCLL;
            v148.m128i_i64[0] = sub_EEC8C0(v8, (__int64)a1, a5);
            sub_1587DB0((__int64)v151, v148.m128i_i64);
            sub_15F7200(v151);
            v104 = sub_C00A40(v100, (__int64)&v148, v101, v102, v103);
            sub_168B9F0((__int64)v151, a1, v104, 0x1934u, 0);
            v148.m128i_i64[0] = sub_EEC8C0(v100, (__int64)a1, a5);
            sub_1587DB0((__int64)v151, v148.m128i_i64);
            sub_15F7200(v151);
            if ( v125 == v7 )
              goto LABEL_18;
          }
          else
          {
            if ( *(_QWORD *)v99 != -4096 )
            {
              v121 = 1;
              do
              {
                v122 = v121 + 1;
                v98 = ((_DWORD)v97 - 1) & (unsigned int)(v98 + v121);
                v99 = v96 + 1184 * v98;
                v123 = *(_QWORD **)v99;
                if ( v12 == *(_QWORD **)v99 )
                  goto LABEL_89;
                v121 = v122;
              }
              while ( v123 != (_QWORD *)-4096LL );
            }
LABEL_46:
            v43 = (unsigned __int64)v143;
            v44 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 32LL))(v12);
            v46 = a1[1];
            v47 = v43 & 0xFFFFFFFFFFFFFFFDLL;
            v48 = v44;
            v49 = *(unsigned int *)(v46 + 344);
            if ( !(_DWORD)v49
              || (v50 = *(_QWORD *)(v46 + 336) + 6776 * v49 - 6776, *(_QWORD *)(v50 + 6768) != *(_QWORD *)(v46 + 328))
              || (v51 = *(unsigned int *)(v50 + 8),
                  v52 = *(unsigned int *)(v46 + 27504),
                  (unsigned int)v51 <= (unsigned int)v52)
              || (v53 = v51 - v52) == 0 )
            {
              BUG();
            }
            v54 = v53 - 1;
            v55 = *(_QWORD *)v50 + 1688 * v54;
            v56 = *(_DWORD *)(v55 + 720);
            v57 = *(_QWORD *)(v55 + 704);
            if ( !v56 )
              goto LABEL_106;
            v58 = (v56 - 1) & (((unsigned int)v12 >> 4) ^ ((unsigned int)v12 >> 9));
            v45 = 9LL * v58;
            v59 = (_QWORD *)(v57 + 1184LL * v58);
            v60 = (_QWORD *)*v59;
            if ( v12 == (_QWORD *)*v59 )
            {
LABEL_52:
              v61 = *((unsigned int *)v59 + 4);
              v62 = v59 + 1;
              v63 = (unsigned int)(v61 + 1);
              v64 = 144 * (v61 + 1);
              v65 = 144 * v63 - 144;
              if ( *((unsigned int *)v59 + 5) < (unsigned __int64)(v61 + 1) )
              {
                v141 = v48;
                v140 = 144 * v63 - 144;
                v137 = v61 + 1;
                sub_1B5B6F0((__int64)(v59 + 1), v61 + 1);
                v61 = *((unsigned int *)v59 + 4);
                v48 = v141;
                v65 = v140;
                LODWORD(v63) = v137;
                v62 = v59 + 1;
              }
              goto LABEL_54;
            }
            if ( v60 != (_QWORD *)-4096LL )
            {
              v135 = 1;
              v45 = 0;
              while ( 1 )
              {
                if ( v60 == (_QWORD *)-8192LL && !v45 )
                  v45 = (__int64)v59;
                v58 = (v56 - 1) & (v135 + v58);
                v59 = (_QWORD *)(v57 + 1184LL * v58);
                v60 = (_QWORD *)*v59;
                if ( v12 == (_QWORD *)*v59 )
                  goto LABEL_52;
                if ( v60 == (_QWORD *)-4096LL )
                  break;
                ++v135;
              }
              if ( v45 )
                v59 = (_QWORD *)v45;
            }
            v52 = (unsigned int)(*(_DWORD *)(v55 + 712) + 1);
            v54 = 3 * v56;
            if ( 4 * (int)v52 < (unsigned int)v54 )
            {
              v109 = v56 - *(_DWORD *)(v55 + 716) - (unsigned int)v52;
              if ( (unsigned int)v109 > v56 >> 3 )
              {
LABEL_102:
                v110 = (_QWORD *)*v59;
                goto LABEL_103;
              }
              v139 = v48;
              v134 = ((unsigned int)v12 >> 4) ^ ((unsigned int)v12 >> 9);
              sub_1B5BC20((__int64 *)(v55 + 704), v56, v52, v109, v57, v45);
              v115 = *(_DWORD *)(v55 + 720);
              if ( !v115 )
              {
LABEL_145:
                ++*(_DWORD *)(v55 + 712);
                BUG();
              }
              v116 = v115 - 1;
              v48 = v139;
              v117 = *(_QWORD *)(v55 + 704);
              v118 = v116 & v134;
              v59 = (_QWORD *)(v117 + 1184LL * (v116 & v134));
              LODWORD(v52) = *(_DWORD *)(v55 + 712) + 1;
              v110 = (_QWORD *)*v59;
              if ( v12 == (_QWORD *)*v59 )
                goto LABEL_103;
              if ( v110 != (_QWORD *)-4096LL )
              {
                v119 = (_QWORD *)(v117 + 1184LL * (v116 & v134));
                v120 = 1;
                v59 = nullptr;
                while ( 1 )
                {
                  if ( v110 == (_QWORD *)-8192LL && !v59 )
                    v59 = v119;
                  v118 = v116 & (v120 + v118);
                  v119 = (_QWORD *)(v117 + 1184LL * v118);
                  v110 = (_QWORD *)*v119;
                  if ( v12 == (_QWORD *)*v119 )
                    goto LABEL_118;
                  if ( v110 == (_QWORD *)-4096LL )
                    goto LABEL_139;
                  ++v120;
                }
              }
            }
            else
            {
LABEL_106:
              v133 = v48;
              sub_1B5BC20((__int64 *)(v55 + 704), 2 * v56, v52, v54, v57, v45);
              v111 = *(_DWORD *)(v55 + 720);
              if ( !v111 )
                goto LABEL_145;
              v112 = v111 - 1;
              v113 = *(_QWORD *)(v55 + 704);
              v48 = v133;
              v114 = v112 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
              v59 = (_QWORD *)(v113 + 1184LL * v114);
              LODWORD(v52) = *(_DWORD *)(v55 + 712) + 1;
              v110 = (_QWORD *)*v59;
              if ( v12 == (_QWORD *)*v59 )
                goto LABEL_103;
              if ( v110 != (_QWORD *)-4096LL )
              {
                v119 = (_QWORD *)(v113 + 1184LL * (v112 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4))));
                v124 = 1;
                v59 = nullptr;
                while ( 1 )
                {
                  if ( !v59 && v110 == (_QWORD *)-8192LL )
                    v59 = v119;
                  v114 = v112 & (v124 + v114);
                  v119 = (_QWORD *)(v113 + 1184LL * v114);
                  v110 = (_QWORD *)*v119;
                  if ( v12 == (_QWORD *)*v119 )
                    break;
                  if ( v110 == (_QWORD *)-4096LL )
                  {
LABEL_139:
                    if ( v59 )
                      goto LABEL_102;
                    v59 = v119;
                    goto LABEL_109;
                  }
                  ++v124;
                }
LABEL_118:
                v59 = v119;
LABEL_103:
                *(_DWORD *)(v55 + 712) = v52;
                if ( v110 != (_QWORD *)-4096LL )
                  --*(_DWORD *)(v55 + 716);
                goto LABEL_105;
              }
            }
LABEL_109:
            *(_DWORD *)(v55 + 712) = v52;
LABEL_105:
            *v59 = v12;
            memset(v59 + 1, 0, 0x498u);
            v62 = v59 + 1;
            v65 = 0;
            v59[1] = v59 + 3;
            LODWORD(v63) = 1;
            v64 = 144;
            v59[2] = 0x800000000LL;
            v61 = 0;
            *((_DWORD *)v59 + 294) = 106;
LABEL_54:
            v66 = *v62;
            v67 = *v62 + 144 * v61;
            v68 = *v62 + v64;
            if ( v67 != v68 )
            {
              do
              {
                v69 = v67 + 16;
                *(_DWORD *)(v67 + 8) = 0;
                v67 += 144;
                *(_QWORD *)(v67 - 144) = v69;
                *(_DWORD *)(v67 - 132) = 8;
              }
              while ( v68 != v67 );
              v66 = *v62;
            }
            v70 = v65 + v66;
            *((_DWORD *)v62 + 2) = v63;
            v71 = *(unsigned int *)(v70 + 8);
            if ( v71 + 1 > (unsigned __int64)*(unsigned int *)(v70 + 12) )
            {
              v138 = v48;
              v128 = v62;
              sub_2237220(v70, v70 + 16, v71 + 1, 16);
              v71 = *(unsigned int *)(v70 + 8);
              v48 = v138;
              v62 = v128;
            }
            v72 = (unsigned __int64 *)(*(_QWORD *)v70 + 16 * v71);
            *v72 = v47;
            v72[1] = v48;
            ++*(_DWORD *)(v70 + 8);
            v73 = (unsigned int)v153;
            v74 = HIDWORD(v153);
            v75 = v143;
            *((_DWORD *)v62 + 292) = 51;
            if ( v73 + 1 > v74 )
            {
              v132 = v48;
              sub_2237220(&v152, v154, v73 + 1, 8);
              v73 = (unsigned int)v153;
              v48 = v132;
            }
            *((_QWORD *)v152 + v73) = v75;
            LODWORD(v153) = v153 + 1;
            if ( (*v143 & 0x1FF) != 0x47 )
              v12 = nullptr;
            v76 = (unsigned int)v159;
            v77 = (unsigned int)v159 + 1LL;
            if ( v77 > HIDWORD(v159) )
            {
              v130 = v48;
              sub_2237220(&v158, v160, v77, 8);
              v76 = (unsigned int)v159;
              v48 = v130;
            }
            *((_QWORD *)v158 + v76) = v12;
            v78 = (unsigned int)v156;
            LODWORD(v159) = v159 + 1;
            v79 = (unsigned int)v156 + 1LL;
            v80 = v156;
            if ( HIDWORD(v156) < v79 )
            {
              v129 = v48;
              sub_1B5B6F0((__int64)&v155, (unsigned int)v156 + 1LL);
              v78 = (unsigned int)v156;
              v48 = v129;
            }
            v81 = v155;
            v82 = &v155[18 * v78];
            v83 = &v155[18 * v79];
            if ( v82 != v83 )
            {
              do
              {
                v84 = v82 + 2;
                *((_DWORD *)v82 + 2) = 0;
                v82 += 18;
                *(v82 - 18) = v84;
                *((_DWORD *)v82 - 33) = 8;
              }
              while ( v83 != v82 );
              v81 = v155;
            }
            LODWORD(v156) = v80 + 1;
            v85 = (__int64)&v81[18 * (unsigned int)v79 - 18];
            v86 = *(unsigned int *)(v85 + 8);
            if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(v85 + 12) )
            {
              v131 = v48;
              sub_2237220(v85, v85 + 16, v86 + 1, 16);
              v86 = *(unsigned int *)(v85 + 8);
              v48 = v131;
            }
            v87 = (unsigned __int64 *)(*(_QWORD *)v85 + 16 * v86);
            ++v7;
            *v87 = v47;
            v87[1] = v48;
            ++*(_DWORD *)(v85 + 8);
            if ( v125 == v7 )
              goto LABEL_18;
          }
        }
      }
      else
      {
        v37 = *v14;
        if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 > 1 )
        {
          v39 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          v90 = (unsigned int)(v39 - 43);
          if ( (unsigned int)v90 > 1 )
            goto LABEL_42;
          v37 = sub_F63050(*v14, v9, v39, v90);
          if ( !v37 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
              goto LABEL_43;
            goto LABEL_83;
          }
        }
        while ( 1 )
        {
          v16 = (*(_BYTE *)(v37 + 18) & 0x10) == 0;
          v37 = *(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v16 )
            break;
          v38 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 43;
          if ( (unsigned int)v38 > 1 )
            v37 = sub_F63050(v37, v9, v38, v11);
        }
        LOBYTE(v39) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_42:
        if ( (unsigned __int8)(v39 - 2) <= 4u )
          goto LABEL_43;
LABEL_83:
        ++v7;
        sub_168B9F0((__int64)v151, a1, v142, 0x114Bu, 0);
        v148.m128i_i32[0] = 0;
        v91 = sub_1587D10((__int64)v151, v148.m128i_i32);
        v150[0] = sub_EEC8C0(v8, (__int64)&v148, a5);
        sub_1587DB0(v91, v150);
        sub_15F7200(v151);
        if ( v125 == v7 )
          goto LABEL_18;
      }
    }
    while ( 1 )
    {
      v16 = (*(_BYTE *)(v15 + 18) & 0x10) == 0;
      v15 = *(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v16 )
        break;
      v17 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
      if ( (unsigned int)v17 > 1 )
        v15 = sub_F63050(v15, v9, v17, v11);
    }
    LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_36;
  }
LABEL_18:
  v26 = (__int64 *)(unsigned int)v153;
  v27 = 0;
  if ( (_DWORD)v153 )
  {
    v28 = (__int64)v155;
    v29 = (unsigned int)v156;
    v30 = (unsigned int *)v152;
    v126 = (char **)v158;
    v31 = (char *)(unsigned int)v159;
    v32 = sub_168B6C0((__int64)a1);
    v27 = sub_EC4150(v32, a4, v30, v26, v126, v31, v28, v29);
  }
  if ( ptr != v163 )
    free(ptr);
  if ( v158 != v160 )
    free(v158);
  v33 = v155;
  v34 = &v155[18 * (unsigned int)v156];
  if ( v155 != v34 )
  {
    do
    {
      while ( 1 )
      {
        v34 -= 18;
        if ( *v34 == v34 + 2 )
          break;
        free(*v34);
        if ( v33 == v34 )
          goto LABEL_27;
      }
    }
    while ( v33 != v34 );
LABEL_27:
    v34 = v155;
  }
  if ( v34 != (void **)v157 )
    free(v34);
  if ( v152 != v154 )
    free(v152);
  return v27;
}
