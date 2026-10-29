void __fastcall sub_10CD360(__int64 a1, signed int a2, _BYTE *a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  size_t v15; // r8
  size_t v16; // rsi
  _QWORD *v17; // rdi
  _BYTE *v18; // rcx
  size_t v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  _BYTE *v22; // rsi
  size_t v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  void **v27; // rcx
  _BYTE *v28; // rdi
  __int64 v29; // rax
  unsigned __int8 *v30; // r15
  _BOOL8 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  size_t v34; // rsi
  _QWORD *v35; // rdi
  size_t v36; // r8
  _BYTE *v37; // rcx
  size_t v38; // r13
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  unsigned __int8 *v41; // r13
  _BYTE *v42; // rsi
  size_t v43; // rdx
  _QWORD *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  void **v47; // rcx
  _BYTE *v48; // rdi
  __int64 v49; // rax
  void **v50; // rbp
  unsigned __int64 v51; // rax
  void **v52; // r12
  void **v53; // rbx
  void **v54; // rdi
  void **v55; // rdi
  void **v56; // rbx
  void **v57; // r12
  _BYTE *v58; // rdi
  size_t v59; // rdx
  size_t v60; // rdx
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rcx
  int v65; // eax
  unsigned __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // r15
  void *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  void *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // r14
  __int64 v82; // rcx
  __int64 v83; // r14
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rax
  void *v89; // rdi
  void **v91; // [rsp+0h] [rbp-158h]
  _BYTE *v92; // [rsp+0h] [rbp-158h]
  char *v93; // [rsp+10h] [rbp-148h]
  size_t v94; // [rsp+10h] [rbp-148h]
  size_t v95; // [rsp+10h] [rbp-148h]
  void **v96; // [rsp+18h] [rbp-140h]
  _BYTE *v97; // [rsp+18h] [rbp-140h]
  __int64 v98; // [rsp+18h] [rbp-140h]
  __int64 v99; // [rsp+18h] [rbp-140h]
  _BOOL8 v100; // [rsp+18h] [rbp-140h]
  size_t v101; // [rsp+20h] [rbp-138h]
  size_t v102; // [rsp+20h] [rbp-138h]
  __int64 v103; // [rsp+20h] [rbp-138h]
  __int64 v104; // [rsp+20h] [rbp-138h]
  __int64 v105; // [rsp+20h] [rbp-138h]
  __int64 v106; // [rsp+28h] [rbp-130h]
  void *v107; // [rsp+30h] [rbp-128h] BYREF
  size_t v108; // [rsp+38h] [rbp-120h]
  _QWORD v109[2]; // [rsp+40h] [rbp-118h] BYREF
  void *v110; // [rsp+50h] [rbp-108h] BYREF
  size_t v111; // [rsp+58h] [rbp-100h]
  _BYTE v112[16]; // [rsp+60h] [rbp-F8h] BYREF
  void *v113; // [rsp+70h] [rbp-E8h] BYREF
  size_t v114; // [rsp+78h] [rbp-E0h]
  _QWORD v115[2]; // [rsp+80h] [rbp-D8h] BYREF
  void *src; // [rsp+90h] [rbp-C8h] BYREF
  size_t n; // [rsp+98h] [rbp-C0h]
  _BYTE v118[16]; // [rsp+A0h] [rbp-B8h] BYREF
  void *v119; // [rsp+B0h] [rbp-A8h] BYREF
  size_t v120; // [rsp+B8h] [rbp-A0h]
  _QWORD v121[2]; // [rsp+C0h] [rbp-98h] BYREF
  void *v122; // [rsp+D0h] [rbp-88h] BYREF
  unsigned __int64 v123; // [rsp+D8h] [rbp-80h]
  __int64 v124; // [rsp+E0h] [rbp-78h]
  void *v125; // [rsp+F0h] [rbp-68h]
  __int64 v126; // [rsp+100h] [rbp-58h] BYREF
  __int16 v127; // [rsp+110h] [rbp-48h]

  v93 = (char *)sub_FD44E0(a2, (__int64)a5, a6);
  v10 = v9;
  sub_FC70B0((__int64)&v122, a1, 0, 853);
  v11 = (unsigned __int8 *)v122;
  v12 = a2;
  if ( !v122 )
  {
    v62 = v123;
    v63 = *(_DWORD *)(v123 + 14976);
    if ( v63 )
    {
      v80 = (unsigned int)(v63 - 1);
      *(_DWORD *)(v123 + 14976) = v80;
      v11 = *(unsigned __int8 **)(v62 + 8 * v80 + 14848);
      v81 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v82 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v83 = v82 + (v81 << 6);
      while ( v82 != v83 )
      {
        while ( 1 )
        {
          v83 -= 64;
          v84 = *(void **)(v83 + 24);
          if ( v84 == (void *)(v83 + 40) )
            break;
          v104 = v82;
          v99 = v12;
          operator delete(v84);
          v82 = v104;
          v12 = v99;
          if ( v104 == v83 )
            goto LABEL_111;
        }
      }
LABEL_111:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      v12 = a2;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v122 = v11;
  }
  v11[*v11 + 1] = 2;
  v13 = v122;
  v14 = *(unsigned __int8 *)v122;
  *(_BYTE *)v122 = v14 + 1;
  v13[v14 + 2] = v12;
  v110 = v112;
  sub_10CD2A0(&v110, a5, (__int64)&a5[a6]);
  if ( !a3 )
  {
    v15 = v111;
    v17 = v109;
    v16 = 0;
    v107 = v109;
    v18 = v110;
    v19 = v111;
    LOBYTE(v109[0]) = 0;
    v108 = 0;
    if ( v111 <= 0xF )
      goto LABEL_6;
LABEL_68:
    sub_998B30((__int64)&v107, v16, 0, v18, v15);
    v17 = v107;
    goto LABEL_7;
  }
  v107 = v109;
  sub_10CD2A0(&v107, a3, (__int64)&a3[a4]);
  v15 = v111;
  v16 = v108;
  v17 = v107;
  v18 = v110;
  v19 = v111 + v108;
  if ( v107 == v109 )
    v20 = 15;
  else
    v20 = v109[0];
  if ( v20 < v19 )
    goto LABEL_68;
LABEL_6:
  if ( v15 )
  {
    v58 = (char *)v17 + v16;
    if ( v15 == 1 )
      *v58 = *v18;
    else
      memcpy(v58, v18, v15);
    v17 = v107;
  }
LABEL_7:
  v108 = v19;
  *((_BYTE *)v17 + v19) = 0;
  v21 = (unsigned __int8 *)v122;
  v22 = v107;
  v23 = v108;
  if ( !v122 )
  {
    v64 = v123;
    v65 = *(_DWORD *)(v123 + 14976);
    if ( v65 )
    {
      v70 = (unsigned int)(v65 - 1);
      *(_DWORD *)(v123 + 14976) = v70;
      v21 = *(unsigned __int8 **)(v64 + 8 * v70 + 14848);
      v71 = *((unsigned int *)v21 + 134);
      *v21 = 0;
      v72 = *((_QWORD *)v21 + 66);
      *((_DWORD *)v21 + 106) = 0;
      v73 = v72 + (v71 << 6);
      while ( v72 != v73 )
      {
        while ( 1 )
        {
          v73 -= 64;
          v74 = *(void **)(v73 + 24);
          if ( v74 == (void *)(v73 + 40) )
            break;
          v106 = v72;
          v102 = v23;
          operator delete(v74);
          v72 = v106;
          v23 = v102;
          if ( v106 == v73 )
            goto LABEL_101;
        }
      }
LABEL_101:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      v101 = v108;
      v97 = v107;
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
      v22 = v97;
      *((_QWORD *)v21 + 66) = v21 + 544;
      v23 = v101;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
    }
    v122 = v21;
  }
  v21[*v21 + 1] = 0;
  v119 = v121;
  sub_10CD2A0(&v119, v22, (__int64)&v22[v23]);
  v24 = v122;
  v25 = *(unsigned __int8 *)v122;
  *(_BYTE *)v122 = v25 + 1;
  v26 = 4 * (v25 + 3);
  v27 = (void **)&v24[v26];
  v28 = (_BYTE *)v24[v26];
  if ( v119 == v121 )
  {
    v60 = v120;
    if ( v120 )
    {
      if ( v120 == 1 )
      {
        *v28 = v121[0];
        v60 = v120;
        v28 = *v27;
      }
      else
      {
        v96 = v27;
        memcpy(v28, v119, v120);
        v27 = v96;
        v60 = v120;
        v28 = *v96;
      }
    }
    v27[1] = (void *)v60;
    v28[v60] = 0;
    v28 = v119;
  }
  else
  {
    if ( v28 == (_BYTE *)&v24[v26 + 2] )
    {
      *v27 = v119;
      v27[1] = (void *)v120;
      v27[2] = (void *)v121[0];
    }
    else
    {
      v29 = v24[4 * (int)v25 + 14];
      *v27 = v119;
      v27[1] = (void *)v120;
      v27[2] = (void *)v121[0];
      if ( v28 )
      {
        v119 = v28;
        v121[0] = v29;
        goto LABEL_12;
      }
    }
    v28 = v121;
    v119 = v121;
  }
LABEL_12:
  v120 = 0;
  *v28 = 0;
  if ( v119 != v121 )
    operator delete(v119);
  v30 = (unsigned __int8 *)v122;
  v31 = v10 != 0;
  if ( !v122 )
  {
    v68 = v123;
    v69 = *(_DWORD *)(v123 + 14976);
    if ( v69 )
    {
      v85 = (unsigned int)(v69 - 1);
      *(_DWORD *)(v123 + 14976) = v85;
      v30 = *(unsigned __int8 **)(v68 + 8 * v85 + 14848);
      v86 = *((unsigned int *)v30 + 134);
      *v30 = 0;
      v87 = *((_QWORD *)v30 + 66);
      *((_DWORD *)v30 + 106) = 0;
      v88 = v87 + (v86 << 6);
      while ( v87 != v88 )
      {
        while ( 1 )
        {
          v88 -= 64;
          v89 = *(void **)(v88 + 24);
          if ( v89 == (void *)(v88 + 40) )
            break;
          v105 = v88;
          v100 = v31;
          operator delete(v89);
          v88 = v105;
          v31 = v100;
          if ( v87 == v105 )
            goto LABEL_116;
        }
      }
LABEL_116:
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
      v31 = v10 != 0;
      *((_QWORD *)v30 + 66) = v30 + 544;
      *((_QWORD *)v30 + 67) = 0x600000000LL;
    }
    v122 = v30;
  }
  v30[*v30 + 1] = 2;
  v32 = v122;
  v33 = *(unsigned __int8 *)v122;
  *(_BYTE *)v122 = v33 + 1;
  v32[v33 + 2] = v31;
  src = v118;
  sub_10CD2A0(&src, v93, (__int64)&v93[v10]);
  if ( !a3 )
  {
    v36 = n;
    v35 = v115;
    v34 = 0;
    v113 = v115;
    v37 = src;
    v38 = n;
    LOBYTE(v115[0]) = 0;
    v114 = 0;
    if ( n <= 0xF )
      goto LABEL_19;
LABEL_70:
    sub_998B30((__int64)&v113, v34, 0, v37, v36);
    v35 = v113;
    goto LABEL_23;
  }
  v113 = v115;
  sub_10CD2A0(&v113, a3, (__int64)&a3[a4]);
  v34 = v114;
  v35 = v113;
  v36 = n;
  v37 = src;
  v38 = n + v114;
  if ( v113 == v115 )
    v39 = 15;
  else
    v39 = v115[0];
  if ( v39 < v38 )
    goto LABEL_70;
LABEL_19:
  if ( v36 )
  {
    v40 = (char *)v35 + v34;
    if ( v36 == 1 )
      *v40 = *v37;
    else
      memcpy(v40, v37, v36);
    v35 = v113;
  }
LABEL_23:
  v114 = v38;
  *((_BYTE *)v35 + v38) = 0;
  v41 = (unsigned __int8 *)v122;
  v42 = v113;
  v43 = v114;
  if ( !v122 )
  {
    v66 = v123;
    v67 = *(_DWORD *)(v123 + 14976);
    if ( v67 )
    {
      v75 = (unsigned int)(v67 - 1);
      *(_DWORD *)(v123 + 14976) = v75;
      v41 = *(unsigned __int8 **)(v66 + 8 * v75 + 14848);
      v76 = *((unsigned int *)v41 + 134);
      *v41 = 0;
      v77 = *((_QWORD *)v41 + 66);
      *((_DWORD *)v41 + 106) = 0;
      v78 = v77 + (v76 << 6);
      while ( v77 != v78 )
      {
        while ( 1 )
        {
          v78 -= 64;
          v79 = *(void **)(v78 + 24);
          if ( v79 == (void *)(v78 + 40) )
            break;
          v103 = v78;
          v98 = v77;
          v95 = v43;
          operator delete(v79);
          v77 = v98;
          v78 = v103;
          v43 = v95;
          if ( v98 == v103 )
            goto LABEL_106;
        }
      }
LABEL_106:
      *((_DWORD *)v41 + 134) = 0;
    }
    else
    {
      v94 = v114;
      v92 = v113;
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
      v42 = v92;
      *((_QWORD *)v41 + 66) = v41 + 544;
      v43 = v94;
      *((_QWORD *)v41 + 67) = 0x600000000LL;
    }
    v122 = v41;
  }
  v41[*v41 + 1] = 0;
  v119 = v121;
  sub_10CD2A0(&v119, v42, (__int64)&v42[v43]);
  v44 = v122;
  v45 = *(unsigned __int8 *)v122;
  *(_BYTE *)v122 = v45 + 1;
  v46 = 4 * (v45 + 3);
  v47 = (void **)&v44[v46];
  v48 = (_BYTE *)v44[v46];
  if ( v119 == v121 )
  {
    v59 = v120;
    if ( v120 )
    {
      if ( v120 == 1 )
      {
        *v48 = v121[0];
        v59 = v120;
        v48 = *v47;
      }
      else
      {
        v91 = v47;
        memcpy(v48, v119, v120);
        v47 = v91;
        v59 = v120;
        v48 = *v91;
      }
    }
    v47[1] = (void *)v59;
    v48[v59] = 0;
    v48 = v119;
  }
  else
  {
    if ( v48 == (_BYTE *)&v44[v46 + 2] )
    {
      *v47 = v119;
      v47[1] = (void *)v120;
      v47[2] = (void *)v121[0];
    }
    else
    {
      v49 = v44[4 * (int)v45 + 14];
      *v47 = v119;
      v47[1] = (void *)v120;
      v47[2] = (void *)v121[0];
      if ( v48 )
      {
        v119 = v48;
        v121[0] = v49;
        goto LABEL_28;
      }
    }
    v48 = v121;
    v119 = v121;
  }
LABEL_28:
  v120 = 0;
  *v48 = 0;
  if ( v119 != v121 )
    operator delete(v119);
  if ( v113 != v115 )
    operator delete(v113);
  if ( src != v118 )
    operator delete(src);
  if ( v107 != v109 )
    operator delete(v107);
  if ( v110 != v112 )
    operator delete(v110);
  if ( (_BYTE)v127 )
  {
    sub_FC7790(v124, (__int64 *)&v122, SHIBYTE(v127));
    v124 = 0;
    v127 = 0;
  }
  if ( v125 != &v126 )
    operator delete(v125);
  v50 = (void **)v122;
  if ( v122 )
  {
    v51 = v123;
    if ( v123 )
    {
      if ( (unsigned __int64)v122 < v123 || (unsigned __int64)v122 > v123 + 14848 )
      {
        v52 = *((void ***)v122 + 66);
        v53 = &v52[8 * (unsigned __int64)*((unsigned int *)v122 + 134)];
        if ( v52 != v53 )
        {
          do
          {
            while ( 1 )
            {
              v53 -= 8;
              v54 = (void **)v53[3];
              if ( v54 == v53 + 5 )
                break;
              operator delete(v54);
              if ( v52 == v53 )
                goto LABEL_48;
            }
          }
          while ( v52 != v53 );
LABEL_48:
          v53 = (void **)v50[66];
        }
        if ( v53 != v50 + 68 )
          free(v53);
        v55 = (void **)v50[52];
        v56 = v50 + 52;
        if ( v55 != v50 + 54 )
          free(v55);
        v57 = v50 + 12;
        do
        {
          while ( 1 )
          {
            v56 -= 4;
            if ( *v56 == v56 + 2 )
              break;
            operator delete(*v56);
            if ( v57 == v56 )
              goto LABEL_56;
          }
        }
        while ( v57 != v56 );
LABEL_56:
        operator delete(v50, 0x3A0u);
      }
      else
      {
        v61 = *(unsigned int *)(v123 + 14976);
        *(_DWORD *)(v123 + 14976) = v61 + 1;
        *(_QWORD *)(v51 + 8 * v61 + 14848) = v50;
      }
    }
  }
}
