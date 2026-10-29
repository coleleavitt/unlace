__int64 __fastcall sub_988F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned int v11; // eax
  __int64 *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned int v18; // edi
  int v19; // edx
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __m128i *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rdi
  __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  _BYTE *v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rdx
  _BYTE *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rdi
  _DWORD *v64; // rcx
  _DWORD *v65; // rax
  __int64 v66; // rsi
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rsi
  _DWORD *v70; // rcx
  _DWORD *v71; // rax
  __int64 v72; // rsi
  _WORD *v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdx
  _WORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // r13
  __int64 v85; // r12
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // rdi
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rax
  _BYTE *v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rsi
  __int64 v103; // rax
  _BYTE *v104; // rdx
  _BYTE *v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rax
  _BYTE *v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  _WORD *v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rcx
  __int64 v116; // rax
  _WORD *v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // [rsp+0h] [rbp-D8h]
  __int64 v122; // [rsp+8h] [rbp-D0h]
  __int64 v123; // [rsp+8h] [rbp-D0h]
  const __m128i *v124; // [rsp+8h] [rbp-D0h]
  __int64 v125; // [rsp+8h] [rbp-D0h]
  __int64 v126; // [rsp+8h] [rbp-D0h]
  __int64 v127; // [rsp+8h] [rbp-D0h]
  __int64 v128; // [rsp+8h] [rbp-D0h]
  __int64 v129; // [rsp+8h] [rbp-D0h]
  __int64 v130; // [rsp+8h] [rbp-D0h]
  _BYTE *v131; // [rsp+8h] [rbp-D0h]
  _WORD *v132; // [rsp+8h] [rbp-D0h]
  __int64 v133; // [rsp+8h] [rbp-D0h]
  _BYTE *v134; // [rsp+8h] [rbp-D0h]
  _BYTE *v135; // [rsp+8h] [rbp-D0h]
  __int64 v136; // [rsp+8h] [rbp-D0h]
  _WORD *v137; // [rsp+8h] [rbp-D0h]
  __int64 v138; // [rsp+8h] [rbp-D0h]
  __int64 v139; // [rsp+10h] [rbp-C8h]
  __int64 v140; // [rsp+10h] [rbp-C8h]
  __int64 v141; // [rsp+10h] [rbp-C8h]
  __int64 v142; // [rsp+10h] [rbp-C8h]
  __int64 v143; // [rsp+10h] [rbp-C8h]
  __int64 v144; // [rsp+10h] [rbp-C8h]
  __int64 v145; // [rsp+10h] [rbp-C8h]
  __int64 v146; // [rsp+10h] [rbp-C8h]
  __int64 v147; // [rsp+10h] [rbp-C8h]
  __int64 v148; // [rsp+10h] [rbp-C8h]
  __int64 v149; // [rsp+10h] [rbp-C8h]
  __int64 v150; // [rsp+10h] [rbp-C8h]
  __int64 v151; // [rsp+10h] [rbp-C8h]
  __int64 v152; // [rsp+10h] [rbp-C8h]
  __int64 v153; // [rsp+10h] [rbp-C8h]
  __int64 v154; // [rsp+10h] [rbp-C8h]
  __int64 v155; // [rsp+18h] [rbp-C0h]
  __int64 v156; // [rsp+18h] [rbp-C0h]
  __int64 v157; // [rsp+18h] [rbp-C0h]
  __int64 v158; // [rsp+18h] [rbp-C0h]
  __int64 v159; // [rsp+18h] [rbp-C0h]
  __int64 v160; // [rsp+18h] [rbp-C0h]
  __int64 v161; // [rsp+18h] [rbp-C0h]
  _QWORD v162[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v163; // [rsp+38h] [rbp-A0h]
  unsigned int v164; // [rsp+40h] [rbp-98h]
  int v165; // [rsp+50h] [rbp-88h]
  __int64 v166; // [rsp+60h] [rbp-78h] BYREF
  int v167; // [rsp+68h] [rbp-70h]
  __int64 v168; // [rsp+78h] [rbp-60h]
  unsigned int v169; // [rsp+80h] [rbp-58h]
  int v170; // [rsp+90h] [rbp-48h]

  v8 = sub_8E5480(a4);
  v9 = *(unsigned __int8 *)(v8 + 51);
  if ( !(_BYTE)v9 )
  {
    if ( *(_QWORD *)(v8 + 24) )
      return sub_988CA0(a1, a2, a3, a4, a5);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v8 + 32) )
  {
LABEL_5:
    v11 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    v12 = (__int64 *)sub_A2E1A0(a1, v11, 110, 0);
    v13 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    if ( v12 )
    {
      v14 = *v12;
      if ( !*v12 )
      {
        v80 = v12[1];
        v81 = *(_DWORD *)(v80 + 14976);
        if ( v81 )
        {
          v82 = (unsigned int)(v81 - 1);
          *(_DWORD *)(v80 + 14976) = v82;
          v14 = *(_QWORD *)(v80 + 8 * v82 + 14848);
          v83 = *(unsigned int *)(v14 + 536);
          *(_BYTE *)v14 = 0;
          v84 = *(_QWORD *)(v14 + 528);
          *(_DWORD *)(v14 + 424) = 0;
          v85 = v84 + (v83 << 6);
          while ( v84 != v85 )
          {
            while ( 1 )
            {
              v85 -= 64;
              v86 = *(void **)(v85 + 24);
              if ( v86 == (void *)(v85 + 40) )
                break;
              operator delete(v86, *(_QWORD *)(v85 + 40) + 1LL);
              if ( v84 == v85 )
                goto LABEL_164;
            }
          }
LABEL_164:
          *(_DWORD *)(v14 + 536) = 0;
        }
        else
        {
          v14 = operator new(0x3A0u);
          *(_BYTE *)v14 = 0;
          *(_QWORD *)(v14 + 96) = v14 + 112;
          *(_QWORD *)(v14 + 128) = v14 + 144;
          *(_QWORD *)(v14 + 160) = v14 + 176;
          *(_QWORD *)(v14 + 192) = v14 + 208;
          *(_QWORD *)(v14 + 224) = v14 + 240;
          *(_QWORD *)(v14 + 256) = v14 + 272;
          *(_QWORD *)(v14 + 288) = v14 + 304;
          *(_QWORD *)(v14 + 320) = v14 + 336;
          *(_QWORD *)(v14 + 352) = v14 + 368;
          *(_QWORD *)(v14 + 384) = v14 + 400;
          *(_QWORD *)(v14 + 104) = 0;
          *(_BYTE *)(v14 + 112) = 0;
          *(_QWORD *)(v14 + 136) = 0;
          *(_BYTE *)(v14 + 144) = 0;
          *(_QWORD *)(v14 + 168) = 0;
          *(_BYTE *)(v14 + 176) = 0;
          *(_QWORD *)(v14 + 200) = 0;
          *(_BYTE *)(v14 + 208) = 0;
          *(_QWORD *)(v14 + 232) = 0;
          *(_BYTE *)(v14 + 240) = 0;
          *(_QWORD *)(v14 + 264) = 0;
          *(_BYTE *)(v14 + 272) = 0;
          *(_QWORD *)(v14 + 296) = 0;
          *(_BYTE *)(v14 + 304) = 0;
          *(_QWORD *)(v14 + 328) = 0;
          *(_BYTE *)(v14 + 336) = 0;
          *(_QWORD *)(v14 + 360) = 0;
          *(_BYTE *)(v14 + 368) = 0;
          *(_QWORD *)(v14 + 392) = 0;
          *(_BYTE *)(v14 + 400) = 0;
          *(_QWORD *)(v14 + 416) = v14 + 432;
          *(_QWORD *)(v14 + 424) = 0x800000000LL;
          *(_QWORD *)(v14 + 528) = v14 + 544;
          *(_QWORD *)(v14 + 536) = 0x600000000LL;
        }
        *v12 = v14;
      }
      v166 = v13;
      LOBYTE(v167) = 1;
      v15 = *(unsigned int *)(v14 + 424);
      if ( *(unsigned int *)(v14 + 428) < (unsigned __int64)(v15 + 1) )
      {
        sub_25D6060(v14 + 416, v14 + 432, v15 + 1, 12);
        v15 = *(unsigned int *)(v14 + 424);
      }
      v16 = *(_QWORD *)(v14 + 416) + 12 * v15;
      *(_QWORD *)v16 = v166;
      *(_DWORD *)(v16 + 8) = v167;
      ++*(_DWORD *)(v14 + 424);
    }
    return 0;
  }
  v17 = *(_DWORD *)(v8 + 12);
  if ( v17 != -1 )
  {
    v18 = *(_DWORD *)(v8 + 8);
    if ( v17 >= v18 )
    {
      v19 = *(_DWORD *)(v8 + 40);
      v20 = 0;
      v121 = v17 / v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          while ( 1 )
          {
            sub_8E61F0((__int64)v162, a4, v20);
            sub_8E61F0((__int64)&v166, a3, v20);
            v110 = v168;
            v111 = v166;
            if ( !v170
              && (v152 = v166,
                  v136 = v168,
                  v112 = sub_8E5480((__int64)&v166),
                  v110 = v136,
                  v111 = v152,
                  *(_BYTE *)(v112 + 51))
              && v152 == v169 )
            {
              v105 = (_BYTE *)(v136 + v152 + 72);
            }
            else
            {
              v105 = (_BYTE *)(v110 + v111 + 40);
            }
            v106 = v163;
            v107 = v162[0];
            if ( !v165
              && (v160 = v162[0],
                  v151 = v163,
                  v135 = v105,
                  v108 = sub_8E5480((__int64)v162),
                  v105 = v135,
                  v106 = v151,
                  v107 = v160,
                  *(_BYTE *)(v108 + 51))
              && v160 == v164 )
            {
              v109 = (_BYTE *)(v151 + v160 + 72);
            }
            else
            {
              v109 = (_BYTE *)(v106 + v107 + 40);
            }
            *v109 = *v105;
            sub_A1C0C0(&v166);
            sub_A1DB00(v162);
            sub_A1C0C0(v162);
            if ( v121 == v20 )
              break;
            ++v20;
          }
        }
        else if ( v19 == 2 )
        {
          while ( 1 )
          {
            sub_8E61F0((__int64)v162, a4, v20);
            sub_8E61F0((__int64)&v166, a3, v20);
            v118 = v168;
            v119 = v166;
            if ( !v170
              && (v154 = v166,
                  v138 = v168,
                  v120 = sub_8E5480((__int64)&v166),
                  v118 = v138,
                  v119 = v154,
                  *(_BYTE *)(v120 + 51))
              && v154 == v169 )
            {
              v113 = (_WORD *)(v138 + v154 + 72);
            }
            else
            {
              v113 = (_WORD *)(v118 + v119 + 40);
            }
            v114 = v163;
            v115 = v162[0];
            if ( !v165
              && (v161 = v162[0],
                  v153 = v163,
                  v137 = v113,
                  v116 = sub_8E5480((__int64)v162),
                  v113 = v137,
                  v114 = v153,
                  v115 = v161,
                  *(_BYTE *)(v116 + 51))
              && v161 == v164 )
            {
              v117 = (_WORD *)(v153 + v161 + 72);
            }
            else
            {
              v117 = (_WORD *)(v114 + v115 + 40);
            }
            *v117 = *v113;
            sub_A1C0C0(&v166);
            sub_A1DB00(v162);
            sub_A1C0C0(v162);
            if ( v20 == v121 )
              break;
            ++v20;
          }
        }
        else
        {
          v21 = (unsigned int)(v19 - 3);
          while ( 2 )
          {
            sub_8E61F0((__int64)v162, a4, v20);
            switch ( v21 )
            {
              case 0LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v77 = v168;
                  v78 = v166;
                  if ( !v170
                    && (v144 = v166,
                        v130 = v168,
                        v79 = sub_8E5480((__int64)&v166),
                        v77 = v130,
                        v78 = v144,
                        *(_BYTE *)(v79 + 51))
                    && v144 == v169 )
                  {
                    v73 = (_WORD *)(v130 + v144 + 72);
                  }
                  else
                  {
                    v73 = (_WORD *)(v77 + v78 + 40);
                  }
                  v74 = v163;
                  v75 = v162[0];
                  if ( !v165
                    && (v158 = v162[0],
                        v148 = v163,
                        v132 = v73,
                        v90 = sub_8E5480((__int64)v162),
                        v73 = v132,
                        v74 = v148,
                        v75 = v158,
                        *(_BYTE *)(v90 + 51))
                    && v158 == v164 )
                  {
                    v76 = (_WORD *)(v148 + v158 + 72);
                  }
                  else
                  {
                    v76 = (_WORD *)(v74 + v75 + 40);
                  }
                  *v76 = *v73;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 1LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_112;
                  v66 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v66 + 16) != v169 && v169 )
                    v66 = *(_QWORD *)(v168 + v169 + 32);
                  if ( *(_BYTE *)(v66 + 51) && v166 == v169 )
                    v64 = (_DWORD *)(v168 + v166 + 72);
                  else
LABEL_112:
                    v64 = (_DWORD *)(v168 + v166 + 40);
                  if ( v165 )
                    goto LABEL_114;
                  v95 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v95 + 16) != v164 && v164 )
                    v95 = *(_QWORD *)(v163 + v164 + 32);
                  if ( *(_BYTE *)(v95 + 51) && v162[0] == v164 )
                    v65 = (_DWORD *)(v163 + v162[0] + 72);
                  else
