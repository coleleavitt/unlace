bool __fastcall sub_1C650B0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  signed __int64 v10; // rdx
  _QWORD *v11; // rbp
  _QWORD *v12; // r13
  bool result; // al
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  unsigned __int64 *v26; // rax
  __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rsi
  unsigned __int8 *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rcx
  unsigned __int64 *v41; // rax
  __int64 *v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rcx
  unsigned __int8 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  unsigned __int8 *v56; // rax
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  unsigned __int8 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  unsigned __int8 *v68; // rax
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  bool v71; // al
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r15
  __int64 v80; // r13
  _QWORD *v81; // r12
  __int64 v82; // rbp
  void *v83; // rdi
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // r15
  __int64 v92; // r13
  _QWORD *v93; // r12
  __int64 v94; // rbp
  void *v95; // rdi
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rbp
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // r15
  void *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 v117; // rcx
  __int64 v118; // rbx
  __int64 v119; // r15
  void *v120; // rdi
  bool v121; // [rsp+7h] [rbp-199h]
  bool v122; // [rsp+7h] [rbp-199h]
  bool v123; // [rsp+7h] [rbp-199h]
  bool v124; // [rsp+7h] [rbp-199h]
  __int64 v125; // [rsp+18h] [rbp-188h]
  __int64 v128; // [rsp+30h] [rbp-170h]
  __int64 v129; // [rsp+30h] [rbp-170h]
  __int64 v130; // [rsp+30h] [rbp-170h]
  __int64 v131; // [rsp+30h] [rbp-170h]
  __int64 v132; // [rsp+30h] [rbp-170h]
  unsigned __int8 *v133; // [rsp+30h] [rbp-170h]
  __int64 v134; // [rsp+30h] [rbp-170h]
  __int64 v136; // [rsp+40h] [rbp-160h]
  __int64 v137; // [rsp+40h] [rbp-160h]
  __int64 v138; // [rsp+40h] [rbp-160h]
  _QWORD *v139; // [rsp+40h] [rbp-160h]
  unsigned __int8 *v140; // [rsp+40h] [rbp-160h]
  __int64 v141; // [rsp+40h] [rbp-160h]
  __int64 v142; // [rsp+40h] [rbp-160h]
  unsigned __int8 *v143; // [rsp+40h] [rbp-160h]
  unsigned __int8 *v144; // [rsp+40h] [rbp-160h]
  __int64 v145; // [rsp+48h] [rbp-158h]
  _QWORD *v146; // [rsp+48h] [rbp-158h]
  _QWORD *v147; // [rsp+48h] [rbp-158h]
  __int64 v148; // [rsp+48h] [rbp-158h]
  _QWORD *v149; // [rsp+48h] [rbp-158h]
  __int64 v150; // [rsp+48h] [rbp-158h]
  _QWORD *v151; // [rsp+50h] [rbp-150h]
  _QWORD *v152; // [rsp+50h] [rbp-150h]
  _QWORD *v153; // [rsp+50h] [rbp-150h]
  _QWORD *v154; // [rsp+50h] [rbp-150h]
  _QWORD *v155; // [rsp+58h] [rbp-148h]
  _QWORD *v156; // [rsp+58h] [rbp-148h]
  __int64 v157; // [rsp+70h] [rbp-130h] BYREF
  __int64 v158; // [rsp+78h] [rbp-128h] BYREF
  char v159; // [rsp+80h] [rbp-120h]
  void *v160[2]; // [rsp+88h] [rbp-118h]
  __int64 v161; // [rsp+98h] [rbp-108h]
  __int64 v162; // [rsp+A8h] [rbp-F8h] BYREF
  char v163; // [rsp+B0h] [rbp-F0h]
  void *v164[2]; // [rsp+B8h] [rbp-E8h]
  __int64 v165; // [rsp+C8h] [rbp-D8h]
  _QWORD v166[2]; // [rsp+D8h] [rbp-C8h] BYREF
  _QWORD *v167; // [rsp+E8h] [rbp-B8h]
  unsigned __int8 *v168; // [rsp+F8h] [rbp-A8h] BYREF
  __int64 v169; // [rsp+100h] [rbp-A0h]
  bool v170; // [rsp+150h] [rbp-50h]
  unsigned int v171; // [rsp+158h] [rbp-48h]
  bool v172; // [rsp+15Ch] [rbp-44h]

  v6 = *(_QWORD *)(a1 + 248);
  v158 = v6;
  v159 = 0;
  *(_OWORD *)v160 = 0;
  v161 = 0;
  if ( a2 )
  {
    sub_1C63C20((__int64)&v158, a2);
    v7 = *(_QWORD *)(a1 + 248);
    v163 = 0;
    *(_OWORD *)v164 = 0;
    v162 = v7;
    v165 = 0;
    if ( a3 )
    {
      a2 = a3;
      sub_1C63C20((__int64)&v162, a3);
      v8 = v164[1];
      v9 = v164[0];
      v10 = (char *)v164[1] - (char *)v164[0];
    }
    else
    {
      v8 = nullptr;
      v9 = nullptr;
      v10 = 0;
    }
    v121 = (char *)v160[1] - (char *)v160[0] == v10;
  }
  else
  {
    v162 = v6;
    v163 = 0;
    *(_OWORD *)v164 = 0;
    v165 = 0;
    if ( !a3 )
      goto LABEL_86;
    a2 = a3;
    sub_1C63C20((__int64)&v162, a3);
    v8 = v164[1];
    v121 = 0;
    v9 = v164[0];
  }
  if ( v8 != v9 )
  {
    v11 = v160[1];
    v12 = v160[0];
LABEL_13:
    v14 = *v9;
    while ( 1 )
    {
      if ( v11 != v12 )
        v4 = *v12;
      if ( v121 && sub_BFBC70(*(_QWORD *)(v4 + 32)) )
        goto LABEL_8;
      v15 = sub_BFBC70(*(_QWORD *)(v14 + 32));
      if ( !v15 || (*(_BYTE *)(v15 + 29) & 1) == 0 )
        goto LABEL_8;
      v125 = v15;
      v20 = sub_B8C3D0(v15, a2, v16, v17, v18, v19);
      v22 = v125;
      v23 = *v20;
      v24 = *v20 + 8LL * *((unsigned int *)v20 + 2);
      if ( *v20 >= v24 )
      {
        if ( v23 != v24 )
        {
          if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 54 )
            goto LABEL_29;
          v37 = (__int64 *)(v24 + 8);
          while ( 1 )
          {
            v24 = (unsigned __int64)v37;
            if ( (__int64 *)v23 == v37 )
              break;
            v38 = *v37++;
            if ( *(_WORD *)(v38 + 36) == 54 )
              goto LABEL_29;
          }
        }
      }
      else
      {
        v25 = (__int64 *)*v20;
        while ( 1 )
        {
          v23 = *v25;
          if ( *(_WORD *)(*v25 + 36) == 54 )
            break;
          if ( (__int64 *)v24 == ++v25 )
            goto LABEL_23;
        }
        if ( (__int64 *)v24 != v25 )
          goto LABEL_29;
      }
LABEL_23:
      if ( (*(_BYTE *)(v125 + 29) & 1) == 0 )
        goto LABEL_8;
      v26 = sub_B8C3D0(v125, a2, v23, v24, v21, v125);
      v22 = v125;
      v27 = (__int64 *)*v26;
      v28 = *v26 + 8LL * *((unsigned int *)v26 + 2);
      if ( *v26 >= v28 )
      {
        if ( v27 == (__int64 *)v28 )
          goto LABEL_8;
        if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 216 )
        {
          v39 = (__int64 *)(v28 + 8);
          while ( v27 != v39 )
          {
            v40 = *v39++;
            if ( *(_WORD *)(v40 + 36) == 216 )
              goto LABEL_29;
          }
LABEL_8:
          if ( v9 == v8 )
            goto LABEL_33;
          goto LABEL_9;
        }
      }
      else
      {
        v29 = *v26;
        while ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 216 )
        {
          v29 += 8LL;
          if ( v28 == v29 )
            goto LABEL_8;
        }
        if ( v28 == v29 )
          goto LABEL_8;
      }
