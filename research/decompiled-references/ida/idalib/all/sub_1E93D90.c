__int64 __fastcall sub_1E93D90(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  char v12; // dl
  unsigned __int64 v13; // rsi
  char v14; // al
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int v19; // r12d
  unsigned __int64 v20; // rbp
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // rbx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rax
  unsigned __int8 *v25; // rbx
  _BYTE *v26; // rdx
  __int64 v27; // rax
  unsigned __int8 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int8 *v31; // rbp
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int8 *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rbp
  unsigned __int8 *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rbp
  unsigned __int8 *v74; // rbx
  _BYTE *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rbp
  __int64 v86; // r14
  __int64 v87; // rbp
  void *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // r15
  __int64 v92; // r14
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rbp
  __int64 v96; // r14
  __int64 v97; // rbp
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // r15
  __int64 v102; // r14
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // r14
  void *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // rdx
  __int64 v112; // r15
  void *v113; // rdi
  unsigned __int8 v114; // [rsp+8h] [rbp-F0h]
  __int64 v115; // [rsp+8h] [rbp-F0h]
  __int64 v116; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v117; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v118; // [rsp+20h] [rbp-D8h] BYREF
  int v119; // [rsp+28h] [rbp-D0h]
  _QWORD v120[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v122; // [rsp+50h] [rbp-A8h]
  __int64 v123; // [rsp+58h] [rbp-A0h]
  unsigned __int8 v124; // [rsp+A8h] [rbp-50h]
  unsigned int v125; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v126; // [rsp+B4h] [rbp-44h]

  result = sub_16EC930(*a1, a2, 3u, a3);
  if ( !(_BYTE)result )
  {
    v6 = *a1;
    v116 = 0;
    result = sub_1E92530(v6, a2, 0, &v116, a3);
    if ( !(_BYTE)result )
    {
      v7 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
      sub_168B6C0((__int64)a1);
      v10 = *(_QWORD *)&byte_8[v116 & 0xFFFFFFFFFFFFFFF0LL];
      v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL];
      v12 = v10 | v116;
      v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v11 | *(_QWORD *)(v7 + 8);
      v15 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v13 | v12 & 7) != (v15 | v14 & 7) )
      {
        v16 = sub_EEB7E0(v7, v13, a3);
        v17 = (unsigned __int64 *)a1;
        sub_168B9F0((__int64)v120, a1, v16, 0x1558u, 0);
        if ( v124 )
        {
          v22 = v122;
          if ( !v122 )
          {
            v41 = v123;
            v42 = *(_DWORD *)(v123 + 14976);
            if ( v42 )
            {
              v94 = (unsigned int)(v42 - 1);
              *(_DWORD *)(v123 + 14976) = v94;
              v22 = *(unsigned __int8 **)(v41 + 8 * v94 + 14848);
              v95 = *((unsigned int *)v22 + 134);
              *v22 = 0;
              v96 = *((_QWORD *)v22 + 66);
              *((_DWORD *)v22 + 106) = 0;
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
                    goto LABEL_70;
                }
              }
LABEL_70:
              *((_DWORD *)v22 + 134) = 0;
            }
            else
            {
              v22 = (unsigned __int8 *)operator new(0x3A0u);
              *v22 = 0;
              *((_QWORD *)v22 + 12) = v22 + 112;
              *((_QWORD *)v22 + 16) = v22 + 144;
              *((_QWORD *)v22 + 20) = v22 + 176;
              *((_QWORD *)v22 + 24) = v22 + 208;
              *((_QWORD *)v22 + 28) = v22 + 240;
              *((_QWORD *)v22 + 32) = v22 + 272;
              *((_QWORD *)v22 + 36) = v22 + 304;
              *((_QWORD *)v22 + 40) = v22 + 336;
              *((_QWORD *)v22 + 44) = v22 + 368;
              *((_QWORD *)v22 + 48) = v22 + 400;
              *((_QWORD *)v22 + 52) = v22 + 432;
              *((_QWORD *)v22 + 13) = 0;
              v22[112] = 0;
              *((_QWORD *)v22 + 17) = 0;
              v22[144] = 0;
              *((_QWORD *)v22 + 21) = 0;
              v22[176] = 0;
              *((_QWORD *)v22 + 25) = 0;
              v22[208] = 0;
              *((_QWORD *)v22 + 29) = 0;
              v22[240] = 0;
              *((_QWORD *)v22 + 33) = 0;
              v22[272] = 0;
              *((_QWORD *)v22 + 37) = 0;
              v22[304] = 0;
              *((_QWORD *)v22 + 41) = 0;
              v22[336] = 0;
              *((_QWORD *)v22 + 45) = 0;
              v22[368] = 0;
              *((_QWORD *)v22 + 49) = 0;
              v22[400] = 0;
              *((_QWORD *)v22 + 53) = 0x800000000LL;
              *((_QWORD *)v22 + 66) = v22 + 544;
              *((_QWORD *)v22 + 67) = 0x600000000LL;
            }
            v122 = v22;
          }
          v22[*v22 + 1] = 2;
          v23 = v122;
          v24 = *v122;
          *v122 = v24 + 1;
          *(_QWORD *)&v23[8 * v24 + 16] = 2;
        }
        else
        {
          if ( !v126 )
          {
LABEL_7:
            v18 = sub_EEC8C0(v7, (__int64)v17, a3);
            v19 = v18;
            v20 = HIDWORD(v18);
            goto LABEL_8;
          }
          v68 = sub_168B9E0(v120);
          v71 = v121;
          if ( v121 )
            v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
          v17 = &v118;
          v118 = v71;
          v72 = sub_1587BC0(v68, (__int64 *)&v118, v66, v67, v69, v70);
          v73 = *v72 + 32LL * v125;
          v74 = *(unsigned __int8 **)(v73 + 8);
          if ( !v74 )
          {
            v82 = *(_QWORD *)(v73 + 16);
            v83 = *(_DWORD *)(v82 + 14976);
            if ( v83 )
            {
              v104 = (unsigned int)(v83 - 1);
              *(_DWORD *)(v82 + 14976) = v104;
              v74 = *(unsigned __int8 **)(v82 + 8 * v104 + 14848);
              v105 = *((unsigned int *)v74 + 134);
              *v74 = 0;
              v106 = *((_QWORD *)v74 + 66);
              *((_DWORD *)v74 + 106) = 0;
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
                    goto LABEL_80;
                }
              }
LABEL_80:
              *((_DWORD *)v74 + 134) = 0;
            }
            else
            {
              v74 = (unsigned __int8 *)operator new(0x3A0u);
              *v74 = 0;
              *((_QWORD *)v74 + 12) = v74 + 112;
              *((_QWORD *)v74 + 16) = v74 + 144;
              *((_QWORD *)v74 + 20) = v74 + 176;
              *((_QWORD *)v74 + 24) = v74 + 208;
              *((_QWORD *)v74 + 28) = v74 + 240;
              *((_QWORD *)v74 + 32) = v74 + 272;
              *((_QWORD *)v74 + 36) = v74 + 304;
              *((_QWORD *)v74 + 40) = v74 + 336;
              *((_QWORD *)v74 + 44) = v74 + 368;
              *((_QWORD *)v74 + 48) = v74 + 400;
              *((_QWORD *)v74 + 52) = v74 + 432;
              *((_QWORD *)v74 + 13) = 0;
              v74[112] = 0;
              *((_QWORD *)v74 + 17) = 0;
              v74[144] = 0;
              *((_QWORD *)v74 + 21) = 0;
              v74[176] = 0;
              *((_QWORD *)v74 + 25) = 0;
              v74[208] = 0;
              *((_QWORD *)v74 + 29) = 0;
              v74[240] = 0;
              *((_QWORD *)v74 + 33) = 0;
              v74[272] = 0;
              *((_QWORD *)v74 + 37) = 0;
              v74[304] = 0;
              *((_QWORD *)v74 + 41) = 0;
              v74[336] = 0;
              *((_QWORD *)v74 + 45) = 0;
              v74[368] = 0;
              *((_QWORD *)v74 + 49) = 0;
              v74[400] = 0;
              *((_QWORD *)v74 + 53) = 0x800000000LL;
              *((_QWORD *)v74 + 66) = v74 + 544;
              *((_QWORD *)v74 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v73 + 8) = v74;
          }
          v74[*v74 + 1] = 2;
          v75 = *(_BYTE **)(v73 + 8);
          v76 = (unsigned __int8)*v75;
          *v75 = v76 + 1;
          *(_QWORD *)&v75[8 * v76 + 16] = 2;
        }
        if ( v124 )
        {
          v25 = v122;
          if ( !v122 )
          {
            v39 = v123;
            v40 = *(_DWORD *)(v123 + 14976);
            if ( v40 )
            {
              v84 = (unsigned int)(v40 - 1);
              *(_DWORD *)(v123 + 14976) = v84;
              v25 = *(unsigned __int8 **)(v39 + 8 * v84 + 14848);
              v85 = *((unsigned int *)v25 + 134);
              *v25 = 0;
              v86 = *((_QWORD *)v25 + 66);
              *((_DWORD *)v25 + 106) = 0;
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
                    goto LABEL_60;
                }
              }
LABEL_60:
              *((_DWORD *)v25 + 134) = 0;
            }
            else
            {
              v25 = (unsigned __int8 *)operator new(0x3A0u);
              *v25 = 0;
              *((_QWORD *)v25 + 12) = v25 + 112;
              *((_QWORD *)v25 + 16) = v25 + 144;
              *((_QWORD *)v25 + 20) = v25 + 176;
              *((_QWORD *)v25 + 24) = v25 + 208;
              *((_QWORD *)v25 + 28) = v25 + 240;
              *((_QWORD *)v25 + 32) = v25 + 272;
              *((_QWORD *)v25 + 36) = v25 + 304;
              *((_QWORD *)v25 + 40) = v25 + 336;
              *((_QWORD *)v25 + 44) = v25 + 368;
              *((_QWORD *)v25 + 48) = v25 + 400;
              *((_QWORD *)v25 + 52) = v25 + 432;
              *((_QWORD *)v25 + 13) = 0;
              v25[112] = 0;
              *((_QWORD *)v25 + 17) = 0;
              v25[144] = 0;
              *((_QWORD *)v25 + 21) = 0;
              v25[176] = 0;
              *((_QWORD *)v25 + 25) = 0;
              v25[208] = 0;
              *((_QWORD *)v25 + 29) = 0;
              v25[240] = 0;
              *((_QWORD *)v25 + 33) = 0;
              v25[272] = 0;
              *((_QWORD *)v25 + 37) = 0;
              v25[304] = 0;
              *((_QWORD *)v25 + 41) = 0;
              v25[336] = 0;
              *((_QWORD *)v25 + 45) = 0;
              v25[368] = 0;
              *((_QWORD *)v25 + 49) = 0;
              v25[400] = 0;
              *((_QWORD *)v25 + 53) = 0x800000000LL;
              *((_QWORD *)v25 + 66) = v25 + 544;
              *((_QWORD *)v25 + 67) = 0x600000000LL;
            }
            v122 = v25;
          }
          v25[*v25 + 1] = 2;
          v26 = v122;
        }
        else
        {
          if ( !v126 )
            goto LABEL_7;
          v59 = sub_168B9E0(v120);
          v62 = v121;
          if ( v121 )
            v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
          v17 = &v118;
          v118 = v62;
          v63 = sub_1587BC0(v59, (__int64 *)&v118, v57, v58, v60, v61);
          v64 = *v63 + 32LL * v125;
          v65 = *(unsigned __int8 **)(v64 + 8);
          if ( !v65 )
          {
            v80 = *(_QWORD *)(v64 + 16);
            v81 = *(_DWORD *)(v80 + 14976);
            if ( v81 )
            {
              v99 = (unsigned int)(v81 - 1);
              *(_DWORD *)(v80 + 14976) = v99;
              v65 = *(unsigned __int8 **)(v80 + 8 * v99 + 14848);
              v100 = *((unsigned int *)v65 + 134);
              *v65 = 0;
              v101 = *((_QWORD *)v65 + 66);
              *((_DWORD *)v65 + 106) = 0;
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
                    goto LABEL_75;
                }
              }
LABEL_75:
              *((_DWORD *)v65 + 134) = 0;
            }
            else
            {
              v65 = (unsigned __int8 *)operator new(0x3A0u);
              *v65 = 0;
              *((_QWORD *)v65 + 12) = v65 + 112;
              *((_QWORD *)v65 + 16) = v65 + 144;
              *((_QWORD *)v65 + 20) = v65 + 176;
              *((_QWORD *)v65 + 24) = v65 + 208;
              *((_QWORD *)v65 + 28) = v65 + 240;
              *((_QWORD *)v65 + 32) = v65 + 272;
              *((_QWORD *)v65 + 36) = v65 + 304;
              *((_QWORD *)v65 + 40) = v65 + 336;
              *((_QWORD *)v65 + 44) = v65 + 368;
              *((_QWORD *)v65 + 48) = v65 + 400;
              *((_QWORD *)v65 + 52) = v65 + 432;
              *((_QWORD *)v65 + 13) = 0;
              v65[112] = 0;
              *((_QWORD *)v65 + 17) = 0;
              v65[144] = 0;
              *((_QWORD *)v65 + 21) = 0;
              v65[176] = 0;
              *((_QWORD *)v65 + 25) = 0;
              v65[208] = 0;
              *((_QWORD *)v65 + 29) = 0;
              v65[240] = 0;
              *((_QWORD *)v65 + 33) = 0;
              v65[272] = 0;
              *((_QWORD *)v65 + 37) = 0;
              v65[304] = 0;
              *((_QWORD *)v65 + 41) = 0;
              v65[336] = 0;
              *((_QWORD *)v65 + 45) = 0;
              v65[368] = 0;
              *((_QWORD *)v65 + 49) = 0;
              v65[400] = 0;
              *((_QWORD *)v65 + 53) = 0x800000000LL;
              *((_QWORD *)v65 + 66) = v65 + 544;
              *((_QWORD *)v65 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v64 + 8) = v65;
          }
          v65[*v65 + 1] = 2;
          v26 = *(_BYTE **)(v64 + 8);
        }
        v27 = (unsigned __int8)*v26;
        *v26 = v27 + 1;
        *(_QWORD *)&v26[8 * v27 + 16] = 1;
        v28 = v124;
        v29 = sub_EEC8C0(v7, (__int64)v17, a3);
        v19 = v29;
        v30 = HIDWORD(v29);
        LODWORD(v20) = HIDWORD(v29);
        if ( v28 )
        {
          v31 = v122;
          if ( v122 )
          {
            v32 = *((unsigned int *)v122 + 106);
            v33 = *((unsigned int *)v122 + 107);
            v34 = v32 + 1;
          }
          else
          {
            v36 = v123;
            v37 = *(_DWORD *)(v123 + 14976);
            if ( v37 )
            {
              v89 = (unsigned int)(v37 - 1);
              *(_DWORD *)(v123 + 14976) = v89;
              v31 = *(unsigned __int8 **)(v36 + 8 * v89 + 14848);
              v90 = *((unsigned int *)v31 + 134);
              *v31 = 0;
              v91 = *((_QWORD *)v31 + 66);
              *((_DWORD *)v31 + 106) = 0;
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
                    goto LABEL_65;
                }
              }
LABEL_65:
              v32 = *((unsigned int *)v31 + 106);
              v33 = *((unsigned int *)v31 + 107);
              *((_DWORD *)v31 + 134) = 0;
              v34 = v32 + 1;
            }
            else
            {
              v38 = (unsigned __int8 *)operator new(0x3A0u);
              v33 = 8;
              v34 = 1;
              v31 = v38;
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
              v32 = 0;
            }
            v122 = v31;
          }
          v118 = __PAIR64__(v30, v19);
          LOBYTE(v119) = 1;
          if ( v34 > v33 )
          {
            sub_2237220(v31 + 416, v31 + 432, v34, 12);
            v32 = *((unsigned int *)v31 + 106);
          }
          v35 = *((_QWORD *)v31 + 52) + 12 * v32;
          *(_QWORD *)v35 = v118;
          *(_DWORD *)(v35 + 8) = v119;
          v21 = v124;
          ++*((_DWORD *)v31 + 106);
          goto LABEL_9;
        }
