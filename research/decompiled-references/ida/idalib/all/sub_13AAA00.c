__int64 *__fastcall sub_13AAA00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const __m128i *a6)
{
  unsigned __int8 *v9; // r14
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  void **v15; // rcx
  _BYTE *v16; // rdi
  __int64 v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int8 *v23; // r12
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // r12
  __int64 v27; // r15
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int8 *v31; // rbx
  _QWORD *v32; // rdx
  __int64 v33; // rax
  void **v34; // rbp
  unsigned __int64 v35; // rax
  void **v36; // r12
  void **v37; // rbx
  void **v38; // rdi
  void **v39; // rdi
  void **v40; // rbx
  void **v41; // r12
  size_t v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rbp
  unsigned __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // rdx
  int v53; // eax
  unsigned __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // r15
  void *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r15
  void *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // r15
  __int64 v69; // r12
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // rdx
  __int64 v74; // r14
  void *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // r14
  void *v80; // rdi
  void **v81; // [rsp+8h] [rbp-C0h]
  __int64 v83; // [rsp+8h] [rbp-C0h]
  __int64 v84; // [rsp+8h] [rbp-C0h]
  __int64 v85; // [rsp+8h] [rbp-C0h]
  __int64 v86; // [rsp+8h] [rbp-C0h]
  __int64 v87; // [rsp+10h] [rbp-B8h]
  __int64 v88; // [rsp+10h] [rbp-B8h]
  __int64 v89; // [rsp+10h] [rbp-B8h]
  __int64 v90; // [rsp+18h] [rbp-B0h]
  void *src; // [rsp+20h] [rbp-A8h] BYREF
  size_t n; // [rsp+28h] [rbp-A0h]
  _QWORD v93[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v94; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v95; // [rsp+48h] [rbp-80h]
  __int64 v96; // [rsp+50h] [rbp-78h]
  void *v97; // [rsp+60h] [rbp-68h]
  __int64 v98; // [rsp+70h] [rbp-58h] BYREF
  __int16 v99; // [rsp+80h] [rbp-48h]

  if ( *(_DWORD *)(a3 + 32) == *(_DWORD *)(a2 + 40) && *(_DWORD *)(a3 + 36) == *(_DWORD *)(a2 + 44) )
  {
    v45 = operator new(0x168u);
    sub_13A7B90(v45, a2, a6);
    *a1 = v45;
    return a1;
  }
  sub_FC70B0((__int64)&v94, *(_QWORD *)(a4 + 104), *(_DWORD *)(a5 + 812), 767);
  v9 = (unsigned __int8 *)v94;
  v10 = *(_BYTE **)(a2 + 8);
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v94 )
  {
    v46 = v95;
    v47 = *(_DWORD *)(v95 + 14976);
    if ( v47 )
    {
      v56 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v95 + 14976) = v56;
      v9 = *(unsigned __int8 **)(v46 + 8 * v56 + 14848);
      v57 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v58 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v59 = v58 + (v57 << 6);
      while ( v58 != v59 )
      {
        while ( 1 )
        {
          v59 -= 64;
          v60 = *(void **)(v59 + 24);
          if ( v60 == (void *)(v59 + 40) )
            break;
          v90 = v58;
          v88 = v11;
          operator delete(v60);
          v58 = v90;
          v11 = v88;
          if ( v90 == v59 )
            goto LABEL_67;
        }
      }
LABEL_67:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v87 = *(_QWORD *)(a2 + 16);
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      v11 = v87;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    v94 = v9;
  }
  v9[*v9 + 1] = 0;
  src = v93;
  sub_13A44E0(&src, v10, (__int64)&v10[v11]);
  v12 = v94;
  v13 = *(unsigned __int8 *)v94;
  *(_BYTE *)v94 = v13 + 1;
  v14 = 4 * (v13 + 3);
  v15 = (void **)&v12[v14];
  v16 = (_BYTE *)v12[v14];
  if ( src == v93 )
  {
    v43 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v16 = v93[0];
        v43 = n;
        v16 = *v15;
      }
      else
      {
        v81 = v15;
        memcpy(v16, src, n);
        v15 = v81;
        v43 = n;
        v16 = *v81;
      }
    }
    v15[1] = (void *)v43;
    v16[v43] = 0;
    v16 = src;
    goto LABEL_8;
  }
  if ( v16 == (_BYTE *)&v12[v14 + 2] )
  {
    *v15 = src;
    v15[1] = (void *)n;
    v15[2] = (void *)v93[0];
    goto LABEL_46;
  }
  v17 = v12[4 * (int)v13 + 14];
  *v15 = src;
  v15[1] = (void *)n;
  v15[2] = (void *)v93[0];
  if ( !v16 )
  {
LABEL_46:
    v16 = v93;
    src = v93;
    goto LABEL_8;
  }
  src = v16;
  v93[0] = v17;
