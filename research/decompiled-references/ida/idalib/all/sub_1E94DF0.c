__m128i *__fastcall sub_1E94DF0(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64); // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r14
  const void *v17; // r13
  __int64 v18; // r12
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v26; // r12
  __int64 *v27; // rdx
  size_t v28; // rdx
  unsigned __int8 *v29; // r14
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // r14
  size_t v33; // r12
  unsigned __int8 *v34; // r15
  _QWORD *v35; // rax
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  void **v40; // r12
  unsigned __int8 *v41; // rdi
  __int64 v42; // rax
  void *v43; // rdi
  _BYTE *v44; // r15
  size_t v45; // r12
  unsigned __int8 *v46; // r14
  _QWORD *v47; // rax
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void **v52; // r12
  unsigned __int8 *v53; // rdi
  __int64 v54; // rax
  void *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  unsigned __int8 *v64; // r14
  _QWORD *v65; // rax
  _BYTE *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  void **v70; // r12
  _BYTE *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r15
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  unsigned __int8 *v81; // r15
  _QWORD *v82; // rax
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  void **v87; // r12
  _BYTE *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r14
  void *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r15
  unsigned __int8 *v98; // r14
  _BYTE *v99; // rdx
  __int64 v100; // rax
  size_t v101; // rdx
  size_t v102; // rdx
  size_t v103; // rdx
  size_t v104; // rdx
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rdx
  int v108; // eax
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rdx
  int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // r15
  __int64 v124; // rdx
  __int64 v125; // r15
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  void *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  void *v136; // rdi
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rax
  void *v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rsi
  __int64 v145; // rax
  void *v146; // rdi
  __m128i *v147; // [rsp+8h] [rbp-170h]
  __int64 v148; // [rsp+8h] [rbp-170h]
  __int64 v149; // [rsp+8h] [rbp-170h]
  __int64 v150; // [rsp+8h] [rbp-170h]
  __int64 v151; // [rsp+8h] [rbp-170h]
  __int64 v152; // [rsp+8h] [rbp-170h]
  __int64 v153; // [rsp+8h] [rbp-170h]
  __int64 v154; // [rsp+8h] [rbp-170h]
  __int64 v155; // [rsp+8h] [rbp-170h]
  __int64 v156; // [rsp+8h] [rbp-170h]
  __int64 v157; // [rsp+8h] [rbp-170h]
  __int64 v158; // [rsp+8h] [rbp-170h]
  __int64 v159; // [rsp+8h] [rbp-170h]
  __int64 v160; // [rsp+10h] [rbp-168h]
  __int64 v161; // [rsp+10h] [rbp-168h]
  __int64 v162; // [rsp+10h] [rbp-168h]
  __int64 v163; // [rsp+10h] [rbp-168h]
  __int64 v164; // [rsp+18h] [rbp-160h]
  __int64 v165; // [rsp+20h] [rbp-158h] BYREF
  __int64 v166; // [rsp+28h] [rbp-150h] BYREF
  void *v167; // [rsp+30h] [rbp-148h]
  size_t v168; // [rsp+38h] [rbp-140h]
  _QWORD v169[2]; // [rsp+40h] [rbp-138h] BYREF
  void *v170; // [rsp+50h] [rbp-128h]
  size_t v171; // [rsp+58h] [rbp-120h]
  _QWORD v172[2]; // [rsp+60h] [rbp-118h] BYREF
  void *src; // [rsp+70h] [rbp-108h]
  size_t n; // [rsp+78h] [rbp-100h]
  _QWORD v175[2]; // [rsp+80h] [rbp-F8h] BYREF
  void *v176; // [rsp+90h] [rbp-E8h] BYREF
  size_t v177; // [rsp+98h] [rbp-E0h]
  _QWORD v178[2]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v179[2]; // [rsp+B0h] [rbp-C8h] BYREF
  void *v180; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v181; // [rsp+D0h] [rbp-A8h]
  __int64 v182; // [rsp+D8h] [rbp-A0h]
  char v183; // [rsp+128h] [rbp-50h]
  unsigned int v184; // [rsp+130h] [rbp-48h]
  char v185; // [rsp+134h] [rbp-44h]

  if ( (a2[29] & 1) != 0 )
  {
    v8 = (__int64 **)sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
    v9 = *v8;
    v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
    if ( (unsigned __int64)v9 < v10 )
    {
      a4 = (__int64)v9;
      if ( *(_WORD *)(*v9 + 36) != 403 )
      {
        do
        {
          a4 += 8;
          if ( v10 == a4 )
            goto LABEL_8;
        }
        while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 403 );
      }
      if ( v10 != a4 )
        goto LABEL_19;
    }
    else if ( v9 != (__int64 *)v10 )
    {
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 403 )
      {
        v11 = (__int64 *)(v10 + 8);
        do
        {
          a4 = (__int64)v11;
          if ( v9 == v11 )
            goto LABEL_8;
          v12 = *v11++;
        }
        while ( *(_WORD *)(v12 + 36) != 403 );
      }
