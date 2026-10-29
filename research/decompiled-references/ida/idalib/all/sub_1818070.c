void __fastcall sub_1818070(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  __int64 v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // r13
  unsigned __int8 *v27; // rax
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // rcx
  unsigned __int8 *v32; // r13
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  unsigned __int8 *v42; // rax
  _BYTE *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned __int8 *v53; // r13
  _BYTE *v54; // rdx
  __int64 v55; // rax
  unsigned __int64 *v56; // rax
  __int64 *v57; // rdx
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // r12
  __int64 v69; // rbx
  void *v70; // rdi
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rbx
  __int64 v80; // rbp
  void *v81; // rdi
  __int64 v82; // rsi
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 v89; // r12
  __int64 v90; // rbx
  void *v91; // rdi
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // r12
  __int64 v99; // rbx
  void *v100; // rdi
  char v101; // [rsp+Fh] [rbp-F9h]
  __int64 v102; // [rsp+10h] [rbp-F8h]
  __int64 v103; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v104; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v105; // [rsp+10h] [rbp-F8h]
  __int64 v106; // [rsp+10h] [rbp-F8h]
  __int64 v107; // [rsp+10h] [rbp-F8h]
  __int64 v108; // [rsp+10h] [rbp-F8h]
  __int64 v109; // [rsp+10h] [rbp-F8h]
  __int64 v110; // [rsp+10h] [rbp-F8h]
  __int64 *v111; // [rsp+18h] [rbp-F0h]
  __int64 *v112; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v113; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v114; // [rsp+18h] [rbp-F0h]
  __int64 v115; // [rsp+18h] [rbp-F0h]
  __int64 v116; // [rsp+20h] [rbp-E8h]
  __int64 *v117; // [rsp+20h] [rbp-E8h]
  __int64 *v118; // [rsp+20h] [rbp-E8h]
  __int64 v119; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v120[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v122; // [rsp+60h] [rbp-A8h]
  __int64 v123; // [rsp+68h] [rbp-A0h]
  char v124; // [rsp+B8h] [rbp-50h]
  unsigned int v125; // [rsp+C0h] [rbp-48h]
  char v126; // [rsp+C4h] [rbp-44h]

  v8 = a1[64];
  a1[64] = a2;
  if ( a3 )
  {
    v9 = a1;
    v10 = a3;
    while ( 1 )
    {
      v101 = 0;
      v11 = *(_QWORD *)(v8 + 8);
      v12 = v11 + 80LL * *(unsigned int *)(v8 + 16);
      if ( v12 != v11 )
        break;
LABEL_20:
      v8 = *(_QWORD *)v8;
      if ( !v8 )
        return;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v11 + 1) )
          goto LABEL_14;
        v23 = *(_BYTE *)v11;
        if ( *(_BYTE *)v11 == 1 )
        {
          if ( v101 && (*(_BYTE *)(v10 + 28) & 0x7F) == 0x2E
            || (sub_165C590((__int64)v9, v11, v10), *(_BYTE *)(v11 + 1)) )
          {
            v101 = 1;
          }
          goto LABEL_14;
        }
        if ( v23 )
          break;
        if ( *(char *)(v10 + 28) < 0 )
          goto LABEL_14;
        v24 = v11;
        v11 += 80;
        sub_1687EE0((__int64)v9, v24, v10, a4, a5);
        if ( v11 == v12 )
          goto LABEL_20;
      }
      if ( v23 == 2 )
        break;
LABEL_14:
      v11 += 80;
      if ( v11 == v12 )
        goto LABEL_20;
    }
    v13 = *(_BYTE *)(v10 + 28) & 0x7F;
    v14 = v13;
    v15 = (unsigned int)v13 - 49;
    if ( (unsigned int)v15 <= 2 )
    {
      if ( v13 != 50 && v13 != 75 )
        goto LABEL_10;
    }
    else if ( v13 != 75 )
    {
      v14 = (unsigned int)v13 - 34;
      if ( (unsigned int)v14 > 5 )
        goto LABEL_29;
      if ( v13 != 50 )
        goto LABEL_10;
    }
    if ( ((*(_DWORD *)(v11 + 8) - 3047) & 0xFFFFFFFD) == 0 )
    {
      LODWORD(v15) = 2;
LABEL_13:
      v18 = sub_B35CE0(
              v9[31],
              &byte_22F0C30,
              0,
              v15,
              ((unsigned __int64)*(unsigned int *)(v11 + 4) << 32) | *(unsigned int *)(v11 + 4),
              0);
      sub_B8CC60(v10, v18, v19, v20, v21, v22);
      goto LABEL_14;
    }