LABEL_114:
                    v65 = (_DWORD *)(v163 + v162[0] + 40);
                  *v65 = *v64;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 2LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_136;
                  v72 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v72 + 16) != v169 && v169 )
                    v72 = *(_QWORD *)(v168 + v169 + 32);
                  if ( *(_BYTE *)(v72 + 51) && v166 == v169 )
                    v70 = (_DWORD *)(v168 + v166 + 72);
                  else
LABEL_136:
                    v70 = (_DWORD *)(v168 + v166 + 40);
                  if ( v165 )
                    goto LABEL_138;
                  v91 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v91 + 16) != v164 && v164 )
                    v91 = *(_QWORD *)(v163 + v164 + 32);
                  if ( *(_BYTE *)(v91 + 51) && v162[0] == v164 )
                    v71 = (_DWORD *)(v163 + v162[0] + 72);
                  else
LABEL_138:
                    v71 = (_DWORD *)(v163 + v162[0] + 40);
                  *v71 = *v70;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 3LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_85;
                  v60 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v60 + 16) != v169 && v169 )
                    v60 = *(_QWORD *)(v168 + v169 + 32);
                  if ( *(_BYTE *)(v60 + 51) && v166 == v169 )
                    v58 = (_QWORD *)(v168 + v166 + 72);
                  else