LABEL_19:
      v26 = *v9;
      if ( *(_WORD *)(*v9 + 36) != 403 )
      {
        v27 = v9 + 1;
        do
          v26 = *v27++;
        while ( *(_WORD *)(v26 + 36) != 403 );
      }
      v28 = *(unsigned int *)(v26 + 40);
      if ( v28 == *(_DWORD *)(a3 + 40)
        && (!*(_DWORD *)(v26 + 40) || !memcmp(*(const void **)(v26 + 48), *(const void **)(a3 + 48), v28)) )
      {
        return nullptr;
      }
      sub_168B9F0((__int64)v179, a1, *(_DWORD *)(v26 + 24), 0x1BBAu, 0);
      if ( v183 )
      {
        v29 = v181;
        if ( !v181 )
        {
          v109 = v182;
          v110 = *(_DWORD *)(v182 + 14976);
          if ( v110 )
          {
            v122 = (unsigned int)(v110 - 1);
            *(_DWORD *)(v182 + 14976) = v122;
            v29 = *(unsigned __int8 **)(v109 + 8 * v122 + 14848);
            v123 = *((unsigned int *)v29 + 134);
            *v29 = 0;
            v124 = *((_QWORD *)v29 + 66);
            *((_DWORD *)v29 + 106) = 0;
            v125 = v124 + (v123 << 6);
            while ( v124 != v125 )
            {
              while ( 1 )
              {
                v125 -= 64;
                v126 = *(void **)(v125 + 24);
                if ( v126 == (void *)(v125 + 40) )
                  break;
                v155 = v124;
                operator delete(v126);
                v124 = v155;
                if ( v155 == v125 )
                  goto LABEL_163;
              }
            }
LABEL_163:
            *((_DWORD *)v29 + 134) = 0;
          }
          else
          {
            v29 = (unsigned __int8 *)operator new(0x3A0u);
            *v29 = 0;
            *((_QWORD *)v29 + 12) = v29 + 112;
            *((_QWORD *)v29 + 16) = v29 + 144;
            *((_QWORD *)v29 + 20) = v29 + 176;
            *((_QWORD *)v29 + 24) = v29 + 208;
            *((_QWORD *)v29 + 28) = v29 + 240;
            *((_QWORD *)v29 + 32) = v29 + 272;
            *((_QWORD *)v29 + 36) = v29 + 304;
            *((_QWORD *)v29 + 40) = v29 + 336;
            *((_QWORD *)v29 + 44) = v29 + 368;
            *((_QWORD *)v29 + 48) = v29 + 400;
            *((_QWORD *)v29 + 52) = v29 + 432;
            *((_QWORD *)v29 + 13) = 0;
            v29[112] = 0;
            *((_QWORD *)v29 + 17) = 0;
            v29[144] = 0;
            *((_QWORD *)v29 + 21) = 0;
            v29[176] = 0;
            *((_QWORD *)v29 + 25) = 0;
            v29[208] = 0;
            *((_QWORD *)v29 + 29) = 0;
            v29[240] = 0;
            *((_QWORD *)v29 + 33) = 0;
            v29[272] = 0;
            *((_QWORD *)v29 + 37) = 0;
            v29[304] = 0;
            *((_QWORD *)v29 + 41) = 0;
            v29[336] = 0;
            *((_QWORD *)v29 + 45) = 0;
            v29[368] = 0;
            *((_QWORD *)v29 + 49) = 0;
            v29[400] = 0;
            *((_QWORD *)v29 + 53) = 0x800000000LL;
            *((_QWORD *)v29 + 66) = v29 + 544;
            *((_QWORD *)v29 + 67) = 0x600000000LL;
          }
          v181 = v29;
        }
        v29[*v29 + 1] = 2;
        v30 = v181;
        v31 = *v181;
        *v181 = v31 + 1;
        *(_QWORD *)&v30[8 * v31 + 16] = 0;
      }
      else
      {
        if ( !v185 )
        {
LABEL_27:
          sub_15F7200(v179);
          sub_168B9F0((__int64)v179, a1, *(_DWORD *)(a3 + 24), 0x1889u, 0);
          sub_15F7200(v179);
          return nullptr;
        }
        v94 = sub_168B9E0(v179);
        v95 = v180;
        if ( v180 )
          v95 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v180 + 32LL))(v180);
        v176 = v95;
        v96 = sub_1587BC0(v94, (__int64 *)&v176, v90, v91, v92, v93);
        v97 = *v96 + 32LL * v184;
        v98 = *(unsigned __int8 **)(v97 + 8);
        if ( !v98 )
        {
          v115 = *(_QWORD *)(v97 + 16);
          v116 = *(_DWORD *)(v115 + 14976);
          if ( v116 )
          {
            v132 = (unsigned int)(v116 - 1);
            *(_DWORD *)(v115 + 14976) = v132;
            v98 = *(unsigned __int8 **)(v115 + 8 * v132 + 14848);
            v133 = *((unsigned int *)v98 + 134);
            *v98 = 0;
            v134 = *((_QWORD *)v98 + 66);
            *((_DWORD *)v98 + 106) = 0;
            v135 = v134 + (v133 << 6);
            while ( v134 != v135 )
            {
              while ( 1 )
              {
                v135 -= 64;
                v136 = *(void **)(v135 + 24);
                if ( v136 == (void *)(v135 + 40) )
                  break;
                v162 = v135;
                v157 = v134;
                operator delete(v136);
                v134 = v157;
                v135 = v162;
                if ( v157 == v162 )
                  goto LABEL_173;
              }
            }
LABEL_173:
            *((_DWORD *)v98 + 134) = 0;
          }
          else
          {
            v98 = (unsigned __int8 *)operator new(0x3A0u);
            *v98 = 0;
            *((_QWORD *)v98 + 12) = v98 + 112;
            *((_QWORD *)v98 + 16) = v98 + 144;
            *((_QWORD *)v98 + 20) = v98 + 176;
            *((_QWORD *)v98 + 24) = v98 + 208;
            *((_QWORD *)v98 + 28) = v98 + 240;
            *((_QWORD *)v98 + 32) = v98 + 272;
            *((_QWORD *)v98 + 36) = v98 + 304;
            *((_QWORD *)v98 + 40) = v98 + 336;
            *((_QWORD *)v98 + 44) = v98 + 368;
            *((_QWORD *)v98 + 48) = v98 + 400;
            *((_QWORD *)v98 + 52) = v98 + 432;
            *((_QWORD *)v98 + 13) = 0;
            v98[112] = 0;
            *((_QWORD *)v98 + 17) = 0;
            v98[144] = 0;
            *((_QWORD *)v98 + 21) = 0;
            v98[176] = 0;
            *((_QWORD *)v98 + 25) = 0;
            v98[208] = 0;
            *((_QWORD *)v98 + 29) = 0;
            v98[240] = 0;
            *((_QWORD *)v98 + 33) = 0;
            v98[272] = 0;
            *((_QWORD *)v98 + 37) = 0;
            v98[304] = 0;
            *((_QWORD *)v98 + 41) = 0;
            v98[336] = 0;
            *((_QWORD *)v98 + 45) = 0;
            v98[368] = 0;
            *((_QWORD *)v98 + 49) = 0;
            v98[400] = 0;
            *((_QWORD *)v98 + 53) = 0x800000000LL;
            *((_QWORD *)v98 + 66) = v98 + 544;
            *((_QWORD *)v98 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v97 + 8) = v98;
        }
        v98[*v98 + 1] = 2;
        v99 = *(_BYTE **)(v97 + 8);
        v100 = (unsigned __int8)*v99;
        *v99 = v100 + 1;
        *(_QWORD *)&v99[8 * v100 + 16] = 0;
      }
      v32 = *(_BYTE **)(v26 + 48);
      v33 = *(unsigned int *)(v26 + 40);
      if ( v183 )
      {
        v34 = v181;
        if ( !v181 )
        {
          v107 = v182;
          v108 = *(_DWORD *)(v182 + 14976);
          if ( v108 )
          {
            v127 = (unsigned int)(v108 - 1);
            *(_DWORD *)(v182 + 14976) = v127;
            v34 = *(unsigned __int8 **)(v107 + 8 * v127 + 14848);
            v128 = *((unsigned int *)v34 + 134);
            *v34 = 0;
            v129 = *((_QWORD *)v34 + 66);
            *((_DWORD *)v34 + 106) = 0;
            v130 = v129 + (v128 << 6);
            while ( v129 != v130 )
            {
              while ( 1 )
              {
                v130 -= 64;
                v131 = *(void **)(v130 + 24);
                if ( v131 == (void *)(v130 + 40) )
                  break;
                v161 = v130;
                v156 = v129;
                operator delete(v131);
                v129 = v156;
                v130 = v161;
                if ( v156 == v161 )
                  goto LABEL_168;
              }
            }
LABEL_168:
            *((_DWORD *)v34 + 134) = 0;
          }
          else
          {
            v34 = (unsigned __int8 *)operator new(0x3A0u);
            *v34 = 0;
            *((_QWORD *)v34 + 12) = v34 + 112;
            *((_QWORD *)v34 + 16) = v34 + 144;
            *((_QWORD *)v34 + 20) = v34 + 176;
            *((_QWORD *)v34 + 24) = v34 + 208;
            *((_QWORD *)v34 + 28) = v34 + 240;
            *((_QWORD *)v34 + 32) = v34 + 272;
            *((_QWORD *)v34 + 36) = v34 + 304;
            *((_QWORD *)v34 + 40) = v34 + 336;
            *((_QWORD *)v34 + 44) = v34 + 368;
            *((_QWORD *)v34 + 48) = v34 + 400;
            *((_QWORD *)v34 + 52) = v34 + 432;
            *((_QWORD *)v34 + 13) = 0;
            v34[112] = 0;
            *((_QWORD *)v34 + 17) = 0;
            v34[144] = 0;
            *((_QWORD *)v34 + 21) = 0;
            v34[176] = 0;
            *((_QWORD *)v34 + 25) = 0;
            v34[208] = 0;
            *((_QWORD *)v34 + 29) = 0;
            v34[240] = 0;
            *((_QWORD *)v34 + 33) = 0;
            v34[272] = 0;
            *((_QWORD *)v34 + 37) = 0;
            v34[304] = 0;
            *((_QWORD *)v34 + 41) = 0;
            v34[336] = 0;
            *((_QWORD *)v34 + 45) = 0;
            v34[368] = 0;
            *((_QWORD *)v34 + 49) = 0;
            v34[400] = 0;
            *((_QWORD *)v34 + 53) = 0x800000000LL;
            *((_QWORD *)v34 + 66) = v34 + 544;
            *((_QWORD *)v34 + 67) = 0x600000000LL;
          }
          v181 = v34;
        }
        v34[*v34 + 1] = 0;
        v167 = v169;
        if ( &v32[v33] && !v32 )
          goto LABEL_188;
        if ( v33 > 0xF )
        {
          v35 = (_QWORD *)operator new(v33 + 1);
          v169[0] = v33;
          v167 = v35;
        }
        else
        {
          if ( v33 == 1 )
          {
            LOBYTE(v169[0]) = *v32;
            v35 = v169;
            goto LABEL_39;
          }
          v35 = v169;
          if ( !v33 )
          {
LABEL_39:
            v168 = v33;
            *((_BYTE *)v35 + v33) = 0;
            v36 = v181;
            v37 = *v181;
            *v181 = v37 + 1;
            v38 = (unsigned __int8)v37;
            v39 = 32 * (v37 + 3);
            v40 = (void **)&v36[v39];
            v41 = *(unsigned __int8 **)&v36[v39];
            if ( v167 == v169 )
            {
              v102 = v168;
              if ( v168 )
              {
                if ( v168 == 1 )
                  *v41 = v169[0];
                else
                  memcpy(v41, v167, v168);
                v102 = v168;
                v41 = (unsigned __int8 *)*v40;
              }
              v40[1] = (void *)v102;
              v41[v102] = 0;
              v41 = (unsigned __int8 *)v167;
            }
            else
            {
              if ( v41 == &v36[v39 + 16] )
              {
                *v40 = v167;
                v40[1] = (void *)v168;
                v40[2] = (void *)v169[0];
              }
              else
              {
                v42 = *(_QWORD *)&v36[32 * v38 + 112];
                *v40 = v167;
                v40[1] = (void *)v168;
                v40[2] = (void *)v169[0];
                if ( v41 )
                {
                  v167 = v41;
                  v169[0] = v42;
                  goto LABEL_43;
                }
              }
              v41 = (unsigned __int8 *)v169;
              v167 = v169;
            }
LABEL_43:
            v168 = 0;
            *v41 = 0;
            v43 = v167;
            if ( v167 == v169 )
              goto LABEL_45;
            goto LABEL_44;
          }
        }
        memcpy(v35, v32, v33);
        v35 = v167;
        goto LABEL_39;
      }
      if ( !v185 )
        goto LABEL_27;
      v77 = sub_168B9E0(v179);
      v78 = (__int64)v180;
      if ( v180 )
        v78 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v180 + 32LL))(v180);
      v165 = v78;
      v79 = sub_1587BC0(v77, &v165, v73, v74, v75, v76);
      v80 = *v79 + 32LL * v184;
      v81 = *(unsigned __int8 **)(v80 + 8);
      if ( !v81 )
      {
        v113 = *(_QWORD *)(v80 + 16);
        v114 = *(_DWORD *)(v113 + 14976);
        if ( v114 )
        {
          v142 = (unsigned int)(v114 - 1);
          *(_DWORD *)(v113 + 14976) = v142;
          v81 = *(unsigned __int8 **)(v113 + 8 * v142 + 14848);
          v143 = *((unsigned int *)v81 + 134);
          *v81 = 0;
          v144 = *((_QWORD *)v81 + 66);
          *((_DWORD *)v81 + 106) = 0;
          v145 = v144 + (v143 << 6);
          while ( v144 != v145 )
          {
            while ( 1 )
            {
              v145 -= 64;
              v146 = *(void **)(v145 + 24);
              if ( v146 == (void *)(v145 + 40) )
                break;
              v164 = v145;
              v159 = v80;
              operator delete(v146);
              v145 = v164;
              v80 = v159;
              if ( v144 == v164 )
                goto LABEL_183;
            }
          }
LABEL_183:
          *((_DWORD *)v81 + 134) = 0;
        }
        else
        {
          v153 = v80;
          v81 = (unsigned __int8 *)operator new(0x3A0u);
          *v81 = 0;
          *((_QWORD *)v81 + 12) = v81 + 112;
          *((_QWORD *)v81 + 16) = v81 + 144;
          *((_QWORD *)v81 + 20) = v81 + 176;
          *((_QWORD *)v81 + 24) = v81 + 208;
          *((_QWORD *)v81 + 28) = v81 + 240;
          *((_QWORD *)v81 + 32) = v81 + 272;
          *((_QWORD *)v81 + 36) = v81 + 304;
          *((_QWORD *)v81 + 40) = v81 + 336;
          *((_QWORD *)v81 + 44) = v81 + 368;
          *((_QWORD *)v81 + 48) = v81 + 400;
          *((_QWORD *)v81 + 52) = v81 + 432;
          *((_QWORD *)v81 + 13) = 0;
          v81[112] = 0;
          *((_QWORD *)v81 + 17) = 0;
          v81[144] = 0;
          *((_QWORD *)v81 + 21) = 0;
          v81[176] = 0;
          *((_QWORD *)v81 + 25) = 0;
          v81[208] = 0;
          *((_QWORD *)v81 + 29) = 0;
          v81[240] = 0;
          *((_QWORD *)v81 + 33) = 0;
          v81[272] = 0;
          *((_QWORD *)v81 + 37) = 0;
          v81[304] = 0;
          *((_QWORD *)v81 + 41) = 0;
          v81[336] = 0;
          *((_QWORD *)v81 + 45) = 0;
          v81[368] = 0;
          *((_QWORD *)v81 + 49) = 0;
          v81[400] = 0;
          *((_QWORD *)v81 + 53) = 0x800000000LL;
          v80 = v153;
          *((_QWORD *)v81 + 66) = v81 + 544;
          *((_QWORD *)v81 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v80 + 8) = v81;
      }
      v81[*v81 + 1] = 0;
      v170 = v172;
      if ( &v32[v33] && !v32 )
        goto LABEL_188;
      if ( v33 > 0xF )
      {
        v150 = v80;
        v82 = (_QWORD *)operator new(v33 + 1);
        v172[0] = v33;
        v80 = v150;
        v170 = v82;
      }
      else
      {
        if ( v33 == 1 )
        {
          LOBYTE(v172[0]) = *v32;
          v82 = v172;
          goto LABEL_82;
        }
        v82 = v172;
        if ( !v33 )
        {
LABEL_82:
          v171 = v33;
          *((_BYTE *)v82 + v33) = 0;
          v83 = *(_BYTE **)(v80 + 8);
          v84 = (unsigned __int8)*v83;
          *v83 = v84 + 1;
          v85 = (unsigned __int8)v84;
          v86 = 32 * (v84 + 3);
          v87 = (void **)&v83[v86];
          v88 = *(_BYTE **)&v83[v86];
          if ( v170 == v172 )
          {
            v104 = v171;
            if ( v171 )
            {
              if ( v171 == 1 )
                *v88 = v172[0];
              else
                memcpy(v88, v170, v171);
              v104 = v171;
              v88 = *v87;
            }
            v87[1] = (void *)v104;
            v88[v104] = 0;
            v88 = v170;
          }
          else
          {
            if ( v88 == &v83[v86 + 16] )
            {
              *v87 = v170;
              v87[1] = (void *)v171;
              v87[2] = (void *)v172[0];
            }
            else
            {
              v89 = *(_QWORD *)&v83[32 * v85 + 112];
              *v87 = v170;
              v87[1] = (void *)v171;
              v87[2] = (void *)v172[0];
              if ( v88 )
              {
                v170 = v88;
                v172[0] = v89;
                goto LABEL_86;
              }
            }
            v88 = v172;
            v170 = v172;
          }
LABEL_86:
          v171 = 0;
          *v88 = 0;
          v43 = v170;
          if ( v170 == v172 )
          {
LABEL_45:
            v44 = *(_BYTE **)(a3 + 48);
            v45 = *(unsigned int *)(a3 + 40);
            if ( v183 )
            {
              v46 = v181;
              if ( !v181 )
              {
                v105 = v182;
                v106 = *(_DWORD *)(v182 + 14976);
                if ( v106 )
                {
                  v117 = (unsigned int)(v106 - 1);
                  *(_DWORD *)(v182 + 14976) = v117;
                  v46 = *(unsigned __int8 **)(v105 + 8 * v117 + 14848);
                  v118 = *((unsigned int *)v46 + 134);
                  *v46 = 0;
                  v119 = *((_QWORD *)v46 + 66);
                  *((_DWORD *)v46 + 106) = 0;
                  v120 = v119 + (v118 << 6);
                  while ( v119 != v120 )
                  {
                    while ( 1 )
                    {
                      v120 -= 64;
                      v121 = *(void **)(v120 + 24);
                      if ( v121 == (void *)(v120 + 40) )
                        break;
                      v160 = v120;
                      v154 = v119;
                      operator delete(v121);
                      v119 = v154;
                      v120 = v160;
                      if ( v154 == v160 )
                        goto LABEL_158;
                    }
                  }
LABEL_158:
                  *((_DWORD *)v46 + 134) = 0;
                }
                else
                {
                  v46 = (unsigned __int8 *)operator new(0x3A0u);
                  *v46 = 0;
                  *((_QWORD *)v46 + 12) = v46 + 112;
                  *((_QWORD *)v46 + 16) = v46 + 144;
                  *((_QWORD *)v46 + 20) = v46 + 176;
                  *((_QWORD *)v46 + 24) = v46 + 208;
                  *((_QWORD *)v46 + 28) = v46 + 240;
                  *((_QWORD *)v46 + 32) = v46 + 272;
                  *((_QWORD *)v46 + 36) = v46 + 304;
                  *((_QWORD *)v46 + 40) = v46 + 336;
                  *((_QWORD *)v46 + 44) = v46 + 368;
                  *((_QWORD *)v46 + 48) = v46 + 400;
                  *((_QWORD *)v46 + 52) = v46 + 432;
                  *((_QWORD *)v46 + 13) = 0;
                  v46[112] = 0;
                  *((_QWORD *)v46 + 17) = 0;
                  v46[144] = 0;
                  *((_QWORD *)v46 + 21) = 0;
                  v46[176] = 0;
                  *((_QWORD *)v46 + 25) = 0;
                  v46[208] = 0;
                  *((_QWORD *)v46 + 29) = 0;
                  v46[240] = 0;
                  *((_QWORD *)v46 + 33) = 0;
                  v46[272] = 0;
                  *((_QWORD *)v46 + 37) = 0;
                  v46[304] = 0;
                  *((_QWORD *)v46 + 41) = 0;
                  v46[336] = 0;
                  *((_QWORD *)v46 + 45) = 0;
                  v46[368] = 0;
                  *((_QWORD *)v46 + 49) = 0;
                  v46[400] = 0;
                  *((_QWORD *)v46 + 53) = 0x800000000LL;
                  *((_QWORD *)v46 + 66) = v46 + 544;
                  *((_QWORD *)v46 + 67) = 0x600000000LL;
                }
                v181 = v46;
              }
              v46[*v46 + 1] = 0;
              src = v175;
              if ( !&v44[v45] || v44 )
              {
                if ( v45 > 0xF )
                {
                  v47 = (_QWORD *)operator new(v45 + 1);
                  v175[0] = v45;
                  src = v47;
                }
                else
                {
                  if ( v45 == 1 )
                  {
                    LOBYTE(v175[0]) = *v44;
                    v47 = v175;
                    goto LABEL_52;
                  }
                  v47 = v175;
                  if ( !v45 )
                  {
LABEL_52:
                    n = v45;
                    *((_BYTE *)v47 + v45) = 0;
                    v48 = v181;
                    v49 = *v181;
                    *v181 = v49 + 1;
                    v50 = (unsigned __int8)v49;
                    v51 = 32 * (v49 + 3);
                    v52 = (void **)&v48[v51];
                    v53 = *(unsigned __int8 **)&v48[v51];
                    if ( src == v175 )
                    {
                      v101 = n;
                      if ( n )
                      {
                        if ( n == 1 )
                          *v53 = v175[0];
                        else
                          memcpy(v53, src, n);
                        v101 = n;
                        v53 = (unsigned __int8 *)*v52;
                      }
                      v52[1] = (void *)v101;
                      v53[v101] = 0;
                      v53 = (unsigned __int8 *)src;
                    }
                    else
                    {
                      if ( v53 == &v48[v51 + 16] )
                      {
                        *v52 = src;
                        v52[1] = (void *)n;
                        v52[2] = (void *)v175[0];
                      }
                      else
                      {
                        v54 = *(_QWORD *)&v48[32 * v50 + 112];
                        *v52 = src;
                        v52[1] = (void *)n;
                        v52[2] = (void *)v175[0];
                        if ( v53 )
                        {
                          src = v53;
                          v175[0] = v54;
                          goto LABEL_56;
                        }
                      }
                      v53 = (unsigned __int8 *)v175;
                      src = v175;
                    }
LABEL_56:
                    n = 0;
                    *v53 = 0;
                    v55 = src;
                    if ( src == v175 )
                      goto LABEL_27;
LABEL_57:
                    operator delete(v55);
                    goto LABEL_27;
                  }
                }
                memcpy(v47, v44, v45);
                v47 = src;
                goto LABEL_52;
              }
LABEL_188:
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            }
            if ( !v185 )
              goto LABEL_27;
            v60 = sub_168B9E0(v179);
            v61 = (__int64)v180;
            if ( v180 )
              v61 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v180 + 32LL))(v180);
            v166 = v61;
            v62 = sub_1587BC0(v60, &v166, v56, v57, v58, v59);
            v63 = *v62 + 32LL * v184;
            v64 = *(unsigned __int8 **)(v63 + 8);
            if ( !v64 )
            {
              v111 = *(_QWORD *)(v63 + 16);
              v112 = *(_DWORD *)(v111 + 14976);
              if ( v112 )
              {
                v137 = (unsigned int)(v112 - 1);
                *(_DWORD *)(v111 + 14976) = v137;
                v64 = *(unsigned __int8 **)(v111 + 8 * v137 + 14848);
                v138 = *((unsigned int *)v64 + 134);
                *v64 = 0;
                v139 = *((_QWORD *)v64 + 66);
                *((_DWORD *)v64 + 106) = 0;
                v140 = v139 + (v138 << 6);
                while ( v139 != v140 )
                {
                  while ( 1 )
                  {
                    v140 -= 64;
                    v141 = *(void **)(v140 + 24);
                    if ( v141 == (void *)(v140 + 40) )
                      break;
                    v163 = v63;
                    v158 = v140;
                    operator delete(v141);
                    v140 = v158;
                    v63 = v163;
                    if ( v139 == v158 )
                      goto LABEL_178;
                  }
                }
LABEL_178:
                *((_DWORD *)v64 + 134) = 0;
              }
              else
              {
                v152 = v63;
                v64 = (unsigned __int8 *)operator new(0x3A0u);
                *v64 = 0;
                *((_QWORD *)v64 + 12) = v64 + 112;
                *((_QWORD *)v64 + 16) = v64 + 144;
                *((_QWORD *)v64 + 20) = v64 + 176;
                *((_QWORD *)v64 + 24) = v64 + 208;
                *((_QWORD *)v64 + 28) = v64 + 240;
                *((_QWORD *)v64 + 32) = v64 + 272;
                *((_QWORD *)v64 + 36) = v64 + 304;
                *((_QWORD *)v64 + 40) = v64 + 336;
                *((_QWORD *)v64 + 44) = v64 + 368;
                *((_QWORD *)v64 + 48) = v64 + 400;
                *((_QWORD *)v64 + 52) = v64 + 432;
                *((_QWORD *)v64 + 13) = 0;
                v64[112] = 0;
                *((_QWORD *)v64 + 17) = 0;
                v64[144] = 0;
                *((_QWORD *)v64 + 21) = 0;
                v64[176] = 0;
                *((_QWORD *)v64 + 25) = 0;
                v64[208] = 0;
                *((_QWORD *)v64 + 29) = 0;
                v64[240] = 0;
                *((_QWORD *)v64 + 33) = 0;
                v64[272] = 0;
                *((_QWORD *)v64 + 37) = 0;
                v64[304] = 0;
                *((_QWORD *)v64 + 41) = 0;
                v64[336] = 0;
                *((_QWORD *)v64 + 45) = 0;
                v64[368] = 0;
                *((_QWORD *)v64 + 49) = 0;
                v64[400] = 0;
                *((_QWORD *)v64 + 53) = 0x800000000LL;
                v63 = v152;
                *((_QWORD *)v64 + 66) = v64 + 544;
                *((_QWORD *)v64 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v63 + 8) = v64;
            }
            v64[*v64 + 1] = 0;
            v176 = v178;
            if ( &v44[v45] && !v44 )
              goto LABEL_188;
            if ( v45 > 0xF )
            {
              v151 = v63;
              v65 = (_QWORD *)operator new(v45 + 1);
              v178[0] = v45;
              v63 = v151;
              v176 = v65;
            }
            else
            {
              if ( v45 == 1 )
              {
                LOBYTE(v178[0]) = *v44;
                v65 = v178;
                goto LABEL_67;
              }
              v65 = v178;
              if ( !v45 )
              {
LABEL_67:
                v177 = v45;
                *((_BYTE *)v65 + v45) = 0;
                v66 = *(_BYTE **)(v63 + 8);
                v67 = (unsigned __int8)*v66;
                *v66 = v67 + 1;
                v68 = (unsigned __int8)v67;
                v69 = 32 * (v67 + 3);
                v70 = (void **)&v66[v69];
                v71 = *(_BYTE **)&v66[v69];
                if ( v176 == v178 )
                {
                  v103 = v177;
                  if ( v177 )
                  {
                    if ( v177 == 1 )
                      *v71 = v178[0];
                    else
                      memcpy(v71, v176, v177);
                    v103 = v177;
                    v71 = *v70;
                  }
                  v70[1] = (void *)v103;
                  v71[v103] = 0;
                  v71 = v176;
                }
                else
                {
                  if ( v71 == &v66[v69 + 16] )
                  {
                    *v70 = v176;
                    v70[1] = (void *)v177;
                    v70[2] = (void *)v178[0];
                  }
                  else
                  {
                    v72 = *(_QWORD *)&v66[32 * v68 + 112];
                    *v70 = v176;
                    v70[1] = (void *)v177;
                    v70[2] = (void *)v178[0];
                    if ( v71 )
                    {
                      v176 = v71;
                      v178[0] = v72;
                      goto LABEL_71;
                    }
                  }
                  v71 = v178;
                  v176 = v178;
                }
LABEL_71:
                v177 = 0;
                *v71 = 0;
                v55 = v176;
                if ( v176 == v178 )
                  goto LABEL_27;
                goto LABEL_57;
              }
            }
            v149 = v63;
            memcpy(v65, v44, v45);
            v65 = v176;
            v63 = v149;
            goto LABEL_67;
          }
LABEL_44:
          operator delete(v43);
          goto LABEL_45;
        }
      }
      v148 = v80;
      memcpy(v82, v32, v33);
      v82 = v170;
      v80 = v148;
      goto LABEL_82;
    }
  }
LABEL_8:
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v13 == sub_9A8F10 )
    v14 = sub_B7F5F0(a2, v179, (__int64)sub_9A8F10, a4, a5, a6);
  else
    v14 = v13((__int64)a2);
  if ( v14 )
  {
    sub_168B9F0((__int64)v179, a1, *(_DWORD *)(a3 + 24), 0x1B76u, 0);
    LODWORD(v176) = 0;
    sub_1587D10((__int64)v179, (int *)&v176);
    sub_15F7200(v179);
    return nullptr;
  }
  else
  {
    v15 = sub_168B6C0((__int64)a1);
    v16 = *(unsigned int *)(a3 + 40);
    v17 = *(const void **)(a3 + 48);
    v18 = v15;
    v19 = (_QWORD *)sub_168B6C0((__int64)a1);
    v22 = v19[294];
    v19[304] += 56LL;
    v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v19[295] >= v23 + 56 && v22 )
    {
      v19[294] = v23 + 56;
      v24 = (__m128i *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v24 = (__m128i *)sub_986170((__int64)(v19 + 294), 56, 56, 3, v20, v21);
    }
    v147 = v24;
    sub_B30740(v24, v18, (const __m128i *)a3, v17, v16);
    return v147;
  }
}