LABEL_29:
      v128 = v22;
      v30 = sub_EEB7E0(a3, a2, 0.0);
      v31 = a1 + 8;
      sub_168B9F0((__int64)v166, (__int64 *)(a1 + 8), v30, 0x1B2Au, 0);
      v35 = v128;
      if ( v170 )
      {
        v46 = v168;
        if ( !v168 )
        {
          v72 = v169;
          v73 = *(_DWORD *)(v169 + 14976);
          if ( v73 )
          {
            v74 = (unsigned int)(v73 - 1);
            *(_DWORD *)(v169 + 14976) = v74;
            v46 = *(unsigned __int8 **)(v72 + 8 * v74 + 14848);
            v75 = *((unsigned int *)v46 + 134);
            *v46 = 0;
            v76 = *((_QWORD *)v46 + 66);
            *((_DWORD *)v46 + 106) = 0;
            v77 = v76 + (v75 << 6);
            if ( v76 != v77 )
            {
              v139 = v8;
              v78 = v77;
              v146 = v9;
              v79 = v128;
              v151 = v12;
              v80 = v14;
              v81 = v11;
              v82 = v76;
              do
              {
                while ( 1 )
                {
                  v78 -= 64;
                  v83 = *(void **)(v78 + 24);
                  if ( v83 == (void *)(v78 + 40) )
                    break;
                  v133 = v46;
                  operator delete(v83);
                  v46 = v133;
                  if ( v82 == v78 )
                    goto LABEL_94;
                }
              }
              while ( v82 != v78 );
LABEL_94:
              v11 = v81;
              v35 = v79;
              v14 = v80;
              v8 = v139;
              v9 = v146;
              v12 = v151;
            }
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
            v35 = v128;
            *((_QWORD *)v46 + 66) = v46 + 544;
            *((_QWORD *)v46 + 67) = 0x600000000LL;
          }
          v168 = v46;
        }
        v46[*v46 + 1] = 16;
        v32 = v168;
      }
      else
      {
        if ( !v172 )
        {
          if ( (*(_BYTE *)(v128 + 29) & 1) == 0 )
            goto LABEL_32;
          goto LABEL_53;
        }
        v60 = sub_168B9E0(v166);
        v63 = v128;
        v64 = v60;
        v65 = (__int64)v167;
        if ( v167 )
        {
          v138 = v64;
          v65 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))(*v167 + 32LL))(
                  v167,
                  v31,
                  v64,
                  *v167,
                  v62,
                  v128);
          v64 = v138;
          v63 = v128;
        }
        v132 = v63;
        v157 = v65;
        v66 = sub_1587BC0(v64, &v157, v64, v61, v62, v63);
        v35 = v132;
        v67 = *v66 + 32LL * v171;
        v68 = *(unsigned __int8 **)(v67 + 8);
        if ( !v68 )
        {
          v96 = *(_QWORD *)(v67 + 16);
          v97 = *(_DWORD *)(v96 + 14976);
          if ( v97 )
          {
            v107 = (unsigned int)(v97 - 1);
            *(_DWORD *)(v96 + 14976) = v107;
            v68 = *(unsigned __int8 **)(v96 + 8 * v107 + 14848);
            v108 = *((unsigned int *)v68 + 134);
            *v68 = 0;
            v109 = *((_QWORD *)v68 + 66);
            *((_DWORD *)v68 + 106) = 0;
            v110 = v109 + (v108 << 6);
            if ( v109 != v110 )
            {
              v149 = v8;
              v111 = v110;
              v153 = v9;
              v112 = v132;
              do
              {
                while ( 1 )
                {
                  v111 -= 64;
                  v113 = *(void **)(v111 + 24);
                  if ( v113 == (void *)(v111 + 40) )
                    break;
                  v143 = v68;
                  v134 = v67;
                  operator delete(v113);
                  v67 = v134;
                  v68 = v143;
                  if ( v109 == v111 )
                    goto LABEL_125;
                }
              }
              while ( v109 != v111 );
LABEL_125:
              v35 = v112;
              v8 = v149;
              v9 = v153;
            }
            *((_DWORD *)v68 + 134) = 0;
          }
          else
          {
            v142 = v67;
            v68 = (unsigned __int8 *)operator new(0x3A0u);
            *v68 = 0;
            *((_QWORD *)v68 + 12) = v68 + 112;
            *((_QWORD *)v68 + 16) = v68 + 144;
            *((_QWORD *)v68 + 20) = v68 + 176;
            *((_QWORD *)v68 + 24) = v68 + 208;
            *((_QWORD *)v68 + 28) = v68 + 240;
            *((_QWORD *)v68 + 32) = v68 + 272;
            *((_QWORD *)v68 + 36) = v68 + 304;
            *((_QWORD *)v68 + 40) = v68 + 336;
            *((_QWORD *)v68 + 44) = v68 + 368;
            *((_QWORD *)v68 + 48) = v68 + 400;
            *((_QWORD *)v68 + 52) = v68 + 432;
            *((_QWORD *)v68 + 13) = 0;
            v68[112] = 0;
            *((_QWORD *)v68 + 17) = 0;
            v68[144] = 0;
            *((_QWORD *)v68 + 21) = 0;
            v68[176] = 0;
            *((_QWORD *)v68 + 25) = 0;
            v68[208] = 0;
            *((_QWORD *)v68 + 29) = 0;
            v68[240] = 0;
            *((_QWORD *)v68 + 33) = 0;
            v68[272] = 0;
            *((_QWORD *)v68 + 37) = 0;
            v68[304] = 0;
            *((_QWORD *)v68 + 41) = 0;
            v68[336] = 0;
            *((_QWORD *)v68 + 45) = 0;
            v68[368] = 0;
            *((_QWORD *)v68 + 49) = 0;
            v68[400] = 0;
            *((_QWORD *)v68 + 53) = 0x800000000LL;
            v35 = v132;
            *((_QWORD *)v68 + 66) = v68 + 544;
            v67 = v142;
            *((_QWORD *)v68 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v67 + 8) = v68;
        }
        v68[*v68 + 1] = 16;
        v32 = *(unsigned __int8 **)(v67 + 8);
      }
      v47 = *v32;
      v33 = (unsigned int)(v47 + 1);
      *v32 = v47 + 1;
      v31 = a4;
      *(_QWORD *)&v32[8 * v47 + 16] = a4;
      if ( (*(_BYTE *)(v35 + 29) & 1) == 0 )
        goto LABEL_63;