LABEL_10:
    v16 = *(unsigned int *)(v10 + 24);
    if ( !(_DWORD)v16 || (v17 = sub_1021680(*(_QWORD *)(v9[31] + 2312), v16)) == 0 || (v15 = 1, v17 == 3) )
    {
      if ( (*(_BYTE *)(v9[29] + 107) & 4) == 0
        || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5
        || (*(_BYTE *)(v10 + 29) & 1) == 0 )
      {
LABEL_29:
        v25 = *(_DWORD *)(v11 + 8);
        goto LABEL_30;
      }
      v56 = sub_B8C3D0(v10, v16, v14, v15, a7, a8);
      v57 = (__int64 *)*v56;
      v58 = *v56 + 8LL * *((unsigned int *)v56 + 2);
      if ( *v56 >= v58 )
      {
        v25 = *(_DWORD *)(v11 + 8);
        if ( v57 != (__int64 *)v58 )
        {
          if ( *(_WORD *)(*(_QWORD *)v58 + 36LL) == 386 )
            goto LABEL_56;
          v60 = (__int64 *)(v58 + 8);
          while ( v57 != v60 )
          {
            v61 = *v60++;
            if ( *(_WORD *)(v61 + 36) == 386 )
            {
              if ( v25 != 3012 )
                break;
              goto LABEL_33;
            }
          }
        }
      }
      else
      {
        v59 = *v56;
        while ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 386 )
        {
          v59 += 8LL;
          if ( v58 == v59 )
            goto LABEL_29;
        }
        v25 = *(_DWORD *)(v11 + 8);
        if ( v59 != v58 )
        {
LABEL_56:
          if ( v25 == 3012 )
            goto LABEL_33;
        }
      }
