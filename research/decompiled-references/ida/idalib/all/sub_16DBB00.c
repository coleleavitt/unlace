__int64 __fastcall sub_16DBB00(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v4; // r12
  char *v5; // rbp
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // rax
  unsigned int v8; // r15d
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int8 *v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int8 *v15; // rcx
  __int64 v16; // rax
  unsigned __int8 *v17; // r14
  _BYTE *v18; // rdx
  __int64 v19; // rax
  char v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int8 *v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned __int64 v44; // r15
  __int64 v45; // rcx
  unsigned __int8 *v46; // r14
  _BYTE *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  unsigned __int8 *v57; // r14
  __int64 v58; // r15
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  unsigned __int8 *v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 *v72; // r13
  unsigned __int64 v73; // rbx
  void *v74; // rdi
  __int64 v75; // rsi
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // r13
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r15
  char *v88; // r13
  unsigned __int64 *v89; // rbp
  __int64 v90; // rbx
  void *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rax
  unsigned __int64 *v96; // r13
  __int64 v97; // rbx
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // rax
  __int64 v102; // r14
  unsigned __int64 *v103; // rbp
  __int64 v104; // rbx
  int v105; // r13d
  void *v106; // rdi
  unsigned __int64 *v107; // [rsp+8h] [rbp-120h]
  __int64 *v108; // [rsp+10h] [rbp-118h]
  int v110; // [rsp+28h] [rbp-100h]
  unsigned __int64 *v111; // [rsp+28h] [rbp-100h]
  unsigned __int64 *v112; // [rsp+28h] [rbp-100h]
  char *v113; // [rsp+28h] [rbp-100h]
  __int64 v114; // [rsp+28h] [rbp-100h]
  unsigned __int64 *v115; // [rsp+30h] [rbp-F8h]
  unsigned __int64 *v116; // [rsp+30h] [rbp-F8h]
  unsigned __int64 *v117; // [rsp+30h] [rbp-F8h]
  unsigned __int64 *v118; // [rsp+38h] [rbp-F0h]
  __int64 v119; // [rsp+48h] [rbp-E0h] BYREF
  unsigned __int64 v120; // [rsp+50h] [rbp-D8h] BYREF
  char v121; // [rsp+58h] [rbp-D0h]
  char v122; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v123; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v124; // [rsp+80h] [rbp-A8h]
  __int64 v125; // [rsp+88h] [rbp-A0h]
  char v126; // [rsp+D8h] [rbp-50h]
  unsigned int v127; // [rsp+E0h] [rbp-48h]
  char v128; // [rsp+E4h] [rbp-44h]

  v3 = *(unsigned __int64 **)(a1 + 2456);
  v4 = 4LL * *(unsigned int *)(a1 + 2464);
  v107 = &v3[v4];
  if ( v3 != &v3[v4] )
  {
    v5 = &v122;
    v6 = &v120;
    v108 = (__int64 *)(a1 + 8);
    do
    {
      v9 = v3[1];
      v10 = *(_QWORD *)(v9 + 40);
      if ( (v10 & 7) != 0 || (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 || !**(_DWORD **)(v11 + 16) )
      {
        v27 = *(_QWORD *)(v9 + 120);
        if ( (v27 & 4) == 0 )
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v28 )
            v9 = v28;
        }
      }
      v12 = sub_EEB7E0(*v3, a2, a3);
      a2 = (unsigned __int64)v108;
      sub_168B9F0((__int64)v5, v108, v12, 0x1CF6u, 0);
      if ( v126 )
      {
        v13 = v124;
        v14 = v3[2];
        if ( !v124 )
        {
          v60 = v125;
          v61 = *(_DWORD *)(v125 + 14976);
          if ( v61 )
          {
            v92 = (unsigned int)(v61 - 1);
            *(_DWORD *)(v125 + 14976) = v92;
            v13 = *(unsigned __int8 **)(v60 + 8 * v92 + 14848);
            v93 = *((unsigned int *)v13 + 134);
            *v13 = 0;
            v94 = *((_QWORD *)v13 + 66);
            *((_DWORD *)v13 + 106) = 0;
            v95 = v94 + (v93 << 6);
            if ( v94 != v95 )
            {
              v116 = v6;
              v96 = v3;
              v97 = v95;
              do
              {
                while ( 1 )
                {
                  v97 -= 64;
                  v98 = *(void **)(v97 + 24);
                  if ( v98 == (void *)(v97 + 40) )
                    break;
                  operator delete(v98);
                  if ( v94 == v97 )
                    goto LABEL_73;
                }
              }
              while ( v94 != v97 );
LABEL_73:
              v3 = v96;
              v6 = v116;
            }
            *((_DWORD *)v13 + 134) = 0;
          }
          else
          {
            v13 = (unsigned __int8 *)operator new(0x3A0u);
            *v13 = 0;
            *((_QWORD *)v13 + 12) = v13 + 112;
            *((_QWORD *)v13 + 16) = v13 + 144;
            *((_QWORD *)v13 + 20) = v13 + 176;
            *((_QWORD *)v13 + 24) = v13 + 208;
            *((_QWORD *)v13 + 28) = v13 + 240;
            *((_QWORD *)v13 + 32) = v13 + 272;
            *((_QWORD *)v13 + 36) = v13 + 304;
            *((_QWORD *)v13 + 40) = v13 + 336;
            *((_QWORD *)v13 + 44) = v13 + 368;
            *((_QWORD *)v13 + 48) = v13 + 400;
            *((_QWORD *)v13 + 52) = v13 + 432;
            *((_QWORD *)v13 + 13) = 0;
            v13[112] = 0;
            *((_QWORD *)v13 + 17) = 0;
            v13[144] = 0;
            *((_QWORD *)v13 + 21) = 0;
            v13[176] = 0;
            *((_QWORD *)v13 + 25) = 0;
            v13[208] = 0;
            *((_QWORD *)v13 + 29) = 0;
            v13[240] = 0;
            *((_QWORD *)v13 + 33) = 0;
            v13[272] = 0;
            *((_QWORD *)v13 + 37) = 0;
            v13[304] = 0;
            *((_QWORD *)v13 + 41) = 0;
            v13[336] = 0;
            *((_QWORD *)v13 + 45) = 0;
            v13[368] = 0;
            *((_QWORD *)v13 + 49) = 0;
            v13[400] = 0;
            *((_QWORD *)v13 + 53) = 0x800000000LL;
            *((_QWORD *)v13 + 66) = v13 + 544;
            *((_QWORD *)v13 + 67) = 0x600000000LL;
          }
          v124 = v13;
        }
        v13[*v13 + 1] = 10;
        v15 = v124;
        v16 = *v124;
        a2 = (unsigned int)(v16 + 1);
        *v124 = v16 + 1;
        *(_QWORD *)&v15[8 * v16 + 16] = v14;
        if ( v126 )
          goto LABEL_13;
      }
      else
      {
        if ( !v128 )
          goto LABEL_4;
        v41 = sub_168B9E0(v5);
        v42 = v123;
        if ( v123 )
          v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 32LL))(v123);
        v120 = v42;
        v43 = sub_1587BC0(v41, (__int64 *)v6, v37, v38, v39, v40);
        v44 = v3[2];
        v45 = *v43 + 32LL * v127;
        v46 = *(unsigned __int8 **)(v45 + 8);
        if ( !v46 )
        {
          v75 = *(_QWORD *)(v45 + 16);
          v76 = *(_DWORD *)(v75 + 14976);
          if ( v76 )
          {
            v77 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v75 + 14976) = v77;
            v46 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
            v78 = *((unsigned int *)v46 + 134);
            *v46 = 0;
            v79 = *((_QWORD *)v46 + 66);
            *((_DWORD *)v46 + 106) = 0;
            v80 = v79 + (v78 << 6);
            if ( v79 != v80 )
            {
              v111 = v3;
              v81 = v80;
              v118 = v6;
              v82 = v45;
              do
              {
                while ( 1 )
                {
                  v81 -= 64;
                  v83 = *(void **)(v81 + 24);
                  if ( v83 == (void *)(v81 + 40) )
                    break;
                  operator delete(v83);
                  if ( v79 == v81 )
                    goto LABEL_59;
                }
              }
              while ( v79 != v81 );
LABEL_59:
              v45 = v82;
              v3 = v111;
              v6 = v118;
            }
            *((_DWORD *)v46 + 134) = 0;
          }
          else
          {
            v114 = v45;
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
            v45 = v114;
            *((_QWORD *)v46 + 66) = v46 + 544;
            *((_QWORD *)v46 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v45 + 8) = v46;
        }
        v46[*v46 + 1] = 10;
        v47 = *(_BYTE **)(v45 + 8);
        v48 = (unsigned __int8)*v47;
        a2 = (unsigned int)(v48 + 1);
        *v47 = v48 + 1;
        *(_QWORD *)&v47[8 * v48 + 16] = v44;
        if ( v126 )
        {
LABEL_13:
          v17 = v124;
          if ( !v124 )
          {
            v65 = v125;
            v66 = *(_DWORD *)(v125 + 14976);
            if ( v66 )
            {
              v84 = (unsigned int)(v66 - 1);
              *(_DWORD *)(v125 + 14976) = v84;
              v17 = *(unsigned __int8 **)(v65 + 8 * v84 + 14848);
              v85 = *((unsigned int *)v17 + 134);
              *v17 = 0;
              v86 = *((_QWORD *)v17 + 66);
              *((_DWORD *)v17 + 106) = 0;
              v85 <<= 6;
              v87 = v86 + v85;
              if ( v86 != v86 + v85 )
              {
                v112 = v6;
                v88 = v5;
                v89 = v3;
                v90 = v86;
                do
                {
                  while ( 1 )
                  {
                    v87 -= 64;
                    v91 = *(void **)(v87 + 24);
                    if ( v91 == (void *)(v87 + 40) )
                      break;
                    operator delete(v91);
                    if ( v90 == v87 )
                      goto LABEL_65;
                  }
                }
                while ( v90 != v87 );
LABEL_65:
                v3 = v89;
                v5 = v88;
                v6 = v112;
              }
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
            v124 = v17;
          }
          v17[*v17 + 1] = 10;
          v18 = v124;
          goto LABEL_15;
        }
      }
      if ( !v128 )
      {
LABEL_4:
        v7 = sub_EEC8C0(*v3, a2, a3);
        v8 = v7;
        v9 = HIDWORD(v7);
        goto LABEL_5;
      }
      v53 = sub_168B9E0(v5);
      v54 = v123;
      if ( v123 )
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 32LL))(v123);
      a2 = (unsigned __int64)v6;
      v120 = v54;
      v55 = sub_1587BC0(v53, (__int64 *)v6, v49, v50, v51, v52);
      v56 = *v55 + 32LL * v127;
      v57 = *(unsigned __int8 **)(v56 + 8);
      v58 = v56;
      if ( !v57 )
      {
        v67 = *(_QWORD *)(v56 + 16);
        v68 = *(_DWORD *)(v67 + 14976);
        if ( v68 )
        {
          v69 = (unsigned int)(v68 - 1);
          *(_DWORD *)(v67 + 14976) = v69;
          v57 = *(unsigned __int8 **)(v67 + 8 * v69 + 14848);
          v70 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          a2 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v71 = a2 + (v70 << 6);
          if ( a2 != v71 )
          {
            v115 = v6;
            v72 = v3;
            v73 = v71;
            do
            {
              while ( 1 )
              {
                v73 -= 64LL;
                v74 = *(void **)(v73 + 24);
                if ( v74 == (void *)(v73 + 40) )
                  break;
                operator delete(v74);
                if ( a2 == v73 )
                  goto LABEL_52;
              }
            }
            while ( a2 != v73 );
LABEL_52:
            v3 = v72;
            v6 = v115;
          }
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
        *(_QWORD *)(v58 + 8) = v57;
      }
      v57[*v57 + 1] = 10;
      v18 = *(_BYTE **)(v58 + 8);
LABEL_15:
      v19 = (unsigned __int8)*v18;
      *v18 = v19 + 1;
      *(_QWORD *)&v18[8 * v19 + 16] = v9;
      v20 = v126;
      v21 = sub_EEC8C0(*v3, a2, a3);
      v8 = v21;
      v22 = HIDWORD(v21);
      LODWORD(v9) = HIDWORD(v21);
      if ( v20 )
      {
        v23 = v124;
        if ( v124 )
        {
          v24 = *((unsigned int *)v124 + 106);
          a2 = *((unsigned int *)v124 + 107);
          v25 = v24 + 1;
        }
        else
        {
          v62 = v125;
          v63 = *(_DWORD *)(v125 + 14976);
          if ( v63 )
          {
            v99 = (unsigned int)(v63 - 1);
            *(_DWORD *)(v125 + 14976) = v99;
            v23 = *(unsigned __int8 **)(v62 + 8 * v99 + 14848);
            v100 = *((unsigned int *)v23 + 134);
            v101 = *((_QWORD *)v23 + 66);
            *v23 = 0;
            *((_DWORD *)v23 + 106) = 0;
            v102 = v101 + (v100 << 6);
            if ( v101 == v102 )
            {
              v25 = 1;
              v24 = 0;
            }
            else
            {
              v113 = v5;
              v103 = v3;
              v104 = v101;
              v117 = v6;
              v105 = v22;
              do
              {
                while ( 1 )
                {
                  v102 -= 64;
                  v106 = *(void **)(v102 + 24);
                  if ( v106 == (void *)(v102 + 40) )
                    break;
                  operator delete(v106);
                  if ( v104 == v102 )
                    goto LABEL_81;
                }
              }
              while ( v104 != v102 );
LABEL_81:
              v24 = *((unsigned int *)v23 + 106);
              v3 = v103;
              LODWORD(v22) = v105;
              v5 = v113;
              v6 = v117;
              v25 = v24 + 1;
            }
            *((_DWORD *)v23 + 134) = 0;
            a2 = *((unsigned int *)v23 + 107);
          }
          else
          {
            v110 = v22;
            v64 = (unsigned __int8 *)operator new(0x3A0u);
            a2 = 8;
            v25 = 1;
            v23 = v64;
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
            LODWORD(v22) = v110;
            *((_QWORD *)v64 + 66) = v64 + 544;
            *((_QWORD *)v64 + 67) = 0x600000000LL;
            v24 = 0;
          }
          v124 = v23;
        }
        v120 = __PAIR64__(v22, v8);
        v121 = 1;
        if ( a2 < v25 )
        {
          a2 = (unsigned __int64)(v23 + 432);
          sub_2237220(v23 + 416, v23 + 432, v25, 12);
          v24 = *((unsigned int *)v23 + 106);
        }
        v26 = *((_QWORD *)v23 + 52) + 12 * v24;
        *(_QWORD *)v26 = *v6;
        *(_DWORD *)(v26 + 8) = *((_DWORD *)v6 + 2);
        ++*((_DWORD *)v23 + 106);
        goto LABEL_6;
      }
LABEL_5:
      if ( v128 )
      {
        v33 = sub_168B9E0(v5);
        v34 = v123;
        if ( v123 )
          v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 32LL))(v123);
        v119 = v34;
        v35 = sub_1587BC0(v33, &v119, v29, v30, v31, v32);
        a2 = (unsigned __int64)v6;
        v36 = *v35 + 32LL * v127;
        v120 = __PAIR64__(v9, v8);
        v121 = 1;
        sub_AEC610((__int64 *)(v36 + 8), (__int64 *)v6);
      }
LABEL_6:
      v3 += 4;
      sub_15F7200(v5);
    }
    while ( v107 != v3 );
  }
  *(_DWORD *)(a1 + 2464) = 0;
  return a1;
}