LABEL_53:
      v130 = v35;
      v41 = sub_B8C3D0(v35, v31, (__int64)v32, v33, v34, v35);
      v35 = v130;
      v42 = (__int64 *)*v41;
      v43 = *v41 + 8LL * *((unsigned int *)v41 + 2);
      if ( *v41 < v43 )
      {
        v69 = *v41;
        while ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 54 )
        {
          v69 += 8LL;
          if ( v43 == v69 )
            goto LABEL_63;
        }
        if ( v69 == v43 )
          goto LABEL_63;
      }
      else
      {
        if ( v42 == (__int64 *)v43 )
          goto LABEL_63;
        if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) != 54 )
        {
          v44 = (__int64 *)(v43 + 8);
          while ( v42 != v44 )
          {
            v45 = *v44++;
            if ( *(_WORD *)(v45 + 36) == 54 )
              goto LABEL_85;
          }
LABEL_63:
          v131 = 1;
          goto LABEL_64;
        }
      }
LABEL_85:
      v131 = 2;
LABEL_64:
      if ( v170 )
      {
        v59 = v168;
        if ( !v168 )
        {
          v84 = v169;
          v85 = *(_DWORD *)(v169 + 14976);
          if ( v85 )
          {
            v86 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v169 + 14976) = v86;
            v59 = *(unsigned __int8 **)(v84 + 8 * v86 + 14848);
            v87 = *((unsigned int *)v59 + 134);
            *v59 = 0;
            v88 = *((_QWORD *)v59 + 66);
            *((_DWORD *)v59 + 106) = 0;
            v89 = v88 + (v87 << 6);
            if ( v88 != v89 )
            {
              v147 = v8;
              v90 = v89;
              v152 = v9;
              v91 = v35;
              v155 = v12;
              v92 = v14;
              v93 = v11;
              v94 = v88;
              do
              {
                while ( 1 )
                {
                  v90 -= 64;
                  v95 = *(void **)(v90 + 24);
                  if ( v95 == (void *)(v90 + 40) )
                    break;
                  v140 = v59;
                  operator delete(v95);
                  v59 = v140;
                  if ( v94 == v90 )
                    goto LABEL_101;
                }
              }
              while ( v94 != v90 );
LABEL_101:
              v11 = v93;
              v35 = v91;
              v14 = v92;
              v8 = v147;
              v9 = v152;
              v12 = v155;
            }
            *((_DWORD *)v59 + 134) = 0;
          }
          else
          {
            v141 = v35;
            v59 = (unsigned __int8 *)operator new(0x3A0u);
            *v59 = 0;
            *((_QWORD *)v59 + 12) = v59 + 112;
            *((_QWORD *)v59 + 16) = v59 + 144;
            *((_QWORD *)v59 + 20) = v59 + 176;
            *((_QWORD *)v59 + 24) = v59 + 208;
            *((_QWORD *)v59 + 28) = v59 + 240;
            *((_QWORD *)v59 + 32) = v59 + 272;
            *((_QWORD *)v59 + 36) = v59 + 304;
            *((_QWORD *)v59 + 40) = v59 + 336;
            *((_QWORD *)v59 + 44) = v59 + 368;
            *((_QWORD *)v59 + 48) = v59 + 400;
            *((_QWORD *)v59 + 52) = v59 + 432;
            *((_QWORD *)v59 + 13) = 0;
            v59[112] = 0;
            *((_QWORD *)v59 + 17) = 0;
            v59[144] = 0;
            *((_QWORD *)v59 + 21) = 0;
            v59[176] = 0;
            *((_QWORD *)v59 + 25) = 0;
            v59[208] = 0;
            *((_QWORD *)v59 + 29) = 0;
            v59[240] = 0;
            *((_QWORD *)v59 + 33) = 0;
            v59[272] = 0;
            *((_QWORD *)v59 + 37) = 0;
            v59[304] = 0;
            *((_QWORD *)v59 + 41) = 0;
            v59[336] = 0;
            *((_QWORD *)v59 + 45) = 0;
            v59[368] = 0;
            *((_QWORD *)v59 + 49) = 0;
            v59[400] = 0;
            *((_QWORD *)v59 + 53) = 0x800000000LL;
            v35 = v141;
            *((_QWORD *)v59 + 66) = v59 + 544;
            *((_QWORD *)v59 + 67) = 0x600000000LL;
          }
          v168 = v59;
        }
        v59[*v59 + 1] = 2;
        v57 = v168;
      }
      else
      {
        if ( !v172 )
          goto LABEL_32;
        v136 = v35;
        v48 = sub_168B9E0(v166);
        v51 = v136;
        v52 = v48;
        v53 = (__int64)v167;
        if ( v167 )
        {
          v145 = v52;
          v53 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))(*v167 + 32LL))(
                  v167,
                  v31,
                  v52,
                  *v167,
                  v50,
                  v136);
          v52 = v145;
          v51 = v136;
        }
        v137 = v51;
        v157 = v53;
        v54 = sub_1587BC0(v52, &v157, v52, v49, v50, v51);
        v35 = v137;
        v55 = *v54 + 32LL * v171;
        v56 = *(unsigned __int8 **)(v55 + 8);
        if ( !v56 )
        {
          v98 = *(_QWORD *)(v55 + 16);
          v99 = *(_DWORD *)(v98 + 14976);
          if ( v99 )
          {
            v114 = (unsigned int)(v99 - 1);
            *(_DWORD *)(v98 + 14976) = v114;
            v56 = *(unsigned __int8 **)(v98 + 8 * v114 + 14848);
            v115 = *((unsigned int *)v56 + 134);
            *v56 = 0;
            v116 = *((_QWORD *)v56 + 66);
            *((_DWORD *)v56 + 106) = 0;
            v117 = v116 + (v115 << 6);
            if ( v116 != v117 )
            {
              v154 = v8;
              v118 = v117;
              v156 = v9;
              v119 = v137;
              do
              {
                while ( 1 )
                {
                  v118 -= 64;
                  v120 = *(void **)(v118 + 24);
                  if ( v120 == (void *)(v118 + 40) )
                    break;
                  v150 = v55;
                  v144 = v56;
                  operator delete(v120);
                  v56 = v144;
                  v55 = v150;
                  if ( v116 == v118 )
                    goto LABEL_133;
                }
              }
              while ( v116 != v118 );
LABEL_133:
              v35 = v119;
              v8 = v154;
              v9 = v156;
            }
            *((_DWORD *)v56 + 134) = 0;
          }
          else
          {
            v148 = v55;
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
            v35 = v137;
            *((_QWORD *)v56 + 66) = v56 + 544;
            v55 = v148;
            *((_QWORD *)v56 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v55 + 8) = v56;
        }
        v56[*v56 + 1] = 2;
        v57 = *(unsigned __int8 **)(v55 + 8);
      }
      v58 = *v57;
      *v57 = v58 + 1;
      *(_QWORD *)&v57[8 * v58 + 16] = v131;
