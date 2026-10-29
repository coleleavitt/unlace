__int64 __fastcall sub_1ADAA70(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 *v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  unsigned int v19; // r12d
  unsigned __int64 v20; // r13
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int8 *v24; // rbx
  _BYTE *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // rbx
  _BYTE *v28; // rdx
  __int64 v29; // rax
  char v30; // bp
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int8 *v33; // rbp
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int8 *v38; // r15
  unsigned __int8 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r13
  unsigned __int8 *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r15
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  unsigned __int8 *v58; // r15
  _BYTE *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // r15
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // r13
  unsigned __int8 *v83; // rbx
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rdx
  int v87; // eax
  unsigned __int8 *v88; // rax
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // r13
  __int64 v104; // r15
  __int64 v105; // r13
  void *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r13
  __int64 v109; // r15
  __int64 v110; // r13
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r13
  __int64 v114; // r15
  __int64 v115; // r13
  void *v116; // rdi
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
  __int64 v129; // rsi
  __int64 v130; // rax
  void *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r15
  __int64 v134; // rdx
  __int64 v135; // r15
  void *v136; // rdi
  __int64 v137; // rax
  __int64 v138; // rbp
  __int64 v139; // rdx
  __int64 v140; // rbp
  void *v141; // rdi
  __int64 v142; // [rsp+8h] [rbp-100h]
  __int64 v143; // [rsp+8h] [rbp-100h]
  __int64 v144; // [rsp+8h] [rbp-100h]
  __int64 v145; // [rsp+8h] [rbp-100h]
  __int64 v146; // [rsp+8h] [rbp-100h]
  __int64 v147; // [rsp+8h] [rbp-100h]
  __int64 v148; // [rsp+10h] [rbp-F8h]
  __int64 v149; // [rsp+10h] [rbp-F8h]
  __int64 v150; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v151; // [rsp+30h] [rbp-D8h] BYREF
  int v152; // [rsp+38h] [rbp-D0h]
  _QWORD v153[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v155; // [rsp+60h] [rbp-A8h]
  __int64 v156; // [rsp+68h] [rbp-A0h]
  char v157; // [rsp+B8h] [rbp-50h]
  unsigned int v158; // [rsp+C0h] [rbp-48h]
  char v159; // [rsp+C4h] [rbp-44h]

  v5 = a2;
  v7 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v8 = *(_QWORD *)(v7 + a2 + 8LL * a3 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + v7 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 42
    && ((v23 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) != 42)
     || (v10 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v23, a4)) == 0)
    || (v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
        a2 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
        (a2 | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v11) & 7)) )
  {
    if ( (*(_BYTE *)(v5 + 3) & 1) != 0 )
    {
      v12 = *(_DWORD *)(v5 + 24);
    }
    else if ( *(char *)(v5 + 2) >= 0
           || (v12 = sub_EEB7E0(*(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32), a2, a5)) == 0 )
    {
      v12 = sub_EEB7E0(*(_QWORD *)(v5 + 32), a2, a5);
      if ( !v12 )
      {
        if ( *(_DWORD *)(v5 + 16) )
        {
          v22 = *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32);
          if ( v22 )
            v12 = sub_EEB7E0(v22, a2, a5);
        }
      }
    }
    sub_168B9F0((__int64)v153, (__int64 *)(a1 + 8), v12, 0x123Fu, 0);
    v13 = sub_BFBC70(*(_QWORD *)(v5 + 32));
    v14 = v13;
    if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 34 >= 6 )
      v14 = 0;
    if ( v157 )
    {
      v38 = v155;
      if ( !v155 )
      {
        v84 = v156;
        v85 = *(_DWORD *)(v156 + 14976);
        if ( v85 )
        {
          v117 = (unsigned int)(v85 - 1);
          *(_DWORD *)(v156 + 14976) = v117;
          v38 = *(unsigned __int8 **)(v84 + 8 * v117 + 14848);
          v118 = *((unsigned int *)v38 + 134);
          *v38 = 0;
          v119 = *((_QWORD *)v38 + 66);
          *((_DWORD *)v38 + 106) = 0;
          v120 = v119 + (v118 << 6);
          while ( v119 != v120 )
          {
            while ( 1 )
            {
              v120 -= 64;
              v121 = *(void **)(v120 + 24);
              if ( v121 == (void *)(v120 + 40) )
                break;
              v148 = v120;
              v143 = v119;
              operator delete(v121);
              v119 = v143;
              v120 = v148;
              if ( v143 == v148 )
                goto LABEL_105;
            }
          }
LABEL_105:
          *((_DWORD *)v38 + 134) = 0;
        }
        else
        {
          v38 = (unsigned __int8 *)operator new(0x3A0u);
          *v38 = 0;
          *((_QWORD *)v38 + 12) = v38 + 112;
          *((_QWORD *)v38 + 16) = v38 + 144;
          *((_QWORD *)v38 + 20) = v38 + 176;
          *((_QWORD *)v38 + 24) = v38 + 208;
          *((_QWORD *)v38 + 28) = v38 + 240;
          *((_QWORD *)v38 + 32) = v38 + 272;
          *((_QWORD *)v38 + 36) = v38 + 304;
          *((_QWORD *)v38 + 40) = v38 + 336;
          *((_QWORD *)v38 + 44) = v38 + 368;
          *((_QWORD *)v38 + 48) = v38 + 400;
          *((_QWORD *)v38 + 52) = v38 + 432;
          *((_QWORD *)v38 + 13) = 0;
          v38[112] = 0;
          *((_QWORD *)v38 + 17) = 0;
          v38[144] = 0;
          *((_QWORD *)v38 + 21) = 0;
          v38[176] = 0;
          *((_QWORD *)v38 + 25) = 0;
          v38[208] = 0;
          *((_QWORD *)v38 + 29) = 0;
          v38[240] = 0;
          *((_QWORD *)v38 + 33) = 0;
          v38[272] = 0;
          *((_QWORD *)v38 + 37) = 0;
          v38[304] = 0;
          *((_QWORD *)v38 + 41) = 0;
          v38[336] = 0;
          *((_QWORD *)v38 + 45) = 0;
          v38[368] = 0;
          *((_QWORD *)v38 + 49) = 0;
          v38[400] = 0;
          *((_QWORD *)v38 + 53) = 0x800000000LL;
          *((_QWORD *)v38 + 66) = v38 + 544;
          *((_QWORD *)v38 + 67) = 0x600000000LL;
        }
        v155 = v38;
      }
      v38[*v38 + 1] = 10;
      v39 = v155;
      v40 = *v155;
      *v155 = v40 + 1;
      *(_QWORD *)&v39[8 * v40 + 16] = v14;
    }
    else if ( v159 )
    {
      v54 = sub_168B9E0(v153);
      v55 = v154;
      if ( v154 )
        v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
      v151 = v55;
      v56 = sub_1587BC0(v54, (__int64 *)&v151, v50, v51, v52, v53);
      v57 = *v56 + 32LL * v158;
      v58 = *(unsigned __int8 **)(v57 + 8);
      if ( !v58 )
      {
        v100 = *(_QWORD *)(v57 + 16);
        v101 = *(_DWORD *)(v100 + 14976);
        if ( v101 )
        {
          v127 = (unsigned int)(v101 - 1);
          *(_DWORD *)(v100 + 14976) = v127;
          v58 = *(unsigned __int8 **)(v100 + 8 * v127 + 14848);
          v128 = *((unsigned int *)v58 + 134);
          *v58 = 0;
          v129 = *((_QWORD *)v58 + 66);
          *((_DWORD *)v58 + 106) = 0;
          v130 = v129 + (v128 << 6);
          while ( v129 != v130 )
          {
            while ( 1 )
            {
              v130 -= 64;
              v131 = *(void **)(v130 + 24);
              if ( v131 == (void *)(v130 + 40) )
                break;
              v149 = v130;
              v145 = v57;
              operator delete(v131);
              v130 = v149;
              v57 = v145;
              if ( v129 == v149 )
                goto LABEL_115;
            }
          }
LABEL_115:
          *((_DWORD *)v58 + 134) = 0;
        }
        else
        {
          v142 = v57;
          v58 = (unsigned __int8 *)operator new(0x3A0u);
          *v58 = 0;
          *((_QWORD *)v58 + 12) = v58 + 112;
          *((_QWORD *)v58 + 16) = v58 + 144;
          *((_QWORD *)v58 + 20) = v58 + 176;
          *((_QWORD *)v58 + 24) = v58 + 208;
          *((_QWORD *)v58 + 28) = v58 + 240;
          *((_QWORD *)v58 + 32) = v58 + 272;
          *((_QWORD *)v58 + 36) = v58 + 304;
          *((_QWORD *)v58 + 40) = v58 + 336;
          *((_QWORD *)v58 + 44) = v58 + 368;
          *((_QWORD *)v58 + 48) = v58 + 400;
          *((_QWORD *)v58 + 52) = v58 + 432;
          *((_QWORD *)v58 + 13) = 0;
          v58[112] = 0;
          *((_QWORD *)v58 + 17) = 0;
          v58[144] = 0;
          *((_QWORD *)v58 + 21) = 0;
          v58[176] = 0;
          *((_QWORD *)v58 + 25) = 0;
          v58[208] = 0;
          *((_QWORD *)v58 + 29) = 0;
          v58[240] = 0;
          *((_QWORD *)v58 + 33) = 0;
          v58[272] = 0;
          *((_QWORD *)v58 + 37) = 0;
          v58[304] = 0;
          *((_QWORD *)v58 + 41) = 0;
          v58[336] = 0;
          *((_QWORD *)v58 + 45) = 0;
          v58[368] = 0;
          *((_QWORD *)v58 + 49) = 0;
          v58[400] = 0;
          *((_QWORD *)v58 + 53) = 0x800000000LL;
          v57 = v142;
          *((_QWORD *)v58 + 66) = v58 + 544;
          *((_QWORD *)v58 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v57 + 8) = v58;
      }
      v58[*v58 + 1] = 10;
      v59 = *(_BYTE **)(v57 + 8);
      v60 = (unsigned __int8)*v59;
      *v59 = v60 + 1;
      *(_QWORD *)&v59[8 * v60 + 16] = v14;
    }
    v15 = (unsigned __int64 *)v9;
    v16 = sub_A70010(*(_QWORD *)(a1 + 248), v9);
    if ( v157 )
    {
      v24 = v155;
      if ( !v155 )
      {
        v91 = v156;
        v92 = *(_DWORD *)(v156 + 14976);
        if ( v92 )
        {
          v102 = (unsigned int)(v92 - 1);
          *(_DWORD *)(v156 + 14976) = v102;
          v24 = *(unsigned __int8 **)(v91 + 8 * v102 + 14848);
          v103 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v104 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v105 = v104 + (v103 << 6);
          while ( v104 != v105 )
          {
            while ( 1 )
            {
              v105 -= 64;
              v106 = *(void **)(v105 + 24);
              if ( v106 == (void *)(v105 + 40) )
                break;
              operator delete(v106);
              if ( v104 == v105 )
                goto LABEL_88;
            }
          }
LABEL_88:
          *((_DWORD *)v24 + 134) = 0;
        }
        else
        {
          v24 = (unsigned __int8 *)operator new(0x3A0u);
          *v24 = 0;
          *((_QWORD *)v24 + 12) = v24 + 112;
          *((_QWORD *)v24 + 16) = v24 + 144;
          *((_QWORD *)v24 + 20) = v24 + 176;
          *((_QWORD *)v24 + 24) = v24 + 208;
          *((_QWORD *)v24 + 28) = v24 + 240;
          *((_QWORD *)v24 + 32) = v24 + 272;
          *((_QWORD *)v24 + 36) = v24 + 304;
          *((_QWORD *)v24 + 40) = v24 + 336;
          *((_QWORD *)v24 + 44) = v24 + 368;
          *((_QWORD *)v24 + 48) = v24 + 400;
          *((_QWORD *)v24 + 52) = v24 + 432;
          *((_QWORD *)v24 + 13) = 0;
          v24[112] = 0;
          *((_QWORD *)v24 + 17) = 0;
          v24[144] = 0;
          *((_QWORD *)v24 + 21) = 0;
          v24[176] = 0;
          *((_QWORD *)v24 + 25) = 0;
          v24[208] = 0;
          *((_QWORD *)v24 + 29) = 0;
          v24[240] = 0;
          *((_QWORD *)v24 + 33) = 0;
          v24[272] = 0;
          *((_QWORD *)v24 + 37) = 0;
          v24[304] = 0;
          *((_QWORD *)v24 + 41) = 0;
          v24[336] = 0;
          *((_QWORD *)v24 + 45) = 0;
          v24[368] = 0;
          *((_QWORD *)v24 + 49) = 0;
          v24[400] = 0;
          *((_QWORD *)v24 + 53) = 0x800000000LL;
          *((_QWORD *)v24 + 66) = v24 + 544;
          *((_QWORD *)v24 + 67) = 0x600000000LL;
        }
        v155 = v24;
      }
      v24[*v24 + 1] = 8;
      v25 = v155;
    }
    else
    {
      if ( !v159 )
      {
        v17 = *(_QWORD *)(v8 + 8);
        goto LABEL_13;
      }
      v43 = sub_168B9E0(v153);
      v46 = v154;
      if ( v154 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
      v15 = &v151;
      v151 = v46;
      v47 = sub_1587BC0(v43, (__int64 *)&v151, v41, v42, v44, v45);
      v48 = *v47 + 32LL * v158;
      v49 = *(unsigned __int8 **)(v48 + 8);
      if ( !v49 )
      {
        v93 = *(_QWORD *)(v48 + 16);
        v94 = *(_DWORD *)(v93 + 14976);
        if ( v94 )
        {
          v122 = (unsigned int)(v94 - 1);
          *(_DWORD *)(v93 + 14976) = v122;
          v49 = *(unsigned __int8 **)(v93 + 8 * v122 + 14848);
          v123 = *((unsigned int *)v49 + 134);
          *v49 = 0;
          v124 = *((_QWORD *)v49 + 66);
          *((_DWORD *)v49 + 106) = 0;
          v125 = v124 + (v123 << 6);
          while ( v124 != v125 )
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              v144 = v124;
              operator delete(v126);
              v124 = v144;
              if ( v144 == v125 )
                goto LABEL_110;
            }
          }
LABEL_110:
          *((_DWORD *)v49 + 134) = 0;
        }
        else
        {
          v49 = (unsigned __int8 *)operator new(0x3A0u);
          *v49 = 0;
          *((_QWORD *)v49 + 12) = v49 + 112;
          *((_QWORD *)v49 + 16) = v49 + 144;
          *((_QWORD *)v49 + 20) = v49 + 176;
          *((_QWORD *)v49 + 24) = v49 + 208;
          *((_QWORD *)v49 + 28) = v49 + 240;
          *((_QWORD *)v49 + 32) = v49 + 272;
          *((_QWORD *)v49 + 36) = v49 + 304;
          *((_QWORD *)v49 + 40) = v49 + 336;
          *((_QWORD *)v49 + 44) = v49 + 368;
          *((_QWORD *)v49 + 48) = v49 + 400;
          *((_QWORD *)v49 + 52) = v49 + 432;
          *((_QWORD *)v49 + 13) = 0;
          v49[112] = 0;
          *((_QWORD *)v49 + 17) = 0;
          v49[144] = 0;
          *((_QWORD *)v49 + 21) = 0;
          v49[176] = 0;
          *((_QWORD *)v49 + 25) = 0;
          v49[208] = 0;
          *((_QWORD *)v49 + 29) = 0;
          v49[240] = 0;
          *((_QWORD *)v49 + 33) = 0;
          v49[272] = 0;
          *((_QWORD *)v49 + 37) = 0;
          v49[304] = 0;
          *((_QWORD *)v49 + 41) = 0;
          v49[336] = 0;
          *((_QWORD *)v49 + 45) = 0;
          v49[368] = 0;
          *((_QWORD *)v49 + 49) = 0;
          v49[400] = 0;
          *((_QWORD *)v49 + 53) = 0x800000000LL;
          *((_QWORD *)v49 + 66) = v49 + 544;
          *((_QWORD *)v49 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v48 + 8) = v49;
      }
      v49[*v49 + 1] = 8;
      v25 = *(_BYTE **)(v48 + 8);
    }
    v26 = (unsigned __int8)*v25;
    *v25 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = v16;
    v17 = *(_QWORD *)(v8 + 8);
    if ( v157 )
    {
      v27 = v155;
      if ( !v155 )
      {
        v89 = v156;
        v90 = *(_DWORD *)(v156 + 14976);
        if ( v90 )
        {
          v112 = (unsigned int)(v90 - 1);
          *(_DWORD *)(v156 + 14976) = v112;
          v27 = *(unsigned __int8 **)(v89 + 8 * v112 + 14848);
          v113 = *((unsigned int *)v27 + 134);
          *v27 = 0;
          v114 = *((_QWORD *)v27 + 66);
          *((_DWORD *)v27 + 106) = 0;
          v115 = v114 + (v113 << 6);
          while ( v114 != v115 )
          {
            while ( 1 )
            {
              v115 -= 64;
              v116 = *(void **)(v115 + 24);
              if ( v116 == (void *)(v115 + 40) )
                break;
              operator delete(v116);
              if ( v114 == v115 )
                goto LABEL_100;
            }
          }
LABEL_100:
          *((_DWORD *)v27 + 134) = 0;
        }
        else
        {
          v27 = (unsigned __int8 *)operator new(0x3A0u);
          *v27 = 0;
          *((_QWORD *)v27 + 12) = v27 + 112;
          *((_QWORD *)v27 + 16) = v27 + 144;
          *((_QWORD *)v27 + 20) = v27 + 176;
          *((_QWORD *)v27 + 24) = v27 + 208;
          *((_QWORD *)v27 + 28) = v27 + 240;
          *((_QWORD *)v27 + 32) = v27 + 272;
          *((_QWORD *)v27 + 36) = v27 + 304;
          *((_QWORD *)v27 + 40) = v27 + 336;
          *((_QWORD *)v27 + 44) = v27 + 368;
          *((_QWORD *)v27 + 48) = v27 + 400;
          *((_QWORD *)v27 + 52) = v27 + 432;
          *((_QWORD *)v27 + 13) = 0;
          v27[112] = 0;
          *((_QWORD *)v27 + 17) = 0;
          v27[144] = 0;
          *((_QWORD *)v27 + 21) = 0;
          v27[176] = 0;
          *((_QWORD *)v27 + 25) = 0;
          v27[208] = 0;
          *((_QWORD *)v27 + 29) = 0;
          v27[240] = 0;
          *((_QWORD *)v27 + 33) = 0;
          v27[272] = 0;
          *((_QWORD *)v27 + 37) = 0;
          v27[304] = 0;
          *((_QWORD *)v27 + 41) = 0;
          v27[336] = 0;
          *((_QWORD *)v27 + 45) = 0;
          v27[368] = 0;
          *((_QWORD *)v27 + 49) = 0;
          v27[400] = 0;
          *((_QWORD *)v27 + 53) = 0x800000000LL;
          *((_QWORD *)v27 + 66) = v27 + 544;
          *((_QWORD *)v27 + 67) = 0x600000000LL;
        }
        v155 = v27;
      }
      v27[*v27 + 1] = 8;
      v28 = v155;
      goto LABEL_33;
    }
LABEL_13:
    if ( !v159 )
    {
      v18 = sub_EEC8C0(v8, (__int64)v15, a5);
      v19 = v18;
      v20 = HIDWORD(v18);
      goto LABEL_15;
    }
    v77 = sub_168B9E0(v153);
    v80 = v154;
    if ( v154 )
      v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
    v15 = &v151;
    v151 = v80;
    v81 = sub_1587BC0(v77, (__int64 *)&v151, v75, v76, v78, v79);
    v82 = *v81 + 32LL * v158;
    v83 = *(unsigned __int8 **)(v82 + 8);
    if ( !v83 )
    {
      v95 = *(_QWORD *)(v82 + 16);
      v96 = *(_DWORD *)(v95 + 14976);
      if ( v96 )
      {
        v132 = (unsigned int)(v96 - 1);
        *(_DWORD *)(v95 + 14976) = v132;
        v83 = *(unsigned __int8 **)(v95 + 8 * v132 + 14848);
        v133 = *((unsigned int *)v83 + 134);
        *v83 = 0;
        v134 = *((_QWORD *)v83 + 66);
        *((_DWORD *)v83 + 106) = 0;
        v135 = v134 + (v133 << 6);
        while ( v134 != v135 )
        {
          while ( 1 )
          {
            v135 -= 64;
            v136 = *(void **)(v135 + 24);
            if ( v136 == (void *)(v135 + 40) )
              break;
            v146 = v134;
            operator delete(v136);
            v134 = v146;
            if ( v146 == v135 )
              goto LABEL_120;
          }
        }
LABEL_120:
        *((_DWORD *)v83 + 134) = 0;
      }
      else
      {
        v83 = (unsigned __int8 *)operator new(0x3A0u);
        *v83 = 0;
        *((_QWORD *)v83 + 12) = v83 + 112;
        *((_QWORD *)v83 + 16) = v83 + 144;
        *((_QWORD *)v83 + 20) = v83 + 176;
        *((_QWORD *)v83 + 24) = v83 + 208;
        *((_QWORD *)v83 + 28) = v83 + 240;
        *((_QWORD *)v83 + 32) = v83 + 272;
        *((_QWORD *)v83 + 36) = v83 + 304;
        *((_QWORD *)v83 + 40) = v83 + 336;
        *((_QWORD *)v83 + 44) = v83 + 368;
        *((_QWORD *)v83 + 48) = v83 + 400;
        *((_QWORD *)v83 + 52) = v83 + 432;
        *((_QWORD *)v83 + 13) = 0;
        v83[112] = 0;
        *((_QWORD *)v83 + 17) = 0;
        v83[144] = 0;
        *((_QWORD *)v83 + 21) = 0;
        v83[176] = 0;
        *((_QWORD *)v83 + 25) = 0;
        v83[208] = 0;
        *((_QWORD *)v83 + 29) = 0;
        v83[240] = 0;
        *((_QWORD *)v83 + 33) = 0;
        v83[272] = 0;
        *((_QWORD *)v83 + 37) = 0;
        v83[304] = 0;
        *((_QWORD *)v83 + 41) = 0;
        v83[336] = 0;
        *((_QWORD *)v83 + 45) = 0;
        v83[368] = 0;
        *((_QWORD *)v83 + 49) = 0;
        v83[400] = 0;
        *((_QWORD *)v83 + 53) = 0x800000000LL;
        *((_QWORD *)v83 + 66) = v83 + 544;
        *((_QWORD *)v83 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v82 + 8) = v83;
    }
    v83[*v83 + 1] = 8;
    v28 = *(_BYTE **)(v82 + 8);
LABEL_33:
    v29 = (unsigned __int8)*v28;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v17;
    v30 = v157;
    v31 = sub_EEC8C0(v8, (__int64)v15, a5);
    v19 = v31;
    v32 = HIDWORD(v31);
    LODWORD(v20) = HIDWORD(v31);
    if ( v30 )
    {
      v33 = v155;
      if ( v155 )
      {
        v34 = *((unsigned int *)v155 + 106);
        v35 = *((unsigned int *)v155 + 107);
        v36 = v34 + 1;
      }
      else
      {
        v86 = v156;
        v87 = *(_DWORD *)(v156 + 14976);
        if ( v87 )
        {
          v107 = (unsigned int)(v87 - 1);
          *(_DWORD *)(v156 + 14976) = v107;
          v33 = *(unsigned __int8 **)(v86 + 8 * v107 + 14848);
          v108 = *((unsigned int *)v33 + 134);
          *v33 = 0;
          v109 = *((_QWORD *)v33 + 66);
          *((_DWORD *)v33 + 106) = 0;
          v110 = v109 + (v108 << 6);
          if ( v109 == v110 )
          {
            v36 = 1;
            v34 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v110 -= 64;
                v111 = *(void **)(v110 + 24);
                if ( v111 == (void *)(v110 + 40) )
                  break;
                operator delete(v111);
                if ( v109 == v110 )
                  goto LABEL_92;
              }
            }
            while ( v109 != v110 );
LABEL_92:
            v34 = *((unsigned int *)v33 + 106);
            v36 = v34 + 1;
          }
          *((_DWORD *)v33 + 134) = 0;
          v35 = *((unsigned int *)v33 + 107);
        }
        else
        {
          v88 = (unsigned __int8 *)operator new(0x3A0u);
          v35 = 8;
          v36 = 1;
          v33 = v88;
          *v88 = 0;
          *((_QWORD *)v88 + 12) = v88 + 112;
          *((_QWORD *)v88 + 16) = v88 + 144;
          *((_QWORD *)v88 + 20) = v88 + 176;
          *((_QWORD *)v88 + 24) = v88 + 208;
          *((_QWORD *)v88 + 28) = v88 + 240;
          *((_QWORD *)v88 + 32) = v88 + 272;
          *((_QWORD *)v88 + 36) = v88 + 304;
          *((_QWORD *)v88 + 40) = v88 + 336;
          *((_QWORD *)v88 + 44) = v88 + 368;
          *((_QWORD *)v88 + 48) = v88 + 400;
          *((_QWORD *)v88 + 52) = v88 + 432;
          *((_QWORD *)v88 + 13) = 0;
          v88[112] = 0;
          *((_QWORD *)v88 + 17) = 0;
          v88[144] = 0;
          *((_QWORD *)v88 + 21) = 0;
          v88[176] = 0;
          *((_QWORD *)v88 + 25) = 0;
          v88[208] = 0;
          *((_QWORD *)v88 + 29) = 0;
          v88[240] = 0;
          *((_QWORD *)v88 + 33) = 0;
          v88[272] = 0;
          *((_QWORD *)v88 + 37) = 0;
          v88[304] = 0;
          *((_QWORD *)v88 + 41) = 0;
          v88[336] = 0;
          *((_QWORD *)v88 + 45) = 0;
          v88[368] = 0;
          *((_QWORD *)v88 + 49) = 0;
          v88[400] = 0;
          *((_QWORD *)v88 + 53) = 0x800000000LL;
          *((_QWORD *)v88 + 66) = v88 + 544;
          *((_QWORD *)v88 + 67) = 0x600000000LL;
          v34 = 0;
        }
        v155 = v33;
      }
      v151 = __PAIR64__(v32, v19);
      LOBYTE(v152) = 1;
      if ( v36 > v35 )
      {
        sub_2237220(v33 + 416, v33 + 432, v36, 12);
        v34 = *((unsigned int *)v33 + 106);
      }
      v37 = *((_QWORD *)v33 + 52) + 12 * v34;
      *(_QWORD *)v37 = v151;
      *(_DWORD *)(v37 + 8) = v152;
      ++*((_DWORD *)v33 + 106);
      goto LABEL_16;
    }