LABEL_85:
                    v58 = (_QWORD *)(v168 + v166 + 40);
                  if ( v165 )
                    goto LABEL_87;
                  v96 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v96 + 16) != v164 && v164 )
                    v96 = *(_QWORD *)(v163 + v164 + 32);
                  if ( *(_BYTE *)(v96 + 51) && v162[0] == v164 )
                    v59 = (_QWORD *)(v163 + v162[0] + 72);
                  else
LABEL_87:
                    v59 = (_QWORD *)(v163 + v162[0] + 40);
                  *v59 = *v58;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 4LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_124;
                  v69 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v69 + 16) != v169 && v169 )
                    v69 = *(_QWORD *)(v168 + v169 + 32);
                  if ( *(_BYTE *)(v69 + 51) && v166 == v169 )
                    v67 = (_QWORD *)(v168 + v166 + 72);
                  else
LABEL_124:
                    v67 = (_QWORD *)(v168 + v166 + 40);
                  if ( v165 )
                    goto LABEL_126;
                  v93 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v93 + 16) != v164 && v164 )
                    v93 = *(_QWORD *)(v163 + v164 + 32);
                  if ( *(_BYTE *)(v93 + 51) && v162[0] == v164 )
                    v68 = (_QWORD *)(v163 + v162[0] + 72);
                  else