LABEL_32:
      v129 = v35;
      sub_15F7200(v166);
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v129 + 16LL))(v129);
      a2 = a1 + 8;
      sub_168B9F0((__int64)v166, (__int64 *)(a1 + 8), v36, 0x16CFu, 0);
      sub_15F7200(v166);
      if ( v9 == v8 )
      {
LABEL_33:
        if ( v11 == v12 )
        {
          result = 0;
          goto LABEL_35;
        }
LABEL_10:
        ++v12;
        goto LABEL_11;
      }
LABEL_9:
      ++v9;
      if ( v11 != v12 )
        goto LABEL_10;
LABEL_11:
      result = v9 != v8 || v11 != v12;
      if ( !result )
        goto LABEL_35;
      if ( v9 != v8 )
        goto LABEL_13;
    }
  }
LABEL_86:
  v70 = sub_EEB7E0(a3, a2, 0.0);
  sub_168B9F0((__int64)v166, (__int64 *)(a1 + 8), v70, 0x19AAu, 0);
  if ( v170 )
  {
    sub_AE9DF0(&v168, a4, 0x10u);
    v71 = v170;
  }
  else
  {
    v71 = v172;
    if ( v172 )
    {
      v102 = sub_168B9E0(v166);
      v105 = (__int64)v167;
      if ( v167 )
        v105 = (*(__int64 (__fastcall **)(_QWORD *))(*v167 + 32LL))(v167);
      v157 = v105;
      v106 = sub_1587BC0(v102, &v157, v100, v101, v103, v104);
      sub_AE9DF0((unsigned __int8 **)(*v106 + 32LL * v171 + 8), a4, 0x10u);
      v71 = v170;
    }
  }
  v124 = v71;
  sub_15F7200(v166);
  result = v124;
LABEL_35:
  if ( v164[0] )
  {
    v122 = result;
    operator delete(v164[0]);
    result = v122;
  }
  if ( v160[0] )
  {
    v123 = result;
    operator delete(v160[0]);
    return v123;
  }
  return result;
}
