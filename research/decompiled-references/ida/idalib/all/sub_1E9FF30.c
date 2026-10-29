void __fastcall sub_1E9FF30(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __m128i *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  bool v30; // bl
  unsigned __int8 *v31; // r12
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  unsigned __int8 *v34; // rbx
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // r13
  unsigned __int8 *v45; // r12
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r12
  unsigned __int8 *v56; // rbx
  _BYTE *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r12
  __int64 v64; // rax
  _BOOL8 v65; // r14
  _QWORD *v66; // rax
  __int64 v67; // r13
  unsigned __int8 *v68; // r12
  _BYTE *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 v86; // r13
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // r12
  void *v92; // rdi
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
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // r14
  __int64 v106; // r13
  void *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // rbx
  void *v112; // rdi
  __int64 v113; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v114[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v115; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v116; // [rsp+30h] [rbp-A8h]
  __int64 v117; // [rsp+38h] [rbp-A0h]
  char v118; // [rsp+88h] [rbp-50h]
  unsigned int v119; // [rsp+90h] [rbp-48h]
  char v120; // [rsp+94h] [rbp-44h]

  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v5 - 26) <= 0x1A )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v6 + 16) == 42 )
      goto LABEL_3;
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v7 + 16) != 42 )
      goto LABEL_18;
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, v7);
    if ( v6 )
    {
LABEL_3:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        return;
    }
    LODWORD(v5) = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  if ( (unsigned int)(v5 - 64) <= 2 )
  {
    v8 = *(_QWORD *)(a2 + 80);
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = (v8 >> 2) & 1;
    if ( (_DWORD)v10 )
      v11 = v9[1];
    else
      v11 = *v9;
    v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v13 = *(_QWORD *)v12;
    if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) == 42 )
      goto LABEL_12;
    v26 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v26 + 16) != 42 )
      goto LABEL_14;
    v13 = sub_F63050(v13, a2, v9, v26);
    if ( v13 )
    {
LABEL_12:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        return;
    }
    v14 = *(_QWORD *)(a2 + 80);
    v9 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = (v14 >> 2) & 1;
LABEL_14:
    if ( v10 )
      v15 = v9[1];
    else
      v15 = *v9;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
      return;
    LODWORD(v5) = *(_BYTE *)(a2 + 28) & 0x7F;
  }
