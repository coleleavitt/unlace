void __fastcall sub_1CAD230(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v6; // rdx
  __int64 v7; // rax
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __m128i *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r13
  unsigned __int8 *v30; // rbp
  _BYTE *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rbp
  unsigned __int8 *v41; // rbx
  _BYTE *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbp
  _BOOL8 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int8 *v53; // r13
  _BYTE *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  unsigned __int8 *v73; // r13
  _BYTE *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbp
  __int64 v78; // r13
  __int64 v79; // rbp
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // r14
  __int64 v84; // r13
  void *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // r14
  __int64 v96; // r13
  void *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // r14
  __int64 v100; // r15
  __int64 v101; // r14
  void *v102; // rdi
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // r14
  __int64 v109; // r15
  __int64 v110; // r14
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rdx
  __int64 v115; // r15
  void *v116; // rdi
  __int64 v117; // [rsp+8h] [rbp-E0h]
  int v118; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v119; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v120[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v122; // [rsp+40h] [rbp-A8h]
  __int64 v123; // [rsp+48h] [rbp-A0h]
  char v124; // [rsp+98h] [rbp-50h]
  unsigned int v125; // [rsp+A0h] [rbp-48h]
  char v126; // [rsp+A4h] [rbp-44h]

  if ( (unsigned __int8)sub_15EB880((__int64)a3, *a1, 1u) )
  {
    if ( !a3[3].m128i_i16[4] || (v4 = a3[5].m128i_i64[0], (v4 & 2) == 0) )
    {
      sub_168B9F0((__int64)v120, a1, a3[1].m128i_u32[2], 0xC57u, 0);
      if ( v124 )
      {
        v5 = v122;
        if ( !v122 )
        {
          v67 = v123;
          v68 = *(_DWORD *)(v123 + 14976);
          if ( v68 )
          {
            v81 = (unsigned int)(v68 - 1);
            *(_DWORD *)(v123 + 14976) = v81;
            v5 = *(unsigned __int8 **)(v67 + 8 * v81 + 14848);
            v82 = *((unsigned int *)v5 + 134);
            *v5 = 0;
            v83 = *((_QWORD *)v5 + 66);
            *((_DWORD *)v5 + 106) = 0;
            v84 = v83 + (v82 << 6);
            while ( v83 != v84 )
            {
              while ( 1 )
              {
                v84 -= 64;
                v85 = *(void **)(v84 + 24);
                if ( v85 == (void *)(v84 + 40) )
                  break;
                operator delete(v85);
                if ( v83 == v84 )
                  goto LABEL_64;
              }
            }
LABEL_64:
            *((_DWORD *)v5 + 134) = 0;
          }
          else
          {
            v5 = (unsigned __int8 *)operator new(0x3A0u);
            *v5 = 0;
            *((_QWORD *)v5 + 12) = v5 + 112;
            *((_QWORD *)v5 + 16) = v5 + 144;
            *((_QWORD *)v5 + 20) = v5 + 176;
            *((_QWORD *)v5 + 24) = v5 + 208;
            *((_QWORD *)v5 + 28) = v5 + 240;
            *((_QWORD *)v5 + 32) = v5 + 272;
            *((_QWORD *)v5 + 36) = v5 + 304;
            *((_QWORD *)v5 + 40) = v5 + 336;
            *((_QWORD *)v5 + 44) = v5 + 368;
            *((_QWORD *)v5 + 48) = v5 + 400;
            *((_QWORD *)v5 + 52) = v5 + 432;
            *((_QWORD *)v5 + 13) = 0;
            v5[112] = 0;
            *((_QWORD *)v5 + 17) = 0;
            v5[144] = 0;
            *((_QWORD *)v5 + 21) = 0;
            v5[176] = 0;
            *((_QWORD *)v5 + 25) = 0;
            v5[208] = 0;
            *((_QWORD *)v5 + 29) = 0;
            v5[240] = 0;
            *((_QWORD *)v5 + 33) = 0;
            v5[272] = 0;
            *((_QWORD *)v5 + 37) = 0;
            v5[304] = 0;
            *((_QWORD *)v5 + 41) = 0;
            v5[336] = 0;
            *((_QWORD *)v5 + 45) = 0;
            v5[368] = 0;
            *((_QWORD *)v5 + 49) = 0;
            v5[400] = 0;
            *((_QWORD *)v5 + 53) = 0x800000000LL;
            *((_QWORD *)v5 + 66) = v5 + 544;
            *((_QWORD *)v5 + 67) = 0x600000000LL;
          }
          v122 = v5;
        }
        v5[*v5 + 1] = 16;
        v6 = v122;
        v7 = *v122;
        *v122 = v7 + 1;
        *(_QWORD *)&v6[8 * v7 + 16] = a3;
        if ( !v124 )
          goto LABEL_22;
      }
      else
      {
        if ( !v126 )
        {
LABEL_6:
          sub_15F7200(v120);
          return;
        }
        v24 = sub_168B9E0(v120);
        v27 = v121;
        if ( v121 )
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
        v119 = v27;
        v28 = sub_1587BC0(v24, &v119, v22, v23, v25, v26);
        v29 = *v28 + 32LL * v125;
        v30 = *(unsigned __int8 **)(v29 + 8);
        if ( !v30 )
        {
          v69 = *(_QWORD *)(v29 + 16);
          v70 = *(_DWORD *)(v69 + 14976);
          if ( v70 )
          {
            v98 = (unsigned int)(v70 - 1);
            *(_DWORD *)(v69 + 14976) = v98;
            v30 = *(unsigned __int8 **)(v69 + 8 * v98 + 14848);
            v99 = *((unsigned int *)v30 + 134);
            *v30 = 0;
            v100 = *((_QWORD *)v30 + 66);
            *((_DWORD *)v30 + 106) = 0;
            v101 = v100 + (v99 << 6);
            while ( v100 != v101 )
            {
              while ( 1 )
              {
                v101 -= 64;
                v102 = *(void **)(v101 + 24);
                if ( v102 == (void *)(v101 + 40) )
                  break;
                operator delete(v102);
                if ( v100 == v101 )
                  goto LABEL_79;
              }
            }
LABEL_79:
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
        v30[*v30 + 1] = 16;
        v31 = *(_BYTE **)(v29 + 8);
        v32 = (unsigned __int8)*v31;
        *v31 = v32 + 1;
        *(_QWORD *)&v31[8 * v32 + 16] = a3;
        if ( !v124 )
        {
LABEL_22:
          if ( v126 )
          {
            v35 = sub_168B9E0(v120);
            v38 = v121;
            if ( v121 )
              v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
            v119 = v38;
            v39 = sub_1587BC0(v35, &v119, v33, v34, v36, v37);
            v40 = *v39 + 32LL * v125;
            v41 = *(unsigned __int8 **)(v40 + 8);
            if ( !v41 )
            {
              v71 = *(_QWORD *)(v40 + 16);
              v72 = *(_DWORD *)(v71 + 14976);
              if ( v72 )
              {
                v93 = (unsigned int)(v72 - 1);
                *(_DWORD *)(v71 + 14976) = v93;
                v41 = *(unsigned __int8 **)(v71 + 8 * v93 + 14848);
                v94 = *((unsigned int *)v41 + 134);
                *v41 = 0;
                v95 = *((_QWORD *)v41 + 66);
                *((_DWORD *)v41 + 106) = 0;
                v96 = v95 + (v94 << 6);
                while ( v95 != v96 )
                {
                  while ( 1 )
                  {
                    v96 -= 64;
                    v97 = *(void **)(v96 + 24);
                    if ( v97 == (void *)(v96 + 40) )
                      break;
                    operator delete(v97);
                    if ( v95 == v96 )
                      goto LABEL_74;
                  }
                }
LABEL_74:
                *((_DWORD *)v41 + 134) = 0;
              }
              else
              {
                v41 = (unsigned __int8 *)operator new(0x3A0u);
                *v41 = 0;
                *((_QWORD *)v41 + 12) = v41 + 112;
                *((_QWORD *)v41 + 16) = v41 + 144;
                *((_QWORD *)v41 + 20) = v41 + 176;
                *((_QWORD *)v41 + 24) = v41 + 208;
                *((_QWORD *)v41 + 28) = v41 + 240;
                *((_QWORD *)v41 + 32) = v41 + 272;
                *((_QWORD *)v41 + 36) = v41 + 304;
                *((_QWORD *)v41 + 40) = v41 + 336;
                *((_QWORD *)v41 + 44) = v41 + 368;
                *((_QWORD *)v41 + 48) = v41 + 400;
                *((_QWORD *)v41 + 52) = v41 + 432;
                *((_QWORD *)v41 + 13) = 0;
                v41[112] = 0;
                *((_QWORD *)v41 + 17) = 0;
                v41[144] = 0;
                *((_QWORD *)v41 + 21) = 0;
                v41[176] = 0;
                *((_QWORD *)v41 + 25) = 0;
                v41[208] = 0;
                *((_QWORD *)v41 + 29) = 0;
                v41[240] = 0;
                *((_QWORD *)v41 + 33) = 0;
                v41[272] = 0;
                *((_QWORD *)v41 + 37) = 0;
                v41[304] = 0;
                *((_QWORD *)v41 + 41) = 0;
                v41[336] = 0;
                *((_QWORD *)v41 + 45) = 0;
                v41[368] = 0;
                *((_QWORD *)v41 + 49) = 0;
                v41[400] = 0;
                *((_QWORD *)v41 + 53) = 0x800000000LL;
                *((_QWORD *)v41 + 66) = v41 + 544;
                *((_QWORD *)v41 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v40 + 8) = v41;
            }
            v41[*v41 + 1] = 2;
            v42 = *(_BYTE **)(v40 + 8);
            v43 = (unsigned __int8)*v42;
            *v42 = v43 + 1;
            *(_QWORD *)&v42[8 * v43 + 16] = 3;
          }
          goto LABEL_6;
        }
      }
      v8 = v122;
      if ( !v122 )
      {
        v65 = v123;
        v66 = *(_DWORD *)(v123 + 14976);
        if ( v66 )
        {
          v76 = (unsigned int)(v66 - 1);
          *(_DWORD *)(v123 + 14976) = v76;
          v8 = *(unsigned __int8 **)(v65 + 8 * v76 + 14848);
          v77 = *((unsigned int *)v8 + 134);
          *v8 = 0;
          v78 = *((_QWORD *)v8 + 66);
          *((_DWORD *)v8 + 106) = 0;
          v79 = v78 + (v77 << 6);
          while ( v78 != v79 )
          {
            while ( 1 )
            {
              v79 -= 64;
              v80 = *(void **)(v79 + 24);
              if ( v80 == (void *)(v79 + 40) )
                break;
              operator delete(v80);
              if ( v78 == v79 )
                goto LABEL_59;
            }
          }
LABEL_59:
          *((_DWORD *)v8 + 134) = 0;
        }
        else
        {
          v8 = (unsigned __int8 *)operator new(0x3A0u);
          *v8 = 0;
          *((_QWORD *)v8 + 12) = v8 + 112;
          *((_QWORD *)v8 + 16) = v8 + 144;
          *((_QWORD *)v8 + 20) = v8 + 176;
          *((_QWORD *)v8 + 24) = v8 + 208;
          *((_QWORD *)v8 + 28) = v8 + 240;
          *((_QWORD *)v8 + 32) = v8 + 272;
          *((_QWORD *)v8 + 36) = v8 + 304;
          *((_QWORD *)v8 + 40) = v8 + 336;
          *((_QWORD *)v8 + 44) = v8 + 368;
          *((_QWORD *)v8 + 48) = v8 + 400;
          *((_QWORD *)v8 + 52) = v8 + 432;
          *((_QWORD *)v8 + 13) = 0;
          v8[112] = 0;
          *((_QWORD *)v8 + 17) = 0;
          v8[144] = 0;
          *((_QWORD *)v8 + 21) = 0;
          v8[176] = 0;
          *((_QWORD *)v8 + 25) = 0;
          v8[208] = 0;
          *((_QWORD *)v8 + 29) = 0;
          v8[240] = 0;
          *((_QWORD *)v8 + 33) = 0;
          v8[272] = 0;
          *((_QWORD *)v8 + 37) = 0;
          v8[304] = 0;
          *((_QWORD *)v8 + 41) = 0;
          v8[336] = 0;
          *((_QWORD *)v8 + 45) = 0;
          v8[368] = 0;
          *((_QWORD *)v8 + 49) = 0;
          v8[400] = 0;
          *((_QWORD *)v8 + 53) = 0x800000000LL;
          *((_QWORD *)v8 + 66) = v8 + 544;
          *((_QWORD *)v8 + 67) = 0x600000000LL;
        }
        v122 = v8;
      }
      v8[*v8 + 1] = 2;
      v9 = v122;
      v10 = *v122;
      *v122 = v10 + 1;
      *(_QWORD *)&v9[8 * v10 + 16] = 3;
      goto LABEL_6;
    }
    v11 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( !(unsigned __int8)sub_B19B40(*(_QWORD *)(v11 + 16) + 16LL, **(unsigned int **)(v11 + 16), &v118) )
    {
      sub_168B9F0((__int64)v120, a1, a3[1].m128i_u32[2], 0x19C0u, 0);
      v56 = sub_15DD120((__int64)v120, (__int64)a3);
      v57 = v56;
      if ( *(_BYTE *)(v56 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v56 + 32), v11, 5u);
      }
      else if ( *(_BYTE *)(v56 + 132) )
      {
        v60 = sub_168B9E0((_QWORD *)v56);
        v63 = *(_QWORD *)(v57 + 16);
        if ( v63 )
          v63 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v63 + 32LL))(*(_QWORD *)(v57 + 16));
        v119 = v63;
        v64 = sub_1587BC0(v60, &v119, v58, v59, v61, v62);
        sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * *(unsigned int *)(v57 + 128) + 8), v11, 5u);
      }
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 64 > 2 )
    {
      sub_168B9F0((__int64)v120, a1, a3[1].m128i_u32[2], 0x19C6u, 0);
      v44 = sub_15DD120((__int64)v120, (__int64)a3);
      v45 = (a3[2].m128i_i8[3] & 2) != 0;
      if ( *(_BYTE *)(v44 + 120) )
      {
        v73 = *(unsigned __int8 **)(v44 + 32);
        if ( !v73 )
        {
          v103 = *(_QWORD *)(v44 + 40);
          v104 = *(_DWORD *)(v103 + 14976);
          if ( v104 )
          {
            v107 = (unsigned int)(v104 - 1);
            *(_DWORD *)(v103 + 14976) = v107;
            v73 = *(unsigned __int8 **)(v103 + 8 * v107 + 14848);
            v108 = *((unsigned int *)v73 + 134);
            *v73 = 0;
            v109 = *((_QWORD *)v73 + 66);
            *((_DWORD *)v73 + 106) = 0;
            v110 = v109 + (v108 << 6);
            while ( v109 != v110 )
            {
              while ( 1 )
              {
                v110 -= 64;
                v111 = *(void **)(v110 + 24);
                if ( v111 == (void *)(v110 + 40) )
                  break;
                operator delete(v111);
                if ( v109 == v110 )
                  goto LABEL_90;
              }
            }
LABEL_90:
            *((_DWORD *)v73 + 134) = 0;
          }
          else
          {
            v73 = (unsigned __int8 *)operator new(0x3A0u);
            *v73 = 0;
            *((_QWORD *)v73 + 12) = v73 + 112;
            *((_QWORD *)v73 + 16) = v73 + 144;
            *((_QWORD *)v73 + 20) = v73 + 176;
            *((_QWORD *)v73 + 24) = v73 + 208;
            *((_QWORD *)v73 + 28) = v73 + 240;
            *((_QWORD *)v73 + 32) = v73 + 272;
            *((_QWORD *)v73 + 36) = v73 + 304;
            *((_QWORD *)v73 + 40) = v73 + 336;
            *((_QWORD *)v73 + 44) = v73 + 368;
            *((_QWORD *)v73 + 48) = v73 + 400;
            *((_QWORD *)v73 + 52) = v73 + 432;
            *((_QWORD *)v73 + 13) = 0;
            v73[112] = 0;
            *((_QWORD *)v73 + 17) = 0;
            v73[144] = 0;
            *((_QWORD *)v73 + 21) = 0;
            v73[176] = 0;
            *((_QWORD *)v73 + 25) = 0;
            v73[208] = 0;
            *((_QWORD *)v73 + 29) = 0;
            v73[240] = 0;
            *((_QWORD *)v73 + 33) = 0;
            v73[272] = 0;
            *((_QWORD *)v73 + 37) = 0;
            v73[304] = 0;
            *((_QWORD *)v73 + 41) = 0;
            v73[336] = 0;
            *((_QWORD *)v73 + 45) = 0;
            v73[368] = 0;
            *((_QWORD *)v73 + 49) = 0;
            v73[400] = 0;
            *((_QWORD *)v73 + 53) = 0x800000000LL;
            *((_QWORD *)v73 + 66) = v73 + 544;
            *((_QWORD *)v73 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v44 + 32) = v73;
        }
        v73[*v73 + 1] = 2;
        v74 = *(_BYTE **)(v44 + 32);
        v75 = (unsigned __int8)*v74;
        *v74 = v75 + 1;
        *(_QWORD *)&v74[8 * v75 + 16] = v45;
      }
      else
      {
        if ( !*(_BYTE *)(v44 + 132) )
          goto LABEL_6;
        v50 = sub_168B9E0((_QWORD *)v44);
        v51 = *(_QWORD *)(v44 + 16);
        if ( v51 )
          v51 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v51 + 32LL))(*(_QWORD *)(v44 + 16));
        v119 = v51;
        v52 = *sub_1587BC0(v50, &v119, v46, v47, v48, v49) + 32LL * *(unsigned int *)(v44 + 128);
        v53 = *(unsigned __int8 **)(v52 + 8);
        if ( !v53 )
        {
          v105 = *(_QWORD *)(v52 + 16);
          v106 = *(_DWORD *)(v105 + 14976);
          if ( v106 )
          {
            v112 = (unsigned int)(v106 - 1);
            *(_DWORD *)(v105 + 14976) = v112;
            v53 = *(unsigned __int8 **)(v105 + 8 * v112 + 14848);
            v113 = *((unsigned int *)v53 + 134);
            *v53 = 0;
            v114 = *((_QWORD *)v53 + 66);
            *((_DWORD *)v53 + 106) = 0;
            v115 = v114 + (v113 << 6);
            while ( v114 != v115 )
            {
              while ( 1 )
              {
                v115 -= 64;
                v116 = *(void **)(v115 + 24);
                if ( v116 == (void *)(v115 + 40) )
                  break;
                v117 = v114;
                operator delete(v116);
                v114 = v117;
                if ( v117 == v115 )
                  goto LABEL_95;
              }
            }
LABEL_95:
            *((_DWORD *)v53 + 134) = 0;
          }
          else
          {
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
            v53[112] = 0;
            *((_QWORD *)v53 + 13) = 0;
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
            *((_QWORD *)v53 + 66) = v53 + 544;
            *((_QWORD *)v53 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v52 + 8) = v53;
        }
        v53[*v53 + 1] = 2;
        v54 = *(_BYTE **)(v52 + 8);
        v55 = (unsigned __int8)*v54;
        *v54 = v55 + 1;
        *(_QWORD *)&v54[8 * v55 + 16] = v45;
      }
      if ( *(_BYTE *)(v44 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v44 + 32), 19, 2u);
      }
      else if ( *(_BYTE *)(v44 + 132) )
      {
        v88 = sub_168B9E0((_QWORD *)v44);
        v91 = *(_QWORD *)(v44 + 16);
        if ( v91 )
          v91 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v91 + 32LL))(*(_QWORD *)(v44 + 16));
        v119 = v91;
        v92 = sub_1587BC0(v88, &v119, v86, v87, v89, v90);
        sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * *(unsigned int *)(v44 + 128) + 8), 19, 2u);
      }
      goto LABEL_6;
    }
    v12 = sub_168B6C0((__int64)a1);
    v13 = (_QWORD *)sub_168B6C0((__int64)a1);
    v16 = v13[294];
    v13[304] += 48LL;
    v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13[295] >= (unsigned __int64)&v17[3] && v16 )
      v13[294] = v17 + 3;
    else
      v17 = (__m128i *)sub_986170((__int64)(v13 + 294), 48, 48, 3, v14, v15);
    sub_B19B10(v17, v12, a3, v118);
    sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
  }
}