LABEL_8:
        v21 = v126;
        if ( v126 )
        {
          v45 = sub_168B9E0(v120);
          v48 = v121;
          if ( v121 )
            v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
          v117 = v48;
          v49 = sub_1587BC0(v45, &v117, v43, v44, v46, v47);
          v50 = *v49 + 32LL * v125;
          v51 = *(_QWORD *)(v50 + 8);
          v52 = v50;
          if ( v51 )
          {
            v53 = *(unsigned int *)(v51 + 424);
            v54 = *(unsigned int *)(v51 + 428);
            v55 = v53 + 1;
          }
          else
          {
            v77 = *(_QWORD *)(v50 + 16);
            v78 = *(_DWORD *)(v77 + 14976);
            if ( v78 )
            {
              v109 = (unsigned int)(v78 - 1);
              *(_DWORD *)(v77 + 14976) = v109;
              v51 = *(_QWORD *)(v77 + 8 * v109 + 14848);
              v110 = *(unsigned int *)(v51 + 536);
              *(_BYTE *)v51 = 0;
              v111 = *(_QWORD *)(v51 + 528);
              *(_DWORD *)(v51 + 424) = 0;
              v112 = v111 + (v110 << 6);
              while ( v111 != v112 )
              {
                while ( 1 )
                {
                  v112 -= 64;
                  v113 = *(void **)(v112 + 24);
                  if ( v113 == (void *)(v112 + 40) )
                    break;
                  v115 = v111;
                  operator delete(v113);
                  v111 = v115;
                  if ( v115 == v112 )
                    goto LABEL_85;
                }
              }
LABEL_85:
              v53 = *(unsigned int *)(v51 + 424);
              v54 = *(unsigned int *)(v51 + 428);
              *(_DWORD *)(v51 + 536) = 0;
              v55 = v53 + 1;
            }
            else
            {
              v79 = operator new(0x3A0u);
              v54 = 8;
              v55 = 1;
              v51 = v79;
              *(_BYTE *)v79 = 0;
              *(_QWORD *)(v79 + 96) = v79 + 112;
              *(_QWORD *)(v79 + 128) = v79 + 144;
              *(_QWORD *)(v79 + 160) = v79 + 176;
              *(_QWORD *)(v79 + 192) = v79 + 208;
              *(_QWORD *)(v79 + 224) = v79 + 240;
              *(_QWORD *)(v79 + 256) = v79 + 272;
              *(_QWORD *)(v79 + 288) = v79 + 304;
              *(_QWORD *)(v79 + 320) = v79 + 336;
              *(_QWORD *)(v79 + 352) = v79 + 368;
              *(_QWORD *)(v79 + 384) = v79 + 400;
              *(_QWORD *)(v79 + 416) = v79 + 432;
              *(_QWORD *)(v79 + 104) = 0;
              *(_BYTE *)(v79 + 112) = 0;
              *(_QWORD *)(v79 + 136) = 0;
              *(_BYTE *)(v79 + 144) = 0;
              *(_QWORD *)(v79 + 168) = 0;
              *(_BYTE *)(v79 + 176) = 0;
              *(_QWORD *)(v79 + 200) = 0;
              *(_BYTE *)(v79 + 208) = 0;
              *(_QWORD *)(v79 + 232) = 0;
              *(_BYTE *)(v79 + 240) = 0;
              *(_QWORD *)(v79 + 264) = 0;
              *(_BYTE *)(v79 + 272) = 0;
              *(_QWORD *)(v79 + 296) = 0;
              *(_BYTE *)(v79 + 304) = 0;
              *(_QWORD *)(v79 + 328) = 0;
              *(_BYTE *)(v79 + 336) = 0;
              *(_QWORD *)(v79 + 360) = 0;
              *(_BYTE *)(v79 + 368) = 0;
              *(_QWORD *)(v79 + 392) = 0;
              *(_BYTE *)(v79 + 400) = 0;
              *(_QWORD *)(v79 + 424) = 0x800000000LL;
              *(_QWORD *)(v79 + 528) = v79 + 544;
              *(_QWORD *)(v79 + 536) = 0x600000000LL;
              v53 = 0;
            }
            *(_QWORD *)(v52 + 8) = v51;
          }
          v118 = __PAIR64__(v20, v19);
          LOBYTE(v119) = 1;
          if ( v55 > v54 )
          {
            sub_2237220(v51 + 416, v51 + 432, v55, 12);
            v53 = *(unsigned int *)(v51 + 424);
          }
          v56 = *(_QWORD *)(v51 + 416) + 12 * v53;
          *(_QWORD *)v56 = v118;
          *(_DWORD *)(v56 + 8) = v119;
          v21 = v124;
          ++*(_DWORD *)(v51 + 424);
        }
LABEL_9:
        v114 = v21;
        sub_15F7200(v120);
        return v114;
      }
      return sub_1E930E0(*a1, a2, 2u, v15, v8, v9, a3);
    }
  }
  return result;
}