LABEL_18:
  if ( (unsigned int)(v5 - 34) > 5 )
  {
    sub_168B9F0((__int64)v114, a1, a3[1].m128i_u32[2], 0x19C6u, 0);
    if ( v118 )
    {
      v27 = v116;
      if ( !v116 )
      {
        v75 = v117;
        v76 = *(_DWORD *)(v117 + 14976);
        if ( v76 )
        {
          v83 = (unsigned int)(v76 - 1);
          *(_DWORD *)(v117 + 14976) = v83;
          v27 = *(unsigned __int8 **)(v75 + 8 * v83 + 14848);
          v84 = *((unsigned int *)v27 + 134);
          v85 = *((_QWORD *)v27 + 66);
          *v27 = 0;
          *((_DWORD *)v27 + 106) = 0;
          v86 = v85 + (v84 << 6);
          while ( v85 != v86 )
          {
            while ( 1 )
            {
              v86 -= 64;
              v87 = *(void **)(v86 + 24);
              if ( v87 == (void *)(v86 + 40) )
                break;
              operator delete(v87);
              if ( v85 == v86 )
                goto LABEL_76;
            }
          }
LABEL_76:
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
        v116 = v27;
      }
      v27[*v27 + 1] = 16;
      v28 = v116;
      v29 = *v116;
      *v116 = v29 + 1;
      *(_QWORD *)&v28[8 * v29 + 16] = a3;
    }
    else
    {
      if ( !v120 )
      {
LABEL_29:
        sub_15F7200(v114);
        return;
      }
      v41 = sub_168B9E0(v114);
      v42 = v115;
      if ( v115 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v115 + 32LL))(v115);
      v113 = v42;
      v43 = sub_1587BC0(v41, &v113, v37, v38, v39, v40);
      v44 = *v43 + 32LL * v119;
      v45 = *(unsigned __int8 **)(v44 + 8);
      if ( !v45 )
      {
        v79 = *(_QWORD *)(v44 + 16);
        v80 = *(_DWORD *)(v79 + 14976);
        if ( v80 )
        {
          v98 = (unsigned int)(v80 - 1);
          *(_DWORD *)(v79 + 14976) = v98;
          v45 = *(unsigned __int8 **)(v79 + 8 * v98 + 14848);
          v99 = *((unsigned int *)v45 + 134);
          v100 = *((_QWORD *)v45 + 66);
          *v45 = 0;
          *((_DWORD *)v45 + 106) = 0;
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
                goto LABEL_91;
            }
          }
LABEL_91:
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
      v45[*v45 + 1] = 16;
      v46 = *(_BYTE **)(v44 + 8);
      v47 = (unsigned __int8)*v46;
      *v46 = v47 + 1;
      *(_QWORD *)&v46[8 * v47 + 16] = a3;
    }
    v30 = (a3[2].m128i_i8[3] & 2) != 0;
    if ( v118 )
    {
      v31 = v116;
      if ( !v116 )
      {
        v73 = v117;
        v74 = *(_DWORD *)(v117 + 14976);
        if ( v74 )
        {
          v93 = (unsigned int)(v74 - 1);
          *(_DWORD *)(v117 + 14976) = v93;
          v31 = *(unsigned __int8 **)(v73 + 8 * v93 + 14848);
          v94 = *((unsigned int *)v31 + 134);
          v95 = *((_QWORD *)v31 + 66);
          *v31 = 0;
          *((_DWORD *)v31 + 106) = 0;
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
                goto LABEL_86;
            }
          }
LABEL_86:
          *((_DWORD *)v31 + 134) = 0;
        }
        else
        {
          v31 = (unsigned __int8 *)operator new(0x3A0u);
          *v31 = 0;
          *((_QWORD *)v31 + 12) = v31 + 112;
          *((_QWORD *)v31 + 16) = v31 + 144;
          *((_QWORD *)v31 + 20) = v31 + 176;
          *((_QWORD *)v31 + 24) = v31 + 208;
          *((_QWORD *)v31 + 28) = v31 + 240;
          *((_QWORD *)v31 + 32) = v31 + 272;
          *((_QWORD *)v31 + 36) = v31 + 304;
          *((_QWORD *)v31 + 40) = v31 + 336;
          *((_QWORD *)v31 + 44) = v31 + 368;
          *((_QWORD *)v31 + 48) = v31 + 400;
          *((_QWORD *)v31 + 52) = v31 + 432;
          *((_QWORD *)v31 + 13) = 0;
          v31[112] = 0;
          *((_QWORD *)v31 + 17) = 0;
          v31[144] = 0;
          *((_QWORD *)v31 + 21) = 0;
          v31[176] = 0;
          *((_QWORD *)v31 + 25) = 0;
          v31[208] = 0;
          *((_QWORD *)v31 + 29) = 0;
          v31[240] = 0;
          *((_QWORD *)v31 + 33) = 0;
          v31[272] = 0;
          *((_QWORD *)v31 + 37) = 0;
          v31[304] = 0;
          *((_QWORD *)v31 + 41) = 0;
          v31[336] = 0;
          *((_QWORD *)v31 + 45) = 0;
          v31[368] = 0;
          *((_QWORD *)v31 + 49) = 0;
          v31[400] = 0;
          *((_QWORD *)v31 + 53) = 0x800000000LL;
          *((_QWORD *)v31 + 66) = v31 + 544;
          *((_QWORD *)v31 + 67) = 0x600000000LL;
        }
        v116 = v31;
      }
      v31[*v31 + 1] = 2;
      v32 = v116;
      v33 = *v116;
      *v116 = v33 + 1;
      *(_QWORD *)&v32[8 * v33 + 16] = v30;
    }
    else
    {
      if ( !v120 )
        goto LABEL_29;
      v63 = sub_168B9E0(v114);
      v64 = v115;
      if ( v115 )
        v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v115 + 32LL))(v115);
      v113 = v64;
      v65 = v30;
      v66 = sub_1587BC0(v63, &v113, v59, v60, v61, v62);
      v67 = *v66 + 32LL * v119;
      v68 = *(unsigned __int8 **)(v67 + 8);
      if ( !v68 )
      {
        v77 = *(_QWORD *)(v67 + 16);
        v78 = *(_DWORD *)(v77 + 14976);
        if ( v78 )
        {
          v108 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v77 + 14976) = v108;
          v68 = *(unsigned __int8 **)(v77 + 8 * v108 + 14848);
          v109 = *((unsigned int *)v68 + 134);
          v110 = *((_QWORD *)v68 + 66);
          *v68 = 0;
          *((_DWORD *)v68 + 106) = 0;
          v111 = v110 + (v109 << 6);
          while ( v110 != v111 )
          {
            while ( 1 )
            {
              v111 -= 64;
              v112 = *(void **)(v111 + 24);
              if ( v112 == (void *)(v111 + 40) )
                break;
              operator delete(v112);
              if ( v110 == v111 )
                goto LABEL_101;
            }
          }
LABEL_101:
          *((_DWORD *)v68 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v68 + 66) = v68 + 544;
          *((_QWORD *)v68 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v67 + 8) = v68;
      }
      v68[*v68 + 1] = 2;
      v69 = *(_BYTE **)(v67 + 8);
      v70 = (unsigned __int8)*v69;
      *v69 = v70 + 1;
      *(_QWORD *)&v69[8 * v70 + 16] = v65;
    }
    if ( v118 )
    {
      v34 = v116;
      if ( !v116 )
      {
        v71 = v117;
        v72 = *(_DWORD *)(v117 + 14976);
        if ( v72 )
        {
          v88 = (unsigned int)(v72 - 1);
          *(_DWORD *)(v117 + 14976) = v88;
          v34 = *(unsigned __int8 **)(v71 + 8 * v88 + 14848);
          v89 = *((unsigned int *)v34 + 134);
          *v34 = 0;
          v90 = *((_QWORD *)v34 + 66);
          *((_DWORD *)v34 + 106) = 0;
          v91 = v90 + (v89 << 6);
          while ( v90 != v91 )
          {
            while ( 1 )
            {
              v91 -= 64;
              v92 = *(void **)(v91 + 24);
              if ( v92 == (void *)(v91 + 40) )
                break;
              operator delete(v92);
              if ( v90 == v91 )
                goto LABEL_81;
            }
          }
LABEL_81:
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
        v116 = v34;
      }
      v34[*v34 + 1] = 2;
      v35 = v116;
      v36 = *v116;
      *v116 = v36 + 1;
      *(_QWORD *)&v35[8 * v36 + 16] = 0;
    }
    else if ( v120 )
    {
      v50 = sub_168B9E0(v114);
      v53 = v115;
      if ( v115 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v115 + 32LL))(v115);
      v113 = v53;
      v54 = sub_1587BC0(v50, &v113, v48, v49, v51, v52);
      v55 = *v54 + 32LL * v119;
      v56 = *(unsigned __int8 **)(v55 + 8);
      if ( !v56 )
      {
        v81 = *(_QWORD *)(v55 + 16);
        v82 = *(_DWORD *)(v81 + 14976);
        if ( v82 )
        {
          v103 = (unsigned int)(v82 - 1);
          *(_DWORD *)(v81 + 14976) = v103;
          v56 = *(unsigned __int8 **)(v81 + 8 * v103 + 14848);
          v104 = *((unsigned int *)v56 + 134);
          *v56 = 0;
          v105 = *((_QWORD *)v56 + 66);
          *((_DWORD *)v56 + 106) = 0;
          v106 = v105 + (v104 << 6);
          while ( v105 != v106 )
          {
            while ( 1 )
            {
              v106 -= 64;
              v107 = *(void **)(v106 + 24);
              if ( v107 == (void *)(v106 + 40) )
                break;
              operator delete(v107);
              if ( v105 == v106 )
                goto LABEL_96;
            }
          }
LABEL_96:
          *((_DWORD *)v56 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v56 + 66) = v56 + 544;
          *((_QWORD *)v56 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v55 + 8) = v56;
      }
      v56[*v56 + 1] = 2;
      v57 = *(_BYTE **)(v55 + 8);
      v58 = (unsigned __int8)*v57;
      *v57 = v58 + 1;
      *(_QWORD *)&v57[8 * v58 + 16] = 0;
    }
    goto LABEL_29;
  }
  v16 = sub_168B6C0((__int64)a1);
  v17 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = v17[294];
  v17[304] += 40LL;
  v21 = (__m128i *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v17[295] >= (unsigned __int64)&v21[2].m128i_u64[1] && v20 )
    v17[294] = (char *)v21 + 40;
  else
    v21 = (__m128i *)sub_986170((__int64)(v17 + 294), 40, 40, 3, v18, v19);
  sub_B1B8F0(v21, v16, a3);
  sub_B8CC60(a2, (__int64)v21, v22, v23, v24, v25);
}
