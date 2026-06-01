__int64 __fastcall sub_62EBD0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v7; // r14
  _DWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  unsigned int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int16 v19; // ax
  unsigned __int64 v20; // rsi
  __int16 v21; // ax
  unsigned __int64 v22; // rsi
  __int16 v23; // ax
  unsigned __int64 v24; // rsi
  char v25; // al
  unsigned __int64 v26; // rsi
  char v27; // dl
  char *v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  char v32; // al
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  char v36; // al
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  char v40; // al
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // al
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // al
  unsigned __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  char v60; // al
  unsigned __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  char v64; // al
  unsigned __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  unsigned __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  char v72; // al
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // al
  unsigned __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdx
  char v80; // al
  unsigned __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  char v84; // al
  unsigned __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdx
  char v88; // al
  unsigned __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r12
  char v92; // al
  unsigned __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // rsi
  char *v98; // rdx
  char *v99; // rax
  char v100; // dl
  __int16 v101; // ax
  int v102; // r13d
  unsigned __int64 v103; // r12
  char *v104; // rax
  char v105; // dl
  int v106; // eax
  unsigned __int64 v107; // rsi
  char *v108; // rdx
  char *v109; // rax
  char v110; // dl
  __int16 v111; // ax
  unsigned __int64 v112; // rsi
  int v113; // eax
  unsigned __int64 v114; // rsi
  char *v115; // rax
  char *v116; // rdx
  char v117; // al
  __int16 v118; // ax
  unsigned __int64 v119; // rsi
  char *v120; // rdx
  char *v121; // rax
  char v122; // dl
  __int64 v123; // r12
  int v124; // eax
  unsigned __int64 v125; // r14
  unsigned __int64 v126; // rdi
  unsigned __int64 v127; // rsi
  _QWORD *v128; // rdx
  __int64 v129; // rax
  char v130; // al
  unsigned __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // rsi
  char *v136; // rax
  char v138; // cl
  char v139; // cl
  char v140; // cl
  char v141; // cl
  char v142; // cl
  char v143; // cl
  char v144; // cl
  char v145; // cl
  char v146; // cl
  char v147; // cl
  char v148; // cl
  char v149; // cl
  char v150; // cl
  char v151; // cl
  char v152; // cl
  char v153; // cl
  char v154; // cl
  char v155; // cl
  char v156; // cl
  unsigned __int64 v157; // rcx
  __int64 v158; // r12
  unsigned int v159; // r12d
  unsigned int v160; // r12d
  unsigned int v161; // eax
  __int64 v162; // rdx
  bool v163; // zf
  unsigned int v164; // eax
  bool v165; // cf
  char *v166; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v167; // [rsp+8h] [rbp-40h]
  unsigned __int64 v168; // [rsp+18h] [rbp-30h]

  v4 = a3 + a4;
  v168 = __readfsqword(0x28u);
  v166 = (char *)(a3 + 3);
  v167 = a3 + a4;
  *(_DWORD *)a1 = (_DWORD)&loc_414449;
  if ( a3 + a4 >= (unsigned __int64)(a3 + 5) )
  {
    v166 = (char *)(a3 + 5);
    *(_WORD *)(a1 + 4) = *(_WORD *)(a3 + 3);
  }
  v7 = a1 + 6;
  LODWORD(v9) = unpack_dd(&v166);
  v8 = v166;
  v9 = (unsigned int)v9;
  if ( !__CFADD__((unsigned int)v9, v166) && v4 >= (unsigned __int64)&v166[(unsigned int)v9] )
  {
    v166 += (unsigned int)v9;
    if ( v8 )
    {
      if ( (unsigned int)v9 > 0xFuLL )
        v9 = 15;
      if ( (unsigned int)v9 < 8 )
      {
        if ( (v9 & 4) != 0 )
        {
          *(_DWORD *)(a1 + 6) = *v8;
          *(_DWORD *)(v7 + v9 - 4) = *(_DWORD *)((char *)v8 + v9 - 4);
        }
        else if ( (_DWORD)v9 )
        {
          *(_BYTE *)(a1 + 6) = *(_BYTE *)v8;
          if ( (v9 & 2) != 0 )
            *(_WORD *)(v7 + v9 - 2) = *(_WORD *)((char *)v8 + v9 - 2);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 6) = *(_QWORD *)v8;
        *(_QWORD *)(v7 + v9 - 8) = *(_QWORD *)((char *)v8 + v9 - 8);
        v10 = (a1 + 14) & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v7 - v10;
        v12 = (char *)v8 - v11;
        v13 = (v9 + v11) & 0xFFFFFFF8;
        if ( v13 >= 8 )
        {
          v14 = v13 & 0xFFFFFFF8;
          v15 = 0;
          do
          {
            v16 = v15;
            v15 += 8;
            *(_QWORD *)(v10 + v16) = *(_QWORD *)&v12[v16];
          }
          while ( v15 < v14 );
        }
      }
      *(_BYTE *)(a1 + v9 + 6) = 0;
      *(_WORD *)(a1 + 22) = unpack_dw(&v166, v167);
      *(_DWORD *)(a1 + 24) = unpack_dd(&v166);
      v17 = unpack_dd(&v166);
      v18 = v167;
      *(_DWORD *)(a1 + 28) = v17;
      v19 = unpack_dw(&v166, v18);
      v20 = v167;
      *(_WORD *)(a1 + 32) = v19;
      v21 = unpack_dw(&v166, v20);
      v22 = v167;
      *(_WORD *)(a1 + 34) = v21;
      v23 = unpack_dw(&v166, v22);
      v24 = v167;
      *(_WORD *)(a1 + 36) = v23;
      v25 = unpack_dw(&v166, v24);
      v26 = v167;
      v27 = 0;
      *(_BYTE *)(a1 + 38) = v25;
      v28 = v166;
      if ( (unsigned __int64)v166 < v26 )
      {
        v27 = *v166;
        v28 = v166 + 1;
      }
      *(_BYTE *)(a1 + 39) = v27;
      v166 = v28;
      v29 = unpack_dd(&v166);
      v30 = v167;
      *(_DWORD *)(a1 + 40) = v29;
      *(_DWORD *)(a1 + 44) = unpack_dd(&v166);
      v32 = is_cvt64(&v166, v30, v31);
      v33 = v167;
      if ( v32 )
      {
        v34 = (unsigned int)unpack_dd(&v166);
        v35 = -1;
        if ( (unsigned int)v34 == 0xFFFFFFFFLL )
          v34 = -1;
      }
      else
      {
        v34 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 48) = v34;
      v36 = is_cvt64(&v166, v33, v35);
      v37 = v167;
      if ( v36 )
      {
        v38 = (unsigned int)unpack_dd(&v166);
        v39 = -1;
        if ( (unsigned int)v38 == 0xFFFFFFFFLL )
          v38 = -1;
      }
      else
      {
        v38 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 56) = v38;
      v40 = is_cvt64(&v166, v37, v39);
      v41 = v167;
      if ( v40 )
      {
        v42 = (unsigned int)unpack_dd(&v166);
        v43 = -1;
        if ( (unsigned int)v42 == 0xFFFFFFFFLL )
          v42 = -1;
      }
      else
      {
        v42 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 64) = v42;
      v44 = is_cvt64(&v166, v41, v43);
      v45 = v167;
      if ( v44 )
      {
        v46 = (unsigned int)unpack_dd(&v166);
        v47 = -1;
        if ( (unsigned int)v46 == 0xFFFFFFFFLL )
          v46 = -1;
      }
      else
      {
        v46 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 72) = v46;
      v48 = is_cvt64(&v166, v45, v47);
      v49 = v167;
      if ( v48 )
      {
        v50 = (unsigned int)unpack_dd(&v166);
        v51 = -1;
        if ( (unsigned int)v50 == 0xFFFFFFFFLL )
          v50 = -1;
      }
      else
      {
        v50 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 80) = v50;
      v52 = is_cvt64(&v166, v49, v51);
      v53 = v167;
      if ( v52 )
      {
        v54 = (unsigned int)unpack_dd(&v166);
        v55 = -1;
        if ( (unsigned int)v54 == 0xFFFFFFFFLL )
          v54 = -1;
      }
      else
      {
        v54 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 88) = v54;
      v56 = is_cvt64(&v166, v53, v55);
      v57 = v167;
      if ( v56 )
      {
        v58 = (unsigned int)unpack_dd(&v166);
        v59 = -1;
        if ( (unsigned int)v58 == 0xFFFFFFFFLL )
          v58 = -1;
      }
      else
      {
        v58 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 96) = v58;
      v60 = is_cvt64(&v166, v57, v59);
      v61 = v167;
      if ( v60 )
      {
        v62 = (unsigned int)unpack_dd(&v166);
        v63 = -1;
        if ( (unsigned int)v62 == 0xFFFFFFFFLL )
          v62 = -1;
      }
      else
      {
        v62 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 104) = v62;
      v64 = is_cvt64(&v166, v61, v63);
      v65 = v167;
      if ( v64 )
      {
        v66 = (unsigned int)unpack_dd(&v166);
        v67 = -1;
        if ( (unsigned int)v66 == 0xFFFFFFFFLL )
          v66 = -1;
      }
      else
      {
        v66 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 112) = v66;
      v68 = is_cvt64(&v166, v65, v67);
      v69 = v167;
      if ( v68 )
      {
        v70 = (unsigned int)unpack_dd(&v166);
        v71 = -1;
        if ( (unsigned int)v70 == 0xFFFFFFFFLL )
          v70 = -1;
      }
      else
      {
        v70 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 120) = v70;
      v72 = is_cvt64(&v166, v69, v71);
      v73 = v167;
      if ( v72 )
      {
        v74 = (unsigned int)unpack_dd(&v166);
        v75 = -1;
        if ( (unsigned int)v74 == 0xFFFFFFFFLL )
          v74 = -1;
      }
      else
      {
        v74 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 128) = v74;
      v76 = is_cvt64(&v166, v73, v75);
      v77 = v167;
      if ( v76 )
      {
        v78 = (unsigned int)unpack_dd(&v166);
        v79 = -1;
        if ( (unsigned int)v78 == 0xFFFFFFFFLL )
          v78 = -1;
      }
      else
      {
        v78 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 136) = v78;
      v80 = is_cvt64(&v166, v77, v79);
      v81 = v167;
      if ( v80 )
      {
        v82 = (unsigned int)unpack_dd(&v166);
        v83 = -1;
        if ( (unsigned int)v82 == 0xFFFFFFFFLL )
          v82 = -1;
      }
      else
      {
        v82 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 144) = v82;
      v84 = is_cvt64(&v166, v81, v83);
      v85 = v167;
      if ( v84 )
      {
        v86 = (unsigned int)unpack_dd(&v166);
        v87 = -1;
        if ( (unsigned int)v86 == 0xFFFFFFFFLL )
          v86 = -1;
      }
      else
      {
        v86 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 152) = v86;
      v88 = is_cvt64(&v166, v85, v87);
      v89 = v167;
      if ( v88 )
      {
        v91 = (unsigned int)unpack_dd(&v166);
        if ( v91 == 0xFFFFFFFFLL )
          v91 = -1;
      }
      else
      {
        v91 = unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 160) = v91;
      v92 = is_cvt64(&v166, v89, v90);
      v93 = v167;
      if ( v92 )
      {
        v94 = (unsigned int)v91 + (unsigned int)unpack_dd(&v166);
        v95 = -1;
        if ( v94 == 0xFFFFFFFFLL )
          v94 = -1;
      }
      else
      {
        v94 = v91 + unpack_dq(&v166);
      }
      *(_QWORD *)(a1 + 168) = v94;
      if ( (unsigned __int8)is_cvt64(&v166, v93, v95) )
      {
        v161 = unpack_dd(&v166);
        v162 = v161;
        v163 = v161 == -1;
        v96 = -1;
        if ( !v163 )
          v96 = v162;
      }
      else
      {
        v96 = unpack_dq(&v166);
      }
      v97 = v167;
      v98 = v166;
      *(_QWORD *)(a1 + 176) = v96;
      if ( (unsigned __int64)v98 < v97 )
      {
        v154 = *v98;
        v99 = v98 + 1;
        v166 = v98 + 1;
        *(_BYTE *)(a1 + 184) = v154;
        if ( (unsigned __int64)(v98 + 1) < v97 )
        {
          v155 = v98[1];
          v99 = v98 + 2;
          v166 = v98 + 2;
          *(_BYTE *)(a1 + 185) = v155;
          if ( (unsigned __int64)(v98 + 2) < v97 )
          {
            v156 = v98[2];
            v99 = v98 + 3;
            v166 = v98 + 3;
            *(_BYTE *)(a1 + 186) = v156;
            if ( (unsigned __int64)(v98 + 3) >= v97 )
            {
              v100 = 0;
            }
            else
            {
              v99 = v98 + 4;
              v100 = v98[3];
            }
LABEL_52:
            *(_BYTE *)(a1 + 187) = v100;
            v166 = v99;
            v101 = unpack_dw(&v166, v97);
            v102 = a2 & 0x10000;
            v103 = v167;
            *(_WORD *)(a1 + 188) = v101;
            v104 = v166;
            if ( !v102 )
            {
              v164 = unpack_dd(&v166);
              v165 = __CFADD__(v166, v164);
              v104 = &v166[v164];
              if ( v165 || v103 < (unsigned __int64)v104 )
                v104 = v166;
              v103 = v167;
              v105 = 0;
              if ( (unsigned __int64)v104 >= v167 )
              {
LABEL_55:
                *(_BYTE *)(a1 + 190) = v105;
                v166 = v104;
                *(_DWORD *)(a1 + 192) = unpack_dd(&v166);
                v106 = unpack_dd(&v166);
                v107 = v167;
                v108 = v166;
                *(_DWORD *)(a1 + 196) = v106;
                if ( (unsigned __int64)v108 < v107 )
                {
                  v151 = *v108;
                  v109 = v108 + 1;
                  v166 = v108 + 1;
                  *(_BYTE *)(a1 + 200) = v151;
                  if ( (unsigned __int64)(v108 + 1) < v107 )
                  {
                    v152 = v108[1];
                    v109 = v108 + 2;
                    v166 = v108 + 2;
                    *(_BYTE *)(a1 + 201) = v152;
                    if ( (unsigned __int64)(v108 + 2) < v107 )
                    {
                      v153 = v108[2];
                      v109 = v108 + 3;
                      v166 = v108 + 3;
                      *(_BYTE *)(a1 + 202) = v153;
                      if ( (unsigned __int64)(v108 + 3) >= v107 )
                      {
                        v110 = 0;
                      }
                      else
                      {
                        v109 = v108 + 4;
                        v110 = v108[3];
                      }
                      goto LABEL_59;
                    }
LABEL_58:
                    *(_BYTE *)(a1 + 202) = 0;
                    v110 = 0;
LABEL_59:
                    *(_BYTE *)(a1 + 203) = v110;
                    v166 = v109;
                    v111 = unpack_dw(&v166, v107);
                    v112 = v167;
                    *(_WORD *)(a1 + 204) = v111;
                    *(_WORD *)(a1 + 206) = unpack_dw(&v166, v112);
                    v113 = unpack_dd(&v166);
                    v114 = v167;
                    *(_DWORD *)(a1 + 208) = v113;
                    v115 = v166;
                    if ( (unsigned __int64)v166 < v114 )
                    {
                      v150 = *v166;
                      v116 = ++v166;
                      *(_BYTE *)(a1 + 212) = v150;
                      if ( (unsigned __int64)(v115 + 1) >= v114 )
                      {
                        v117 = 0;
                      }
                      else
                      {
                        v116 = v115 + 2;
                        v117 = v115[1];
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 212) = 0;
                      v116 = v115;
                      v117 = 0;
                    }
                    *(_BYTE *)(a1 + 213) = v117;
                    v166 = v116;
                    v118 = unpack_dw(&v166, v114);
                    v119 = v167;
                    v120 = v166;
                    *(_WORD *)(a1 + 214) = v118;
                    if ( (unsigned __int64)v120 < v119 )
                    {
                      v147 = *v120;
                      v121 = v120 + 1;
                      v166 = v120 + 1;
                      *(_BYTE *)(a1 + 216) = v147;
                      if ( (unsigned __int64)(v120 + 1) < v119 )
                      {
                        v148 = v120[1];
                        v121 = v120 + 2;
                        v166 = v120 + 2;
                        *(_BYTE *)(a1 + 217) = v148;
                        if ( (unsigned __int64)(v120 + 2) < v119 )
                        {
                          v149 = v120[2];
                          v121 = v120 + 3;
                          v166 = v120 + 3;
                          *(_BYTE *)(a1 + 218) = v149;
                          if ( (unsigned __int64)(v120 + 3) >= v119 )
                          {
                            v122 = 0;
                          }
                          else
                          {
                            v121 = v120 + 4;
                            v122 = v120[3];
                          }
LABEL_65:
                          *(_BYTE *)(a1 + 219) = v122;
                          v123 = a1 + 224;
                          v166 = v121;
                          v124 = unpack_dd(&v166);
                          v125 = v167;
                          v126 = (unsigned __int64)&v166;
                          *(_DWORD *)(a1 + 220) = v124;
                          v127 = v125;
                          LODWORD(v129) = unpack_dd(&v166);
                          v128 = v166;
                          v129 = (unsigned int)v129;
                          if ( !__CFADD__((unsigned int)v129, v166)
                            && v125 >= (unsigned __int64)&v166[(unsigned int)v129] )
                          {
                            v166 += (unsigned int)v129;
                            if ( v128 )
                            {
                              if ( (unsigned int)v129 > 0xFuLL )
                                v129 = 15;
                              if ( (unsigned int)v129 >= 8 )
                              {
                                *(_QWORD *)(a1 + 224) = *v128;
                                *(_QWORD *)(v123 + v129 - 8) = *(_QWORD *)((char *)v128 + v129 - 8);
                                v157 = (a1 + 232) & 0xFFFFFFFFFFFFFFF8LL;
                                v158 = v123 - v157;
                                v128 = (_QWORD *)((char *)v128 - v158);
                                v159 = (v129 + v158) & 0xFFFFFFF8;
                                if ( v159 >= 8 )
                                {
                                  v160 = v159 & 0xFFFFFFF8;
                                  LODWORD(v127) = 0;
                                  do
                                  {
                                    v126 = (unsigned int)v127;
                                    v127 = (unsigned int)(v127 + 8);
                                    *(_QWORD *)(v157 + v126) = *(_QWORD *)((char *)v128 + v126);
                                  }
                                  while ( (unsigned int)v127 < v160 );
                                }
                              }
                              else if ( (v129 & 4) != 0 )
                              {
                                *(_DWORD *)(a1 + 224) = *(_DWORD *)v128;
                                v128 = (_QWORD *)*(unsigned int *)((char *)v128 + v129 - 4);
                                *(_DWORD *)(v123 + v129 - 4) = (_DWORD)v128;
                              }
                              else if ( (_DWORD)v129 )
                              {
                                *(_BYTE *)(a1 + 224) = *(_BYTE *)v128;
                                if ( (v129 & 2) != 0 )
                                {
                                  v128 = (_QWORD *)*(unsigned __int16 *)((char *)v128 + v129 - 2);
                                  *(_WORD *)(v123 + v129 - 2) = (_WORD)v128;
                                }
                              }
                              *(_BYTE *)(a1 + v129 + 224) = 0;
                            }
                          }
                          v130 = is_cvt64(v126, v127, v128);
                          v131 = v167;
                          if ( v130 )
                          {
                            v132 = (unsigned int)unpack_dd(&v166);
                            v133 = -1;
                            if ( (unsigned int)v132 == 0xFFFFFFFFLL )
                              v132 = -1;
                          }
                          else
                          {
                            v132 = unpack_dq(&v166);
                          }
                          *(_QWORD *)(a1 + 240) = v132;
                          if ( (unsigned __int8)is_cvt64(&v166, v131, v133) )
                          {
                            v134 = (unsigned int)unpack_dd(&v166);
                            if ( (unsigned int)v134 == 0xFFFFFFFFLL )
                              v134 = -1;
                          }
                          else
                          {
                            v134 = unpack_dq(&v166);
                          }
                          *(_QWORD *)(a1 + 248) = v134;
                          v135 = v167;
                          v136 = v166;
                          if ( !v102 )
                          {
                            if ( (unsigned __int64)v166 >= v167 )
                              goto LABEL_82;
                            v136 = ++v166;
                          }
                          if ( (unsigned __int64)v136 < v167 )
                          {
                            v138 = *v136;
                            v166 = v136 + 1;
                            *(_BYTE *)(a1 + 256) = v138;
                            if ( (unsigned __int64)(v136 + 1) < v135 )
                            {
                              v139 = v136[1];
                              v166 = v136 + 2;
                              *(_BYTE *)(a1 + 257) = v139;
                              if ( (unsigned __int64)(v136 + 2) < v135 )
                              {
                                v140 = v136[2];
                                v166 = v136 + 3;
                                *(_BYTE *)(a1 + 258) = v140;
                                if ( (unsigned __int64)(v136 + 3) < v135 )
                                {
                                  v141 = v136[3];
                                  v166 = v136 + 4;
                                  *(_BYTE *)(a1 + 259) = v141;
                                  if ( (unsigned __int64)(v136 + 4) < v135 )
                                  {
                                    v142 = v136[4];
                                    v166 = v136 + 5;
                                    *(_BYTE *)(a1 + 260) = v142;
                                    if ( (unsigned __int64)(v136 + 5) < v135 )
                                    {
                                      v143 = v136[5];
                                      v166 = v136 + 6;
                                      *(_BYTE *)(a1 + 261) = v143;
                                      if ( (unsigned __int64)(v136 + 6) < v135 )
                                      {
                                        v144 = v136[6];
                                        v166 = v136 + 7;
                                        *(_BYTE *)(a1 + 262) = v144;
                                        if ( (unsigned __int64)(v136 + 7) < v135 )
                                        {
                                          v145 = v136[7];
                                          v166 = v136 + 8;
                                          *(_BYTE *)(a1 + 263) = v145;
                                          if ( (unsigned __int64)(v136 + 8) < v135 )
                                          {
                                            *(_BYTE *)(a1 + 264) = v136[8];
                                            if ( (unsigned __int64)(v136 + 9) < v135 )
                                            {
                                              v146 = v136[9];
                                              v166 = v136 + 10;
                                              *(_BYTE *)(a1 + 265) = v146;
                                              if ( v102 )
                                                goto LABEL_92;
                                              if ( (unsigned __int64)(v136 + 10) >= v135 )
                                                v136 += 10;
                                              else
                                                v136 += 11;
                                              goto LABEL_111;
                                            }
                                            v136 += 9;
LABEL_91:
                                            v166 = v136;
                                            *(_BYTE *)(a1 + 265) = 0;
                                            if ( v102 )
                                            {
LABEL_92:
                                              *(_DWORD *)(a1 + 272) = unpack_dd(&v166);
                                              *(_DWORD *)(a1 + 276) = unpack_dd(&v166);
                                              *(_DWORD *)(a1 + 268) = unpack_dd(&v166);
                                              return 1;
                                            }
LABEL_111:
                                            v166 = v136;
                                            goto LABEL_92;
                                          }
                                          v136 += 8;
LABEL_90:
                                          *(_BYTE *)(a1 + 264) = 0;
                                          goto LABEL_91;
                                        }
                                        v136 += 7;
LABEL_89:
                                        *(_BYTE *)(a1 + 263) = 0;
                                        goto LABEL_90;
                                      }
                                      v136 += 6;
LABEL_88:
                                      *(_BYTE *)(a1 + 262) = 0;
                                      goto LABEL_89;
                                    }
                                    v136 += 5;
LABEL_87:
                                    *(_BYTE *)(a1 + 261) = 0;
                                    goto LABEL_88;
                                  }
                                  v136 += 4;
LABEL_86:
                                  *(_BYTE *)(a1 + 260) = 0;
                                  goto LABEL_87;
                                }
                                v136 += 3;
LABEL_85:
                                *(_BYTE *)(a1 + 259) = 0;
                                goto LABEL_86;
                              }
                              v136 += 2;
LABEL_84:
                              *(_BYTE *)(a1 + 258) = 0;
                              goto LABEL_85;
                            }
                            ++v136;
LABEL_83:
                            *(_BYTE *)(a1 + 257) = 0;
                            goto LABEL_84;
                          }
LABEL_82:
                          *(_BYTE *)(a1 + 256) = 0;
                          goto LABEL_83;
                        }
LABEL_64:
                        *(_BYTE *)(a1 + 218) = 0;
                        v122 = 0;
                        goto LABEL_65;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 216) = 0;
                      v121 = v120;
                    }
                    *(_BYTE *)(a1 + 217) = 0;
                    goto LABEL_64;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 200) = 0;
                  v109 = v108;
                }
                *(_BYTE *)(a1 + 201) = 0;
                goto LABEL_58;
              }
              v166 = ++v104;
            }
            v105 = 0;
            if ( (unsigned __int64)v104 < v103 )
              v105 = *v104++;
            goto LABEL_55;
          }
LABEL_51:
          *(_BYTE *)(a1 + 186) = 0;
          v100 = 0;
          goto LABEL_52;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 184) = 0;
        v99 = v98;
      }
      *(_BYTE *)(a1 + 185) = 0;
      goto LABEL_51;
    }
  }
  return 0;
}
