void __fastcall sub_1E9E9D0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  _QWORD *v6; // r13
  __int64 v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r14
  unsigned __int8 *v17; // rbp
  _BYTE *v18; // rdx
  __int64 v19; // rax
  _BOOL8 v20; // r13
  unsigned __int8 *v21; // rbp
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned __int8 *v34; // rbp
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r12
  unsigned __int8 *v45; // rbp
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r12
  __int64 v53; // rax
  _BOOL8 v54; // rbp
  _QWORD *v55; // rax
  __int64 v56; // r14
  unsigned __int8 *v57; // r12
  _BYTE *v58; // rdx
  __int64 v59; // rax
  unsigned __int8 v60; // cl
  unsigned int v61; // edx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // r12
  void *v68; // rdi
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // r13
  void *v75; // rdi
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r13
  __int64 v81; // r12
  void *v82; // rdi
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // r14
  __int64 v92; // r13
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // r15
  __int64 v97; // r13
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r13
  __int64 v101; // r15
  __int64 v102; // r13
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r15
  unsigned int v108; // r14d
  __int64 v109; // rax
  __m128i *v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  unsigned __int8 v120; // al
  __int64 *v121; // rax
  __int64 v122; // rdi
  unsigned int v123; // edx
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  unsigned __int8 v133; // al
  __int64 v134; // rdi
  unsigned int v135; // edx
  __int64 v136; // rax
  __int64 v137; // rbp
  __int64 v138; // rax
  __int64 v139; // r12
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // r13
  __int64 v145; // rax
  _QWORD *v146; // rax
  int v147; // [rsp+Ch] [rbp-DCh]
  _BOOL4 v148; // [rsp+10h] [rbp-D8h] BYREF
  int v149; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v150; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v151[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v152; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v153; // [rsp+40h] [rbp-A8h]
  __int64 v154; // [rsp+48h] [rbp-A0h]
  char v155; // [rsp+98h] [rbp-50h]
  unsigned int v156; // [rsp+A0h] [rbp-48h]
  char v157; // [rsp+A4h] [rbp-44h]

  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !sub_B8DC30(a2, 1) && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
    goto LABEL_7;
  v7 = sub_B8DC30(a2, 1);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 16) != 26 )
      goto LABEL_7;
    v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  else
  {
    v8 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v8 != 18 && v8 != 8 )
      goto LABEL_7;
  }
  if ( (unsigned int)v8 - 35 <= 3 && !sub_B979F0((_QWORD *)a2)
    || (*(_DWORD *)(a2 + 40) & 7) == 6
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL) - 1) <= 3 )
  {
LABEL_7:
    sub_168B9F0((__int64)v151, a1, a3[1].m128i_u32[2], 0x19C6u, 0);
    if ( v155 )
    {
      v34 = v153;
      if ( !v153 )
      {
        v69 = v154;
        v70 = *(_DWORD *)(v154 + 14976);
        if ( v70 )
        {
          v71 = (unsigned int)(v70 - 1);
          *(_DWORD *)(v154 + 14976) = v71;
          v34 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
          v72 = *((unsigned int *)v34 + 134);
          *v34 = 0;
          v73 = *((_QWORD *)v34 + 66);
          *((_DWORD *)v34 + 106) = 0;
          v74 = v73 + (v72 << 6);
          while ( v73 != v74 )
          {
            while ( 1 )
            {
              v74 -= 64;
              v75 = *(void **)(v74 + 24);
              if ( v75 == (void *)(v74 + 40) )
                break;
              operator delete(v75);
              if ( v73 == v74 )
                goto LABEL_63;
            }
          }
LABEL_63:
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
        v153 = v34;
      }
      v34[*v34 + 1] = 16;
      v35 = v153;
      v36 = *v153;
      *v153 = v36 + 1;
      *(_QWORD *)&v35[8 * v36 + 16] = a3;
    }
    else
    {
      if ( !v157 )
      {
LABEL_9:
        sub_15F7200(v151);
        return;
      }
      v11 = sub_168B9E0(v151);
      v14 = v152;
      if ( v152 )
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v152 + 32LL))(v152);
      v150 = v14;
      v15 = sub_1587BC0(v11, &v150, v9, v10, v12, v13);
      v16 = *v15 + 32LL * v156;
      v17 = *(unsigned __int8 **)(v16 + 8);
      if ( !v17 )
      {
        v83 = *(_QWORD *)(v16 + 16);
        v84 = *(_DWORD *)(v83 + 14976);
        if ( v84 )
        {
          v94 = (unsigned int)(v84 - 1);
          *(_DWORD *)(v83 + 14976) = v94;
          v17 = *(unsigned __int8 **)(v83 + 8 * v94 + 14848);
          v95 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v96 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v97 = v96 + (v95 << 6);
          while ( v96 != v97 )
          {
            while ( 1 )
            {
              v97 -= 64;
              v98 = *(void **)(v97 + 24);
              if ( v98 == (void *)(v97 + 40) )
                break;
              operator delete(v98);
              if ( v96 == v97 )
                goto LABEL_97;
            }
          }
LABEL_97:
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v17 = (unsigned __int8 *)operator new(0x3A0u);
          *v17 = 0;
          *((_QWORD *)v17 + 12) = v17 + 112;
          *((_QWORD *)v17 + 16) = v17 + 144;
          *((_QWORD *)v17 + 20) = v17 + 176;
          *((_QWORD *)v17 + 24) = v17 + 208;
          *((_QWORD *)v17 + 28) = v17 + 240;
          *((_QWORD *)v17 + 32) = v17 + 272;
          *((_QWORD *)v17 + 36) = v17 + 304;
          *((_QWORD *)v17 + 40) = v17 + 336;
          *((_QWORD *)v17 + 44) = v17 + 368;
          *((_QWORD *)v17 + 48) = v17 + 400;
          *((_QWORD *)v17 + 52) = v17 + 432;
          *((_QWORD *)v17 + 13) = 0;
          v17[112] = 0;
          *((_QWORD *)v17 + 17) = 0;
          v17[144] = 0;
          *((_QWORD *)v17 + 21) = 0;
          v17[176] = 0;
          *((_QWORD *)v17 + 25) = 0;
          v17[208] = 0;
          *((_QWORD *)v17 + 29) = 0;
          v17[240] = 0;
          *((_QWORD *)v17 + 33) = 0;
          v17[272] = 0;
          *((_QWORD *)v17 + 37) = 0;
          v17[304] = 0;
          *((_QWORD *)v17 + 41) = 0;
          v17[336] = 0;
          *((_QWORD *)v17 + 45) = 0;
          v17[368] = 0;
          *((_QWORD *)v17 + 49) = 0;
          v17[400] = 0;
          *((_QWORD *)v17 + 53) = 0x800000000LL;
          *((_QWORD *)v17 + 66) = v17 + 544;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v16 + 8) = v17;
      }
      v17[*v17 + 1] = 16;
      v18 = *(_BYTE **)(v16 + 8);
      v19 = (unsigned __int8)*v18;
      *v18 = v19 + 1;
      *(_QWORD *)&v18[8 * v19 + 16] = a3;
    }
    v20 = (a3[2].m128i_i8[3] & 2) != 0;
    if ( v155 )
    {
      v21 = v153;
      if ( !v153 )
      {
        v62 = v154;
        v63 = *(_DWORD *)(v154 + 14976);
        if ( v63 )
        {
          v64 = (unsigned int)(v63 - 1);
          *(_DWORD *)(v154 + 14976) = v64;
          v21 = *(unsigned __int8 **)(v62 + 8 * v64 + 14848);
          v65 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v66 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v67 = v66 + (v65 << 6);
          while ( v66 != v67 )
          {
            while ( 1 )
            {
              v67 -= 64;
              v68 = *(void **)(v67 + 24);
              if ( v68 == (void *)(v67 + 40) )
                break;
              operator delete(v68);
              if ( v66 == v67 )
                goto LABEL_57;
            }
          }
LABEL_57:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v153 = v21;
      }
      v21[*v21 + 1] = 2;
      v22 = v153;
      v23 = *v153;
      *v153 = v23 + 1;
      *(_QWORD *)&v22[8 * v23 + 16] = v20;
    }
    else
    {
      if ( !v157 )
        goto LABEL_9;
      v52 = sub_168B9E0(v151);
      v53 = v152;
      if ( v152 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v152 + 32LL))(v152);
      v150 = v53;
      v54 = v20;
      v55 = sub_1587BC0(v52, &v150, v48, v49, v50, v51);
      v56 = *v55 + 32LL * v156;
      v57 = *(unsigned __int8 **)(v56 + 8);
      if ( !v57 )
      {
        v85 = *(_QWORD *)(v56 + 16);
        v86 = *(_DWORD *)(v85 + 14976);
        if ( v86 )
        {
          v99 = (unsigned int)(v86 - 1);
          *(_DWORD *)(v85 + 14976) = v99;
          v57 = *(unsigned __int8 **)(v85 + 8 * v99 + 14848);
          v100 = *((unsigned int *)v57 + 134);
          v101 = *((_QWORD *)v57 + 66);
          *v57 = 0;
          *((_DWORD *)v57 + 106) = 0;
          v102 = v101 + (v100 << 6);
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
                goto LABEL_102;
            }
          }
LABEL_102:
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
      v57[*v57 + 1] = 2;
      v58 = *(_BYTE **)(v56 + 8);
      v59 = (unsigned __int8)*v58;
      *v58 = v59 + 1;
      *(_QWORD *)&v58[8 * v59 + 16] = v54;
    }
    if ( v155 )
    {
      v24 = v153;
      if ( !v153 )
      {
        v76 = v154;
        v77 = *(_DWORD *)(v154 + 14976);
        if ( v77 )
        {
          v78 = (unsigned int)(v77 - 1);
          *(_DWORD *)(v154 + 14976) = v78;
          v24 = *(unsigned __int8 **)(v76 + 8 * v78 + 14848);
          v79 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v80 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v81 = v80 + (v79 << 6);
          while ( v80 != v81 )
          {
            while ( 1 )
            {
              v81 -= 64;
              v82 = *(void **)(v81 + 24);
              if ( v82 == (void *)(v81 + 40) )
                break;
              operator delete(v82);
              if ( v80 == v81 )
                goto LABEL_69;
            }
          }
LABEL_69:
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
        v153 = v24;
      }
      v24[*v24 + 1] = 2;
      v25 = v153;
      v26 = *v153;
      *v153 = v26 + 1;
      *(_QWORD *)&v25[8 * v26 + 16] = 12;
    }
    else if ( v157 )
    {
      v39 = sub_168B9E0(v151);
      v42 = v152;
      if ( v152 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v152 + 32LL))(v152);
      v150 = v42;
      v43 = sub_1587BC0(v39, &v150, v37, v38, v40, v41);
      v44 = *v43 + 32LL * v156;
      v45 = *(unsigned __int8 **)(v44 + 8);
      if ( !v45 )
      {
        v87 = *(_QWORD *)(v44 + 16);
        v88 = *(_DWORD *)(v87 + 14976);
        if ( v88 )
        {
          v89 = (unsigned int)(v88 - 1);
          *(_DWORD *)(v87 + 14976) = v89;
          v45 = *(unsigned __int8 **)(v87 + 8 * v89 + 14848);
          v90 = *((unsigned int *)v45 + 134);
          *v45 = 0;
          v91 = *((_QWORD *)v45 + 66);
          *((_DWORD *)v45 + 106) = 0;
          v92 = v91 + (v90 << 6);
          while ( v91 != v92 )
          {
            while ( 1 )
            {
              v92 -= 64;
              v93 = *(void **)(v92 + 24);
              if ( v93 == (void *)(v92 + 40) )
                break;
              operator delete(v93);
              if ( v91 == v92 )
                goto LABEL_92;
            }
          }
LABEL_92:
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
        *(_QWORD *)(v44 + 8) = v45;
      }
      v45[*v45 + 1] = 2;
      v46 = *(_BYTE **)(v44 + 8);
      v47 = (unsigned __int8)*v46;
      *v46 = v47 + 1;
      *(_QWORD *)&v46[8 * v47 + 16] = 12;
    }
    goto LABEL_9;
  }
  v27 = sub_B8DC30(a2, 1);
  if ( v27 )
    v28 = *(_QWORD *)(v27 + 24);
  else
    v28 = *(_QWORD *)(a2 + 80);
  v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v29 + 16) != 13 || ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v60 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v60 - 34 > 5 )
    {
      v61 = 0;
      if ( v60 == 18 )
        v61 = sub_BA8620(a2);
    }
    else
    {
      v61 = sub_B77620(a2);
    }
    sub_168B9F0((__int64)v151, a1, v61, 0xBC2u, 0);
    v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17448LL) + 248LL) != 37;
    v33 = sub_1587D10((__int64)v151, &v149);
    LODWORD(v150) = 0;
    goto LABEL_29;
  }
  v30 = sub_B8DC30(a2, 1);
  if ( v30 )
  {
    v31 = *(unsigned __int16 *)(v30 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v31 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v31 = *(_DWORD *)(a2 + 104);
  }
  if ( (unsigned int)(v31 - 1) > 1 )
  {
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v151, a1, v32, 0xBC2u, 0);
    v149 = *(_DWORD *)(v6[2181] + 248LL) != 37;
    v33 = sub_1587D10((__int64)v151, &v149);
    LODWORD(v150) = 1;
LABEL_29:
    sub_1587D10(v33, (int *)&v150);
    goto LABEL_9;
  }
  v147 = v31;
  v104 = sub_B8DC30(a2, 1);
  if ( v104 )
  {
LABEL_104:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42 )
      goto LABEL_105;
    v120 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v120 - 34 > 5 )
    {
      if ( v120 == 18 )
      {
        v122 = **(_QWORD **)(a2 + 96);
LABEL_118:
        if ( v122 )
        {
          v123 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 16LL))(v122);
LABEL_120:
          sub_168B9F0((__int64)v151, a1, v123, 0xBC2u, 0);
          v149 = *(_DWORD *)(v6[2181] + 248LL) != 37;
          v33 = sub_1587D10((__int64)v151, &v149);
          LODWORD(v150) = 2;
          goto LABEL_29;
        }
