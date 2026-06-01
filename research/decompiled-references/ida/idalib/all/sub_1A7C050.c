void __fastcall sub_1A7C050(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  unsigned int v7; // r14d
  unsigned __int64 v10; // rbx
  char v11; // dl
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned __int8 *v17; // rbp
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  unsigned __int8 *v20; // rbp
  _BYTE *v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  void **v28; // rbp
  unsigned __int8 *v29; // rdi
  __int64 v30; // rax
  unsigned __int8 *v31; // rbp
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  unsigned __int64 (__fastcall *v34)(__int64); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  void *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // r8
  __int64 v46; // r9
  void *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r13
  unsigned __int8 *v50; // rbp
  _BYTE *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // r8
  __int64 v57; // r9
  void *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r12
  unsigned __int8 *v61; // rbp
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  _QWORD *v70; // rax
  size_t v71; // rdx
  __int64 v72; // rax
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
  __int64 v85; // rdx
  __int64 v86; // r13
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // r12
  void *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // rdx
  __int64 v96; // r13
  void *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rcx
  _QWORD *v101; // rax
  _QWORD *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // r14
  __int64 v106; // r13
  void *v107; // rdi
  __int64 v108; // [rsp+8h] [rbp-120h]
  __int64 v109; // [rsp+8h] [rbp-120h]
  _BYTE *v110; // [rsp+8h] [rbp-120h]
  __int64 v111; // [rsp+8h] [rbp-120h]
  _QWORD *v112; // [rsp+8h] [rbp-120h]
  void *src; // [rsp+10h] [rbp-118h]
  void *srca; // [rsp+10h] [rbp-118h]
  _QWORD *srcb; // [rsp+10h] [rbp-118h]
  __int64 v116; // [rsp+18h] [rbp-110h]
  void *v117; // [rsp+20h] [rbp-108h] BYREF
  size_t n; // [rsp+28h] [rbp-100h]
  __int64 v119; // [rsp+30h] [rbp-F8h] BYREF
  void *v120; // [rsp+40h] [rbp-E8h] BYREF
  size_t v121; // [rsp+48h] [rbp-E0h]
  _QWORD v122[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v123[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v124; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v125; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v126; // [rsp+88h] [rbp-A0h]
  char v127; // [rsp+D8h] [rbp-50h]
  unsigned int v128; // [rsp+E0h] [rbp-48h]
  char v129; // [rsp+E4h] [rbp-44h]

  v6 = a5;
  v7 = 0;
  v10 = (unsigned __int64)a4;
  v11 = a4[1] & 0x7F;
  if ( v11 == 4 )
  {
    if ( a4 == &qword_28 )
    {
      v10 = 40;
      v11 = 0;
    }
    else
    {
      if ( *((_BYTE *)a4 + 9) >> 5 == 1 )
      {
        v34 = *(unsigned __int64 (__fastcall **)(__int64))(*(a4 - 5) + 16);
        if ( v34 == sub_B95CF0 )
        {
          if ( (*((_BYTE *)a4 + 10) & 1) == 0 && !sub_B8E990((__int64)a4) )
          {
            v72 = sub_B8E970(v10);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
          }
          v7 = *(_DWORD *)(v10 + 32);
        }
        else
        {
          v7 = v34((__int64)(a4 - 5));
        }
      }
      v12 = *(_QWORD *)(sub_B8C1B0(v10) + 16);
      if ( (v12 & 4) != 0 )
        v10 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v10 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
    }
  }
  if ( (v11 & 0x7D) == 4 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(sub_B8C1B0(v10) + 16);
        if ( (v13 & 4) != 0 )
          break;
        v10 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = *(_BYTE *)(v10 + 8) & 0x7F;
        if ( (*(_BYTE *)(v10 + 8) & 0x7D) != 4 )
          goto LABEL_12;
      }
      v10 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
    }
    while ( (*(_BYTE *)(v10 + 8) & 0x7D) == 4 );
  }
LABEL_12:
  if ( v11 )
  {
    if ( v6 && sub_1A42210(a1, a2, 0, (unsigned __int64)a4, a5, a6) )
      v14 = 5612;
    else
      v14 = 4205;
    sub_168B9F0((__int64)v123, (__int64 *)(a1 + 8), a3, v14, 0);
    sub_FEEE60((__int64)&v117, (__int64 *)a2, 0);
    if ( !v127 )
    {
      if ( !v129 )
      {
LABEL_17:
        if ( v117 != &v119 )
          operator delete(v117);
        sub_15F7200(v123);
        v15 = sub_B8C1B0(v10);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        sub_168B9F0((__int64)v123, (__int64 *)(a1 + 8), v16, 0x17CEu, 0);
        if ( v127 )
        {
          v17 = v125;
          if ( !v125 )
          {
            v77 = v126;
            v78 = *(_DWORD *)(v126 + 14976);
            if ( v78 )
            {
              v88 = (unsigned int)(v78 - 1);
              *(_DWORD *)(v126 + 14976) = v88;
              v17 = *(unsigned __int8 **)(v77 + 8 * v88 + 14848);
              v89 = *((unsigned int *)v17 + 134);
              *v17 = 0;
              v90 = *((_QWORD *)v17 + 66);
              *((_DWORD *)v17 + 106) = 0;
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
                    goto LABEL_109;
                }
              }
LABEL_109:
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
            v125 = v17;
          }
          v17[*v17 + 1] = 12;
          v18 = v125;
          v19 = *v125;
          *v125 = v19 + 1;
          *(_QWORD *)&v18[8 * v19 + 16] = v10;
        }
        else if ( v129 )
        {
          v55 = sub_168B9E0(v123);
          v58 = v124;
          if ( v124 )
            v58 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v124 + 32LL))(v124);
          v120 = v58;
          v59 = sub_1587BC0(v55, (__int64 *)&v120, v53, v54, v56, v57);
          v60 = *v59 + 32LL * v128;
          v61 = *(unsigned __int8 **)(v60 + 8);
          if ( !v61 )
          {
            v79 = *(_QWORD *)(v60 + 16);
            v80 = *(_DWORD *)(v79 + 14976);
            if ( v80 )
            {
              v103 = (unsigned int)(v80 - 1);
              *(_DWORD *)(v79 + 14976) = v103;
              v61 = *(unsigned __int8 **)(v79 + 8 * v103 + 14848);
              v104 = *((unsigned int *)v61 + 134);
              *v61 = 0;
              v105 = *((_QWORD *)v61 + 66);
              *((_DWORD *)v61 + 106) = 0;
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
                    goto LABEL_124;
                }
              }
LABEL_124:
              *((_DWORD *)v61 + 134) = 0;
            }
            else
            {
              v61 = (unsigned __int8 *)operator new(0x3A0u);
              *v61 = 0;
              *((_QWORD *)v61 + 12) = v61 + 112;
              *((_QWORD *)v61 + 16) = v61 + 144;
              *((_QWORD *)v61 + 20) = v61 + 176;
              *((_QWORD *)v61 + 24) = v61 + 208;
              *((_QWORD *)v61 + 28) = v61 + 240;
              *((_QWORD *)v61 + 32) = v61 + 272;
              *((_QWORD *)v61 + 36) = v61 + 304;
              *((_QWORD *)v61 + 40) = v61 + 336;
              *((_QWORD *)v61 + 44) = v61 + 368;
              *((_QWORD *)v61 + 48) = v61 + 400;
              *((_QWORD *)v61 + 52) = v61 + 432;
              *((_QWORD *)v61 + 13) = 0;
              v61[112] = 0;
              *((_QWORD *)v61 + 17) = 0;
              v61[144] = 0;
              *((_QWORD *)v61 + 21) = 0;
              v61[176] = 0;
              *((_QWORD *)v61 + 25) = 0;
              v61[208] = 0;
              *((_QWORD *)v61 + 29) = 0;
              v61[240] = 0;
              *((_QWORD *)v61 + 33) = 0;
              v61[272] = 0;
              *((_QWORD *)v61 + 37) = 0;
              v61[304] = 0;
              *((_QWORD *)v61 + 41) = 0;
              v61[336] = 0;
              *((_QWORD *)v61 + 45) = 0;
              v61[368] = 0;
              *((_QWORD *)v61 + 49) = 0;
              v61[400] = 0;
              *((_QWORD *)v61 + 53) = 0x800000000LL;
              *((_QWORD *)v61 + 66) = v61 + 544;
              *((_QWORD *)v61 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v60 + 8) = v61;
          }
          v61[*v61 + 1] = 12;
          v62 = *(_BYTE **)(v60 + 8);
          v63 = (unsigned __int8)*v62;
          *v62 = v63 + 1;
          *(_QWORD *)&v62[8 * v63 + 16] = v10;
        }
        goto LABEL_21;
      }
      v37 = sub_168B9E0(v123);
      v40 = v124;
      if ( v124 )
        v40 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v124 + 32LL))(v124);
      v120 = v40;
      v41 = sub_1587BC0(v37, (__int64 *)&v120, v35, v36, v38, v39);
      sub_AEC220((unsigned __int8 **)(*v41 + 32LL * v128 + 8), v117, n);
      if ( !v127 )
      {
LABEL_57:
        if ( v129 )
        {
          v44 = sub_168B9E0(v123);
          v47 = v124;
          if ( v124 )
            v47 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v124 + 32LL))(v124);
          v120 = v47;
          v48 = sub_1587BC0(v44, (__int64 *)&v120, v42, v43, v45, v46);
          v49 = *v48 + 32LL * v128;
          v50 = *(unsigned __int8 **)(v49 + 8);
          if ( !v50 )
          {
            v81 = *(_QWORD *)(v49 + 16);
            v82 = *(_DWORD *)(v81 + 14976);
            if ( v82 )
            {
              v98 = (unsigned int)(v82 - 1);
              *(_DWORD *)(v81 + 14976) = v98;
              v50 = *(unsigned __int8 **)(v81 + 8 * v98 + 14848);
              v99 = *((unsigned int *)v50 + 134);
              *v50 = 0;
              v100 = *((_QWORD **)v50 + 66);
              *((_DWORD *)v50 + 106) = 0;
              v101 = &v100[8 * v99];
              while ( v100 != v101 )
              {
                while ( 1 )
                {
                  v101 -= 8;
                  v102 = (_QWORD *)v101[3];
                  if ( v102 == v101 + 5 )
                    break;
                  srcb = v101;
                  v112 = v100;
                  operator delete(v102);
                  v100 = v112;
                  v101 = srcb;
                  if ( v112 == srcb )
                    goto LABEL_119;
                }
              }
LABEL_119:
              *((_DWORD *)v50 + 134) = 0;
            }
            else
            {
              v50 = (unsigned __int8 *)operator new(0x3A0u);
              *v50 = 0;
              *((_QWORD *)v50 + 12) = v50 + 112;
              *((_QWORD *)v50 + 16) = v50 + 144;
              *((_QWORD *)v50 + 20) = v50 + 176;
              *((_QWORD *)v50 + 24) = v50 + 208;
              *((_QWORD *)v50 + 28) = v50 + 240;
              *((_QWORD *)v50 + 32) = v50 + 272;
              *((_QWORD *)v50 + 36) = v50 + 304;
              *((_QWORD *)v50 + 40) = v50 + 336;
              *((_QWORD *)v50 + 44) = v50 + 368;
              *((_QWORD *)v50 + 48) = v50 + 400;
              *((_QWORD *)v50 + 52) = v50 + 432;
              *((_QWORD *)v50 + 13) = 0;
              v50[112] = 0;
              *((_QWORD *)v50 + 17) = 0;
              v50[144] = 0;
              *((_QWORD *)v50 + 21) = 0;
              v50[176] = 0;
              *((_QWORD *)v50 + 25) = 0;
              v50[208] = 0;
              *((_QWORD *)v50 + 29) = 0;
              v50[240] = 0;
              *((_QWORD *)v50 + 33) = 0;
              v50[272] = 0;
              *((_QWORD *)v50 + 37) = 0;
              v50[304] = 0;
              *((_QWORD *)v50 + 41) = 0;
              v50[336] = 0;
              *((_QWORD *)v50 + 45) = 0;
              v50[368] = 0;
              *((_QWORD *)v50 + 49) = 0;
              v50[400] = 0;
              *((_QWORD *)v50 + 53) = 0x800000000LL;
              *((_QWORD *)v50 + 66) = v50 + 544;
              *((_QWORD *)v50 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v49 + 8) = v50;
          }
          v50[*v50 + 1] = 12;
          v51 = *(_BYTE **)(v49 + 8);
          v52 = (unsigned __int8)*v51;
          *v51 = v52 + 1;
          *(_QWORD *)&v51[8 * v52 + 16] = v10;
        }
        goto LABEL_17;
      }
