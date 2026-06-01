__int64 __fastcall sub_140DC70(__int64 a1, __int64 a2, int a3, int a4, __m128i a5, double a6)
{
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // eax
  unsigned __int8 *v11; // r13
  _QWORD *v12; // rdx
  __int64 v13; // rax
  void **v14; // r13
  unsigned __int64 v15; // rax
  void **v16; // r14
  void **v17; // r12
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // r12
  void **v21; // r14
  int v23; // eax
  bool v24; // zf
  char *v25; // r14
  unsigned __int8 *v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  void **v29; // r12
  unsigned __int64 v30; // rax
  void **v31; // r13
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r13
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // r13
  void *v44; // rdi
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // r14
  void *v51; // rdi
  int v52; // eax
  __int64 *v53; // rbp
  __int64 v54; // r13
  int *v55; // r12
  int v56; // eax
  void **v57; // r12
  unsigned __int64 v58; // rax
  void **v59; // r14
  void **v60; // r13
  void **v61; // rdi
  void **v62; // rdi
  void **v63; // r14
  void **v64; // r13
  void **v65; // r13
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // r12
  __int64 v70; // rbx
  void *v71; // rdi
  void **v72; // rdi
  void **v73; // rdi
  void **v74; // r14
  void **v75; // r12
  unsigned __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // r13
  void *v79; // rdi
  void **v80; // rdi
  void **v81; // rdi
  void **v82; // r14
  void **v83; // r13
  __int64 v84; // rdx
  unsigned __int8 *v85; // r15
  char *v86; // rdx
  __int64 v87; // rax
  char *v88; // r12
  __int64 v89; // r14
  __int64 v90; // r13
  void *v91; // rdi
  void **v92; // rdi
  void **v93; // rdi
  void **v94; // r14
  void **v95; // r13
  __int64 v96; // rdx
  unsigned __int8 *v97; // r15
  char *v98; // rdx
  __int64 v99; // r8
  char *v100; // r12
  __int64 v101; // r14
  __int64 v102; // r13
  void *v103; // rdi
  void **v104; // rdi
  void **v105; // rdi
  void **v106; // r14
  void **v107; // r13
  unsigned __int8 *v108; // r13
  char *v109; // rdx
  __int64 v110; // r8
  char *v111; // r14
  void **v112; // r14
  unsigned __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r15
  __int64 v116; // rbp
  __int64 v117; // rbx
  void *v118; // rdi
  void **v119; // rdi
  void **v120; // rdi
  void **v121; // r15
  unsigned __int8 *v122; // r13
  char *v123; // rdx
  __int64 v124; // rax
  char *v125; // r14
  void **v126; // r14
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r15
  __int64 v130; // rbp
  __int64 v131; // rbx
  void *v132; // rdi
  void **v133; // rdi
  void **v134; // rdi
  void **v135; // r15
  __int64 v136; // rdx
  __int64 v137; // rdx
  _BYTE *v138; // rdi
  _BYTE *v139; // rdi
  _BYTE *v140; // rdi
  _BYTE *v141; // rdi
  __int64 v142; // rdx
  __int64 v143; // rdx
  unsigned __int64 v144; // rdx
  int v145; // eax
  unsigned __int64 v146; // rdx
  int v147; // eax
  unsigned __int64 v148; // rdx
  int v149; // eax
  unsigned __int64 v150; // rdx
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rsi
  __int64 v155; // r14
  void *v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rsi
  __int64 v160; // r14
  void *v161; // rdi
  __int64 v162; // rax
  __int64 v163; // r14
  __int64 v164; // r15
  __int64 v165; // r14
  void *v166; // rdi
  __int64 v167; // rax
  __int64 v168; // r14
  __int64 v169; // r15
  __int64 v170; // r14
  void *v171; // rdi
  char v172; // [rsp+6h] [rbp-132h]
  char v173; // [rsp+7h] [rbp-131h]
  __int64 v174; // [rsp+8h] [rbp-130h]
  __int64 v175; // [rsp+10h] [rbp-128h]
  char v176; // [rsp+18h] [rbp-120h]
  char v177; // [rsp+19h] [rbp-11Fh]
  char v178; // [rsp+1Ah] [rbp-11Eh]
  bool v179; // [rsp+1Bh] [rbp-11Dh]
  int v180; // [rsp+1Ch] [rbp-11Ch]
  void **v181; // [rsp+20h] [rbp-118h]
  __int64 v182; // [rsp+28h] [rbp-110h]
  __int64 v183; // [rsp+30h] [rbp-108h]
  int v185; // [rsp+40h] [rbp-F8h]
  int v186; // [rsp+44h] [rbp-F4h]
  __int64 *v187; // [rsp+48h] [rbp-F0h]
  void **v188; // [rsp+48h] [rbp-F0h]
  __int64 *v189; // [rsp+48h] [rbp-F0h]
  void **v190; // [rsp+48h] [rbp-F0h]
  int v191; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v192; // [rsp+64h] [rbp-D4h]
  int v193; // [rsp+84h] [rbp-B4h]
  void *v194; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v195; // [rsp+B8h] [rbp-80h]
  __int64 v196; // [rsp+C0h] [rbp-78h]
  void *v197; // [rsp+D0h] [rbp-68h]
  _BYTE v198[16]; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v199; // [rsp+F0h] [rbp-48h]

  v7 = a3;
  v8 = a1;
  v9 = a2;
  v10 = *(_DWORD *)(a2 + 72);
  switch ( a3 )
  {
    case 16:
      if ( v10 != 23 )
      {
        if ( v10 == 4 )
        {
          v172 = 1;
          v176 = 0;
          v173 = 0;
          goto LABEL_35;
        }
        v25 = "private";
        sub_FC70B0((__int64)&v194, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1066);
        goto LABEL_39;
      }
      sub_140C1F0((_BYTE **)a2, a5, a6);
      v10 = *(_DWORD *)(a2 + 72);
      v172 = 1;
      goto LABEL_68;
    case 7:
      if ( v10 == 4 )
      {
        v172 = 0;
        v176 = 1;
        v173 = 0;
        goto LABEL_35;
      }
      v25 = "exclude";
      sub_FC70B0((__int64)&v194, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1066);
      goto LABEL_39;
    case 23:
      v172 = 0;
LABEL_68:
      if ( v10 == 4 )
      {
        v176 = 0;
        v7 = 23;
        v173 = 1;
LABEL_35:
        sub_140C1F0((_BYTE **)a2, a5, a6);
        if ( *(_DWORD *)(a2 + 72) != 21 )
          goto LABEL_6;
        goto LABEL_36;
      }
      v25 = "textual";
      sub_FC70B0((__int64)&v194, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1066);
LABEL_39:
      v26 = (unsigned __int8 *)v194;
      if ( !v194 )
      {
        v38 = v195;
        v39 = *(_DWORD *)(v195 + 14976);
        if ( v39 )
        {
          v40 = (unsigned int)(v39 - 1);
          *(_DWORD *)(v195 + 14976) = v40;
          v26 = *(unsigned __int8 **)(v38 + 8 * v40 + 14848);
          v41 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v42 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v43 = v42 + (v41 << 6);
          while ( v42 != v43 )
          {
            while ( 1 )
            {
              v43 -= 64;
              v44 = *(void **)(v43 + 24);
              if ( v44 == (void *)(v43 + 40) )
                break;
              operator delete(v44);
              if ( v42 == v43 )
                goto LABEL_77;
            }
          }
LABEL_77:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          *((_QWORD *)v26 + 13) = 0;
          v26[112] = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v194 = v26;
      }
      v26[*v26 + 1] = 1;
      v27 = v194;
      v28 = *(unsigned __int8 *)v194;
      *(_BYTE *)v194 = v28 + 1;
      v27[v28 + 2] = v25;
      if ( (_BYTE)v199 )
      {
        sub_FC7790(v196, (__int64 *)&v194, SHIBYTE(v199));
        v196 = 0;
        v199 = 0;
      }
      if ( v197 != v198 )
        operator delete(v197);
      v29 = (void **)v194;
      if ( v194 )
      {
        v30 = v195;
        if ( v195 )
        {
          if ( (unsigned __int64)v194 < v195 || (unsigned __int64)v194 > v195 + 14848 )
          {
            v31 = *((void ***)v194 + 66);
            v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v194 + 134)];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 8;
                  v33 = (void **)v32[3];
                  if ( v33 == v32 + 5 )
                    break;
                  operator delete(v33);
                  if ( v31 == v32 )
                    goto LABEL_50;
                }
              }
              while ( v31 != v32 );
LABEL_50:
              v32 = (void **)v29[66];
            }
            if ( v32 != v29 + 68 )
              free(v32);
            v34 = (void **)v29[52];
            if ( v34 != v29 + 54 )
              free(v34);
            v35 = v29 + 48;
            v36 = v29 + 8;
            do
            {
              while ( *v35 != v35 + 2 )
              {
                operator delete(*v35);
                v35 -= 4;
                if ( v36 == v35 )
                  goto LABEL_58;
              }
              v35 -= 4;
            }
            while ( v36 != v35 );
LABEL_58:
            operator delete(v29, 0x3A0u);
          }
          else
          {
            v37 = *(unsigned int *)(v195 + 14976);
            *(_DWORD *)(v195 + 14976) = v37 + 1;
            *(_QWORD *)(v30 + 8 * v37 + 14848) = v29;
          }
        }
      }
      goto LABEL_28;
  }
  if ( a3 != 4 )
  {
    if ( v10 == 4 )
    {
      v172 = 0;
      v176 = 0;
      v173 = 0;
      goto LABEL_35;
    }
    v25 = "umbrella";
    sub_FC70B0((__int64)&v194, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1066);
    goto LABEL_39;
  }
  v172 = 0;
  v176 = 0;
  v173 = 0;
  if ( v10 == 21 )
  {
LABEL_36:
    v174 = *(unsigned int *)(a2 + 80);
    v175 = *(_QWORD *)(a2 + 88);
    v23 = sub_140C1F0((_BYTE **)a2, a5, a6);
    v178 = 0;
    v179 = v7 == 17;
    v24 = *(_DWORD *)(a2 + 72) == 24;
    v180 = v23;
    v193 = v23;
    v177 = 0;
    if ( !v24 )
    {
LABEL_37:
      *(_DWORD *)(v8 + 16) = a4;
      *(_BYTE *)(v8 + 64) = 1;
      *(_QWORD *)v8 = v175;
      *(_QWORD *)(v8 + 8) = v174;
      *(_DWORD *)(v8 + 20) = v180;
      *(_QWORD *)(v8 + 24) = v183;
      *(_BYTE *)(v8 + 32) = v177;
      *(_QWORD *)(v8 + 40) = v182;
      *(_BYTE *)(v8 + 48) = v178;
      *(_BYTE *)(v8 + 56) = (8 * v176) | (4 * v179) | (2 * v173) & 0xF3 | v172 & 0xF3 | *(_BYTE *)(v8 + 56) & 0xF0;
      return v8;
    }
    v186 = sub_140C1F0((_BYTE **)a2, a5, a6);
    v52 = *(_DWORD *)(a2 + 72);
    if ( v52 == 25 )
    {
      v177 = 0;
LABEL_225:
      sub_140C1F0((_BYTE **)v9, a5, a6);
      goto LABEL_37;
    }
    v177 = 0;
    if ( v52 == 3 )
    {
LABEL_120:
      sub_FC70B0((__int64)&v194, *(_QWORD *)(v9 + 8), *(_DWORD *)(v9 + 76), 1076);
      if ( (_BYTE)v199 )
      {
        sub_FC7790(v196, (__int64 *)&v194, SHIBYTE(v199));
        v196 = 0;
        v199 = 0;
      }
      if ( v197 != v198 )
        operator delete(v197);
      v65 = (void **)v194;
      if ( v194 )
      {
        v66 = v195;
        if ( v195 )
        {
          if ( (unsigned __int64)v194 < v195 || (unsigned __int64)v194 > v195 + 14848 )
          {
            v67 = *((_QWORD *)v194 + 66);
            v68 = v67 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
            if ( v67 != v68 )
            {
              v69 = v9;
              v70 = *((_QWORD *)v194 + 66);
              do
              {
                while ( 1 )
                {
                  v68 -= 64;
                  v71 = *(void **)(v68 + 24);
                  if ( v71 == (void *)(v68 + 40) )
                    break;
                  operator delete(v71);
                  if ( v70 == v68 )
                    goto LABEL_131;
                }
              }
              while ( v70 != v68 );
LABEL_131:
              v9 = v69;
            }
            v72 = (void **)v65[66];
            if ( v72 != v65 + 68 )
              free(v72);
            v73 = (void **)v65[52];
            if ( v73 != v65 + 54 )
              free(v73);
            v74 = v65 + 48;
            v181 = v65 + 8;
            do
            {
              while ( *v74 != v74 + 2 )
              {
                operator delete(*v74);
                v74 -= 4;
                if ( v74 == v181 )
                  goto LABEL_139;
              }
              v74 -= 4;
            }
            while ( v181 != v74 );
LABEL_139:
            operator delete(v65, 0x3A0u);
          }
          else
          {
            v136 = *(unsigned int *)(v195 + 14976);
            *(_DWORD *)(v195 + 14976) = v136 + 1;
            *(_QWORD *)(v66 + 8 * v136 + 14848) = v65;
          }
        }
      }
      sub_FC70B0((__int64)&v194, *(_QWORD *)(v9 + 8), v186, 1269);
      if ( (_BYTE)v199 )
      {
        sub_FC7790(v196, (__int64 *)&v194, SHIBYTE(v199));
        v196 = 0;
        v199 = 0;
      }
      if ( v197 != v198 )
        operator delete(v197);
      v75 = (void **)v194;
      if ( v194 )
      {
        v76 = v195;
        if ( v195 )
        {
          if ( (unsigned __int64)v194 < v195 || (unsigned __int64)v194 > v195 + 14848 )
          {
            v77 = *((_QWORD *)v194 + 66);
            v78 = v77 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
            while ( v77 != v78 )
            {
              while ( 1 )
              {
                v78 -= 64;
                v79 = *(void **)(v78 + 24);
                if ( v79 == (void *)(v78 + 40) )
                  break;
                operator delete(v79);
                if ( v77 == v78 )
                  goto LABEL_151;
              }
            }
LABEL_151:
            v80 = (void **)v75[66];
            if ( v80 != v75 + 68 )
              free(v80);
            v81 = (void **)v75[52];
            if ( v81 != v75 + 54 )
              free(v81);
            v82 = v75 + 48;
            v83 = v75 + 8;
            do
            {
              while ( *v82 != v82 + 2 )
              {
                operator delete(*v82);
                v82 -= 4;
                if ( v82 == v83 )
                  goto LABEL_158;
              }
              v82 -= 4;
            }
            while ( v82 != v83 );
LABEL_158:
            operator delete(v75, 0x3A0u);
          }
          else
          {
            v137 = *(unsigned int *)(v195 + 14976);
            *(_DWORD *)(v195 + 14976) = v137 + 1;
            *(_QWORD *)(v76 + 8 * v137 + 14848) = v75;
          }
        }
      }
      *(_BYTE *)(v9 + 64) = 1;
      goto LABEL_37;
    }
    v185 = a4;
    v53 = (__int64 *)&v194;
    while ( v52 != 22 )
    {
      v54 = *(unsigned int *)(v9 + 80);
      v55 = *(int **)(v9 + 88);
      v56 = sub_140C1F0((_BYTE **)v9, a5, a6);
      if ( v54 == 4 )
      {
        if ( *v55 != 1702521203 )
          goto LABEL_97;
        if ( v177 )
        {
          sub_FC70B0((__int64)v53, *(_QWORD *)(v9 + 8), v56, 1059);
          v122 = (unsigned __int8 *)v194;
          if ( !v194 )
          {
            v150 = v195;
            v151 = *(_DWORD *)(v195 + 14976);
            if ( v151 )
            {
              v167 = (unsigned int)(v151 - 1);
              *(_DWORD *)(v195 + 14976) = v167;
              v122 = *(unsigned __int8 **)(v150 + 8 * v167 + 14848);
              v168 = *((unsigned int *)v122 + 134);
              *v122 = 0;
              v169 = *((_QWORD *)v122 + 66);
              *((_DWORD *)v122 + 106) = 0;
              v170 = v169 + (v168 << 6);
              while ( v169 != v170 )
              {
                while ( 1 )
                {
                  v170 -= 64;
                  v171 = *(void **)(v170 + 24);
                  if ( v171 == (void *)(v170 + 40) )
                    break;
                  operator delete(v171);
                  if ( v169 == v170 )
                    goto LABEL_329;
                }
              }
LABEL_329:
              *((_DWORD *)v122 + 134) = 0;
            }
            else
            {
              v122 = (unsigned __int8 *)operator new(0x3A0u);
              *v122 = 0;
              *((_QWORD *)v122 + 12) = v122 + 112;
              *((_QWORD *)v122 + 16) = v122 + 144;
              *((_QWORD *)v122 + 20) = v122 + 176;
              *((_QWORD *)v122 + 24) = v122 + 208;
              *((_QWORD *)v122 + 28) = v122 + 240;
              *((_QWORD *)v122 + 32) = v122 + 272;
              *((_QWORD *)v122 + 36) = v122 + 304;
              *((_QWORD *)v122 + 40) = v122 + 336;
              *((_QWORD *)v122 + 44) = v122 + 368;
              *((_QWORD *)v122 + 48) = v122 + 400;
              *((_QWORD *)v122 + 52) = v122 + 432;
              *((_QWORD *)v122 + 13) = 0;
              v122[112] = 0;
              *((_QWORD *)v122 + 17) = 0;
              v122[144] = 0;
              *((_QWORD *)v122 + 21) = 0;
              v122[176] = 0;
              *((_QWORD *)v122 + 25) = 0;
              v122[208] = 0;
              *((_QWORD *)v122 + 29) = 0;
              v122[240] = 0;
              *((_QWORD *)v122 + 33) = 0;
              v122[272] = 0;
              *((_QWORD *)v122 + 37) = 0;
              v122[304] = 0;
              *((_QWORD *)v122 + 41) = 0;
              v122[336] = 0;
              *((_QWORD *)v122 + 45) = 0;
              v122[368] = 0;
              *((_QWORD *)v122 + 49) = 0;
              v122[400] = 0;
              *((_QWORD *)v122 + 53) = 0x800000000LL;
              *((_QWORD *)v122 + 66) = v122 + 544;
              *((_QWORD *)v122 + 67) = 0x600000000LL;
            }
            v194 = v122;
          }
          v122[*v122 + 1] = 0;
          v123 = (char *)v194;
          v191 = *v55;
          LOBYTE(v192) = 0;
          v124 = *(unsigned __int8 *)v194;
          *(_BYTE *)v194 = v124 + 1;
          v125 = &v123[32 * v124 + 96];
          memcpy(*(void **)v125, &v191, 4u);
          v140 = *(_BYTE **)v125;
          *((_QWORD *)v125 + 1) = 4;
          v140[4] = 0;
          LOBYTE(v191) = 0;
          if ( (_BYTE)v199 )
          {
            sub_FC7790(v196, v53, SHIBYTE(v199));
            v196 = 0;
            v199 = 0;
          }
          if ( v197 != v198 )
            operator delete(v197);
          v126 = (void **)v194;
          if ( v194 )
          {
            v127 = v195;
            if ( v195 )
            {
              if ( (unsigned __int64)v194 < v195 || (unsigned __int64)v194 > v195 + 14848 )
              {
                v128 = *((_QWORD *)v194 + 66);
                v129 = v128 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
                if ( v128 != v129 )
                {
                  v189 = v53;
                  v130 = v9;
                  v131 = *((_QWORD *)v194 + 66);
                  do
                  {
                    while ( 1 )
                    {
                      v129 -= 64;
                      v132 = *(void **)(v129 + 24);
                      if ( v132 == (void *)(v129 + 40) )
                        break;
                      operator delete(v132);
                      if ( v131 == v129 )
                        goto LABEL_264;
                    }
                  }
                  while ( v131 != v129 );
LABEL_264:
                  v9 = v130;
                  v53 = v189;
                }
                v133 = (void **)v126[66];
                if ( v133 != v126 + 68 )
                  free(v133);
                v134 = (void **)v126[52];
                if ( v134 != v126 + 54 )
                  free(v134);
                v135 = v126 + 48;
                v190 = v126 + 8;
                do
                {
                  while ( *v135 != v135 + 2 )
                  {
                    operator delete(*v135);
                    v135 -= 4;
                    if ( v190 == v135 )
                      goto LABEL_272;
                  }
                  v135 -= 4;
                }
                while ( v190 != v135 );
LABEL_272:
                operator delete(v126, 0x3A0u);
              }
              else
              {
                v142 = *(unsigned int *)(v195 + 14976);
                *(_DWORD *)(v195 + 14976) = v142 + 1;
                *(_QWORD *)(v127 + 8 * v142 + 14848) = v126;
              }
            }
          }
          if ( *(_DWORD *)(v9 + 72) != 22 )
          {
LABEL_170:
            sub_FC70B0((__int64)v53, *(_QWORD *)(v9 + 8), *(_DWORD *)(v9 + 76), 1083);
            v85 = (unsigned __int8 *)v194;
            if ( !v194 )
            {
              v144 = v195;
              v145 = *(_DWORD *)(v195 + 14976);
              if ( v145 )
              {
                v157 = (unsigned int)(v145 - 1);
                *(_DWORD *)(v195 + 14976) = v157;
                v85 = *(unsigned __int8 **)(v144 + 8 * v157 + 14848);
                v158 = *((unsigned int *)v85 + 134);
                *v85 = 0;
                v159 = *((_QWORD *)v85 + 66);
                *((_DWORD *)v85 + 106) = 0;
                v158 <<= 6;
                v160 = v159 + v158;
                while ( v159 != v160 )
                {
                  while ( 1 )
                  {
                    v160 -= 64;
                    v161 = *(void **)(v160 + 24);
                    if ( v161 == (void *)(v160 + 40) )
                      break;
                    operator delete(v161);
                    if ( v159 == v160 )
                      goto LABEL_317;
                  }
                }
LABEL_317:
                *((_DWORD *)v85 + 134) = 0;
              }
              else
              {
                v85 = (unsigned __int8 *)operator new(0x3A0u);
                *v85 = 0;
                *((_QWORD *)v85 + 12) = v85 + 112;
                *((_QWORD *)v85 + 16) = v85 + 144;
                *((_QWORD *)v85 + 20) = v85 + 176;
                *((_QWORD *)v85 + 24) = v85 + 208;
                *((_QWORD *)v85 + 28) = v85 + 240;
                *((_QWORD *)v85 + 32) = v85 + 272;
                *((_QWORD *)v85 + 36) = v85 + 304;
                *((_QWORD *)v85 + 40) = v85 + 336;
                *((_QWORD *)v85 + 44) = v85 + 368;
                *((_QWORD *)v85 + 48) = v85 + 400;
                *((_QWORD *)v85 + 52) = v85 + 432;
                *((_QWORD *)v85 + 13) = 0;
                v85[112] = 0;
                *((_QWORD *)v85 + 17) = 0;
                v85[144] = 0;
                *((_QWORD *)v85 + 21) = 0;
                v85[176] = 0;
                *((_QWORD *)v85 + 25) = 0;
                v85[208] = 0;
                *((_QWORD *)v85 + 29) = 0;
                v85[240] = 0;
                *((_QWORD *)v85 + 33) = 0;
                v85[272] = 0;
                *((_QWORD *)v85 + 37) = 0;
                v85[304] = 0;
                *((_QWORD *)v85 + 41) = 0;
                v85[336] = 0;
                *((_QWORD *)v85 + 45) = 0;
                v85[368] = 0;
                *((_QWORD *)v85 + 49) = 0;
                v85[400] = 0;
                *((_QWORD *)v85 + 53) = 0x800000000LL;
                *((_QWORD *)v85 + 66) = v85 + 544;
                *((_QWORD *)v85 + 67) = 0x600000000LL;
              }
              v194 = v85;
            }
            v85[*v85 + 1] = 0;
            v86 = (char *)v194;
            v191 = *v55;
            LOBYTE(v192) = 0;
            v87 = *(unsigned __int8 *)v194;
            *(_BYTE *)v194 = v87 + 1;
            v88 = &v86[32 * v87 + 96];
            memcpy(*(void **)v88, &v191, 4u);
            v138 = *(_BYTE **)v88;
            *((_QWORD *)v88 + 1) = 4;
            v138[4] = 0;
            LOBYTE(v191) = 0;
            if ( (_BYTE)v199 )
            {
              sub_FC7790(v196, v53, SHIBYTE(v199));
              v196 = 0;
              v199 = 0;
            }
            if ( v197 != v53 + 6 )
              operator delete(v197);
            v57 = (void **)v194;
            if ( !v194 )
              goto LABEL_116;
            v58 = v195;
            if ( !v195 )
              goto LABEL_116;
            if ( (unsigned __int64)v194 >= v195 && (unsigned __int64)v194 <= v195 + 14848 )
            {
LABEL_166:
              v84 = *(unsigned int *)(v58 + 14976);
              *(_DWORD *)(v58 + 14976) = v84 + 1;
              *(_QWORD *)(v58 + 8 * v84 + 14848) = v57;
              goto LABEL_116;
            }
            v89 = *((_QWORD *)v194 + 66);
            v90 = v89 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
            while ( v89 != v90 )
            {
              while ( 1 )
              {
                v90 -= 64;
                v91 = *(void **)(v90 + 24);
                if ( v91 == (void *)(v90 + 40) )
                  break;
                operator delete(v91);
                if ( v89 == v90 )
                  goto LABEL_182;
              }
            }
LABEL_182:
            v92 = (void **)v57[66];
            if ( v92 != v57 + 68 )
              free(v92);
            v93 = (void **)v57[52];
            if ( v93 != v57 + 54 )
              free(v93);
            v94 = v57 + 48;
            v95 = v57 + 8;
            do
            {
              while ( *v94 != v94 + 2 )
              {
                operator delete(*v94);
                v94 -= 4;
                if ( v95 == v94 )
                  goto LABEL_115;
              }
              v94 -= 4;
            }
            while ( v95 != v94 );
LABEL_115:
            operator delete(v57, 0x3A0u);
LABEL_116:
            sub_140CDD0(v9, 25, a5, a6);
            goto LABEL_117;
          }
          v183 = *(_QWORD *)(v9 + 88);
        }
        else
        {
          if ( *(_DWORD *)(v9 + 72) != 22 )
            goto LABEL_170;
          v177 = 1;
          v183 = *(_QWORD *)(v9 + 88);
        }
      }
      else
      {
        if ( v54 != 5 || *v55 != 1835627629 || *((_BYTE *)v55 + 4) != 101 )
          goto LABEL_97;
        if ( v178 )
        {
          sub_FC70B0((__int64)v53, *(_QWORD *)(v9 + 8), v56, 1059);
          v108 = (unsigned __int8 *)v194;
          if ( !v194 )
          {
            v148 = v195;
            v149 = *(_DWORD *)(v195 + 14976);
            if ( v149 )
            {
              v162 = (unsigned int)(v149 - 1);
              *(_DWORD *)(v195 + 14976) = v162;
              v108 = *(unsigned __int8 **)(v148 + 8 * v162 + 14848);
              v163 = *((unsigned int *)v108 + 134);
              *v108 = 0;
              v164 = *((_QWORD *)v108 + 66);
              *((_DWORD *)v108 + 106) = 0;
              v165 = v164 + (v163 << 6);
              while ( v164 != v165 )
              {
                while ( 1 )
                {
                  v165 -= 64;
                  v166 = *(void **)(v165 + 24);
                  if ( v166 == (void *)(v165 + 40) )
                    break;
                  operator delete(v166);
                  if ( v164 == v165 )
                    goto LABEL_324;
                }
              }
LABEL_324:
              *((_DWORD *)v108 + 134) = 0;
            }
            else
            {
              v108 = (unsigned __int8 *)operator new(0x3A0u);
              *v108 = 0;
              *((_QWORD *)v108 + 12) = v108 + 112;
              *((_QWORD *)v108 + 16) = v108 + 144;
              *((_QWORD *)v108 + 20) = v108 + 176;
              *((_QWORD *)v108 + 24) = v108 + 208;
              *((_QWORD *)v108 + 28) = v108 + 240;
              *((_QWORD *)v108 + 32) = v108 + 272;
              *((_QWORD *)v108 + 36) = v108 + 304;
              *((_QWORD *)v108 + 40) = v108 + 336;
              *((_QWORD *)v108 + 44) = v108 + 368;
              *((_QWORD *)v108 + 48) = v108 + 400;
              *((_QWORD *)v108 + 52) = v108 + 432;
              *((_QWORD *)v108 + 13) = 0;
              v108[112] = 0;
              *((_QWORD *)v108 + 17) = 0;
              v108[144] = 0;
              *((_QWORD *)v108 + 21) = 0;
              v108[176] = 0;
              *((_QWORD *)v108 + 25) = 0;
              v108[208] = 0;
              *((_QWORD *)v108 + 29) = 0;
              v108[240] = 0;
              *((_QWORD *)v108 + 33) = 0;
              v108[272] = 0;
              *((_QWORD *)v108 + 37) = 0;
              v108[304] = 0;
              *((_QWORD *)v108 + 41) = 0;
              v108[336] = 0;
              *((_QWORD *)v108 + 45) = 0;
              v108[368] = 0;
              *((_QWORD *)v108 + 49) = 0;
              v108[400] = 0;
              *((_QWORD *)v108 + 53) = 0x800000000LL;
              *((_QWORD *)v108 + 66) = v108 + 544;
              *((_QWORD *)v108 + 67) = 0x600000000LL;
            }
            v194 = v108;
          }
          v108[*v108 + 1] = 0;
          v191 = *v55;
          v192 = *((unsigned __int8 *)v55 + 4);
          v109 = (char *)v194;
          v110 = *(unsigned __int8 *)v194;
          *(_BYTE *)v194 = v110 + 1;
          v111 = &v109[32 * v110 + 96];
          memcpy(*(void **)v111, &v191, 5u);
          v141 = *(_BYTE **)v111;
          *((_QWORD *)v111 + 1) = 5;
          v141[5] = 0;
          LOBYTE(v191) = 0;
          if ( (_BYTE)v199 )
          {
            sub_FC7790(v196, v53, SHIBYTE(v199));
            v196 = 0;
            v199 = 0;
          }
          if ( v197 != v198 )
            operator delete(v197);
          v112 = (void **)v194;
          if ( v194 )
          {
            v113 = v195;
            if ( v195 )
            {
              if ( (unsigned __int64)v194 < v195 || (unsigned __int64)v194 > v195 + 14848 )
              {
                v114 = *((_QWORD *)v194 + 66);
                v115 = v114 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
                if ( v114 != v115 )
                {
                  v187 = v53;
                  v116 = v9;
                  v117 = *((_QWORD *)v194 + 66);
                  do
                  {
                    while ( 1 )
                    {
                      v115 -= 64;
                      v118 = *(void **)(v115 + 24);
                      if ( v118 == (void *)(v115 + 40) )
                        break;
                      operator delete(v118);
                      if ( v117 == v115 )
                        goto LABEL_238;
                    }
                  }
                  while ( v117 != v115 );
LABEL_238:
                  v9 = v116;
                  v53 = v187;
                }
                v119 = (void **)v112[66];
                if ( v119 != v112 + 68 )
                  free(v119);
                v120 = (void **)v112[52];
                if ( v120 != v112 + 54 )
                  free(v120);
                v121 = v112 + 48;
                v188 = v112 + 8;
                do
                {
                  while ( *v121 != v121 + 2 )
                  {
                    operator delete(*v121);
                    v121 -= 4;
                    if ( v188 == v121 )
                      goto LABEL_246;
                  }
                  v121 -= 4;
                }
                while ( v188 != v121 );
LABEL_246:
                operator delete(v112, 0x3A0u);
              }
              else
              {
                v143 = *(unsigned int *)(v195 + 14976);
                *(_DWORD *)(v195 + 14976) = v143 + 1;
                *(_QWORD *)(v113 + 8 * v143 + 14848) = v112;
              }
            }
          }
          if ( *(_DWORD *)(v9 + 72) != 22 )
          {
LABEL_202:
            sub_FC70B0((__int64)v53, *(_QWORD *)(v9 + 8), *(_DWORD *)(v9 + 76), 1083);
            v97 = (unsigned __int8 *)v194;
            if ( !v194 )
            {
              v146 = v195;
              v147 = *(_DWORD *)(v195 + 14976);
              if ( v147 )
              {
                v152 = (unsigned int)(v147 - 1);
                *(_DWORD *)(v195 + 14976) = v152;
                v97 = *(unsigned __int8 **)(v146 + 8 * v152 + 14848);
                v153 = *((unsigned int *)v97 + 134);
                *v97 = 0;
                v154 = *((_QWORD *)v97 + 66);
                *((_DWORD *)v97 + 106) = 0;
                v153 <<= 6;
                v155 = v154 + v153;
                while ( v154 != v155 )
                {
                  while ( 1 )
                  {
                    v155 -= 64;
                    v156 = *(void **)(v155 + 24);
                    if ( v156 == (void *)(v155 + 40) )
                      break;
                    operator delete(v156);
                    if ( v154 == v155 )
                      goto LABEL_311;
                  }
                }
LABEL_311:
                *((_DWORD *)v97 + 134) = 0;
              }
              else
              {
                v97 = (unsigned __int8 *)operator new(0x3A0u);
                *v97 = 0;
                *((_QWORD *)v97 + 12) = v97 + 112;
                *((_QWORD *)v97 + 16) = v97 + 144;
                *((_QWORD *)v97 + 20) = v97 + 176;
                *((_QWORD *)v97 + 24) = v97 + 208;
                *((_QWORD *)v97 + 28) = v97 + 240;
                *((_QWORD *)v97 + 32) = v97 + 272;
                *((_QWORD *)v97 + 36) = v97 + 304;
                *((_QWORD *)v97 + 40) = v97 + 336;
                *((_QWORD *)v97 + 44) = v97 + 368;
                *((_QWORD *)v97 + 48) = v97 + 400;
                *((_QWORD *)v97 + 52) = v97 + 432;
                *((_QWORD *)v97 + 13) = 0;
                v97[112] = 0;
                *((_QWORD *)v97 + 17) = 0;
                v97[144] = 0;
                *((_QWORD *)v97 + 21) = 0;
                v97[176] = 0;
                *((_QWORD *)v97 + 25) = 0;
                v97[208] = 0;
                *((_QWORD *)v97 + 29) = 0;
                v97[240] = 0;
                *((_QWORD *)v97 + 33) = 0;
                v97[272] = 0;
                *((_QWORD *)v97 + 37) = 0;
                v97[304] = 0;
                *((_QWORD *)v97 + 41) = 0;
                v97[336] = 0;
                *((_QWORD *)v97 + 45) = 0;
                v97[368] = 0;
                *((_QWORD *)v97 + 49) = 0;
                v97[400] = 0;
                *((_QWORD *)v97 + 53) = 0x800000000LL;
                *((_QWORD *)v97 + 66) = v97 + 544;
                *((_QWORD *)v97 + 67) = 0x600000000LL;
              }
              v194 = v97;
            }
            v97[*v97 + 1] = 0;
            v191 = *v55;
            v192 = *((unsigned __int8 *)v55 + 4);
            v98 = (char *)v194;
            v99 = *(unsigned __int8 *)v194;
            *(_BYTE *)v194 = v99 + 1;
            v100 = &v98[32 * v99 + 96];
            memcpy(*(void **)v100, &v191, 5u);
            v139 = *(_BYTE **)v100;
            *((_QWORD *)v100 + 1) = 5;
            v139[5] = 0;
            LOBYTE(v191) = 0;
            if ( (_BYTE)v199 )
            {
              sub_FC7790(v196, v53, SHIBYTE(v199));
              v196 = 0;
              v199 = 0;
            }
            if ( v197 != v53 + 6 )
              operator delete(v197);
            v57 = (void **)v194;
            if ( !v194 )
              goto LABEL_116;
            v58 = v195;
            if ( !v195 )
              goto LABEL_116;
            if ( (unsigned __int64)v194 >= v195 && (unsigned __int64)v194 <= v195 + 14848 )
              goto LABEL_166;
            v101 = *((_QWORD *)v194 + 66);
            v102 = v101 + ((unsigned __int64)*((unsigned int *)v194 + 134) << 6);
            while ( v101 != v102 )
            {
              while ( 1 )
              {
                v102 -= 64;
                v103 = *(void **)(v102 + 24);
                if ( v103 == (void *)(v102 + 40) )
                  break;
                operator delete(v103);
                if ( v101 == v102 )
                  goto LABEL_214;
              }
            }
LABEL_214:
            v104 = (void **)v57[66];
            if ( v104 != v57 + 68 )
              free(v104);
            v105 = (void **)v57[52];
            v106 = v57 + 52;
            if ( v105 != v57 + 54 )
              free(v105);
            v107 = v57 + 12;
            do
            {
              while ( 1 )
              {
                v106 -= 4;
                if ( *v106 == v106 + 2 )
                  break;
                operator delete(*v106);
                if ( v107 == v106 )
                  goto LABEL_115;
              }
            }
            while ( v107 != v106 );
            goto LABEL_115;
          }
          v182 = *(_QWORD *)(v9 + 88);
        }
        else
        {
          if ( *(_DWORD *)(v9 + 72) != 22 )
            goto LABEL_202;
          v178 = 1;
          v182 = *(_QWORD *)(v9 + 88);
        }
      }
      sub_140C1F0((_BYTE **)v9, a5, a6);
LABEL_117:
      v52 = *(_DWORD *)(v9 + 72);
      if ( v52 == 25 )
      {
        a4 = v185;
        v8 = a1;
        goto LABEL_225;
      }
      if ( v52 == 3 )
      {
        a4 = v185;
        v8 = a1;
        goto LABEL_120;
      }
    }
    v56 = sub_140C1F0((_BYTE **)v9, a5, a6);
LABEL_97:
    sub_FC70B0((__int64)v53, *(_QWORD *)(v9 + 8), v56, 1067);
    if ( (_BYTE)v199 )
    {
      sub_FC7790(v196, v53, SHIBYTE(v199));
      v196 = 0;
      v199 = 0;
    }
    if ( v197 != v198 )
      operator delete(v197);
    v57 = (void **)v194;
    if ( v194 )
    {
      v58 = v195;
      if ( v195 )
      {
        if ( (unsigned __int64)v194 >= v195 && (unsigned __int64)v194 <= v195 + 14848 )
          goto LABEL_166;
        v59 = *((void ***)v194 + 66);
        v60 = &v59[8 * (unsigned __int64)*((unsigned int *)v194 + 134)];
        if ( v59 != v60 )
        {
          do
          {
            while ( 1 )
            {
              v60 -= 8;
              v61 = (void **)v60[3];
              if ( v61 == v60 + 5 )
                break;
              operator delete(v61);
              if ( v59 == v60 )
                goto LABEL_107;
            }
          }
          while ( v59 != v60 );
LABEL_107:
          v60 = (void **)v57[66];
        }
        if ( v60 != v57 + 68 )
          free(v60);
        v62 = (void **)v57[52];
        if ( v62 != v57 + 54 )
          free(v62);
        v63 = v57 + 48;
        v64 = v57 + 8;
        do
        {
          while ( *v63 != v63 + 2 )
          {
            operator delete(*v63);
            v63 -= 4;
            if ( v63 == v64 )
              goto LABEL_115;
          }
          v63 -= 4;
        }
        while ( v63 != v64 );
        goto LABEL_115;
      }
    }
    goto LABEL_116;
  }