LABEL_140:
        v123 = 0;
        goto LABEL_120;
      }
      if ( v120 != 8 )
        goto LABEL_140;
      v121 = *(__int64 **)(a2 + 72);
    }
    else
    {
      v121 = *(__int64 **)(a2 + 120);
    }
LABEL_117:
    v122 = *v121;
    goto LABEL_118;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 8 )
  {
    v104 = **(_QWORD **)(a2 + 96);
    goto LABEL_104;
  }
  v121 = *(__int64 **)(a2 + 72);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v121 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
    goto LABEL_117;
LABEL_105:
  v107 = 64;
  v108 = 64;
  if ( *(_DWORD *)(v6[2181] + 248LL) != 38 )
  {
    v107 = 32;
    v108 = 32;
  }
  if ( v147 == 2 )
  {
    v124 = 1;
    v125 = sub_B8DC30(a2, 1);
    if ( v125 )
      v130 = *(_QWORD *)(v125 + 56);
    else
      v130 = (*(_BYTE *)(a2 + 28) & 0x7F) == 8
           ? *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL) + 48LL)
           : *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL) + 48LL);
    if ( !sub_F65360(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL), 1, v126, v127, v128, v129)
      || ((v131 = sub_B8DC30(a2, 1)) == 0
        ? ((*(_BYTE *)(a2 + 28) & 0x7F) != 8
         ? (v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL) + 48LL))
         : (v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL) + 48LL)))
        : (v132 = *(_QWORD *)(v131 + 56)),
          v124 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL),
          v107 != sub_A97D20((__int64)v6, v124)) )
    {
      v133 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (unsigned int)v133 - 34 > 5 )
      {
        if ( v133 == 18 )
        {
          v134 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL);
        }
        else
        {
          v135 = 0;
          if ( v133 != 8 )
          {
LABEL_134:
            sub_168B9F0((__int64)v151, a1, v135, 0xBC2u, 0);
            v148 = *(_DWORD *)(v6[2181] + 248LL) != 37;
            v136 = sub_1587D10((__int64)v151, (int *)&v148);
            v149 = 3;
            v137 = sub_1587D10(v136, &v149);
            v138 = sub_A64980((__int64)v6, v108, 0);
            v139 = v138;
            if ( *(_BYTE *)(v137 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v137 + 32), v138, 8u);
            }
            else if ( *(_BYTE *)(v137 + 132) )
            {
              v144 = sub_168B9E0((_QWORD *)v137);
              v145 = *(_QWORD *)(v137 + 16);
              if ( v145 )
                v145 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v145 + 32LL))(*(_QWORD *)(v137 + 16));
              v150 = v145;
              v146 = sub_1587BC0(v144, &v150, v140, v141, v142, v143);
              sub_AE9DF0((unsigned __int8 **)(*v146 + 32LL * *(unsigned int *)(v137 + 128) + 8), v139, 8u);
            }
            goto LABEL_9;
          }
          v134 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
        }
      }
      else
      {
        v134 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
      }
      v135 = 0;
      if ( v134 )
        v135 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v134 + 16LL))(v134, v124, 0);
      goto LABEL_134;
    }
  }
  v109 = v6[294];
  v6[304] += 40LL;
  v110 = (__m128i *)((v109 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6[295] >= (unsigned __int64)&v110[2].m128i_u64[1] && v109 )
    v6[294] = (char *)v110 + 40;
  else
    v110 = (__m128i *)sub_986170((__int64)(v6 + 294), 40, 40, 3, v105, v106);
  sub_B09C30(v110, (__int64)v6, a3);
  sub_B8CC60(a2, (__int64)v110, v111, v112, v113, v114);
  v115 = sub_B32850((__int64)v6, 0, 0);
  sub_B8CC60(a2, v115, v116, v117, v118, v119);
}