LABEL_49:
      v31 = v125;
      if ( !v125 )
      {
        v73 = v126;
        v74 = *(_DWORD *)(v126 + 14976);
        if ( v74 )
        {
          v83 = (unsigned int)(v74 - 1);
          *(_DWORD *)(v126 + 14976) = v83;
          v31 = *(unsigned __int8 **)(v73 + 8 * v83 + 14848);
          v84 = *((unsigned int *)v31 + 134);
          *v31 = 0;
          v85 = *((_QWORD *)v31 + 66);
          *((_DWORD *)v31 + 106) = 0;
          v86 = v85 + (v84 << 6);
          while ( v85 != v86 )
          {
            while ( 1 )
            {
              v86 -= 64;
              v87 = *(void **)(v86 + 24);
              if ( v87 == (void *)(v86 + 40) )
                break;
              v111 = v85;
              operator delete(v87);
              v85 = v111;
              if ( v111 == v86 )
                goto LABEL_104;
            }
          }
LABEL_104:
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
        v125 = v31;
      }
      v31[*v31 + 1] = 12;
      v32 = v125;
      v33 = *v125;
      *v125 = v33 + 1;
      *(_QWORD *)&v32[8 * v33 + 16] = v10;
      goto LABEL_17;
    }
    v20 = v125;
    v21 = v117;
    v22 = n;
    if ( !v125 )
    {
      v75 = v126;
      v76 = *(_DWORD *)(v126 + 14976);
      if ( v76 )
      {
        v93 = (unsigned int)(v76 - 1);
        *(_DWORD *)(v126 + 14976) = v93;
        v20 = *(unsigned __int8 **)(v75 + 8 * v93 + 14848);
        v94 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v95 = *((_QWORD *)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v96 = v95 + (v94 << 6);
        while ( v95 != v96 )
        {
          while ( 1 )
          {
            v96 -= 64;
            v97 = *(void **)(v96 + 24);
            if ( v97 == (void *)(v96 + 40) )
              break;
            v116 = v95;
            srca = (void *)v22;
            operator delete(v97);
            v95 = v116;
            v22 = (__int64)srca;
            if ( v116 == v96 )
              goto LABEL_114;
          }
        }
LABEL_114:
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        src = (void *)n;
        v110 = v117;
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
        *((_QWORD *)v20 + 13) = 0;
        v20[112] = 0;
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
        v21 = v110;
        *((_QWORD *)v20 + 66) = v20 + 544;
        v22 = (__int64)src;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      v125 = v20;
    }
    v20[*v20 + 1] = 0;
    v120 = v122;
    if ( &v21[v22] && !v21 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v22 > 0xF )
    {
      if ( v22 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v108 = v22;
      v23 = (_QWORD *)operator new(v22 + 1);
      v22 = v108;
      v120 = v23;
      v122[0] = v108;
    }
    else
    {
      if ( v22 == 1 )
      {
        LOBYTE(v122[0]) = *v21;
        v23 = v122;
        goto LABEL_42;
      }
      v23 = v122;
      if ( !v22 )
      {
LABEL_42:
        v121 = v22;
        *((_BYTE *)v23 + v22) = 0;
        v24 = v125;
        v25 = *v125;
        *v125 = v25 + 1;
        v26 = (unsigned __int8)v25;
        v27 = 32 * (v25 + 3);
        v28 = (void **)&v24[v27];
        v29 = *(unsigned __int8 **)&v24[v27];
        if ( v120 == v122 )
        {
          v71 = v121;
          if ( v121 )
          {
            if ( v121 == 1 )
              *v29 = v122[0];
            else
              memcpy(v29, v120, v121);
            v71 = v121;
            v29 = (unsigned __int8 *)*v28;
          }
          v28[1] = (void *)v71;
          v29[v71] = 0;
          v29 = (unsigned __int8 *)v120;
        }
        else
        {
          if ( v29 == &v24[v27 + 16] )
          {
            *v28 = v120;
            v28[1] = (void *)v121;
            v28[2] = (void *)v122[0];
          }
          else
          {
            v30 = *(_QWORD *)&v24[32 * v26 + 112];
            *v28 = v120;
            v28[1] = (void *)v121;
            v28[2] = (void *)v122[0];
            if ( v29 )
            {
              v120 = v29;
              v122[0] = v30;
              goto LABEL_46;
            }
          }
          v29 = (unsigned __int8 *)v122;
          v120 = v122;
        }
LABEL_46:
        v121 = 0;
        *v29 = 0;
        if ( v120 != v122 )
          operator delete(v120);
        if ( !v127 )
          goto LABEL_57;
        goto LABEL_49;
      }
    }
    v109 = v22;
    memcpy(v23, v21, v22);
    v23 = v120;
    v22 = v109;
    goto LABEL_42;
  }
  if ( *(char *)(a2 + 904) >= 0 && v7 )
  {
    sub_168B9F0((__int64)v123, (__int64 *)(a1 + 8), a3, 0x15EBu, 0);
    sub_FEEE60((__int64)&v120, (__int64 *)a2, 0);
    if ( v127 )
    {
      sub_AEC220(&v125, v120, v121);
    }
    else if ( v129 )
    {
      v66 = sub_168B9E0(v123);
      v69 = v124;
      if ( v124 )
        v69 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v124 + 32LL))(v124);
      v117 = v69;
      v70 = sub_1587BC0(v66, (__int64 *)&v117, v64, v65, v67, v68);
      sub_AEC220((unsigned __int8 **)(*v70 + 32LL * v128 + 8), v120, v121);
    }
    if ( v120 != v122 )
      operator delete(v120);
    sub_15F7200(v123);
    sub_168B9F0((__int64)v123, (__int64 *)(a1 + 8), v7, 0x175Au, 0);
LABEL_21:
    sub_15F7200(v123);
  }
}
