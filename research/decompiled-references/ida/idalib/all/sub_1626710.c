__m128i *__fastcall sub_1626710(_QWORD *a1, const __m128i *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int8 *v20; // rbx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // rbx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r13
  unsigned __int8 *v40; // rbx
  _BYTE *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r12
  unsigned __int8 *v51; // rbx
  _BYTE *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // r13
  unsigned __int8 *v62; // rbx
  _BYTE *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
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
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // r12
  void *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // r13
  __int64 v92; // r12
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // r13
  __int64 v97; // r12
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r12
  __int64 v101; // r14
  __int64 v102; // r12
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // r14
  __int64 v107; // r13
  void *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r12
  __int64 v111; // r14
  __int64 v112; // r12
  void *v113; // rdi
  unsigned int v114; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v115; // [rsp+4h] [rbp-114h] BYREF
  __int64 v116; // [rsp+8h] [rbp-110h] BYREF
  __m128i v117; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v118; // [rsp+28h] [rbp-F0h]
  _BYTE v119[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v120; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v121; // [rsp+70h] [rbp-A8h]
  __int64 v122; // [rsp+78h] [rbp-A0h]
  char v123; // [rsp+C8h] [rbp-50h]
  unsigned int v124; // [rsp+D0h] [rbp-48h]
  char v125; // [rsp+D4h] [rbp-44h]

  v6 = (_QWORD *)sub_168B6C0(a1);
  sub_B071B0(&v117, (__int64)v6, a2, (__int64)a3, (__int64)a4);
  v7 = *a1;
  if ( (unsigned __int8)sub_1E534E0(*a1, a3, 0) )
    return nullptr;
  if ( a4 )
  {
    if ( (unsigned __int8)sub_1E534E0(v7, a4, 0) )
      return nullptr;
    if ( (*a3 & 0x20000) == 0 && (*a4 & 0x20000) == 0 )
    {
      v114 = 0;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, __m128i *, _DWORD *, unsigned int *, _QWORD, _QWORD))sub_16187E0)(
                               v7,
                               &v117,
                               a3,
                               &v114,
                               0,
                               0)
        || !(unsigned __int8)sub_16187E0(v7, &v117, a4, &v115, 1, 0, v114) )
      {
        return nullptr;
      }
      if ( v114 )
      {
        if ( v115 && v114 > v115 )
        {
          sub_168B9F0(v119, v7 + 8, v118, 3153, 0);
          if ( v123 )
          {
            v29 = v121;
            if ( !v121 )
            {
              v71 = v122;
              v72 = *(_DWORD *)(v122 + 14976);
              if ( v72 )
              {
                v84 = (unsigned int)(v72 - 1);
                *(_DWORD *)(v122 + 14976) = v84;
                v29 = *(unsigned __int8 **)(v71 + 8 * v84 + 14848);
                v85 = *((unsigned int *)v29 + 134);
                *v29 = 0;
                v86 = *((_QWORD *)v29 + 66);
                *((_DWORD *)v29 + 106) = 0;
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
                      goto LABEL_84;
                  }
                }
LABEL_84:
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
                v29[112] = 0;
                *((_QWORD *)v29 + 13) = 0;
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
              v121 = v29;
            }
            v29[*v29 + 1] = 14;
            v30 = v121;
            v31 = *v121;
            *v121 = v31 + 1;
            *(_QWORD *)&v30[8 * v31 + 16] = &v117;
          }
          else
          {
            if ( !v125 )
              goto LABEL_12;
            v15 = sub_168B9E0(v119);
            v18 = v120;
            if ( v120 )
              v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 32LL))(v120);
            v116 = v18;
            v19 = sub_1587BC0(v15, &v116, v13, v14, v16, v17);
            sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v124 + 8), (__int64)&v117, 0xEu);
          }
          if ( v123 )
          {
            v20 = v121;
            if ( !v121 )
            {
              v69 = v122;
              v70 = *(_DWORD *)(v122 + 14976);
              if ( v70 )
              {
                v94 = (unsigned int)(v70 - 1);
                *(_DWORD *)(v122 + 14976) = v94;
                v20 = *(unsigned __int8 **)(v69 + 8 * v94 + 14848);
                v95 = *((unsigned int *)v20 + 134);
                *v20 = 0;
                v96 = *((_QWORD *)v20 + 66);
                *((_DWORD *)v20 + 106) = 0;
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
                      goto LABEL_94;
                  }
                }
LABEL_94:
                *((_DWORD *)v20 + 134) = 0;
              }
              else
              {
                v20 = (unsigned __int8 *)operator new(0x3A0u);
                *v20 = 0;
                *((_QWORD *)v20 + 12) = v20 + 112;
                *((_QWORD *)v20 + 16) = v20 + 144;
                *((_QWORD *)v20 + 20) = v20 + 176;
                *((_QWORD *)v20 + 24) = v20 + 208;
                *((_QWORD *)v20 + 28) = v20 + 240;
                *((_QWORD *)v20 + 32) = v20 + 272;
                *((_QWORD *)v20 + 36) = v20 + 304;
                *((_QWORD *)v20 + 40) = v20 + 336;
                *((_QWORD *)v20 + 44) = v20 + 368;
                *((_QWORD *)v20 + 48) = v20 + 400;
                *((_QWORD *)v20 + 52) = v20 + 432;
                v20[112] = 0;
                *((_QWORD *)v20 + 13) = 0;
                *((_QWORD *)v20 + 17) = 0;
                v20[144] = 0;
                *((_QWORD *)v20 + 21) = 0;
                v20[176] = 0;
                *((_QWORD *)v20 + 25) = 0;
                v20[208] = 0;
                *((_QWORD *)v20 + 29) = 0;
                v20[240] = 0;
                *((_QWORD *)v20 + 33) = 0;
                v20[272] = 0;
                *((_QWORD *)v20 + 37) = 0;
                v20[304] = 0;
                *((_QWORD *)v20 + 41) = 0;
                v20[336] = 0;
                *((_QWORD *)v20 + 45) = 0;
                v20[368] = 0;
                *((_QWORD *)v20 + 49) = 0;
                v20[400] = 0;
                *((_QWORD *)v20 + 53) = 0x800000000LL;
                *((_QWORD *)v20 + 66) = v20 + 544;
                *((_QWORD *)v20 + 67) = 0x600000000LL;
              }
              v121 = v20;
            }
            v20[*v20 + 1] = 2;
            v21 = v121;
            v22 = *v121;
            *v121 = v22 + 1;
            *(_QWORD *)&v21[8 * v22 + 16] = 1;
          }
          else if ( v125 )
          {
            v56 = sub_168B9E0(v119);
            v59 = v120;
            if ( v120 )
              v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 32LL))(v120);
            v116 = v59;
            v60 = sub_1587BC0(v56, &v116, v54, v55, v57, v58);
            v61 = *v60 + 32LL * v124;
            v62 = *(unsigned __int8 **)(v61 + 8);
            if ( !v62 )
            {
              v77 = *(_QWORD *)(v61 + 16);
              v78 = *(_DWORD *)(v77 + 14976);
              if ( v78 )
              {
                v109 = (unsigned int)(v78 - 1);
                *(_DWORD *)(v77 + 14976) = v109;
                v62 = *(unsigned __int8 **)(v77 + 8 * v109 + 14848);
                v110 = *((unsigned int *)v62 + 134);
                *v62 = 0;
                v111 = *((_QWORD *)v62 + 66);
                *((_DWORD *)v62 + 106) = 0;
                v112 = v111 + (v110 << 6);
                while ( v111 != v112 )
                {
                  while ( 1 )
                  {
                    v112 -= 64;
                    v113 = *(void **)(v112 + 24);
                    if ( v113 == (void *)(v112 + 40) )
                      break;
                    operator delete(v113);
                    if ( v111 == v112 )
                      goto LABEL_109;
                  }
                }
LABEL_109:
                *((_DWORD *)v62 + 134) = 0;
              }
              else
              {
                v62 = (unsigned __int8 *)operator new(0x3A0u);
                *v62 = 0;
                *((_QWORD *)v62 + 12) = v62 + 112;
                *((_QWORD *)v62 + 16) = v62 + 144;
                *((_QWORD *)v62 + 20) = v62 + 176;
                *((_QWORD *)v62 + 24) = v62 + 208;
                *((_QWORD *)v62 + 28) = v62 + 240;
                *((_QWORD *)v62 + 32) = v62 + 272;
                *((_QWORD *)v62 + 36) = v62 + 304;
                *((_QWORD *)v62 + 40) = v62 + 336;
                *((_QWORD *)v62 + 44) = v62 + 368;
                *((_QWORD *)v62 + 48) = v62 + 400;
                *((_QWORD *)v62 + 52) = v62 + 432;
                v62[112] = 0;
                *((_QWORD *)v62 + 13) = 0;
                *((_QWORD *)v62 + 17) = 0;
                v62[144] = 0;
                *((_QWORD *)v62 + 21) = 0;
                v62[176] = 0;
                *((_QWORD *)v62 + 25) = 0;
                v62[208] = 0;
                *((_QWORD *)v62 + 29) = 0;
                v62[240] = 0;
                *((_QWORD *)v62 + 33) = 0;
                v62[272] = 0;
                *((_QWORD *)v62 + 37) = 0;
                v62[304] = 0;
                *((_QWORD *)v62 + 41) = 0;
                v62[336] = 0;
                *((_QWORD *)v62 + 45) = 0;
                v62[368] = 0;
                *((_QWORD *)v62 + 49) = 0;
                v62[400] = 0;
                *((_QWORD *)v62 + 53) = 0x800000000LL;
                *((_QWORD *)v62 + 66) = v62 + 544;
                *((_QWORD *)v62 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v61 + 8) = v62;
            }
            v62[*v62 + 1] = 2;
            v63 = *(_BYTE **)(v61 + 8);
            v64 = (unsigned __int8)*v63;
            *v63 = v64 + 1;
            *(_QWORD *)&v63[8 * v64 + 16] = 1;
          }
          goto LABEL_12;
        }
      }
      else if ( v115 )
      {
        sub_168B9F0(v119, v7 + 8, v118, 3153, 0);
        if ( v123 )
        {
          v23 = v121;
          if ( !v121 )
          {
            v67 = v122;
            v68 = *(_DWORD *)(v122 + 14976);
            if ( v68 )
            {
              v79 = (unsigned int)(v68 - 1);
              *(_DWORD *)(v122 + 14976) = v79;
              v23 = *(unsigned __int8 **)(v67 + 8 * v79 + 14848);
              v80 = *((unsigned int *)v23 + 134);
              *v23 = 0;
              v81 = *((_QWORD *)v23 + 66);
              *((_DWORD *)v23 + 106) = 0;
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
                    goto LABEL_79;
                }
              }
LABEL_79:
              *((_DWORD *)v23 + 134) = 0;
            }
            else
            {
              v23 = (unsigned __int8 *)operator new(0x3A0u);
              *v23 = 0;
              *((_QWORD *)v23 + 12) = v23 + 112;
              *((_QWORD *)v23 + 16) = v23 + 144;
              *((_QWORD *)v23 + 20) = v23 + 176;
              *((_QWORD *)v23 + 24) = v23 + 208;
              *((_QWORD *)v23 + 28) = v23 + 240;
              *((_QWORD *)v23 + 32) = v23 + 272;
              *((_QWORD *)v23 + 36) = v23 + 304;
              *((_QWORD *)v23 + 40) = v23 + 336;
              *((_QWORD *)v23 + 44) = v23 + 368;
              *((_QWORD *)v23 + 48) = v23 + 400;
              *((_QWORD *)v23 + 52) = v23 + 432;
              v23[112] = 0;
              *((_QWORD *)v23 + 13) = 0;
              *((_QWORD *)v23 + 17) = 0;
              v23[144] = 0;
              *((_QWORD *)v23 + 21) = 0;
              v23[176] = 0;
              *((_QWORD *)v23 + 25) = 0;
              v23[208] = 0;
              *((_QWORD *)v23 + 29) = 0;
              v23[240] = 0;
              *((_QWORD *)v23 + 33) = 0;
              v23[272] = 0;
              *((_QWORD *)v23 + 37) = 0;
              v23[304] = 0;
              *((_QWORD *)v23 + 41) = 0;
              v23[336] = 0;
              *((_QWORD *)v23 + 45) = 0;
              v23[368] = 0;
              *((_QWORD *)v23 + 49) = 0;
              v23[400] = 0;
              *((_QWORD *)v23 + 53) = 0x800000000LL;
              *((_QWORD *)v23 + 66) = v23 + 544;
              *((_QWORD *)v23 + 67) = 0x600000000LL;
            }
            v121 = v23;
          }
          v23[*v23 + 1] = 14;
          v24 = v121;
          v25 = *v121;
          *v121 = v25 + 1;
          *(_QWORD *)&v24[8 * v25 + 16] = &v117;
        }
        else
        {
          if ( !v125 )
          {
LABEL_12:
            sub_15F7200(v119);
            return nullptr;
          }
          v34 = sub_168B9E0(v119);
          v37 = v120;
          if ( v120 )
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 32LL))(v120);
          v116 = v37;
          v38 = sub_1587BC0(v34, &v116, v32, v33, v35, v36);
          v39 = *v38 + 32LL * v124;
          v40 = *(unsigned __int8 **)(v39 + 8);
          if ( !v40 )
          {
            v75 = *(_QWORD *)(v39 + 16);
            v76 = *(_DWORD *)(v75 + 14976);
            if ( v76 )
            {
              v99 = (unsigned int)(v76 - 1);
              *(_DWORD *)(v75 + 14976) = v99;
              v40 = *(unsigned __int8 **)(v75 + 8 * v99 + 14848);
              v100 = *((unsigned int *)v40 + 134);
              *v40 = 0;
              v101 = *((_QWORD *)v40 + 66);
              *((_DWORD *)v40 + 106) = 0;
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
                    goto LABEL_99;
                }
              }