LABEL_6:
  sub_FC70B0((__int64)&v194, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1066);
  v11 = (unsigned __int8 *)v194;
  if ( !v194 )
  {
    v45 = v195;
    v46 = *(_DWORD *)(v195 + 14976);
    if ( v46 )
    {
      v47 = (unsigned int)(v46 - 1);
      *(_DWORD *)(v195 + 14976) = v47;
      v11 = *(unsigned __int8 **)(v45 + 8 * v47 + 14848);
      v48 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v49 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v50 = v49 + (v48 << 6);
      while ( v49 != v50 )
      {
        while ( 1 )
        {
          v50 -= 64;
          v51 = *(void **)(v50 + 24);
          if ( v51 == (void *)(v50 + 40) )
            break;
          operator delete(v51);
          if ( v49 == v50 )
            goto LABEL_84;
        }
      }
LABEL_84:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v194 = v11;
  }
  v11[*v11 + 1] = 1;
  v12 = v194;
  v13 = *(unsigned __int8 *)v194;
  *(_BYTE *)v194 = v13 + 1;
  v12[v13 + 2] = "header";
  if ( (_BYTE)v199 )
  {
    sub_FC7790(v196, (__int64 *)&v194, SHIBYTE(v199));
    v196 = 0;
    v199 = 0;
  }
  if ( v197 != v198 )
    operator delete(v197);
  v14 = (void **)v194;
  if ( v194 )
  {
    v15 = v195;
    if ( v195 )
    {
      if ( (unsigned __int64)v194 >= v195 && (unsigned __int64)v194 <= v195 + 14848 )
      {
        v96 = *(unsigned int *)(v195 + 14976);
        *(_DWORD *)(v195 + 14976) = v96 + 1;
        *(_QWORD *)(v15 + 8 * v96 + 14848) = v14;
      }
      else
      {
        v16 = *((void ***)v194 + 66);
        v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v194 + 134)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 8;
              v18 = (void **)v17[3];
              if ( v18 == v17 + 5 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_18;
            }
          }
          while ( v16 != v17 );
LABEL_18:
          v17 = (void **)v14[66];
        }
        if ( v17 != v14 + 68 )
          free(v17);
        v19 = (void **)v14[52];
        if ( v19 != v14 + 54 )
          free(v19);
        v20 = v14 + 48;
        v21 = v14 + 8;
        do
        {
          while ( *v20 != v20 + 2 )
          {
            operator delete(*v20);
            v20 -= 4;
            if ( v20 == v21 )
              goto LABEL_26;
          }
          v20 -= 4;
        }
        while ( v20 != v21 );
LABEL_26:
        operator delete(v14, 0x3A0u);
      }
    }
  }
  *(_BYTE *)(a2 + 64) = 1;
LABEL_28:
  *(_BYTE *)(v8 + 64) = 0;
  return v8;
}