LABEL_30:
      sub_168B9F0((__int64)v120, v9 + 1, *(_DWORD *)(v11 + 4), v25, 0);
      v26 = *(_QWORD *)(v11 + 16);
      if ( v124 )
      {
        v27 = v122;
        if ( !v122 )
        {
          v62 = v123;
          v63 = *(_DWORD *)(v123 + 14976);
          if ( v63 )
          {
            v64 = (unsigned int)(v63 - 1);
            *(_DWORD *)(v123 + 14976) = v64;
            v27 = *(unsigned __int8 **)(v62 + 8 * v64 + 14848);
            v65 = *((unsigned int *)v27 + 134);
            *v27 = 0;
            v66 = *((_QWORD *)v27 + 66);
            *((_DWORD *)v27 + 106) = 0;
            v67 = v66 + (v65 << 6);
            if ( v66 != v67 )
            {
              v111 = v9;
              v68 = v12;
              v69 = v67;
              do
              {
                while ( 1 )
                {
                  v69 -= 64;
                  v70 = *(void **)(v69 + 24);
                  if ( v70 == (void *)(v69 + 40) )
                    break;
                  v104 = v27;
                  operator delete(v70);
                  v27 = v104;
                  if ( v66 == v69 )
                    goto LABEL_70;
                }
              }
              while ( v66 != v69 );
LABEL_70:
              v12 = v68;
              v9 = v111;
            }
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
          v122 = v27;
        }
        v27[*v27 + 1] = 8;
        v28 = v122;
        v29 = *v122;
        *v122 = v29 + 1;
        *(_QWORD *)&v28[8 * v29 + 16] = v26;
        v30 = *(_DWORD *)(v11 + 12);
        if ( !v124 )
          goto LABEL_46;
      }
      else
      {
        if ( !v126 )
        {
LABEL_32:
          sub_15F7200(v120);
LABEL_33:
          *(_BYTE *)(v11 + 1) = 1;
          goto LABEL_14;
        }
        v35 = sub_168B9E0(v120);
        v39 = v121;
        if ( v121 )
        {
          v102 = v35;
          v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
          v35 = v102;
        }
        v119 = v39;
        v40 = sub_1587BC0(v35, &v119, v35, v36, v37, v38);
        v41 = *v40 + 32LL * v125;
        v42 = *(unsigned __int8 **)(v41 + 8);
        if ( !v42 )
        {
          v92 = *(_QWORD *)(v41 + 16);
          v93 = *(_DWORD *)(v92 + 14976);
          if ( v93 )
          {
            v94 = (unsigned int)(v93 - 1);
            *(_DWORD *)(v92 + 14976) = v94;
            v42 = *(unsigned __int8 **)(v92 + 8 * v94 + 14848);
            v95 = *((unsigned int *)v42 + 134);
            *v42 = 0;
            v96 = *((_QWORD *)v42 + 66);
            *((_DWORD *)v42 + 106) = 0;
            v97 = v96 + (v95 << 6);
            if ( v96 != v97 )
            {
              v118 = v9;
              v98 = v12;
              v99 = v97;
              do
              {
                while ( 1 )
                {
                  v99 -= 64;
                  v100 = *(void **)(v99 + 24);
                  if ( v100 == (void *)(v99 + 40) )
                    break;
                  v114 = v42;
                  v108 = v41;
                  operator delete(v100);
                  v41 = v108;
                  v42 = v114;
                  if ( v96 == v99 )
                    goto LABEL_99;
                }
              }
              while ( v96 != v99 );
LABEL_99:
              v12 = v98;
              v9 = v118;
            }
            *((_DWORD *)v42 + 134) = 0;
          }
          else
          {
            v109 = v41;
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
            v41 = v109;
            *((_QWORD *)v42 + 66) = v42 + 544;
            *((_QWORD *)v42 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v41 + 8) = v42;
        }
        v42[*v42 + 1] = 8;
        v43 = *(_BYTE **)(v41 + 8);
        v44 = (unsigned __int8)*v43;
        *v43 = v44 + 1;
        *(_QWORD *)&v43[8 * v44 + 16] = v26;
        v30 = *(_DWORD *)(v11 + 12);
        if ( !v124 )
        {
LABEL_46:
          if ( v126 )
          {
            v45 = sub_168B9E0(v120);
            v49 = v121;
            if ( v121 )
            {
              v103 = v45;
              v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
              v45 = v103;
            }
            v119 = v49;
            v50 = sub_1587BC0(v45, &v119, v45, v46, v47, v48);
            v51 = v30;
            v52 = *v50 + 32LL * v125;
            v53 = *(unsigned __int8 **)(v52 + 8);
            if ( !v53 )
            {
              v82 = *(_QWORD *)(v52 + 16);
              v83 = *(_DWORD *)(v82 + 14976);
              if ( v83 )
              {
                v84 = (unsigned int)(v83 - 1);
                *(_DWORD *)(v82 + 14976) = v84;
                v53 = *(unsigned __int8 **)(v82 + 8 * v84 + 14848);
                v85 = *((unsigned int *)v53 + 134);
                *v53 = 0;
                v86 = *((_QWORD *)v53 + 66);
                *((_DWORD *)v53 + 106) = 0;
                v87 = v86 + (v85 << 6);
                if ( v86 != v87 )
                {
                  v113 = v53;
                  v88 = v52;
                  v117 = v9;
                  v89 = v12;
                  v90 = v87;
                  do
                  {
                    while ( 1 )
                    {
                      v90 -= 64;
                      v91 = *(void **)(v90 + 24);
                      if ( v91 == (void *)(v90 + 40) )
                        break;
                      v107 = v51;
                      operator delete(v91);
                      v51 = v107;
                      if ( v86 == v90 )
                        goto LABEL_92;
                    }
                  }
                  while ( v86 != v90 );
LABEL_92:
                  v12 = v89;
                  v52 = v88;
                  v9 = v117;
                  v53 = v113;
                }
                *((_DWORD *)v53 + 134) = 0;
              }
              else
              {
                v115 = v51;
                v110 = v52;
                v53 = (unsigned __int8 *)operator new(0x3A0u);
                *v53 = 0;
                *((_QWORD *)v53 + 12) = v53 + 112;
                *((_QWORD *)v53 + 16) = v53 + 144;
                *((_QWORD *)v53 + 20) = v53 + 176;
                *((_QWORD *)v53 + 24) = v53 + 208;
                *((_QWORD *)v53 + 28) = v53 + 240;
                *((_QWORD *)v53 + 32) = v53 + 272;
                *((_QWORD *)v53 + 36) = v53 + 304;
                *((_QWORD *)v53 + 40) = v53 + 336;
                *((_QWORD *)v53 + 44) = v53 + 368;
                *((_QWORD *)v53 + 48) = v53 + 400;
                *((_QWORD *)v53 + 52) = v53 + 432;
                *((_QWORD *)v53 + 13) = 0;
                v53[112] = 0;
                *((_QWORD *)v53 + 17) = 0;
                v53[144] = 0;
                *((_QWORD *)v53 + 21) = 0;
                v53[176] = 0;
                *((_QWORD *)v53 + 25) = 0;
                v53[208] = 0;
                *((_QWORD *)v53 + 29) = 0;
                v53[240] = 0;
                *((_QWORD *)v53 + 33) = 0;
                v53[272] = 0;
                *((_QWORD *)v53 + 37) = 0;
                v53[304] = 0;
                *((_QWORD *)v53 + 41) = 0;
                v53[336] = 0;
                *((_QWORD *)v53 + 45) = 0;
                v53[368] = 0;
                *((_QWORD *)v53 + 49) = 0;
                v53[400] = 0;
                *((_QWORD *)v53 + 53) = 0x800000000LL;
                v52 = v110;
                *((_QWORD *)v53 + 66) = v53 + 544;
                v51 = v115;
                *((_QWORD *)v53 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v52 + 8) = v53;
            }
            v53[*v53 + 1] = 3;
            v54 = *(_BYTE **)(v52 + 8);
            v55 = (unsigned __int8)*v54;
            *v54 = v55 + 1;
            *(_QWORD *)&v54[8 * v55 + 16] = v51;
          }
          goto LABEL_32;
        }
      }
      v31 = v30;
      v32 = v122;
      if ( !v122 )
      {
        v71 = v123;
        v72 = *(_DWORD *)(v123 + 14976);
        if ( v72 )
        {
          v73 = (unsigned int)(v72 - 1);
          *(_DWORD *)(v123 + 14976) = v73;
          v32 = *(unsigned __int8 **)(v71 + 8 * v73 + 14848);
          v74 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v75 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v76 = v75 + (v74 << 6);
          if ( v75 != v76 )
          {
            v105 = v32;
            v77 = v31;
            v112 = v9;
            v78 = v12;
            v79 = v76;
            v116 = v10;
            v80 = v75;
            do
            {
              while ( 1 )
              {
                v79 -= 64;
                v81 = *(void **)(v79 + 24);
                if ( v81 == (void *)(v79 + 40) )
                  break;
                operator delete(v81);
                if ( v80 == v79 )
                  goto LABEL_77;
              }
            }
            while ( v80 != v79 );
LABEL_77:
            v12 = v78;
            v31 = v77;
            v9 = v112;
            v32 = v105;
            v10 = v116;
          }
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v106 = v31;
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          v31 = v106;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v122 = v32;
      }
      v32[*v32 + 1] = 3;
      v33 = v122;
      v34 = *v122;
      *v122 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = v31;
      goto LABEL_32;
    }
    goto LABEL_13;
  }
}