LABEL_99:
              *((_DWORD *)v40 + 134) = 0;
            }
            else
            {
              v40 = (unsigned __int8 *)operator new(0x3A0u);
              *v40 = 0;
              *((_QWORD *)v40 + 12) = v40 + 112;
              *((_QWORD *)v40 + 16) = v40 + 144;
              *((_QWORD *)v40 + 20) = v40 + 176;
              *((_QWORD *)v40 + 24) = v40 + 208;
              *((_QWORD *)v40 + 28) = v40 + 240;
              *((_QWORD *)v40 + 32) = v40 + 272;
              *((_QWORD *)v40 + 36) = v40 + 304;
              *((_QWORD *)v40 + 40) = v40 + 336;
              *((_QWORD *)v40 + 44) = v40 + 368;
              *((_QWORD *)v40 + 48) = v40 + 400;
              *((_QWORD *)v40 + 52) = v40 + 432;
              v40[112] = 0;
              *((_QWORD *)v40 + 13) = 0;
              *((_QWORD *)v40 + 17) = 0;
              v40[144] = 0;
              *((_QWORD *)v40 + 21) = 0;
              v40[176] = 0;
              *((_QWORD *)v40 + 25) = 0;
              v40[208] = 0;
              *((_QWORD *)v40 + 29) = 0;
              v40[240] = 0;
              *((_QWORD *)v40 + 33) = 0;
              v40[272] = 0;
              *((_QWORD *)v40 + 37) = 0;
              v40[304] = 0;
              *((_QWORD *)v40 + 41) = 0;
              v40[336] = 0;
              *((_QWORD *)v40 + 45) = 0;
              v40[368] = 0;
              *((_QWORD *)v40 + 49) = 0;
              v40[400] = 0;
              *((_QWORD *)v40 + 53) = 0x800000000LL;
              *((_QWORD *)v40 + 66) = v40 + 544;
              *((_QWORD *)v40 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v39 + 8) = v40;
          }
          v40[*v40 + 1] = 14;
          v41 = *(_BYTE **)(v39 + 8);
          v42 = (unsigned __int8)*v41;
          *v41 = v42 + 1;
          *(_QWORD *)&v41[8 * v42 + 16] = &v117;
        }
        if ( v123 )
        {
          v26 = v121;
          if ( !v121 )
          {
            v65 = v122;
            v66 = *(_DWORD *)(v122 + 14976);
            if ( v66 )
            {
              v89 = (unsigned int)(v66 - 1);
              *(_DWORD *)(v122 + 14976) = v89;
              v26 = *(unsigned __int8 **)(v65 + 8 * v89 + 14848);
              v90 = *((unsigned int *)v26 + 134);
              *v26 = 0;
              v91 = *((_QWORD *)v26 + 66);
              *((_DWORD *)v26 + 106) = 0;
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
                    goto LABEL_89;
                }
              }
LABEL_89:
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
              v26[112] = 0;
              *((_QWORD *)v26 + 13) = 0;
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
            v121 = v26;
          }
          v26[*v26 + 1] = 2;
          v27 = v121;
          v28 = *v121;
          *v121 = v28 + 1;
          *(_QWORD *)&v27[8 * v28 + 16] = 0;
        }
        else if ( v125 )
        {
          v45 = sub_168B9E0(v119);
          v48 = v120;
          if ( v120 )
            v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 32LL))(v120);
          v116 = v48;
          v49 = sub_1587BC0(v45, &v116, v43, v44, v46, v47);
          v50 = *v49 + 32LL * v124;
          v51 = *(unsigned __int8 **)(v50 + 8);
          if ( !v51 )
          {
            v73 = *(_QWORD *)(v50 + 16);
            v74 = *(_DWORD *)(v73 + 14976);
            if ( v74 )
            {
              v104 = (unsigned int)(v74 - 1);
              *(_DWORD *)(v73 + 14976) = v104;
              v51 = *(unsigned __int8 **)(v73 + 8 * v104 + 14848);
              v105 = *((unsigned int *)v51 + 134);
              *v51 = 0;
              v106 = *((_QWORD *)v51 + 66);
              *((_DWORD *)v51 + 106) = 0;
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
                    goto LABEL_104;
                }
              }
