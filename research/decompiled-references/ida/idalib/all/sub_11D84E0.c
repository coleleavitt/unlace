void __fastcall sub_11D84E0(__int64 a1, int a2)
{
  __int64 v2; // r15
  int v4; // r14d
  int v5; // r13d
  int v6; // eax
  __int64 *v7; // rax
  char *v8; // rax
  unsigned __int8 *v9; // r12
  char *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  char *v13; // rax
  unsigned __int8 *v14; // r12
  char *v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rax
  char *v18; // rax
  unsigned __int8 *v19; // r12
  char *v20; // r14
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // r12
  _BYTE *v24; // rsi
  __int64 v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  void **v30; // r13
  _BYTE *v31; // rdi
  __int64 v32; // rax
  char *v33; // rax
  unsigned __int8 *v34; // rbx
  char *v35; // r13
  _QWORD *v36; // rdx
  __int64 v37; // rax
  void **v38; // rbp
  unsigned __int64 v39; // rax
  void **v40; // r12
  void **v41; // rbx
  void **v42; // rdi
  void **v43; // rdi
  void **v44; // rbx
  void **v45; // r12
  size_t v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // r15
  __int64 v53; // r13
  void *v54; // rdi
  unsigned __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // r15
  __int64 v60; // r13
  void *v61; // rdi
  unsigned __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rdx
  __int64 v67; // r14
  void *v68; // rdi
  unsigned __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // r15
  void *v75; // rdi
  unsigned __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r14
  __int64 v81; // r12
  void *v82; // rdi
  __int64 v83; // [rsp+0h] [rbp-B8h]
  char *v84; // [rsp+0h] [rbp-B8h]
  _BYTE *v85; // [rsp+0h] [rbp-B8h]
  char *v86; // [rsp+0h] [rbp-B8h]
  __int64 v87; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  _QWORD v90[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v91; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v92; // [rsp+38h] [rbp-80h]
  __int64 v93; // [rsp+40h] [rbp-78h]
  void *v94; // [rsp+50h] [rbp-68h]
  __int64 v95; // [rsp+60h] [rbp-58h] BYREF
  __int16 v96; // [rsp+70h] [rbp-48h]

  if ( a2 == 1 )
    return;
  if ( !*(_DWORD *)(a1 + 12) )
    return;
  v2 = a1 + 8 * ((unsigned __int64)a2 >> 6);
  if ( ((1LL << a2) & *(_QWORD *)(v2 + 168)) != 0 )
    return;
  v4 = sub_FBFF30(a2);
  v5 = sub_FBFF60(a2);
  v6 = *(_DWORD *)(a1 + 12);
  if ( v4 <= v6 && v5 >= v6 )
    return;
  v7 = *(__int64 **)a1;
  *(_QWORD *)(v2 + 168) |= 1LL << a2;
  sub_FC70B0((__int64)&v91, *v7, 0, 346);
  v8 = sub_FF7B80(a2);
  v9 = (unsigned __int8 *)v91;
  v10 = v8;
  if ( !v91 )
  {
    v69 = v92;
    v70 = *(_DWORD *)(v92 + 14976);
    if ( v70 )
    {
      v71 = (unsigned int)(v70 - 1);
      *(_DWORD *)(v92 + 14976) = v71;
      v9 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
      v72 = *((unsigned int *)v9 + 134);
      v73 = *((_QWORD *)v9 + 66);
      *v9 = 0;
      *((_DWORD *)v9 + 106) = 0;
      v74 = v73 + (v72 << 6);
      while ( v73 != v74 )
      {
        while ( 1 )
        {
          v74 -= 64;
          v75 = *(void **)(v74 + 24);
          if ( v75 == (void *)(v74 + 40) )
            break;
          v87 = v73;
          v84 = v10;
          operator delete(v75);
          v73 = v87;
          v10 = v84;
          if ( v87 == v74 )
            goto LABEL_74;
        }
      }
LABEL_74:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v86 = v10;
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
      v10 = v86;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    v91 = v9;
  }
  v9[*v9 + 1] = 1;
  v11 = v91;
  v12 = *(unsigned __int8 *)v91;
  *(_BYTE *)v91 = v12 + 1;
  v11[v12 + 2] = v10;
  v13 = sub_FBFE80(v4);
  v14 = (unsigned __int8 *)v91;
  v15 = v13;
  if ( !v91 )
  {
    v62 = v92;
    v63 = *(_DWORD *)(v92 + 14976);
    if ( v63 )
    {
      v64 = (unsigned int)(v63 - 1);
      *(_DWORD *)(v92 + 14976) = v64;
      v14 = *(unsigned __int8 **)(v62 + 8 * v64 + 14848);
      v65 = *((unsigned int *)v14 + 134);
      v66 = *((_QWORD *)v14 + 66);
      *v14 = 0;
      *((_DWORD *)v14 + 106) = 0;
      v67 = v66 + (v65 << 6);
      while ( v66 != v67 )
      {
        while ( 1 )
        {
          v67 -= 64;
          v68 = *(void **)(v67 + 24);
          if ( v68 == (void *)(v67 + 40) )
            break;
          v83 = v66;
          operator delete(v68);
          v66 = v83;
          if ( v83 == v67 )
            goto LABEL_68;
        }
      }
LABEL_68:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
    }
    v91 = v14;
  }
  v14[*v14 + 1] = 1;
  v16 = v91;
  v17 = *(unsigned __int8 *)v91;
  *(_BYTE *)v91 = v17 + 1;
  v16[v17 + 2] = v15;
  v18 = sub_FBFE80(v5);
  v19 = (unsigned __int8 *)v91;
  v20 = v18;
  if ( !v91 )
  {
    v55 = v92;
    v56 = *(_DWORD *)(v92 + 14976);
    if ( v56 )
    {
      v57 = (unsigned int)(v56 - 1);
      *(_DWORD *)(v92 + 14976) = v57;
      v19 = *(unsigned __int8 **)(v55 + 8 * v57 + 14848);
      v58 = *((unsigned int *)v19 + 134);
      v59 = *((_QWORD *)v19 + 66);
      *v19 = 0;
      *((_DWORD *)v19 + 106) = 0;
      v60 = v59 + (v58 << 6);
      while ( v59 != v60 )
      {
        while ( 1 )
        {
          v60 -= 64;
          v61 = *(void **)(v60 + 24);
          if ( v61 == (void *)(v60 + 40) )
            break;
          operator delete(v61);
          if ( v59 == v60 )
            goto LABEL_62;
        }
      }
LABEL_62:
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      v19 = (unsigned __int8 *)operator new(0x3A0u);
      *v19 = 0;
      *((_QWORD *)v19 + 12) = v19 + 112;
      *((_QWORD *)v19 + 16) = v19 + 144;
      *((_QWORD *)v19 + 20) = v19 + 176;
      *((_QWORD *)v19 + 24) = v19 + 208;
      *((_QWORD *)v19 + 28) = v19 + 240;
      *((_QWORD *)v19 + 32) = v19 + 272;
      *((_QWORD *)v19 + 36) = v19 + 304;
      *((_QWORD *)v19 + 40) = v19 + 336;
      *((_QWORD *)v19 + 44) = v19 + 368;
      *((_QWORD *)v19 + 48) = v19 + 400;
      *((_QWORD *)v19 + 52) = v19 + 432;
      *((_QWORD *)v19 + 13) = 0;
      v19[112] = 0;
      *((_QWORD *)v19 + 17) = 0;
      v19[144] = 0;
      *((_QWORD *)v19 + 21) = 0;
      v19[176] = 0;
      *((_QWORD *)v19 + 25) = 0;
      v19[208] = 0;
      *((_QWORD *)v19 + 29) = 0;
      v19[240] = 0;
      *((_QWORD *)v19 + 33) = 0;
      v19[272] = 0;
      *((_QWORD *)v19 + 37) = 0;
      v19[304] = 0;
      *((_QWORD *)v19 + 41) = 0;
      v19[336] = 0;
      *((_QWORD *)v19 + 45) = 0;
      v19[368] = 0;
      *((_QWORD *)v19 + 49) = 0;
      v19[400] = 0;
      *((_QWORD *)v19 + 53) = 0x800000000LL;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v91 = v19;
  }
  v19[*v19 + 1] = 1;
  v21 = v91;
  v22 = *(unsigned __int8 *)v91;
  *(_BYTE *)v91 = v22 + 1;
  v23 = (unsigned __int8 *)v91;
  v21[v22 + 2] = v20;
  v24 = *(_BYTE **)(a1 + 16);
  v25 = *(_QWORD *)(a1 + 24);
  if ( !v23 )
  {
    v48 = v92;
    v49 = *(_DWORD *)(v92 + 14976);
    if ( v49 )
    {
      v50 = (unsigned int)(v49 - 1);
      *(_DWORD *)(v92 + 14976) = v50;
      v23 = *(unsigned __int8 **)(v48 + 8 * v50 + 14848);
      v51 = *((unsigned int *)v23 + 134);
      v52 = *((_QWORD *)v23 + 66);
      *v23 = 0;
      *((_DWORD *)v23 + 106) = 0;
      v53 = v52 + (v51 << 6);
      while ( v52 != v53 )
      {
        while ( 1 )
        {
          v53 -= 64;
          v54 = *(void **)(v53 + 24);
          if ( v54 == (void *)(v53 + 40) )
            break;
          operator delete(v54);
          if ( v52 == v53 )
            goto LABEL_56;
        }
      }
LABEL_56:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v85 = *(_BYTE **)(a1 + 16);
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
      v24 = v85;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v91 = v23;
  }
  v23[*v23 + 1] = 0;
  src = v90;
  sub_11D7980(&src, v24, (__int64)&v24[v25]);
  v26 = v91;
  v27 = *(unsigned __int8 *)v91;
  *(_BYTE *)v91 = v27 + 1;
  v28 = (unsigned __int8)v27;
  v29 = 4 * (v27 + 3);
  v30 = (void **)&v26[v29];
  v31 = (_BYTE *)v26[v29];
  if ( src == v90 )
  {
    v46 = n;
    if ( n )
    {
      if ( n == 1 )
        *v31 = v90[0];
      else
        memcpy(v31, src, n);
      v46 = n;
      v31 = *v30;
    }
    v30[1] = (void *)v46;
    v31[v46] = 0;
    v31 = src;
    goto LABEL_16;
  }
  if ( v31 == (_BYTE *)&v26[v29 + 2] )
  {
    *v30 = src;
    v30[1] = (void *)n;
    v30[2] = (void *)v90[0];
    goto LABEL_39;
  }
  v32 = v26[4 * v28 + 14];
  *v30 = src;
  v30[1] = (void *)n;
  v30[2] = (void *)v90[0];
  if ( !v31 )
  {
LABEL_39:
    v31 = v90;
    src = v90;
    goto LABEL_16;
  }
  src = v31;
  v90[0] = v32;
LABEL_16:
  n = 0;
  *v31 = 0;
  if ( src != v90 )
    operator delete(src);
  v33 = sub_FBFE80(*(_DWORD *)(a1 + 12));
  v34 = (unsigned __int8 *)v91;
  v35 = v33;
  if ( !v91 )
  {
    v76 = v92;
    v77 = *(_DWORD *)(v92 + 14976);
    if ( v77 )
    {
      v78 = (unsigned int)(v77 - 1);
      *(_DWORD *)(v92 + 14976) = v78;
      v34 = *(unsigned __int8 **)(v76 + 8 * v78 + 14848);
      v79 = *((unsigned int *)v34 + 134);
      *v34 = 0;
      v80 = *((_QWORD *)v34 + 66);
      *((_DWORD *)v34 + 106) = 0;
      v81 = v80 + (v79 << 6);
      while ( v80 != v81 )
      {
        while ( 1 )
        {
          v81 -= 64;
          v82 = *(void **)(v81 + 24);
          if ( v82 == (void *)(v81 + 40) )
            break;
          operator delete(v82);
          if ( v80 == v81 )
            goto LABEL_80;
        }
      }
LABEL_80:
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
    v91 = v34;
  }
  v34[*v34 + 1] = 1;
  v36 = v91;
  v37 = *(unsigned __int8 *)v91;
  *(_BYTE *)v91 = v37 + 1;
  v36[v37 + 2] = v35;
  if ( (_BYTE)v96 )
  {
    sub_FC7790(v93, (__int64 *)&v91, SHIBYTE(v96));
    v93 = 0;
    v96 = 0;
  }
  if ( v94 != &v95 )
    operator delete(v94);
  v38 = (void **)v91;
  if ( v91 )
  {
    v39 = v92;
    if ( v92 )
    {
      if ( (unsigned __int64)v91 < v92 || (unsigned __int64)v91 > v92 + 14848 )
      {
        v40 = *((void ***)v91 + 66);
        v41 = &v40[8 * (unsigned __int64)*((unsigned int *)v91 + 134)];
        if ( v40 != v41 )
        {
          do
          {
            while ( 1 )
            {
              v41 -= 8;
              v42 = (void **)v41[3];
              if ( v42 == v41 + 5 )
                break;
              operator delete(v42);
              if ( v40 == v41 )
                goto LABEL_29;
            }
          }
          while ( v40 != v41 );
LABEL_29:
          v41 = (void **)v38[66];
        }
        if ( v41 != v38 + 68 )
          free(v41);
        v43 = (void **)v38[52];
        v44 = v38 + 52;
        if ( v43 != v38 + 54 )
          free(v43);
        v45 = v38 + 12;
        do
        {
          while ( 1 )
          {
            v44 -= 4;
            if ( *v44 == v44 + 2 )
              break;
            operator delete(*v44);
            if ( v44 == v45 )
              goto LABEL_37;
          }
        }
        while ( v44 != v45 );
LABEL_37:
        operator delete(v38, 0x3A0u);
      }
      else
      {
        v47 = *(unsigned int *)(v92 + 14976);
        *(_DWORD *)(v92 + 14976) = v47 + 1;
        *(_QWORD *)(v39 + 8 * v47 + 14848) = v38;
      }
    }
  }
}
