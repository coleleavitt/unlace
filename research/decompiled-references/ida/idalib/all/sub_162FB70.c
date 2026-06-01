void __fastcall sub_162FB70(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  bool v10; // al
  unsigned int v11; // ebp
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __m128i *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 *v24; // r12
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // rbx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  unsigned __int8 *v30; // rbx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r13
  unsigned __int8 *v41; // r12
  _BYTE *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // r12
  unsigned __int8 *v52; // rbx
  _BYTE *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r12
  unsigned __int8 *v63; // rbx
  _BYTE *v64; // rdx
  __int64 v65; // rax
  unsigned int *v66; // rax
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // r12
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r14
  __int64 v87; // r13
  void *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // r13
  __int64 v92; // r12
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // r13
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // r15
  __int64 v102; // r14
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // r14
  __int64 v107; // r13
  void *v108; // rdi
  unsigned __int64 v109; // [rsp+0h] [rbp-E8h]
  _WORD *v110; // [rsp+8h] [rbp-E0h]
  __int64 v111; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v112[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v114; // [rsp+40h] [rbp-A8h]
  __int64 v115; // [rsp+48h] [rbp-A0h]
  char v116; // [rsp+98h] [rbp-50h]
  unsigned int v117; // [rsp+A0h] [rbp-48h]
  char v118; // [rsp+A4h] [rbp-44h]

  v5 = sub_168B6C0(a1);
  if ( !a3[3].m128i_i16[4] || (v6 = (_QWORD *)v5, v7 = a3[5].m128i_i64[0], (v7 & 2) == 0) )
  {
    sub_168B9F0(v112, a1, a3[1].m128i_u32[2], 3155, 0);
    if ( v116 )
    {
      v24 = v114;
      if ( !v114 )
      {
        v69 = v115;
        v70 = *(_DWORD *)(v115 + 14976);
        if ( v70 )
        {
          v84 = (unsigned int)(v70 - 1);
          *(_DWORD *)(v115 + 14976) = v84;
          v24 = *(unsigned __int8 **)(v69 + 8 * v84 + 14848);
          v85 = *((unsigned int *)v24 + 134);
          v86 = *((_QWORD *)v24 + 66);
          *v24 = 0;
          *((_DWORD *)v24 + 106) = 0;
          v87 = v86 + (v85 << 6);
          while ( v86 != v87 )
          {
            while ( 1 )
            {
              v87 -= 64;
              v88 = *(void **)(v87 + 24);
              if ( v88 == (void *)(v87 + 40) )
                break;
              operator delete(v88);
              if ( v86 == v87 )
                goto LABEL_73;
            }
          }
LABEL_73:
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
        v114 = v24;
      }
      v24[*v24 + 1] = 16;
      v25 = v114;
      v26 = *v114;
      *v114 = v26 + 1;
      *(_QWORD *)&v25[8 * v26 + 16] = a3;
      if ( !v116 )
        goto LABEL_28;
    }
    else
    {
      if ( !v118 )
      {
LABEL_5:
        sub_15F7200(v112);
        return;
      }
      v37 = sub_168B9E0(v112);
      v38 = v113;
      if ( v113 )
        v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v111 = v38;
      v39 = sub_1587BC0(v37, &v111, v33, v34, v35, v36);
      v40 = *v39 + 32LL * v117;
      v41 = *(unsigned __int8 **)(v40 + 8);
      if ( !v41 )
      {
        v77 = *(_QWORD *)(v40 + 16);
        v78 = *(_DWORD *)(v77 + 14976);
        if ( v78 )
        {
          v99 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v77 + 14976) = v99;
          v41 = *(unsigned __int8 **)(v77 + 8 * v99 + 14848);
          v100 = *((unsigned int *)v41 + 134);
          v101 = *((_QWORD *)v41 + 66);
          *v41 = 0;
          *((_DWORD *)v41 + 106) = 0;
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
                goto LABEL_88;
            }
          }
LABEL_88:
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
      v41[*v41 + 1] = 16;
      v42 = *(_BYTE **)(v40 + 8);
      v43 = (unsigned __int8)*v42;
      *v42 = v43 + 1;
      *(_QWORD *)&v42[8 * v43 + 16] = a3;
      if ( !v116 )
      {
LABEL_28:
        if ( !v118 )
          goto LABEL_5;
        v46 = sub_168B9E0(v112);
        v49 = v113;
        if ( v113 )
          v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
        v111 = v49;
        v50 = sub_1587BC0(v46, &v111, v44, v45, v47, v48);
        v51 = *v50 + 32LL * v117;
        v52 = *(unsigned __int8 **)(v51 + 8);
        if ( !v52 )
        {
          v75 = *(_QWORD *)(v51 + 16);
          v76 = *(_DWORD *)(v75 + 14976);
          if ( v76 )
          {
            v104 = (unsigned int)(v76 - 1);
            *(_DWORD *)(v75 + 14976) = v104;
            v52 = *(unsigned __int8 **)(v75 + 8 * v104 + 14848);
            v105 = *((unsigned int *)v52 + 134);
            *v52 = 0;
            v106 = *((_QWORD *)v52 + 66);
            *((_DWORD *)v52 + 106) = 0;
            v107 = v106 + (v105 << 6);
            while ( v106 != v107 )
            {
              while ( 1 )
              {
                v107 -= 64;
                v108 = *(void **)(v107 + 24);
                if ( v108 == (void *)(v107 + 40) )
                  break;
                operator delete(v108);
                if ( v106 == v107 )
                  goto LABEL_93;
              }
            }
LABEL_93:
            *((_DWORD *)v52 + 134) = 0;
          }
          else
          {
            v52 = (unsigned __int8 *)operator new(0x3A0u);
            *v52 = 0;
            *((_QWORD *)v52 + 12) = v52 + 112;
            *((_QWORD *)v52 + 16) = v52 + 144;
            *((_QWORD *)v52 + 20) = v52 + 176;
            *((_QWORD *)v52 + 24) = v52 + 208;
            *((_QWORD *)v52 + 28) = v52 + 240;
            *((_QWORD *)v52 + 32) = v52 + 272;
            *((_QWORD *)v52 + 36) = v52 + 304;
            *((_QWORD *)v52 + 40) = v52 + 336;
            *((_QWORD *)v52 + 44) = v52 + 368;
            *((_QWORD *)v52 + 48) = v52 + 400;
            *((_QWORD *)v52 + 52) = v52 + 432;
            *((_QWORD *)v52 + 13) = 0;
            v52[112] = 0;
            *((_QWORD *)v52 + 17) = 0;
            v52[144] = 0;
            *((_QWORD *)v52 + 21) = 0;
            v52[176] = 0;
            *((_QWORD *)v52 + 25) = 0;
            v52[208] = 0;
            *((_QWORD *)v52 + 29) = 0;
            v52[240] = 0;
            *((_QWORD *)v52 + 33) = 0;
            v52[272] = 0;
            *((_QWORD *)v52 + 37) = 0;
            v52[304] = 0;
            *((_QWORD *)v52 + 41) = 0;
            v52[336] = 0;
            *((_QWORD *)v52 + 45) = 0;
            v52[368] = 0;
            *((_QWORD *)v52 + 49) = 0;
            v52[400] = 0;
            *((_QWORD *)v52 + 53) = 0x800000000LL;
            *((_QWORD *)v52 + 66) = v52 + 544;
            *((_QWORD *)v52 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v51 + 8) = v52;
        }
        v52[*v52 + 1] = 2;
        v53 = *(_BYTE **)(v51 + 8);
        v54 = (unsigned __int8)*v53;
        *v53 = v54 + 1;
        *(_QWORD *)&v53[8 * v54 + 16] = 1;
        if ( !v116 )
        {
LABEL_33:
          if ( v118 )
          {
            v57 = sub_168B9E0(v112);
            v60 = v113;
            if ( v113 )
              v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
            v111 = v60;
            v61 = sub_1587BC0(v57, &v111, v55, v56, v58, v59);
            v62 = *v61 + 32LL * v117;
            v63 = *(unsigned __int8 **)(v62 + 8);
            if ( !v63 )
            {
              v73 = *(_QWORD *)(v62 + 16);
              v74 = *(_DWORD *)(v73 + 14976);
              if ( v74 )
              {
                v94 = (unsigned int)(v74 - 1);
                *(_DWORD *)(v73 + 14976) = v94;
                v63 = *(unsigned __int8 **)(v73 + 8 * v94 + 14848);
                v95 = *((unsigned int *)v63 + 134);
                *v63 = 0;
                v96 = *((_QWORD *)v63 + 66);
                *((_DWORD *)v63 + 106) = 0;
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
                      goto LABEL_83;
                  }
                }
LABEL_83:
                *((_DWORD *)v63 + 134) = 0;
              }
              else
              {
                v63 = (unsigned __int8 *)operator new(0x3A0u);
                *v63 = 0;
                *((_QWORD *)v63 + 12) = v63 + 112;
                *((_QWORD *)v63 + 16) = v63 + 144;
                *((_QWORD *)v63 + 20) = v63 + 176;
                *((_QWORD *)v63 + 24) = v63 + 208;
                *((_QWORD *)v63 + 28) = v63 + 240;
                *((_QWORD *)v63 + 32) = v63 + 272;
                *((_QWORD *)v63 + 36) = v63 + 304;
                *((_QWORD *)v63 + 40) = v63 + 336;
                *((_QWORD *)v63 + 44) = v63 + 368;
                *((_QWORD *)v63 + 48) = v63 + 400;
                *((_QWORD *)v63 + 52) = v63 + 432;
                *((_QWORD *)v63 + 13) = 0;
                v63[112] = 0;
                *((_QWORD *)v63 + 17) = 0;
                v63[144] = 0;
                *((_QWORD *)v63 + 21) = 0;
                v63[176] = 0;
                *((_QWORD *)v63 + 25) = 0;
                v63[208] = 0;
                *((_QWORD *)v63 + 29) = 0;
                v63[240] = 0;
                *((_QWORD *)v63 + 33) = 0;
                v63[272] = 0;
                *((_QWORD *)v63 + 37) = 0;
                v63[304] = 0;
                *((_QWORD *)v63 + 41) = 0;
                v63[336] = 0;
                *((_QWORD *)v63 + 45) = 0;
                v63[368] = 0;
                *((_QWORD *)v63 + 49) = 0;
                v63[400] = 0;
                *((_QWORD *)v63 + 53) = 0x800000000LL;
                *((_QWORD *)v63 + 66) = v63 + 544;
                *((_QWORD *)v63 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v62 + 8) = v63;
            }
            v63[*v63 + 1] = 2;
            v64 = *(_BYTE **)(v62 + 8);
            v65 = (unsigned __int8)*v64;
            *v64 = v65 + 1;
            *(_QWORD *)&v64[8 * v65 + 16] = 3;
          }
          goto LABEL_5;
        }
LABEL_22:
        v30 = v114;
        if ( !v114 )
        {
          v67 = v115;
          v68 = *(_DWORD *)(v115 + 14976);
          if ( v68 )
          {
            v79 = (unsigned int)(v68 - 1);
            *(_DWORD *)(v115 + 14976) = v79;
            v30 = *(unsigned __int8 **)(v67 + 8 * v79 + 14848);
            v80 = *((unsigned int *)v30 + 134);
            *v30 = 0;
            v81 = *((_QWORD *)v30 + 66);
            *((_DWORD *)v30 + 106) = 0;
            v82 = v81 + (v80 << 6);
            while ( v81 != v82 )
            {
              while ( 1 )
              {
                v82 -= 64;
                v83 = *(void **)(v82 + 24);
                if ( v83 == (void *)(v82 + 40) )
                  break;
                operator delete(v83);
                if ( v81 == v82 )
                  goto LABEL_68;
              }
            }
LABEL_68:
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
          v114 = v30;
        }
        v30[*v30 + 1] = 2;
        v31 = v114;
        v32 = *v114;
        *v114 = v32 + 1;
        *(_QWORD *)&v31[8 * v32 + 16] = 3;
        goto LABEL_5;
      }
    }
    v27 = v114;
    if ( !v114 )
    {
      v71 = v115;
      v72 = *(_DWORD *)(v115 + 14976);
      if ( v72 )
      {
        v89 = (unsigned int)(v72 - 1);
        *(_DWORD *)(v115 + 14976) = v89;
        v27 = *(unsigned __int8 **)(v71 + 8 * v89 + 14848);
        v90 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v91 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
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
              goto LABEL_78;
          }
        }
LABEL_78:
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
      v114 = v27;
    }
    v27[*v27 + 1] = 2;
    v28 = v114;
    v29 = *v114;
    *v114 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = 1;
    if ( !v116 )
      goto LABEL_33;
    goto LABEL_22;
  }
  v8 = *(_DWORD **)((v7 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v9 = (unsigned __int16)(*v8 >> 9);
  if ( v9 <= 0x23 || (v10 = v9 != 65534, v11 = v9 - 36, !v10) )
    v11 = 0;
  v12 = *(_QWORD *)(a2 + 40);
  if ( (v12 & 7) != 0 )
    BUG();
  if ( (unsigned int)(*(_DWORD *)(v6[2181] + 248LL) - 3) > 2 )
  {
    v66 = *(unsigned int **)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v110 = v66 + 4;
    v109 = *v66;
    if ( !(unsigned __int8)sub_16284D0(v11, (_WORD *)v66 + 8, v109, dword_2636540, 2481, (__int64)&unk_262C060)
      && !(unsigned __int8)sub_16284D0(v11, v110, v109, dword_262B900, 156, (__int64)&unk_262B000) )
    {
LABEL_41:
      sub_168B9F0(v112, a1, a3[1].m128i_u32[2], 3160, 0);
      sub_15F7200(v112);
      return;
    }
  }
  else
  {
    v13 = *(_DWORD *)(*(_QWORD *)(sub_168B6C0(a1) + 17520) + 168LL);
    v16 = v11;
    if ( v11 >= v13 + 1499 )
      v16 = v11 - *(_DWORD *)(*(_QWORD *)(sub_168B6C0(a1) + 17520) + 168LL);
    if ( v16 - 2698 > 0x1FBD )
    {
      if ( v11 >= *(_DWORD *)(*(_QWORD *)(sub_168B6C0(a1) + 17520) + 168LL) + 1499 )
        v11 -= *(_DWORD *)(*(_QWORD *)(sub_168B6C0(a1) + 17520) + 168LL);
      if ( v11 - 10824 > 0x43E )
        goto LABEL_41;
    }
  }
  v17 = v6[294];
  v6[304] += 48LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6[295] >= v18 + 48 && v17 )
  {
    v6[294] = v18 + 48;
    v19 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v19 = (__m128i *)sub_986170((__int64)(v6 + 294), 48, 48, 3, v14, v15);
  }
  sub_B0A440(v19, (__int64)v6, a3, (__int64)v8);
  sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
}