LABEL_104:
              *((_DWORD *)v51 + 134) = 0;
            }
            else
            {
              v51 = (unsigned __int8 *)operator new(0x3A0u);
              *v51 = 0;
              *((_QWORD *)v51 + 12) = v51 + 112;
              *((_QWORD *)v51 + 16) = v51 + 144;
              *((_QWORD *)v51 + 20) = v51 + 176;
              *((_QWORD *)v51 + 24) = v51 + 208;
              *((_QWORD *)v51 + 28) = v51 + 240;
              *((_QWORD *)v51 + 32) = v51 + 272;
              *((_QWORD *)v51 + 36) = v51 + 304;
              *((_QWORD *)v51 + 40) = v51 + 336;
              *((_QWORD *)v51 + 44) = v51 + 368;
              *((_QWORD *)v51 + 48) = v51 + 400;
              *((_QWORD *)v51 + 52) = v51 + 432;
              v51[112] = 0;
              *((_QWORD *)v51 + 13) = 0;
              *((_QWORD *)v51 + 17) = 0;
              v51[144] = 0;
              *((_QWORD *)v51 + 21) = 0;
              v51[176] = 0;
              *((_QWORD *)v51 + 25) = 0;
              v51[208] = 0;
              *((_QWORD *)v51 + 29) = 0;
              v51[240] = 0;
              *((_QWORD *)v51 + 33) = 0;
              v51[272] = 0;
              *((_QWORD *)v51 + 37) = 0;
              v51[304] = 0;
              *((_QWORD *)v51 + 41) = 0;
              v51[336] = 0;
              *((_QWORD *)v51 + 45) = 0;
              v51[368] = 0;
              *((_QWORD *)v51 + 49) = 0;
              v51[400] = 0;
              *((_QWORD *)v51 + 53) = 0x800000000LL;
              *((_QWORD *)v51 + 66) = v51 + 544;
              *((_QWORD *)v51 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v50 + 8) = v51;
          }
          v51[*v51 + 1] = 2;
          v52 = *(_BYTE **)(v50 + 8);
          v53 = (unsigned __int8)*v52;
          *v52 = v53 + 1;
          *(_QWORD *)&v52[8 * v53 + 16] = 0;
        }
        goto LABEL_12;
      }
    }
  }
  else if ( (*a3 & 0x20000) == 0 )
  {
    v114 = 0;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, __m128i *, _DWORD *, unsigned int *, _QWORD, _QWORD))sub_16187E0)(
                             v7,
                             &v117,
                             a3,
                             &v114,
                             0,
                             0) )
      return nullptr;
  }
  v12 = v6[294];
  v6[304] += 56LL;
  v10 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6[295] >= (unsigned __int64)&v10[3].m128i_u64[1] && v12 )
    v6[294] = (char *)v10 + 56;
  else
    v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 56, 56, 3, v8, v9);
  sub_B071B0(v10, (__int64)v6, a2, (__int64)a3, (__int64)a4);
  return v10;
}
