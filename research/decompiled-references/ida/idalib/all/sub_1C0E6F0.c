__int64 __fastcall sub_1C0E6F0(__int64 *a1, unsigned __int64 a2, char *a3, double a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  int v18; // edx
  __int64 result; // rax
  unsigned int v20; // eax
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r14
  unsigned __int8 *v30; // rbp
  _BYTE *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbp
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbp
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  unsigned __int8 *v39; // rbp
  unsigned __int8 *v40; // rdx
  __int64 v41; // rax
  unsigned __int8 *v42; // rbp
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // rbp
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r14
  unsigned __int8 *v56; // rbp
  _BYTE *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbp
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // r12
  unsigned __int8 *v67; // rbp
  _BYTE *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbp
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // r12
  unsigned __int8 *v78; // rbp
  _BYTE *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbp
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // r12
  unsigned __int8 *v89; // rbp
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // r13
  __int64 v113; // r12
  void *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // r13
  __int64 v117; // r14
  __int64 v118; // r13
  void *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r12
  __int64 v122; // r13
  __int64 v123; // r12
  void *v124; // rdi
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // r14
  __int64 v128; // r13
  void *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // r13
  __int64 v133; // r12
  void *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // r13
  __int64 v137; // r14
  __int64 v138; // r13
  void *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // r13
  __int64 v142; // rdx
  __int64 v143; // r13
  void *v144; // rdi
  unsigned int v145; // eax
  __int64 v146; // r13
  __int64 v147; // r14
  __int64 v148; // r13
  void *v149; // rdi
  __int64 v150; // rax
  __int64 v151; // r13
  __int64 v152; // r15
  __int64 v153; // r13
  void *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // r13
  __int64 v157; // r14
  __int64 v158; // r13
  void *v159; // rdi
  _QWORD *v160; // [rsp+8h] [rbp-100h]
  unsigned __int8 v161; // [rsp+8h] [rbp-100h]
  __int64 v162; // [rsp+8h] [rbp-100h]
  char *v164; // [rsp+28h] [rbp-E0h] BYREF
  int v165; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v166; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v167[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v168; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v169; // [rsp+60h] [rbp-A8h]
  __int64 v170; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v171; // [rsp+B8h] [rbp-50h]
  unsigned int v172; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v173; // [rsp+C4h] [rbp-44h]

  v164 = a3;
  v160 = (_QWORD *)sub_168B6C0((__int64)a1);
  v5 = 0;
  v165 = 0;
  *(_QWORD *)(a2 + 8) = sub_1C0CC10(v160, &v164, &v165);
  if ( !*v164 )
    return sub_16EC930(*a1, a2, v5, a4);
  while ( 1 )
  {
    v11 = (unsigned __int64)&v164;
    v165 = 0;
    v15 = sub_1C0CC10(v160, &v164, &v165);
    if ( *(_DWORD *)(a2 + 16) <= v5 )
      break;
    v16 = *(_QWORD *)(a2 + 8 * (v5 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
    v17 = *(_QWORD *)(v16 + 8);
    v10 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v17 | (unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v18 = ((unsigned __int8)v17 | (unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    if ( (((unsigned __int8)v17 | (unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL]) & 2) != 0 )
    {
      v6 = *(_QWORD *)&byte_8[*(_QWORD *)&byte_8[*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL];
      v7 = *(_DWORD *)&byte_8[*(_QWORD *)&byte_8[*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL]
         & 7
         | (unsigned int)v18;
    }
    else
    {
      v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
      v6 = *(_QWORD *)&byte_8[v11];
      v7 = v6 & 7 | (unsigned int)v18;
      v14 = v7 & 4;
      v13 = (unsigned int)v14 | v6 & 2;
      if ( !((unsigned int)v14 | v6 & 2) )
        goto LABEL_7;
    }
    v8 = v7 | v6 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v9 + 8) & 0xF) != 0 )
      v9 = sub_F64F00(v8, v11, v7, v13, v14);
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = v10;
LABEL_7:
    if ( v10 != v15 )
    {
      if ( !sub_F67340(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL))
        || (v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL), v12 != 42)
        && (unsigned __int8)(v12 - 2) > 4u )
      {
        v20 = sub_EEB7E0(v16, v11, a4);
        sub_168B9F0((__int64)v167, a1, v20, 0x1482u, 0);
        if ( v171 )
        {
          v45 = v169;
          if ( !v169 )
          {
            v92 = v170;
            v93 = *(_DWORD *)(v170 + 14976);
            if ( v93 )
            {
              v125 = (unsigned int)(v93 - 1);
              *(_DWORD *)(v170 + 14976) = v125;
              v45 = *(unsigned __int8 **)(v92 + 8 * v125 + 14848);
              v126 = *((unsigned int *)v45 + 134);
              *v45 = 0;
              v127 = *((_QWORD *)v45 + 66);
              *((_DWORD *)v45 + 106) = 0;
              v128 = v127 + (v126 << 6);
              while ( v127 != v128 )
              {
                while ( 1 )
                {
                  v128 -= 64;
                  v129 = *(void **)(v128 + 24);
                  if ( v129 == (void *)(v128 + 40) )
                    break;
                  operator delete(v129);
                  if ( v127 == v128 )
                    goto LABEL_110;
                }
              }
LABEL_110:
              *((_DWORD *)v45 + 134) = 0;
            }
            else
            {
              v45 = (unsigned __int8 *)operator new(0x3A0u);
              *v45 = 0;
              *((_QWORD *)v45 + 12) = v45 + 112;
              *((_QWORD *)v45 + 16) = v45 + 144;
              *((_QWORD *)v45 + 20) = v45 + 176;
              *((_QWORD *)v45 + 24) = v45 + 208;
              *((_QWORD *)v45 + 28) = v45 + 240;
              *((_QWORD *)v45 + 32) = v45 + 272;
              *((_QWORD *)v45 + 36) = v45 + 304;
              *((_QWORD *)v45 + 40) = v45 + 336;
              *((_QWORD *)v45 + 44) = v45 + 368;
              *((_QWORD *)v45 + 48) = v45 + 400;
              *((_QWORD *)v45 + 52) = v45 + 432;
              *((_QWORD *)v45 + 13) = 0;
              v45[112] = 0;
              *((_QWORD *)v45 + 17) = 0;
              v45[144] = 0;
              *((_QWORD *)v45 + 21) = 0;
              v45[176] = 0;
              *((_QWORD *)v45 + 25) = 0;
              v45[208] = 0;
              *((_QWORD *)v45 + 29) = 0;
              v45[240] = 0;
              *((_QWORD *)v45 + 33) = 0;
              v45[272] = 0;
              *((_QWORD *)v45 + 37) = 0;
              v45[304] = 0;
              *((_QWORD *)v45 + 41) = 0;
              v45[336] = 0;
              *((_QWORD *)v45 + 45) = 0;
              v45[368] = 0;
              *((_QWORD *)v45 + 49) = 0;
              v45[400] = 0;
              *((_QWORD *)v45 + 53) = 0x800000000LL;
              *((_QWORD *)v45 + 66) = v45 + 544;
              *((_QWORD *)v45 + 67) = 0x600000000LL;
            }
            v169 = v45;
          }
          v45[*v45 + 1] = 8;
          v46 = v169;
          v47 = *v169;
          *v169 = v47 + 1;
          *(_QWORD *)&v46[8 * v47 + 16] = v17;
          if ( v171 )
            goto LABEL_30;
        }
        else
        {
          if ( !v173 )
            goto LABEL_24;
          v24 = sub_168B9E0(v167);
          v27 = v168;
          if ( v168 )
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
          v166 = v27;
          v28 = sub_1587BC0(v24, &v166, v22, v23, v25, v26);
          v29 = *v28 + 32LL * v172;
          v30 = *(unsigned __int8 **)(v29 + 8);
          if ( !v30 )
          {
            v100 = *(_QWORD *)(v29 + 16);
            v101 = *(_DWORD *)(v100 + 14976);
            if ( v101 )
            {
              v140 = (unsigned int)(v101 - 1);
              *(_DWORD *)(v100 + 14976) = v140;
              v30 = *(unsigned __int8 **)(v100 + 8 * v140 + 14848);
              v141 = *((unsigned int *)v30 + 134);
              *v30 = 0;
              v142 = *((_QWORD *)v30 + 66);
              *((_DWORD *)v30 + 106) = 0;
              v143 = v142 + (v141 << 6);
              while ( v142 != v143 )
              {
                while ( 1 )
                {
                  v143 -= 64;
                  v144 = *(void **)(v143 + 24);
                  if ( v144 == (void *)(v143 + 40) )
                    break;
                  v162 = v142;
                  operator delete(v144);
                  v142 = v162;
                  if ( v162 == v143 )
                    goto LABEL_125;
                }
              }
LABEL_125:
              *((_DWORD *)v30 + 134) = 0;
            }
            else
            {
              v30 = (unsigned __int8 *)operator new(0x3A0u);
              *v30 = 0;
              *((_QWORD *)v30 + 12) = v30 + 112;
              *((_QWORD *)v30 + 16) = v30 + 144;
              *((_QWORD *)v30 + 20) = v30 + 176;
              *((_QWORD *)v30 + 24) = v30 + 208;
              *((_QWORD *)v30 + 28) = v30 + 240;
              *((_QWORD *)v30 + 32) = v30 + 272;
              *((_QWORD *)v30 + 36) = v30 + 304;
              *((_QWORD *)v30 + 40) = v30 + 336;
              *((_QWORD *)v30 + 44) = v30 + 368;
              *((_QWORD *)v30 + 48) = v30 + 400;
              *((_QWORD *)v30 + 52) = v30 + 432;
              *((_QWORD *)v30 + 13) = 0;
              v30[112] = 0;
              *((_QWORD *)v30 + 17) = 0;
              v30[144] = 0;
              *((_QWORD *)v30 + 21) = 0;
              v30[176] = 0;
              *((_QWORD *)v30 + 25) = 0;
              v30[208] = 0;
              *((_QWORD *)v30 + 29) = 0;
              v30[240] = 0;
              *((_QWORD *)v30 + 33) = 0;
              v30[272] = 0;
              *((_QWORD *)v30 + 37) = 0;
              v30[304] = 0;
              *((_QWORD *)v30 + 41) = 0;
              v30[336] = 0;
              *((_QWORD *)v30 + 45) = 0;
              v30[368] = 0;
              *((_QWORD *)v30 + 49) = 0;
              v30[400] = 0;
              *((_QWORD *)v30 + 53) = 0x800000000LL;
              *((_QWORD *)v30 + 66) = v30 + 544;
              *((_QWORD *)v30 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v29 + 8) = v30;
          }
          v30[*v30 + 1] = 8;
          v31 = *(_BYTE **)(v29 + 8);
          v32 = (unsigned __int8)*v31;
          *v31 = v32 + 1;
          *(_QWORD *)&v31[8 * v32 + 16] = v17;
          if ( v171 )
          {
LABEL_30:
            v33 = v169;
            if ( !v169 )
            {
              v90 = v170;
              v91 = *(_DWORD *)(v170 + 14976);
              if ( v91 )
              {
                v115 = (unsigned int)(v91 - 1);
                *(_DWORD *)(v170 + 14976) = v115;
                v33 = *(unsigned __int8 **)(v90 + 8 * v115 + 14848);
                v116 = *((unsigned int *)v33 + 134);
                *v33 = 0;
                v117 = *((_QWORD *)v33 + 66);
                *((_DWORD *)v33 + 106) = 0;
                v118 = v117 + (v116 << 6);
                while ( v117 != v118 )
                {
                  while ( 1 )
                  {
                    v118 -= 64;
                    v119 = *(void **)(v118 + 24);
                    if ( v119 == (void *)(v118 + 40) )
                      break;
                    operator delete(v119);
                    if ( v117 == v118 )
                      goto LABEL_100;
                  }
                }
LABEL_100:
                *((_DWORD *)v33 + 134) = 0;
              }
              else
              {
                v33 = (unsigned __int8 *)operator new(0x3A0u);
                *v33 = 0;
                *((_QWORD *)v33 + 12) = v33 + 112;
                *((_QWORD *)v33 + 16) = v33 + 144;
                *((_QWORD *)v33 + 20) = v33 + 176;
                *((_QWORD *)v33 + 24) = v33 + 208;
                *((_QWORD *)v33 + 28) = v33 + 240;
                *((_QWORD *)v33 + 32) = v33 + 272;
                *((_QWORD *)v33 + 36) = v33 + 304;
                *((_QWORD *)v33 + 40) = v33 + 336;
                *((_QWORD *)v33 + 44) = v33 + 368;
                *((_QWORD *)v33 + 48) = v33 + 400;
                *((_QWORD *)v33 + 52) = v33 + 432;
                *((_QWORD *)v33 + 13) = 0;
                v33[112] = 0;
                *((_QWORD *)v33 + 17) = 0;
                v33[144] = 0;
                *((_QWORD *)v33 + 21) = 0;
                v33[176] = 0;
                *((_QWORD *)v33 + 25) = 0;
                v33[208] = 0;
                *((_QWORD *)v33 + 29) = 0;
                v33[240] = 0;
                *((_QWORD *)v33 + 33) = 0;
                v33[272] = 0;
                *((_QWORD *)v33 + 37) = 0;
                v33[304] = 0;
                *((_QWORD *)v33 + 41) = 0;
                v33[336] = 0;
                *((_QWORD *)v33 + 45) = 0;
                v33[368] = 0;
                *((_QWORD *)v33 + 49) = 0;
                v33[400] = 0;
                *((_QWORD *)v33 + 53) = 0x800000000LL;
                *((_QWORD *)v33 + 66) = v33 + 544;
                *((_QWORD *)v33 + 67) = 0x600000000LL;
              }
              v169 = v33;
            }
            v33[*v33 + 1] = 8;
            v34 = v169;
            v35 = *v169;
            *v169 = v35 + 1;
            *(_QWORD *)&v34[8 * v35 + 16] = v15;
            if ( v171 )
              goto LABEL_32;
LABEL_46:
            if ( v173 )
            {
              v61 = sub_168B9E0(v167);
              v64 = v168;
              if ( v168 )
                v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
              v166 = v64;
              v65 = sub_1587BC0(v61, &v166, v59, v60, v62, v63);
              v66 = *v65 + 32LL * v172;
              v67 = *(unsigned __int8 **)(v66 + 8);
              if ( !v67 )
              {
                v106 = *(_QWORD *)(v66 + 16);
                v107 = *(_DWORD *)(v106 + 14976);
                if ( v107 )
                {
                  v155 = (unsigned int)(v107 - 1);
                  *(_DWORD *)(v106 + 14976) = v155;
                  v67 = *(unsigned __int8 **)(v106 + 8 * v155 + 14848);
                  v156 = *((unsigned int *)v67 + 134);
                  *v67 = 0;
                  v157 = *((_QWORD *)v67 + 66);
                  *((_DWORD *)v67 + 106) = 0;
                  v158 = v157 + (v156 << 6);
                  while ( v157 != v158 )
                  {
                    while ( 1 )
                    {
                      v158 -= 64;
                      v159 = *(void **)(v158 + 24);
                      if ( v159 == (void *)(v158 + 40) )
                        break;
                      operator delete(v159);
                      if ( v157 == v158 )
                        goto LABEL_140;
                    }
                  }
LABEL_140:
                  *((_DWORD *)v67 + 134) = 0;
                }
                else
                {
                  v67 = (unsigned __int8 *)operator new(0x3A0u);
                  *v67 = 0;
                  *((_QWORD *)v67 + 12) = v67 + 112;
                  *((_QWORD *)v67 + 16) = v67 + 144;
                  *((_QWORD *)v67 + 20) = v67 + 176;
                  *((_QWORD *)v67 + 24) = v67 + 208;
                  *((_QWORD *)v67 + 28) = v67 + 240;
                  *((_QWORD *)v67 + 32) = v67 + 272;
                  *((_QWORD *)v67 + 36) = v67 + 304;
                  *((_QWORD *)v67 + 40) = v67 + 336;
                  *((_QWORD *)v67 + 44) = v67 + 368;
                  *((_QWORD *)v67 + 48) = v67 + 400;
                  *((_QWORD *)v67 + 52) = v67 + 432;
                  *((_QWORD *)v67 + 13) = 0;
                  v67[112] = 0;
                  *((_QWORD *)v67 + 17) = 0;
                  v67[144] = 0;
                  *((_QWORD *)v67 + 21) = 0;
                  v67[176] = 0;
                  *((_QWORD *)v67 + 25) = 0;
                  v67[208] = 0;
                  *((_QWORD *)v67 + 29) = 0;
                  v67[240] = 0;
                  *((_QWORD *)v67 + 33) = 0;
                  v67[272] = 0;
                  *((_QWORD *)v67 + 37) = 0;
                  v67[304] = 0;
                  *((_QWORD *)v67 + 41) = 0;
                  v67[336] = 0;
                  *((_QWORD *)v67 + 45) = 0;
                  v67[368] = 0;
                  *((_QWORD *)v67 + 49) = 0;
                  v67[400] = 0;
                  *((_QWORD *)v67 + 53) = 0x800000000LL;
                  *((_QWORD *)v67 + 66) = v67 + 544;
                  *((_QWORD *)v67 + 67) = 0x600000000LL;
                }
                *(_QWORD *)(v66 + 8) = v67;
              }
              v67[*v67 + 1] = 2;
              v68 = *(_BYTE **)(v66 + 8);
              v69 = (unsigned __int8)*v68;
              *v68 = v69 + 1;
              *(_QWORD *)&v68[8 * v69 + 16] = 1;
              if ( !v171 )
                goto LABEL_51;
LABEL_34:
              v39 = v169;
              if ( !v169 )
              {
                v94 = v170;
                v95 = *(_DWORD *)(v170 + 14976);
                if ( v95 )
                {
                  v120 = (unsigned int)(v95 - 1);
                  *(_DWORD *)(v170 + 14976) = v120;
                  v39 = *(unsigned __int8 **)(v94 + 8 * v120 + 14848);
                  v121 = *((unsigned int *)v39 + 134);
                  *v39 = 0;
                  v122 = *((_QWORD *)v39 + 66);
                  *((_DWORD *)v39 + 106) = 0;
                  v123 = v122 + (v121 << 6);
                  while ( v122 != v123 )
                  {
                    while ( 1 )
                    {
                      v123 -= 64;
                      v124 = *(void **)(v123 + 24);
                      if ( v124 == (void *)(v123 + 40) )
                        break;
                      operator delete(v124);
                      if ( v122 == v123 )
                        goto LABEL_105;
                    }
                  }
LABEL_105:
                  *((_DWORD *)v39 + 134) = 0;
                }
                else
                {
                  v39 = (unsigned __int8 *)operator new(0x3A0u);
                  *v39 = 0;
                  *((_QWORD *)v39 + 12) = v39 + 112;
                  *((_QWORD *)v39 + 16) = v39 + 144;
                  *((_QWORD *)v39 + 20) = v39 + 176;
                  *((_QWORD *)v39 + 24) = v39 + 208;
                  *((_QWORD *)v39 + 28) = v39 + 240;
                  *((_QWORD *)v39 + 32) = v39 + 272;
                  *((_QWORD *)v39 + 36) = v39 + 304;
                  *((_QWORD *)v39 + 40) = v39 + 336;
                  *((_QWORD *)v39 + 44) = v39 + 368;
                  *((_QWORD *)v39 + 48) = v39 + 400;
                  *((_QWORD *)v39 + 52) = v39 + 432;
                  *((_QWORD *)v39 + 13) = 0;
                  v39[112] = 0;
                  *((_QWORD *)v39 + 17) = 0;
                  v39[144] = 0;
                  *((_QWORD *)v39 + 21) = 0;
                  v39[176] = 0;
                  *((_QWORD *)v39 + 25) = 0;
                  v39[208] = 0;
                  *((_QWORD *)v39 + 29) = 0;
                  v39[240] = 0;
                  *((_QWORD *)v39 + 33) = 0;
                  v39[272] = 0;
                  *((_QWORD *)v39 + 37) = 0;
                  v39[304] = 0;
                  *((_QWORD *)v39 + 41) = 0;
                  v39[336] = 0;
                  *((_QWORD *)v39 + 45) = 0;
                  v39[368] = 0;
                  *((_QWORD *)v39 + 49) = 0;
                  v39[400] = 0;
                  *((_QWORD *)v39 + 53) = 0x800000000LL;
                  *((_QWORD *)v39 + 66) = v39 + 544;
                  *((_QWORD *)v39 + 67) = 0x600000000LL;
                }
                v169 = v39;
              }
              v39[*v39 + 1] = 2;
              v40 = v169;
              v41 = *v169;
              *v169 = v41 + 1;
              *(_QWORD *)&v40[8 * v41 + 16] = 0;
              if ( v171 )
              {
LABEL_36:
                v42 = v169;
                if ( !v169 )
                {
                  v96 = v170;
                  v97 = *(_DWORD *)(v170 + 14976);
                  if ( v97 )
                  {
                    v130 = (unsigned int)(v97 - 1);
                    *(_DWORD *)(v170 + 14976) = v130;
                    v42 = *(unsigned __int8 **)(v96 + 8 * v130 + 14848);
                    v131 = *((unsigned int *)v42 + 134);
                    *v42 = 0;
                    v132 = *((_QWORD *)v42 + 66);
                    *((_DWORD *)v42 + 106) = 0;
                    v133 = v132 + (v131 << 6);
                    while ( v132 != v133 )
                    {
                      while ( 1 )
                      {
                        v133 -= 64;
                        v134 = *(void **)(v133 + 24);
                        if ( v134 == (void *)(v133 + 40) )
                          break;
                        operator delete(v134);
                        if ( v132 == v133 )
                          goto LABEL_115;
                      }
                    }
LABEL_115:
                    *((_DWORD *)v42 + 134) = 0;
                  }
                  else
                  {
                    v42 = (unsigned __int8 *)operator new(0x3A0u);
                    *v42 = 0;
                    *((_QWORD *)v42 + 12) = v42 + 112;
                    *((_QWORD *)v42 + 16) = v42 + 144;
                    *((_QWORD *)v42 + 20) = v42 + 176;
                    *((_QWORD *)v42 + 24) = v42 + 208;
                    *((_QWORD *)v42 + 28) = v42 + 240;
                    *((_QWORD *)v42 + 32) = v42 + 272;
                    *((_QWORD *)v42 + 36) = v42 + 304;
                    *((_QWORD *)v42 + 40) = v42 + 336;
                    *((_QWORD *)v42 + 44) = v42 + 368;
                    *((_QWORD *)v42 + 48) = v42 + 400;
                    *((_QWORD *)v42 + 52) = v42 + 432;
                    *((_QWORD *)v42 + 13) = 0;
                    v42[112] = 0;
                    *((_QWORD *)v42 + 17) = 0;
                    v42[144] = 0;
                    *((_QWORD *)v42 + 21) = 0;
                    v42[176] = 0;
                    *((_QWORD *)v42 + 25) = 0;
                    v42[208] = 0;
                    *((_QWORD *)v42 + 29) = 0;
                    v42[240] = 0;
                    *((_QWORD *)v42 + 33) = 0;
                    v42[272] = 0;
                    *((_QWORD *)v42 + 37) = 0;
                    v42[304] = 0;
                    *((_QWORD *)v42 + 41) = 0;
                    v42[336] = 0;
                    *((_QWORD *)v42 + 45) = 0;
                    v42[368] = 0;
                    *((_QWORD *)v42 + 49) = 0;
                    v42[400] = 0;
                    *((_QWORD *)v42 + 53) = 0x800000000LL;
                    *((_QWORD *)v42 + 66) = v42 + 544;
                    *((_QWORD *)v42 + 67) = 0x600000000LL;
                  }
                  v169 = v42;
                }
                v42[*v42 + 1] = 2;
                v43 = v169;
                goto LABEL_38;
              }
LABEL_56:
              v21 = v173;
              if ( v173 )
              {
                v83 = sub_168B9E0(v167);
                v86 = v168;
                if ( v168 )
                  v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
                v166 = v86;
                v87 = sub_1587BC0(v83, &v166, v81, v82, v84, v85);
                v88 = *v87 + 32LL * v172;
                v89 = *(unsigned __int8 **)(v88 + 8);
                if ( !v89 )
                {
                  v108 = *(_QWORD *)(v88 + 16);
                  v109 = *(_DWORD *)(v108 + 14976);
                  if ( v109 )
                  {
                    v135 = (unsigned int)(v109 - 1);
                    *(_DWORD *)(v108 + 14976) = v135;
                    v89 = *(unsigned __int8 **)(v108 + 8 * v135 + 14848);
                    v136 = *((unsigned int *)v89 + 134);
                    *v89 = 0;
                    v137 = *((_QWORD *)v89 + 66);
                    *((_DWORD *)v89 + 106) = 0;
                    v138 = v137 + (v136 << 6);
                    while ( v137 != v138 )
                    {
                      while ( 1 )
                      {
                        v138 -= 64;
                        v139 = *(void **)(v138 + 24);
                        if ( v139 == (void *)(v138 + 40) )
                          break;
                        operator delete(v139);
                        if ( v137 == v138 )
                          goto LABEL_120;
                      }
                    }
LABEL_120:
                    *((_DWORD *)v89 + 134) = 0;
                  }
                  else
                  {
                    v89 = (unsigned __int8 *)operator new(0x3A0u);
                    *v89 = 0;
                    *((_QWORD *)v89 + 12) = v89 + 112;
                    *((_QWORD *)v89 + 16) = v89 + 144;
                    *((_QWORD *)v89 + 20) = v89 + 176;
                    *((_QWORD *)v89 + 24) = v89 + 208;
                    *((_QWORD *)v89 + 28) = v89 + 240;
                    *((_QWORD *)v89 + 32) = v89 + 272;
                    *((_QWORD *)v89 + 36) = v89 + 304;
                    *((_QWORD *)v89 + 40) = v89 + 336;
                    *((_QWORD *)v89 + 44) = v89 + 368;
                    *((_QWORD *)v89 + 48) = v89 + 400;
                    *((_QWORD *)v89 + 52) = v89 + 432;
                    *((_QWORD *)v89 + 13) = 0;
                    v89[112] = 0;
                    *((_QWORD *)v89 + 17) = 0;
                    v89[144] = 0;
                    *((_QWORD *)v89 + 21) = 0;
                    v89[176] = 0;
                    *((_QWORD *)v89 + 25) = 0;
                    v89[208] = 0;
                    *((_QWORD *)v89 + 29) = 0;
                    v89[240] = 0;
                    *((_QWORD *)v89 + 33) = 0;
                    v89[272] = 0;
                    *((_QWORD *)v89 + 37) = 0;
                    v89[304] = 0;
                    *((_QWORD *)v89 + 41) = 0;
                    v89[336] = 0;
                    *((_QWORD *)v89 + 45) = 0;
                    v89[368] = 0;
                    *((_QWORD *)v89 + 49) = 0;
                    v89[400] = 0;
                    *((_QWORD *)v89 + 53) = 0x800000000LL;
                    *((_QWORD *)v89 + 66) = v89 + 544;
                    *((_QWORD *)v89 + 67) = 0x600000000LL;
                  }
                  *(_QWORD *)(v88 + 8) = v89;
                }
                v89[*v89 + 1] = 2;
                v43 = *(unsigned __int8 **)(v88 + 8);
LABEL_38:
                v44 = *v43;
                *v43 = v44 + 1;
                *(_QWORD *)&v43[8 * v44 + 16] = 0;
                v21 = v171;
              }
LABEL_25:
              v161 = v21;
              sub_15F7200(v167);
              return v161;
            }
LABEL_24:
            v21 = 0;
            goto LABEL_25;
          }
        }
        if ( v173 )
        {
          v50 = sub_168B9E0(v167);
          v53 = v168;
          if ( v168 )
            v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
          v166 = v53;
          v54 = sub_1587BC0(v50, &v166, v48, v49, v51, v52);
          v55 = *v54 + 32LL * v172;
          v56 = *(unsigned __int8 **)(v55 + 8);
          if ( !v56 )
          {
            v102 = *(_QWORD *)(v55 + 16);
            v103 = *(_DWORD *)(v102 + 14976);
            if ( v103 )
            {
              v150 = (unsigned int)(v103 - 1);
              *(_DWORD *)(v102 + 14976) = v150;
              v56 = *(unsigned __int8 **)(v102 + 8 * v150 + 14848);
              v151 = *((unsigned int *)v56 + 134);
              *v56 = 0;
              v152 = *((_QWORD *)v56 + 66);
              *((_DWORD *)v56 + 106) = 0;
              v153 = v152 + (v151 << 6);
              while ( v152 != v153 )
              {
                while ( 1 )
                {
                  v153 -= 64;
                  v154 = *(void **)(v153 + 24);
                  if ( v154 == (void *)(v153 + 40) )
                    break;
                  operator delete(v154);
                  if ( v152 == v153 )
                    goto LABEL_135;
                }
              }
LABEL_135:
              *((_DWORD *)v56 + 134) = 0;
            }
            else
            {
              v56 = (unsigned __int8 *)operator new(0x3A0u);
              *v56 = 0;
              *((_QWORD *)v56 + 12) = v56 + 112;
              *((_QWORD *)v56 + 16) = v56 + 144;
              *((_QWORD *)v56 + 20) = v56 + 176;
              *((_QWORD *)v56 + 24) = v56 + 208;
              *((_QWORD *)v56 + 28) = v56 + 240;
              *((_QWORD *)v56 + 32) = v56 + 272;
              *((_QWORD *)v56 + 36) = v56 + 304;
              *((_QWORD *)v56 + 40) = v56 + 336;
              *((_QWORD *)v56 + 44) = v56 + 368;
              *((_QWORD *)v56 + 48) = v56 + 400;
              *((_QWORD *)v56 + 52) = v56 + 432;
              *((_QWORD *)v56 + 13) = 0;
              v56[112] = 0;
              *((_QWORD *)v56 + 17) = 0;
              v56[144] = 0;
              *((_QWORD *)v56 + 21) = 0;
              v56[176] = 0;
              *((_QWORD *)v56 + 25) = 0;
              v56[208] = 0;
              *((_QWORD *)v56 + 29) = 0;
              v56[240] = 0;
              *((_QWORD *)v56 + 33) = 0;
              v56[272] = 0;
              *((_QWORD *)v56 + 37) = 0;
              v56[304] = 0;
              *((_QWORD *)v56 + 41) = 0;
              v56[336] = 0;
              *((_QWORD *)v56 + 45) = 0;
              v56[368] = 0;
              *((_QWORD *)v56 + 49) = 0;
              v56[400] = 0;
              *((_QWORD *)v56 + 53) = 0x800000000LL;
              *((_QWORD *)v56 + 66) = v56 + 544;
              *((_QWORD *)v56 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v55 + 8) = v56;
          }
          v56[*v56 + 1] = 8;
          v57 = *(_BYTE **)(v55 + 8);
          v58 = (unsigned __int8)*v57;
          *v57 = v58 + 1;
          *(_QWORD *)&v57[8 * v58 + 16] = v15;
          if ( !v171 )
            goto LABEL_46;
LABEL_32:
          v36 = v169;
          if ( !v169 )
          {
            v98 = v170;
            v99 = *(_DWORD *)(v170 + 14976);
            if ( v99 )
            {
              v110 = (unsigned int)(v99 - 1);
              *(_DWORD *)(v170 + 14976) = v110;
              v36 = *(unsigned __int8 **)(v98 + 8 * v110 + 14848);
              v111 = *((unsigned int *)v36 + 134);
              *v36 = 0;
              v112 = *((_QWORD *)v36 + 66);
              *((_DWORD *)v36 + 106) = 0;
              v113 = v112 + (v111 << 6);
              while ( v112 != v113 )
              {
                while ( 1 )
                {
                  v113 -= 64;
                  v114 = *(void **)(v113 + 24);
                  if ( v114 == (void *)(v113 + 40) )
                    break;
                  operator delete(v114);
                  if ( v112 == v113 )
                    goto LABEL_95;
                }
              }
LABEL_95:
              *((_DWORD *)v36 + 134) = 0;
            }
            else
            {
              v36 = (unsigned __int8 *)operator new(0x3A0u);
              *v36 = 0;
              *((_QWORD *)v36 + 12) = v36 + 112;
              *((_QWORD *)v36 + 16) = v36 + 144;
              *((_QWORD *)v36 + 20) = v36 + 176;
              *((_QWORD *)v36 + 24) = v36 + 208;
              *((_QWORD *)v36 + 28) = v36 + 240;
              *((_QWORD *)v36 + 32) = v36 + 272;
              *((_QWORD *)v36 + 36) = v36 + 304;
              *((_QWORD *)v36 + 40) = v36 + 336;
              *((_QWORD *)v36 + 44) = v36 + 368;
              *((_QWORD *)v36 + 48) = v36 + 400;
              *((_QWORD *)v36 + 52) = v36 + 432;
              *((_QWORD *)v36 + 13) = 0;
              v36[112] = 0;
              *((_QWORD *)v36 + 17) = 0;
              v36[144] = 0;
              *((_QWORD *)v36 + 21) = 0;
              v36[176] = 0;
              *((_QWORD *)v36 + 25) = 0;
              v36[208] = 0;
              *((_QWORD *)v36 + 29) = 0;
              v36[240] = 0;
              *((_QWORD *)v36 + 33) = 0;
              v36[272] = 0;
              *((_QWORD *)v36 + 37) = 0;
              v36[304] = 0;
              *((_QWORD *)v36 + 41) = 0;
              v36[336] = 0;
              *((_QWORD *)v36 + 45) = 0;
              v36[368] = 0;
              *((_QWORD *)v36 + 49) = 0;
              v36[400] = 0;
              *((_QWORD *)v36 + 53) = 0x800000000LL;
              *((_QWORD *)v36 + 66) = v36 + 544;
              *((_QWORD *)v36 + 67) = 0x600000000LL;
            }
            v169 = v36;
          }
          v36[*v36 + 1] = 2;
          v37 = v169;
          v38 = *v169;
          *v169 = v38 + 1;
          *(_QWORD *)&v37[8 * v38 + 16] = 1;
          if ( v171 )
            goto LABEL_34;
LABEL_51:
          if ( v173 )
          {
            v72 = sub_168B9E0(v167);
            v75 = v168;
            if ( v168 )
              v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
            v166 = v75;
            v76 = sub_1587BC0(v72, &v166, v70, v71, v73, v74);
            v77 = *v76 + 32LL * v172;
            v78 = *(unsigned __int8 **)(v77 + 8);
            if ( !v78 )
            {
              v104 = *(_QWORD *)(v77 + 16);
              v105 = *(_DWORD *)(v104 + 14976);
              if ( v105 )
              {
                v145 = v105 - 1;
                *(_DWORD *)(v104 + 14976) = v145;
                v78 = *(unsigned __int8 **)(v104 + 8LL * v145 + 14848);
                v146 = *((unsigned int *)v78 + 134);
                *v78 = 0;
                v147 = *((_QWORD *)v78 + 66);
                *((_DWORD *)v78 + 106) = 0;
                v148 = v147 + (v146 << 6);
                while ( v147 != v148 )
                {
                  while ( 1 )
                  {
                    v148 -= 64;
                    v149 = *(void **)(v148 + 24);
                    if ( v149 == (void *)(v148 + 40) )
                      break;
                    operator delete(v149);
                    if ( v147 == v148 )
                      goto LABEL_130;
                  }
                }
LABEL_130:
                *((_DWORD *)v78 + 134) = 0;
              }
              else
              {
                v78 = (unsigned __int8 *)operator new(0x3A0u);
                *v78 = 0;
                *((_QWORD *)v78 + 12) = v78 + 112;
                *((_QWORD *)v78 + 16) = v78 + 144;
                *((_QWORD *)v78 + 20) = v78 + 176;
                *((_QWORD *)v78 + 24) = v78 + 208;
                *((_QWORD *)v78 + 28) = v78 + 240;
                *((_QWORD *)v78 + 32) = v78 + 272;
                *((_QWORD *)v78 + 36) = v78 + 304;
                *((_QWORD *)v78 + 40) = v78 + 336;
                *((_QWORD *)v78 + 44) = v78 + 368;
                *((_QWORD *)v78 + 48) = v78 + 400;
                *((_QWORD *)v78 + 52) = v78 + 432;
                *((_QWORD *)v78 + 13) = 0;
                v78[112] = 0;
                *((_QWORD *)v78 + 17) = 0;
                v78[144] = 0;
                *((_QWORD *)v78 + 21) = 0;
                v78[176] = 0;
                *((_QWORD *)v78 + 25) = 0;
                v78[208] = 0;
                *((_QWORD *)v78 + 29) = 0;
                v78[240] = 0;
                *((_QWORD *)v78 + 33) = 0;
                v78[272] = 0;
                *((_QWORD *)v78 + 37) = 0;
                v78[304] = 0;
                *((_QWORD *)v78 + 41) = 0;
                v78[336] = 0;
                *((_QWORD *)v78 + 45) = 0;
                v78[368] = 0;
                *((_QWORD *)v78 + 49) = 0;
                v78[400] = 0;
                *((_QWORD *)v78 + 53) = 0x800000000LL;
                *((_QWORD *)v78 + 66) = v78 + 544;
                *((_QWORD *)v78 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v77 + 8) = v78;
            }
            v78[*v78 + 1] = 2;
            v79 = *(_BYTE **)(v77 + 8);
            v80 = (unsigned __int8)*v79;
            *v79 = v80 + 1;
            *(_QWORD *)&v79[8 * v80 + 16] = 0;
            if ( v171 )
              goto LABEL_36;
            goto LABEL_56;
          }
        }
        goto LABEL_24;
      }
    }
    if ( v165 )
    {
      result = sub_16D5460(*a1, a2, v5, 0, v165, 1u, a4);
      if ( (_BYTE)result )
        return result;
    }
    ++v5;
    if ( !*v164 )
      return sub_16EC930(*a1, a2, v5, a4);
  }
  while ( 1 )
  {
    ++v5;
    if ( !*v164 )
      break;
    sub_1C0CC10(v160, &v164, &v165);
  }
  return sub_16EC930(*a1, a2, v5, a4);
}