LABEL_8:
  n = 0;
  *v16 = 0;
  if ( src != v93 )
    operator delete(src);
  v18 = (unsigned __int8 *)v94;
  v19 = *(unsigned int *)(a3 + 32);
  if ( !v94 )
  {
    v48 = v95;
    v49 = *(_DWORD *)(v95 + 14976);
    if ( v49 )
    {
      v61 = (unsigned int)(v49 - 1);
      *(_DWORD *)(v95 + 14976) = v61;
      v18 = *(unsigned __int8 **)(v48 + 8 * v61 + 14848);
      v62 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v63 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v64 = v63 + (v62 << 6);
      while ( v63 != v64 )
      {
        while ( 1 )
        {
          v64 -= 64;
          v65 = *(void **)(v64 + 24);
          if ( v65 == (void *)(v64 + 40) )
            break;
          v89 = v63;
          v84 = v19;
          operator delete(v65);
          v63 = v89;
          v19 = v84;
          if ( v89 == v64 )
            goto LABEL_72;
        }
      }
LABEL_72:
      *((_DWORD *)v18 + 134) = 0;
    }
    else
    {
      v83 = *(unsigned int *)(a3 + 32);
      v18 = (unsigned __int8 *)operator new(0x3A0u);
      *v18 = 0;
      *((_QWORD *)v18 + 12) = v18 + 112;
      *((_QWORD *)v18 + 16) = v18 + 144;
      *((_QWORD *)v18 + 20) = v18 + 176;
      *((_QWORD *)v18 + 24) = v18 + 208;
      *((_QWORD *)v18 + 28) = v18 + 240;
      *((_QWORD *)v18 + 32) = v18 + 272;
      *((_QWORD *)v18 + 36) = v18 + 304;
      *((_QWORD *)v18 + 40) = v18 + 336;
      *((_QWORD *)v18 + 44) = v18 + 368;
      *((_QWORD *)v18 + 48) = v18 + 400;
      *((_QWORD *)v18 + 52) = v18 + 432;
      *((_QWORD *)v18 + 13) = 0;
      v18[112] = 0;
      *((_QWORD *)v18 + 17) = 0;
      v18[144] = 0;
      *((_QWORD *)v18 + 21) = 0;
      v18[176] = 0;
      *((_QWORD *)v18 + 25) = 0;
      v18[208] = 0;
      *((_QWORD *)v18 + 29) = 0;
      v18[240] = 0;
      *((_QWORD *)v18 + 33) = 0;
      v18[272] = 0;
      *((_QWORD *)v18 + 37) = 0;
      v18[304] = 0;
      *((_QWORD *)v18 + 41) = 0;
      v18[336] = 0;
      *((_QWORD *)v18 + 45) = 0;
      v18[368] = 0;
      *((_QWORD *)v18 + 49) = 0;
      v18[400] = 0;
      *((_QWORD *)v18 + 53) = 0x800000000LL;
      v19 = v83;
      *((_QWORD *)v18 + 66) = v18 + 544;
      *((_QWORD *)v18 + 67) = 0x600000000LL;
    }
    v94 = v18;
  }
  v18[*v18 + 1] = 3;
  v20 = v94;
  v21 = *(unsigned __int8 *)v94;
  *(_BYTE *)v94 = v21 + 1;
  v20[v21 + 2] = v19;
  v22 = *(unsigned int *)(a3 + 36);
  v23 = (unsigned __int8 *)v94;
  if ( !v94 )
  {
    v54 = v95;
    v55 = *(_DWORD *)(v95 + 14976);
    if ( v55 )
    {
      v76 = (unsigned int)(v55 - 1);
      *(_DWORD *)(v95 + 14976) = v76;
      v23 = *(unsigned __int8 **)(v54 + 8 * v76 + 14848);
      v77 = *((unsigned int *)v23 + 134);
      v78 = *((_QWORD *)v23 + 66);
      *v23 = 0;
      *((_DWORD *)v23 + 106) = 0;
      v79 = v78 + (v77 << 6);
      while ( v78 != v79 )
      {
        while ( 1 )
        {
          v79 -= 64;
          v80 = *(void **)(v79 + 24);
          if ( v80 == (void *)(v79 + 40) )
            break;
          v86 = v78;
          operator delete(v80);
          v78 = v86;
          if ( v86 == v79 )
            goto LABEL_87;
        }
      }
LABEL_87:
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
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
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
    v94 = v23;
  }
  v23[*v23 + 1] = 3;
  v24 = v94;
  v25 = *(unsigned __int8 *)v94;
  *(_BYTE *)v94 = v25 + 1;
  v26 = (unsigned __int8 *)v94;
  v24[v25 + 2] = v22;
  v27 = *(unsigned int *)(a2 + 40);
  if ( !v26 )
  {
    v50 = v95;
    v51 = *(_DWORD *)(v95 + 14976);
    if ( v51 )
    {
      v71 = (unsigned int)(v51 - 1);
      *(_DWORD *)(v95 + 14976) = v71;
      v26 = *(unsigned __int8 **)(v50 + 8 * v71 + 14848);
      v72 = *((unsigned int *)v26 + 134);
      v73 = *((_QWORD *)v26 + 66);
      *v26 = 0;
      *((_DWORD *)v26 + 106) = 0;
      v74 = v73 + (v72 << 6);
      while ( v73 != v74 )
      {
        while ( 1 )
        {
          v74 -= 64;
          v75 = *(void **)(v74 + 24);
          if ( v75 == (void *)(v74 + 40) )
            break;
          v85 = v73;
          operator delete(v75);
          v73 = v85;
          if ( v85 == v74 )
            goto LABEL_82;
        }
      }
LABEL_82:
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
      *((_QWORD *)v26 + 13) = 0;
      v26[112] = 0;
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
    v94 = v26;
  }
  v26[*v26 + 1] = 3;
  v28 = v94;
  v29 = *(unsigned __int8 *)v94;
  *(_BYTE *)v94 = v29 + 1;
  v28[v29 + 2] = v27;
  v30 = *(unsigned int *)(a2 + 44);
  v31 = (unsigned __int8 *)v94;
  if ( !v94 )
  {
    v52 = v95;
    v53 = *(_DWORD *)(v95 + 14976);
    if ( v53 )
    {
      v66 = (unsigned int)(v53 - 1);
      *(_DWORD *)(v95 + 14976) = v66;
      v31 = *(unsigned __int8 **)(v52 + 8 * v66 + 14848);
      v67 = *((unsigned int *)v31 + 134);
      *v31 = 0;
      v68 = *((_QWORD *)v31 + 66);
      *((_DWORD *)v31 + 106) = 0;
      v69 = v68 + (v67 << 6);
      while ( v68 != v69 )
      {
        while ( 1 )
        {
          v69 -= 64;
          v70 = *(void **)(v69 + 24);
          if ( v70 == (void *)(v69 + 40) )
            break;
          operator delete(v70);
          if ( v68 == v69 )
            goto LABEL_77;
        }
      }
LABEL_77:
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
    v94 = v31;
  }
  v31[*v31 + 1] = 3;
  v32 = v94;
  v33 = *(unsigned __int8 *)v94;
  *(_BYTE *)v94 = v33 + 1;
  v32[v33 + 2] = v30;
  if ( (_BYTE)v99 )
  {
    sub_FC7790(v96, (__int64 *)&v94, SHIBYTE(v99));
    v96 = 0;
    v99 = 0;
  }
  if ( v97 != &v98 )
    operator delete(v97);
  v34 = (void **)v94;
  if ( v94 )
  {
    v35 = v95;
    if ( v95 )
    {
      if ( (unsigned __int64)v94 < v95 || (unsigned __int64)v94 > v95 + 14848 )
      {
        v36 = *((void ***)v94 + 66);
        v37 = &v36[8 * (unsigned __int64)*((unsigned int *)v94 + 134)];
        if ( v36 != v37 )
        {
          do
          {
            while ( 1 )
            {
              v37 -= 8;
              v38 = (void **)v37[3];
              if ( v38 == v37 + 5 )
                break;
              operator delete(v38);
              if ( v36 == v37 )
                goto LABEL_24;
            }
          }
          while ( v36 != v37 );
LABEL_24:
          v37 = (void **)v34[66];
        }
        if ( v37 != v34 + 68 )
          free(v37);
        v39 = (void **)v34[52];
        v40 = v34 + 52;
        if ( v39 != v34 + 54 )
          free(v39);
        v41 = v34 + 12;
        do
        {
          while ( 1 )
          {
            v40 -= 4;
            if ( *v40 == v40 + 2 )
              break;
            operator delete(*v40);
            if ( v41 == v40 )
              goto LABEL_32;
          }
        }
        while ( v41 != v40 );
LABEL_32:
        operator delete(v34, 0x3A0u);
      }
      else
      {
        v44 = *(unsigned int *)(v95 + 14976);
        *(_DWORD *)(v95 + 14976) = v44 + 1;
        *(_QWORD *)(v35 + 8 * v44 + 14848) = v34;
      }
    }
  }
  *a1 = 0;
  return a1;
}
