__int64 __fastcall sub_1AE1470(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v9; // ebp
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rbp
  char v26; // al
  unsigned int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned int v29; // edx
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int64 v35; // rdi
  __int64 v36; // r12
  unsigned __int8 *v37; // r13
  unsigned __int8 *v38; // rdx
  __int64 v39; // rax
  char v40; // r14
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int8 *v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r13
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r14
  unsigned __int8 *v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // r15
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  char v72; // dl
  unsigned __int8 **v73; // rdi
  unsigned __int8 *v74; // r14
  unsigned __int8 *v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r13
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r13
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r15
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  unsigned __int8 *v103; // r15
  _BYTE *v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rdx
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // r14
  __int64 v118; // r15
  __int64 v119; // r14
  void *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // r14
  __int64 v123; // r15
  __int64 v124; // r14
  void *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // r15
  __int64 v128; // rdx
  __int64 v129; // r15
  void *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // r14
  __int64 v133; // rdx
  __int64 v134; // r14
  void *v135; // rdi
  __int64 v136; // rcx
  int v137; // eax
  unsigned int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // r15
  __int64 v146; // rdx
  __int64 v147; // r15
  void *v148; // rdi
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 *v151; // rax
  __int64 *v152; // rdi
  __int64 v153; // [rsp+8h] [rbp-100h]
  __int64 v154; // [rsp+8h] [rbp-100h]
  __int64 v155; // [rsp+8h] [rbp-100h]
  __int64 v156; // [rsp+8h] [rbp-100h]
  __int64 v157; // [rsp+8h] [rbp-100h]
  __int64 *v158; // [rsp+10h] [rbp-F8h]
  __int64 v159; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v160; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v161; // [rsp+30h] [rbp-D8h] BYREF
  int v162; // [rsp+38h] [rbp-D0h]
  _QWORD v163[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v164; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v165; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v166; // [rsp+68h] [rbp-A0h]
  char v167; // [rsp+B8h] [rbp-50h]
  unsigned int v168; // [rsp+C0h] [rbp-48h]
  char v169; // [rsp+C4h] [rbp-44h]

  v9 = *(_DWORD *)(a2 + 16);
  if ( v9 != 2 )
  {
    if ( v9 != 4 )
    {
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        v10 = *(_DWORD *)(a2 + 24);
      }
      else if ( *(char *)(a2 + 2) >= 0
             || (v10 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a7)) == 0 )
      {
        v27 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a7);
        v10 = v27;
        if ( v9 )
        {
          if ( !v27 )
          {
            v28 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
            if ( v28 )
              v10 = sub_EEB7E0(v28, a2, a7);
          }
        }
      }
      v11 = a1;
      sub_168B9F0((__int64)v163, a1, v10, 0x123Cu, 0);
      v12 = sub_BFBC70(*(_QWORD *)(a2 + 32));
      v13 = v12;
      if ( v12 && (*(_BYTE *)(v12 + 28) & 0x7Fu) - 34 >= 6 )
        v13 = 0;
      if ( v167 )
      {
        v37 = v165;
        if ( !v165 )
        {
          v106 = v166;
          v107 = *(_DWORD *)(v166 + 14976);
          if ( v107 )
          {
            v116 = (unsigned int)(v107 - 1);
            *(_DWORD *)(v166 + 14976) = v116;
            v37 = *(unsigned __int8 **)(v106 + 8 * v116 + 14848);
            v117 = *((unsigned int *)v37 + 134);
            *v37 = 0;
            v118 = *((_QWORD *)v37 + 66);
            *((_DWORD *)v37 + 106) = 0;
            v119 = v118 + (v117 << 6);
            while ( v118 != v119 )
            {
              while ( 1 )
              {
                v119 -= 64;
                v120 = *(void **)(v119 + 24);
                if ( v120 == (void *)(v119 + 40) )
                  break;
                operator delete(v120);
                if ( v118 == v119 )
                  goto LABEL_111;
              }
            }
LABEL_111:
            *((_DWORD *)v37 + 134) = 0;
          }
          else
          {
            v37 = (unsigned __int8 *)operator new(0x3A0u);
            *v37 = 0;
            *((_QWORD *)v37 + 12) = v37 + 112;
            *((_QWORD *)v37 + 16) = v37 + 144;
            *((_QWORD *)v37 + 20) = v37 + 176;
            *((_QWORD *)v37 + 24) = v37 + 208;
            *((_QWORD *)v37 + 28) = v37 + 240;
            *((_QWORD *)v37 + 32) = v37 + 272;
            *((_QWORD *)v37 + 36) = v37 + 304;
            *((_QWORD *)v37 + 40) = v37 + 336;
            *((_QWORD *)v37 + 44) = v37 + 368;
            *((_QWORD *)v37 + 48) = v37 + 400;
            *((_QWORD *)v37 + 52) = v37 + 432;
            *((_QWORD *)v37 + 13) = 0;
            v37[112] = 0;
            *((_QWORD *)v37 + 17) = 0;
            v37[144] = 0;
            *((_QWORD *)v37 + 21) = 0;
            v37[176] = 0;
            *((_QWORD *)v37 + 25) = 0;
            v37[208] = 0;
            *((_QWORD *)v37 + 29) = 0;
            v37[240] = 0;
            *((_QWORD *)v37 + 33) = 0;
            v37[272] = 0;
            *((_QWORD *)v37 + 37) = 0;
            v37[304] = 0;
            *((_QWORD *)v37 + 41) = 0;
            v37[336] = 0;
            *((_QWORD *)v37 + 45) = 0;
            v37[368] = 0;
            *((_QWORD *)v37 + 49) = 0;
            v37[400] = 0;
            *((_QWORD *)v37 + 53) = 0x800000000LL;
            *((_QWORD *)v37 + 66) = v37 + 544;
            *((_QWORD *)v37 + 67) = 0x600000000LL;
          }
          v165 = v37;
        }
        v37[*v37 + 1] = 10;
        v38 = v165;
      }
      else
      {
        if ( !v169 )
        {
          v14 = sub_EEC8C0(a2, (__int64)v11, a7);
          v15 = v14;
          v13 = HIDWORD(v14);
LABEL_11:
          if ( v169 )
          {
            v60 = sub_168B9E0(v163);
            v63 = v164;
            if ( v164 )
              v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v164 + 32LL))(v164);
            v160 = v63;
            v64 = sub_1587BC0(v60, &v160, v58, v59, v61, v62);
            v65 = *v64 + 32LL * v168;
            v66 = *(_QWORD *)(v65 + 8);
            v67 = v65;
            if ( v66 )
            {
              v68 = *(unsigned int *)(v66 + 424);
              v69 = *(unsigned int *)(v66 + 428);
              v70 = v68 + 1;
            }
            else
            {
              v111 = *(_QWORD *)(v65 + 16);
              v112 = *(_DWORD *)(v111 + 14976);
              if ( v112 )
              {
                v131 = (unsigned int)(v112 - 1);
                *(_DWORD *)(v111 + 14976) = v131;
                v66 = *(_QWORD *)(v111 + 8 * v131 + 14848);
                v132 = *(unsigned int *)(v66 + 536);
                *(_BYTE *)v66 = 0;
                v133 = *(_QWORD *)(v66 + 528);
                *(_DWORD *)(v66 + 424) = 0;
                v134 = v133 + (v132 << 6);
                while ( v133 != v134 )
                {
                  while ( 1 )
                  {
                    v134 -= 64;
                    v135 = *(void **)(v134 + 24);
                    if ( v135 == (void *)(v134 + 40) )
                      break;
                    v154 = v133;
                    operator delete(v135);
                    v133 = v154;
                    if ( v154 == v134 )
                      goto LABEL_128;
                  }
                }
LABEL_128:
                v68 = *(unsigned int *)(v66 + 424);
                v69 = *(unsigned int *)(v66 + 428);
                *(_DWORD *)(v66 + 536) = 0;
                v70 = v68 + 1;
              }
              else
              {
                v113 = operator new(0x3A0u);
                v69 = 8;
                v70 = 1;
                v66 = v113;
                *(_BYTE *)v113 = 0;
                *(_QWORD *)(v113 + 96) = v113 + 112;
                *(_QWORD *)(v113 + 128) = v113 + 144;
                *(_QWORD *)(v113 + 160) = v113 + 176;
                *(_QWORD *)(v113 + 192) = v113 + 208;
                *(_QWORD *)(v113 + 224) = v113 + 240;
                *(_QWORD *)(v113 + 256) = v113 + 272;
                *(_QWORD *)(v113 + 288) = v113 + 304;
                *(_QWORD *)(v113 + 320) = v113 + 336;
                *(_QWORD *)(v113 + 352) = v113 + 368;
                *(_QWORD *)(v113 + 384) = v113 + 400;
                *(_QWORD *)(v113 + 416) = v113 + 432;
                *(_QWORD *)(v113 + 104) = 0;
                *(_BYTE *)(v113 + 112) = 0;
                *(_QWORD *)(v113 + 136) = 0;
                *(_BYTE *)(v113 + 144) = 0;
                *(_QWORD *)(v113 + 168) = 0;
                *(_BYTE *)(v113 + 176) = 0;
                *(_QWORD *)(v113 + 200) = 0;
                *(_BYTE *)(v113 + 208) = 0;
                *(_QWORD *)(v113 + 232) = 0;
                *(_BYTE *)(v113 + 240) = 0;
                *(_QWORD *)(v113 + 264) = 0;
                *(_BYTE *)(v113 + 272) = 0;
                *(_QWORD *)(v113 + 296) = 0;
                *(_BYTE *)(v113 + 304) = 0;
                *(_QWORD *)(v113 + 328) = 0;
                *(_BYTE *)(v113 + 336) = 0;
                *(_QWORD *)(v113 + 360) = 0;
                *(_BYTE *)(v113 + 368) = 0;
                *(_QWORD *)(v113 + 392) = 0;
                *(_BYTE *)(v113 + 400) = 0;
                *(_QWORD *)(v113 + 424) = 0x800000000LL;
                *(_QWORD *)(v113 + 528) = v113 + 544;
                *(_QWORD *)(v113 + 536) = 0x600000000LL;
                v68 = 0;
              }
              *(_QWORD *)(v67 + 8) = v66;
            }
            v161 = __PAIR64__(v13, v15);
            LOBYTE(v162) = 1;
            if ( v70 > v69 )
            {
              sub_2237220(v66 + 416, v66 + 432, v70, 12);
              v68 = *(unsigned int *)(v66 + 424);
            }
            v71 = *(_QWORD *)(v66 + 416) + 12 * v68;
            *(_QWORD *)v71 = v161;
            *(_DWORD *)(v71 + 8) = v162;
            ++*(_DWORD *)(v66 + 424);
          }
          goto LABEL_12;
        }
        v53 = sub_168B9E0(v163);
        v54 = v164;
        if ( v164 )
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v164 + 32LL))(v164);
        v11 = &v161;
        v161 = v54;
        v55 = sub_1587BC0(v53, &v161, v49, v50, v51, v52);
        v56 = *v55 + 32LL * v168;
        v57 = *(unsigned __int8 **)(v56 + 8);
        if ( !v57 )
        {
          v114 = *(_QWORD *)(v56 + 16);
          v115 = *(_DWORD *)(v114 + 14976);
          if ( v115 )
          {
            v126 = (unsigned int)(v115 - 1);
            *(_DWORD *)(v114 + 14976) = v126;
            v57 = *(unsigned __int8 **)(v114 + 8 * v126 + 14848);
            v127 = *((unsigned int *)v57 + 134);
            *v57 = 0;
            v128 = *((_QWORD *)v57 + 66);
            *((_DWORD *)v57 + 106) = 0;
            v129 = v128 + (v127 << 6);
            while ( v128 != v129 )
            {
              while ( 1 )
              {
                v129 -= 64;
                v130 = *(void **)(v129 + 24);
                if ( v130 == (void *)(v129 + 40) )
                  break;
                v153 = v128;
                operator delete(v130);
                v128 = v153;
                if ( v153 == v129 )
                  goto LABEL_123;
              }
            }
LABEL_123:
            *((_DWORD *)v57 + 134) = 0;
          }
          else
          {
            v57 = (unsigned __int8 *)operator new(0x3A0u);
            *v57 = 0;
            *((_QWORD *)v57 + 12) = v57 + 112;
            *((_QWORD *)v57 + 16) = v57 + 144;
            *((_QWORD *)v57 + 20) = v57 + 176;
            *((_QWORD *)v57 + 24) = v57 + 208;
            *((_QWORD *)v57 + 28) = v57 + 240;
            *((_QWORD *)v57 + 32) = v57 + 272;
            *((_QWORD *)v57 + 36) = v57 + 304;
            *((_QWORD *)v57 + 40) = v57 + 336;
            *((_QWORD *)v57 + 44) = v57 + 368;
            *((_QWORD *)v57 + 48) = v57 + 400;
            *((_QWORD *)v57 + 52) = v57 + 432;
            *((_QWORD *)v57 + 13) = 0;
            v57[112] = 0;
            *((_QWORD *)v57 + 17) = 0;
            v57[144] = 0;
            *((_QWORD *)v57 + 21) = 0;
            v57[176] = 0;
            *((_QWORD *)v57 + 25) = 0;
            v57[208] = 0;
            *((_QWORD *)v57 + 29) = 0;
            v57[240] = 0;
            *((_QWORD *)v57 + 33) = 0;
            v57[272] = 0;
            *((_QWORD *)v57 + 37) = 0;
            v57[304] = 0;
            *((_QWORD *)v57 + 41) = 0;
            v57[336] = 0;
            *((_QWORD *)v57 + 45) = 0;
            v57[368] = 0;
            *((_QWORD *)v57 + 49) = 0;
            v57[400] = 0;
            *((_QWORD *)v57 + 53) = 0x800000000LL;
            *((_QWORD *)v57 + 66) = v57 + 544;
            *((_QWORD *)v57 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v56 + 8) = v57;
        }
        v57[*v57 + 1] = 10;
        v38 = *(unsigned __int8 **)(v56 + 8);
      }
      v39 = *v38;
      *v38 = v39 + 1;
      *(_QWORD *)&v38[8 * v39 + 16] = v13;
      v40 = v167;
      v41 = sub_EEC8C0(a2, (__int64)v11, a7);
      v15 = v41;
      v42 = HIDWORD(v41);
      LODWORD(v13) = HIDWORD(v41);
      if ( v40 )
      {
        v43 = v165;
        if ( v165 )
        {
          v44 = *((unsigned int *)v165 + 106);
          v45 = *((unsigned int *)v165 + 107);
          v46 = v44 + 1;
        }
        else
        {
          v108 = v166;
          v109 = *(_DWORD *)(v166 + 14976);
          if ( v109 )
          {
            v121 = (unsigned int)(v109 - 1);
            *(_DWORD *)(v166 + 14976) = v121;
            v43 = *(unsigned __int8 **)(v108 + 8 * v121 + 14848);
            v122 = *((unsigned int *)v43 + 134);
            v123 = *((_QWORD *)v43 + 66);
            *v43 = 0;
            *((_DWORD *)v43 + 106) = 0;
            v124 = v123 + (v122 << 6);
            if ( v123 == v124 )
            {
              v46 = 1;
              v44 = 0;
            }
            else
            {
              do
              {
                while ( 1 )
                {
                  v124 -= 64;
                  v125 = *(void **)(v124 + 24);
                  if ( v125 == (void *)(v124 + 40) )
                    break;
                  operator delete(v125);
                  if ( v123 == v124 )
                    goto LABEL_115;
                }
              }
              while ( v123 != v124 );
LABEL_115:
              v44 = *((unsigned int *)v43 + 106);
              v46 = v44 + 1;
            }
            *((_DWORD *)v43 + 134) = 0;
            v45 = *((unsigned int *)v43 + 107);
          }
          else
          {
            v110 = operator new(0x3A0u);
            v45 = 8;
            v46 = 1;
            v43 = (unsigned __int8 *)v110;
            *(_BYTE *)v110 = 0;
            *(_QWORD *)(v110 + 96) = v110 + 112;
            *(_QWORD *)(v110 + 128) = v110 + 144;
            *(_QWORD *)(v110 + 160) = v110 + 176;
            *(_QWORD *)(v110 + 192) = v110 + 208;
            *(_QWORD *)(v110 + 224) = v110 + 240;
            *(_QWORD *)(v110 + 256) = v110 + 272;
            *(_QWORD *)(v110 + 288) = v110 + 304;
            *(_QWORD *)(v110 + 320) = v110 + 336;
            *(_QWORD *)(v110 + 352) = v110 + 368;
            *(_QWORD *)(v110 + 384) = v110 + 400;
            *(_QWORD *)(v110 + 416) = v110 + 432;
            *(_QWORD *)(v110 + 104) = 0;
            *(_BYTE *)(v110 + 112) = 0;
            *(_QWORD *)(v110 + 136) = 0;
            *(_BYTE *)(v110 + 144) = 0;
            *(_QWORD *)(v110 + 168) = 0;
            *(_BYTE *)(v110 + 176) = 0;
            *(_QWORD *)(v110 + 200) = 0;
            *(_BYTE *)(v110 + 208) = 0;
            *(_QWORD *)(v110 + 232) = 0;
            *(_BYTE *)(v110 + 240) = 0;
            *(_QWORD *)(v110 + 264) = 0;
            *(_BYTE *)(v110 + 272) = 0;
            *(_QWORD *)(v110 + 296) = 0;
            *(_BYTE *)(v110 + 304) = 0;
            *(_QWORD *)(v110 + 328) = 0;
            *(_BYTE *)(v110 + 336) = 0;
            *(_QWORD *)(v110 + 360) = 0;
            *(_BYTE *)(v110 + 368) = 0;
            *(_QWORD *)(v110 + 392) = 0;
            *(_BYTE *)(v110 + 400) = 0;
            *(_QWORD *)(v110 + 424) = 0x800000000LL;
            *(_QWORD *)(v110 + 528) = v110 + 544;
            *(_QWORD *)(v110 + 536) = 0x600000000LL;
            v44 = 0;
          }
          v165 = v43;
        }
        v161 = __PAIR64__(v42, v15);
        LOBYTE(v162) = 1;
        if ( v46 > v45 )
        {
          sub_2237220(v43 + 416, v43 + 432, v46, 12);
          v44 = *((unsigned int *)v43 + 106);
        }
        v47 = *((_QWORD *)v43 + 52) + 12 * v44;
        *(_QWORD *)v47 = v161;
        *(_DWORD *)(v47 + 8) = v162;
        ++*((_DWORD *)v43 + 106);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ( (unsigned __int8)sub_1ADC130(*a1, a2, a3, a4, a5, a6, a7) )
      return 1;
    v21 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + v21 + 40) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) == 13 && ((*(_WORD *)(v22 + 18) >> 3) & 0x1FF) == 0x1F0 )
    {
      v23 = *(_QWORD *)(a2 + v21 + 48);
      v24 = *(_QWORD *)(v23 + 8);
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v26 = *(_BYTE *)(v25 + 16);
      switch ( v26 )
      {
        case 13:
          if ( (((*(_WORD *)(v25 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            break;
          return sub_1ADAA70(*a1, a2, 3u, v18, a7);
        case 47:
          v77 = sub_F60F10(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
                  a2,
                  v24,
                  v18,
                  v19,
                  v20);
          if ( ((*((_BYTE *)v77 + 74) & 1) != 0 || (v77[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
            && *((char *)sub_F60F10(v25, a2, v78, v18, v19, v20) + 76) >= 0 )
          {
            return sub_1ADAA70(*a1, a2, 3u, v18, a7);
          }
          v24 = *(_QWORD *)(v23 + 8);
          break;
        case 10:
          return sub_1ADAA70(*a1, a2, 3u, v18, a7);
      }
      if ( !sub_F65360(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), a2, v24 & 0xFFFFFFFFFFFFFFF0LL, v18, v19, v20) )
      {
        v138 = sub_BF6D70(a2);
        sub_168B9F0((__int64)v163, a1, v138, 0x123Fu, 0);
        v139 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        if ( v139 && (*(_BYTE *)(v139 + 28) & 0x7Fu) - 34 >= 6 )
          v139 = 0;
        v159 = v139;
        v140 = sub_16CEDA0((__int64)v163, &v159);
        v141 = sub_168B6C0((__int64)a1);
        v142 = sub_1852DB0(v140, (__int64 *)(v141 + 18768));
        v160 = *(_QWORD *)(v23 + 8);
        v143 = sub_162B6D0(v142, &v160);
        v161 = sub_EEC8C0(v23, (__int64)&v160, a7);
        sub_1587DB0(v143, &v161);
LABEL_12:
        sub_15F7200(v163);
        return 1;
      }
      return sub_1ADAA70(*a1, a2, 3u, v18, a7);
    }
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v29 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0 || (v29 = sub_EEB7E0(*(_QWORD *)(a2 + v21 + 32), a2, a7)) == 0 )
    {
      v29 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a7);
      if ( !v29 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v48 = *(_QWORD *)(a2 + v21 + 32);
          if ( v48 )
            v29 = sub_EEB7E0(v48, a2, a7);
        }
      }
    }
    v30 = a1;
    sub_168B9F0((__int64)v163, a1, v29, 0x123Fu, 0);
    v31 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v32 = v31;
    if ( v31 && (*(_BYTE *)(v31 + 28) & 0x7Fu) - 34 >= 6 )
      v32 = 0;
    if ( v167 )
    {
      v74 = v165;
      if ( !v165 )
      {
        v79 = v166;
        v80 = *(_DWORD *)(v166 + 14976);
        if ( v80 )
        {
          v144 = (unsigned int)(v80 - 1);
          *(_DWORD *)(v166 + 14976) = v144;
          v74 = *(unsigned __int8 **)(v79 + 8 * v144 + 14848);
          v145 = *((unsigned int *)v74 + 134);
          *v74 = 0;
          v146 = *((_QWORD *)v74 + 66);
          *((_DWORD *)v74 + 106) = 0;
          v147 = v146 + (v145 << 6);
          while ( v146 != v147 )
          {
            while ( 1 )
            {
              v147 -= 64;
              v148 = *(void **)(v147 + 24);
              if ( v148 == (void *)(v147 + 40) )
                break;
              v156 = v146;
              operator delete(v148);
              v146 = v156;
              if ( v156 == v147 )
                goto LABEL_140;
            }
          }
LABEL_140:
          *((_DWORD *)v74 + 134) = 0;
        }
        else
        {
          v74 = (unsigned __int8 *)operator new(0x3A0u);
          *v74 = 0;
          *((_QWORD *)v74 + 12) = v74 + 112;
          *((_QWORD *)v74 + 16) = v74 + 144;
          *((_QWORD *)v74 + 20) = v74 + 176;
          *((_QWORD *)v74 + 24) = v74 + 208;
          *((_QWORD *)v74 + 28) = v74 + 240;
          *((_QWORD *)v74 + 32) = v74 + 272;
          *((_QWORD *)v74 + 36) = v74 + 304;
          *((_QWORD *)v74 + 40) = v74 + 336;
          *((_QWORD *)v74 + 44) = v74 + 368;
          *((_QWORD *)v74 + 48) = v74 + 400;
          *((_QWORD *)v74 + 52) = v74 + 432;
          *((_QWORD *)v74 + 13) = 0;
          v74[112] = 0;
          *((_QWORD *)v74 + 17) = 0;
          v74[144] = 0;
          *((_QWORD *)v74 + 21) = 0;
          v74[176] = 0;
          *((_QWORD *)v74 + 25) = 0;
          v74[208] = 0;
          *((_QWORD *)v74 + 29) = 0;
          v74[240] = 0;
          *((_QWORD *)v74 + 33) = 0;
          v74[272] = 0;
          *((_QWORD *)v74 + 37) = 0;
          v74[304] = 0;
          *((_QWORD *)v74 + 41) = 0;
          v74[336] = 0;
          *((_QWORD *)v74 + 45) = 0;
          v74[368] = 0;
          *((_QWORD *)v74 + 49) = 0;
          v74[400] = 0;
          *((_QWORD *)v74 + 53) = 0x800000000LL;
          *((_QWORD *)v74 + 66) = v74 + 544;
          *((_QWORD *)v74 + 67) = 0x600000000LL;
        }
        v165 = v74;
      }
      v74[*v74 + 1] = 10;
      v75 = v165;
      v76 = *v165;
      *v165 = v76 + 1;
      *(_QWORD *)&v75[8 * v76 + 16] = v32;
    }
    else if ( v169 )
    {
      v99 = sub_168B9E0(v163);
      v100 = v164;
      if ( v164 )
        v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v164 + 32LL))(v164);
      v161 = v100;
      v30 = &v161;
      v101 = sub_1587BC0(v99, &v161, v95, v96, v97, v98);
      v102 = *v101 + 32LL * v168;
      v103 = *(unsigned __int8 **)(v102 + 8);
      if ( !v103 )
      {
        v136 = *(_QWORD *)(v102 + 16);
        v137 = *(_DWORD *)(v136 + 14976);
        if ( v137 )
        {
          v149 = (unsigned int)(v137 - 1);
          *(_DWORD *)(v136 + 14976) = v149;
          v103 = *(unsigned __int8 **)(v136 + 8 * v149 + 14848);
          v150 = *((unsigned int *)v103 + 134);
          *v103 = 0;
          v30 = *((__int64 **)v103 + 66);
          *((_DWORD *)v103 + 106) = 0;
          v151 = &v30[8 * v150];
          while ( v30 != v151 )
          {
            while ( 1 )
            {
              v151 -= 8;
              v152 = (__int64 *)v151[3];
              if ( v152 == v151 + 5 )
                break;
              v158 = v151;
              v157 = v102;
              operator delete(v152);
              v151 = v158;
              v102 = v157;
              if ( v30 == v158 )
                goto LABEL_145;
            }
          }
LABEL_145:
          *((_DWORD *)v103 + 134) = 0;
        }
        else
        {
          v155 = v102;
          v103 = (unsigned __int8 *)operator new(0x3A0u);
          *v103 = 0;
          *((_QWORD *)v103 + 12) = v103 + 112;
          *((_QWORD *)v103 + 16) = v103 + 144;
          *((_QWORD *)v103 + 20) = v103 + 176;
          *((_QWORD *)v103 + 24) = v103 + 208;
          *((_QWORD *)v103 + 28) = v103 + 240;
          *((_QWORD *)v103 + 32) = v103 + 272;
          *((_QWORD *)v103 + 36) = v103 + 304;
          *((_QWORD *)v103 + 40) = v103 + 336;
          *((_QWORD *)v103 + 44) = v103 + 368;
          *((_QWORD *)v103 + 48) = v103 + 400;
          *((_QWORD *)v103 + 52) = v103 + 432;
          *((_QWORD *)v103 + 13) = 0;
          v103[112] = 0;
          *((_QWORD *)v103 + 17) = 0;
          v103[144] = 0;
          *((_QWORD *)v103 + 21) = 0;
          v103[176] = 0;
          *((_QWORD *)v103 + 25) = 0;
          v103[208] = 0;
          *((_QWORD *)v103 + 29) = 0;
          v103[240] = 0;
          *((_QWORD *)v103 + 33) = 0;
          v103[272] = 0;
          *((_QWORD *)v103 + 37) = 0;
          v103[304] = 0;
          *((_QWORD *)v103 + 41) = 0;
          v103[336] = 0;
          *((_QWORD *)v103 + 45) = 0;
          v103[368] = 0;
          *((_QWORD *)v103 + 49) = 0;
          v103[400] = 0;
          *((_QWORD *)v103 + 53) = 0x800000000LL;
          v102 = v155;
          *((_QWORD *)v103 + 66) = v103 + 544;
          *((_QWORD *)v103 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v102 + 8) = v103;
      }
      v103[*v103 + 1] = 10;
      v104 = *(_BYTE **)(v102 + 8);
      v105 = (unsigned __int8)*v104;
      *v104 = v105 + 1;
      *(_QWORD *)&v104[8 * v105 + 16] = v32;
    }
    v33 = sub_168B6C0((__int64)a1);
    v34 = v33;
    if ( v167 )
    {
      v30 = *(__int64 **)(v33 + 19488);
      sub_AE9DF0(&v165, (__int64)v30, 8u);
      v72 = v167;
    }
    else
    {
      if ( !v169 )
      {
        v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
        v36 = *(_QWORD *)(v35 + 8);
        goto LABEL_38;
      }
      v92 = sub_168B9E0(v163);
      v93 = v164;
      if ( v164 )
        v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v164 + 32LL))(v164);
      v161 = v93;
      v94 = sub_1587BC0(v92, &v161, v88, v89, v90, v91);
      v30 = *(__int64 **)(v34 + 19488);
      sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v168 + 8), (__int64)v30, 8u);
      v72 = v167;
    }
    v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
    v36 = *(_QWORD *)(v35 + 8);
    if ( v72 )
    {
      v73 = &v165;
      goto LABEL_69;
    }
LABEL_38:
    if ( !v169 )
    {
LABEL_39:
      v161 = sub_EEC8C0(v35, (__int64)v30, a7);
      sub_1587DB0((__int64)v163, &v161);
      sub_15F7200(v163);
      return 1;
    }
    v85 = sub_168B9E0(v163);
    v86 = v164;
    if ( v164 )
      v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v164 + 32LL))(v164);
    v161 = v86;
    v87 = sub_1587BC0(v85, &v161, v81, v82, v83, v84);
    v73 = (unsigned __int8 **)(*v87 + 32LL * v168 + 8);
LABEL_69:
    v30 = (__int64 *)v36;
    sub_AE9DF0(v73, v36, 8u);
    v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
    goto LABEL_39;
  }
  if ( (unsigned __int8)sub_1ADC130(*a1, a2, a3, a4, a5, a6, a7) )
    return 1;
  return sub_1ADAA70(*a1, a2, 1u, v17, a7);
}