LABEL_126:
                    v68 = (_QWORD *)(v163 + v162[0] + 40);
                  *v68 = *v67;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 5LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_102;
                  v61 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v61 + 16) != v169 && v169 )
                    v61 = *(_QWORD *)(v168 + v169 + 32);
                  if ( !*(_BYTE *)(v61 + 51) || (v62 = v168 + v166 + 72, v166 != v169) )
LABEL_102:
                    v62 = v168 + v166 + 40;
                  if ( v165 )
                    goto LABEL_104;
                  v92 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v92 + 16) != v164 && v164 )
                    v92 = *(_QWORD *)(v163 + v164 + 32);
                  if ( !*(_BYTE *)(v92 + 51) || (v63 = v163 + v162[0] + 72, v162[0] != v164) )
LABEL_104:
                    v63 = v163 + v162[0] + 40;
                  if ( *(_DWORD *)(v63 + 8) <= 0x40u && *(_DWORD *)(v62 + 8) <= 0x40u )
                  {
                    *(_QWORD *)v63 = *(_QWORD *)v62;
                    *(_DWORD *)(v63 + 8) = *(_DWORD *)(v62 + 8);
                  }
                  else
                  {
                    sub_2585EA0(v63, v62);
                  }
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 6LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  if ( v170 )
                    goto LABEL_75;
                  v55 = *(_QWORD *)(v168 + 32);
                  if ( *(_DWORD *)(v55 + 16) != v169 && v169 )
                    v55 = *(_QWORD *)(v168 + v169 + 32);
                  if ( !*(_BYTE *)(v55 + 51) || (v56 = v168 + v166 + 72, v166 != v169) )