LABEL_15:
    if ( v159 )
    {
      v63 = sub_168B9E0(v153);
      v66 = v154;
      if ( v154 )
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
      v150 = v66;
      v67 = sub_1587BC0(v63, &v150, v61, v62, v64, v65);
      v68 = *v67 + 32LL * v158;
      v69 = *(_QWORD *)(v68 + 8);
      v70 = v68;
      if ( v69 )
      {
        v71 = *(unsigned int *)(v69 + 424);
        v72 = *(unsigned int *)(v69 + 428);
        v73 = v71 + 1;
      }
      else
      {
        v97 = *(_QWORD *)(v68 + 16);
        v98 = *(_DWORD *)(v97 + 14976);
        if ( v98 )
        {
          v137 = (unsigned int)(v98 - 1);
          *(_DWORD *)(v97 + 14976) = v137;
          v69 = *(_QWORD *)(v97 + 8 * v137 + 14848);
          v138 = *(unsigned int *)(v69 + 536);
          *(_BYTE *)v69 = 0;
          v139 = *(_QWORD *)(v69 + 528);
          *(_DWORD *)(v69 + 424) = 0;
          v140 = v139 + (v138 << 6);
          if ( v139 == v140 )
          {
            v73 = 1;
            v71 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v140 -= 64;
                v141 = *(void **)(v140 + 24);
                if ( v141 == (void *)(v140 + 40) )
                  break;
                v147 = v139;
                operator delete(v141);
                v139 = v147;
                if ( v147 == v140 )
                  goto LABEL_124;
              }
            }
            while ( v139 != v140 );
LABEL_124:
            v71 = *(unsigned int *)(v69 + 424);
            v73 = v71 + 1;
          }
          *(_DWORD *)(v69 + 536) = 0;
          v72 = *(unsigned int *)(v69 + 428);
        }
        else
        {
          v99 = operator new(0x3A0u);
          v72 = 8;
          v73 = 1;
          v69 = v99;
          *(_BYTE *)v99 = 0;
          *(_QWORD *)(v99 + 96) = v99 + 112;
          *(_QWORD *)(v99 + 128) = v99 + 144;
          *(_QWORD *)(v99 + 160) = v99 + 176;
          *(_QWORD *)(v99 + 192) = v99 + 208;
          *(_QWORD *)(v99 + 224) = v99 + 240;
          *(_QWORD *)(v99 + 256) = v99 + 272;
          *(_QWORD *)(v99 + 288) = v99 + 304;
          *(_QWORD *)(v99 + 320) = v99 + 336;
          *(_QWORD *)(v99 + 352) = v99 + 368;
          *(_QWORD *)(v99 + 384) = v99 + 400;
          *(_QWORD *)(v99 + 416) = v99 + 432;
          *(_QWORD *)(v99 + 104) = 0;
          *(_BYTE *)(v99 + 112) = 0;
          *(_QWORD *)(v99 + 136) = 0;
          *(_BYTE *)(v99 + 144) = 0;
          *(_QWORD *)(v99 + 168) = 0;
          *(_BYTE *)(v99 + 176) = 0;
          *(_QWORD *)(v99 + 200) = 0;
          *(_BYTE *)(v99 + 208) = 0;
          *(_QWORD *)(v99 + 232) = 0;
          *(_BYTE *)(v99 + 240) = 0;
          *(_QWORD *)(v99 + 264) = 0;
          *(_BYTE *)(v99 + 272) = 0;
          *(_QWORD *)(v99 + 296) = 0;
          *(_BYTE *)(v99 + 304) = 0;
          *(_QWORD *)(v99 + 328) = 0;
          *(_BYTE *)(v99 + 336) = 0;
          *(_QWORD *)(v99 + 360) = 0;
          *(_BYTE *)(v99 + 368) = 0;
          *(_QWORD *)(v99 + 392) = 0;
          *(_BYTE *)(v99 + 400) = 0;
          *(_QWORD *)(v99 + 424) = 0x800000000LL;
          *(_QWORD *)(v99 + 528) = v99 + 544;
          *(_QWORD *)(v99 + 536) = 0x600000000LL;
          v71 = 0;
        }
        *(_QWORD *)(v70 + 8) = v69;
      }
      v151 = __PAIR64__(v20, v19);
      LOBYTE(v152) = 1;
      if ( v73 > v72 )
      {
        sub_2237220(v69 + 416, v69 + 432, v73, 12);
        v71 = *(unsigned int *)(v69 + 424);
      }
      v74 = *(_QWORD *)(v69 + 416) + 12 * v71;
      *(_QWORD *)v74 = v151;
      *(_DWORD *)(v74 + 8) = v152;
      ++*(_DWORD *)(v69 + 424);
    }
LABEL_16:
    sub_15F7200(v153);
    return 1;
  }
  return 0;
}