LABEL_75:
                    v56 = v168 + v166 + 40;
                  if ( v165 )
                    goto LABEL_77;
                  v94 = *(_QWORD *)(v163 + 32);
                  if ( *(_DWORD *)(v94 + 16) != v164 && v164 )
                    v94 = *(_QWORD *)(v163 + v164 + 32);
                  if ( !*(_BYTE *)(v94 + 51) || (v57 = v163 + v162[0] + 72, v162[0] != v164) )
LABEL_77:
                    v57 = v163 + v162[0] + 40;
                  if ( *(_DWORD *)(v57 + 8) <= 0x40u && *(_DWORD *)(v56 + 8) <= 0x40u )
                  {
                    *(_QWORD *)v57 = *(_QWORD *)v56;
                    *(_DWORD *)(v57 + 8) = *(_DWORD *)(v56 + 8);
                  }
                  else
                  {
                    sub_2585EA0(v57, v56);
                  }
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 7LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v52 = v168;
                  v53 = v166;
                  if ( !v170
                    && (v143 = v166,
                        v129 = v168,
                        v54 = sub_8E5480((__int64)&v166),
                        v52 = v129,
                        v53 = v143,
                        *(_BYTE *)(v54 + 51))
                    && v143 == v169 )
                  {
                    v48 = (_BYTE *)(v129 + v143 + 72);
                  }
                  else
                  {
                    v48 = (_BYTE *)(v52 + v53 + 40);
                  }
                  v49 = v163;
                  v50 = v162[0];
                  if ( !v165
                    && (v155 = v162[0],
                        v145 = v163,
                        v131 = v48,
                        v87 = sub_8E5480((__int64)v162),
                        v48 = v131,
                        v49 = v145,
                        v50 = v155,
                        *(_BYTE *)(v87 + 51))
                    && v155 == v164 )
                  {
                    v51 = (_BYTE *)(v145 + v155 + 72);
                  }
                  else
                  {
                    v51 = (_BYTE *)(v49 + v50 + 40);
                  }
                  *v51 = *v48;
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 8LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v43 = sub_8E91A0((__int64)&v166) ? v168 + v169 + 72 : v168 + v166 + 40;
                  v127 = v43;
                  v44 = sub_8E91A0((__int64)v162);
                  v45 = v127;
                  v46 = v44 ? v163 + v164 + 72 : v163 + v162[0] + 40;
                  if ( *(_DWORD *)(v46 + 8) <= 0x40u && *(_DWORD *)(v127 + 8) <= 0x40u )
                  {
                    *(_QWORD *)v46 = *(_QWORD *)v127;
                    *(_DWORD *)(v46 + 8) = *(_DWORD *)(v127 + 8);
                  }
                  else
                  {
                    v47 = v127;
                    v142 = v127;
                    v128 = v46;
                    sub_2585EA0(v46, v47);
                    v45 = v142;
                    v46 = v128;
                  }
                  *(_BYTE *)(v46 + 12) = *(_BYTE *)(v45 + 12);
                  *(_DWORD *)(v46 + 16) = *(_DWORD *)(v45 + 16);
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 9LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v37 = v168;
                  v38 = v166;
                  if ( v170
                    || (v141 = v166,
                        v126 = v168,
                        v36 = sub_8E5480((__int64)&v166),
                        v37 = v126,
                        v38 = v141,
                        !*(_BYTE *)(v36 + 51))
                    || (v39 = (__int64 *)(v126 + v141 + 72), v141 != v169) )
                  {
                    v39 = (__int64 *)(v37 + v38 + 40);
                  }
                  v40 = v163;
                  v41 = v162[0];
                  if ( v165
                    || (v156 = v162[0],
                        v146 = v163,
                        v88 = sub_8E5480((__int64)v162),
                        v40 = v146,
                        v41 = v156,
                        !*(_BYTE *)(v88 + 51))
                    || (v42 = (__int64 *)(v146 + v156 + 72), v156 != v164) )
                  {
                    v42 = (__int64 *)(v40 + v41 + 40);
                  }
                  sub_9807A0(v42, v39, v41);
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 10LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v30 = v168;
                  v31 = v166;
                  if ( v170
                    || (v140 = v166,
                        v125 = v168,
                        v29 = sub_8E5480((__int64)&v166),
                        v30 = v125,
                        v31 = v140,
                        !*(_BYTE *)(v29 + 51))
                    || (v32 = v125 + v140 + 72, v140 != v169) )
                  {
                    v32 = v30 + v31 + 40;
                  }
                  v33 = v163;
                  v34 = v162[0];
                  if ( v165
                    || (v157 = v162[0],
                        v147 = v163,
                        v89 = sub_8E5480((__int64)v162),
                        v33 = v147,
                        v34 = v157,
                        !*(_BYTE *)(v89 + 51))
                    || (v35 = v147 + v157 + 72, v157 != v164) )
                  {
                    v35 = v33 + v34 + 40;
                  }
                  sub_A1C120(v35, v32, v34);
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 11LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v27 = sub_8E91A0((__int64)&v166) ? v168 + v169 + 72 : v168 + v166 + 40;
                  v124 = (const __m128i *)v27;
                  v28 = (__m128i *)(sub_8E91A0((__int64)v162) ? v163 + v164 + 72 : v163 + v162[0] + 40);
                  *v28 = _mm_loadu_si128(v124);
                  v28[1].m128i_i8[0] = v124[1].m128i_i8[0];
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              case 12LL:
                while ( 1 )
                {
                  sub_8E61F0((__int64)&v166, a3, v20);
                  v22 = sub_8E91A0((__int64)&v166) ? v168 + v169 + 72 : v168 + v166 + 40;
                  v122 = v22;
                  v23 = sub_8E91A0((__int64)v162);
                  v24 = v122;
                  v25 = v23 ? v163 + v164 + 72 : v163 + v162[0] + 40;
                  v26 = v122;
                  v139 = v122;
                  v123 = v25;
                  sub_A1C120(v25, v26, v24);
                  *(_QWORD *)(v123 + 56) = *(_QWORD *)(v139 + 56);
                  *(_DWORD *)(v123 + 64) = *(_DWORD *)(v139 + 64);
                  sub_A1C0C0(&v166);
                  sub_A1DB00(v162);
                  sub_A1C0C0(v162);
                  if ( v121 == v20 )
                    break;
                  sub_8E61F0((__int64)v162, a4, ++v20);
                }
                break;
              default:
                sub_A1C0C0(v162);
                if ( v20 != v121 )
                {
                  ++v20;
                  continue;
                }
                break;
            }
            break;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          sub_8E61F0((__int64)v162, a4, v20);
          sub_8E61F0((__int64)&v166, a3, v20);
          v97 = v168;
          v98 = v166;
          if ( v170
            || (v149 = v168, v133 = v166,
                             v99 = sub_8E5480((__int64)&v166),
                             v98 = v133,
                             v97 = v149,
                             !*(_BYTE *)(v99 + 51))
            || (v100 = (_BYTE *)(v149 + v169 + 72), v169 != v133) )
          {
            v100 = (_BYTE *)(v97 + v98 + 40);
          }
          v101 = v163;
          v102 = v162[0];
          if ( v165
            || (v159 = v163,
                v150 = v162[0],
                v134 = v100,
                v103 = sub_8E5480((__int64)v162),
                v100 = v134,
                v102 = v150,
                v101 = v159,
                !*(_BYTE *)(v103 + 51))
            || (v104 = (_BYTE *)(v159 + v164 + 72), v164 != v150) )
          {
            v104 = (_BYTE *)(v101 + v102 + 40);
          }
          *v104 = *v100;
          sub_A1C0C0(&v166);
          sub_A1DB00(v162);
          sub_A1C0C0(v162);
          if ( v20 == v121 )
            break;
          ++v20;
        }
      }
    }
  }
  return v9;
}

