void __fastcall sub_B4D490(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 *v7; // r13
  _BOOL8 v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax
  const char **v11; // rax
  const char *v12; // r15
  size_t v13; // r14
  const char *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r13
  _BYTE *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  _QWORD *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  void **v29; // rbp
  unsigned __int64 v30; // rax
  void **v31; // r12
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r12
  char v37; // al
  const char *v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  int v43; // eax
  unsigned __int8 *v44; // rbp
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r14
  __int64 v50; // rbp
  void *v51; // rdi
  unsigned __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rdx
  __int64 v57; // r15
  void *v58; // rdi
  _BYTE *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rcx
  __int64 v63; // r13
  void *v64; // rdi
  const char *v65; // [rsp+0h] [rbp-B8h]
  __int64 v66; // [rsp+0h] [rbp-B8h]
  const char *v67; // [rsp+0h] [rbp-B8h]
  __int64 v68; // [rsp+8h] [rbp-B0h]
  _QWORD *src; // [rsp+10h] [rbp-A8h]
  int n; // [rsp+18h] [rbp-A0h]
  _QWORD v71[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v72; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v73; // [rsp+38h] [rbp-80h]
  __int64 v74; // [rsp+40h] [rbp-78h]
  void *v75; // [rsp+50h] [rbp-68h]
  __int64 v76; // [rsp+60h] [rbp-58h] BYREF
  __int16 v77; // [rsp+70h] [rbp-48h]

  if ( (*((_BYTE *)sub_B3E290(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF) + 20) & 4) != 0 )
    return;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(v3 + 13);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 2) == 0 )
      return;
  }
  else
  {
    v37 = (2 * (sub_B3A640(*(_QWORD *)(a2 + 32)) & 1)) | *(_BYTE *)(v3 + 13) & 0xFD | 1;
    *(_BYTE *)(v3 + 13) = v37;
    if ( (v37 & 2) == 0 )
      return;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( !(_DWORD)v5 || (v6 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 24LL * (unsigned int)(v5 - 1) + 4), !(_DWORD)v6) )
  {
    v38 = (const char *)*sub_B3E290(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
    v39 = 0;
    if ( v38 )
      v39 = strlen(v38);
    v6 = (unsigned int)(v39 + *(_DWORD *)(a2 + 4) + 1);
  }
  sub_FC70B0(&v72, *(_QWORD *)(a1 + 16), v6, 2633);
  v7 = (unsigned __int8 *)v72;
  v8 = (*(_BYTE *)(a2 + 15) & 0x10) != 0;
  if ( !v72 )
  {
    v52 = v73;
    v53 = *(_DWORD *)(v73 + 14976);
    if ( v53 )
    {
      v54 = (unsigned int)(v53 - 1);
      *(_DWORD *)(v73 + 14976) = v54;
      v7 = *(unsigned __int8 **)(v52 + 8 * v54 + 14848);
      v55 = *((unsigned int *)v7 + 134);
      *v7 = 0;
      v56 = *((_QWORD *)v7 + 66);
      *((_DWORD *)v7 + 106) = 0;
      v57 = v56 + (v55 << 6);
      while ( v56 != v57 )
      {
        while ( 1 )
        {
          v57 -= 64;
          v58 = *(void **)(v57 + 24);
          if ( v58 == (void *)(v57 + 40) )
            break;
          v66 = v56;
          operator delete(v58);
          v56 = v66;
          if ( v66 == v57 )
            goto LABEL_82;
        }
      }
LABEL_82:
      *((_DWORD *)v7 + 134) = 0;
    }
    else
    {
      v7 = (unsigned __int8 *)operator new(0x3A0u);
      *v7 = 0;
      *((_QWORD *)v7 + 12) = v7 + 112;
      *((_QWORD *)v7 + 16) = v7 + 144;
      *((_QWORD *)v7 + 20) = v7 + 176;
      *((_QWORD *)v7 + 24) = v7 + 208;
      *((_QWORD *)v7 + 28) = v7 + 240;
      *((_QWORD *)v7 + 32) = v7 + 272;
      *((_QWORD *)v7 + 36) = v7 + 304;
      *((_QWORD *)v7 + 40) = v7 + 336;
      *((_QWORD *)v7 + 44) = v7 + 368;
      *((_QWORD *)v7 + 48) = v7 + 400;
      *((_QWORD *)v7 + 52) = v7 + 432;
      *((_QWORD *)v7 + 13) = 0;
      v7[112] = 0;
      *((_QWORD *)v7 + 17) = 0;
      v7[144] = 0;
      *((_QWORD *)v7 + 21) = 0;
      v7[176] = 0;
      *((_QWORD *)v7 + 25) = 0;
      v7[208] = 0;
      *((_QWORD *)v7 + 29) = 0;
      v7[240] = 0;
      *((_QWORD *)v7 + 33) = 0;
      v7[272] = 0;
      *((_QWORD *)v7 + 37) = 0;
      v7[304] = 0;
      *((_QWORD *)v7 + 41) = 0;
      v7[336] = 0;
      *((_QWORD *)v7 + 45) = 0;
      v7[368] = 0;
      *((_QWORD *)v7 + 49) = 0;
      v7[400] = 0;
      *((_QWORD *)v7 + 53) = 0x800000000LL;
      *((_QWORD *)v7 + 66) = v7 + 544;
      *((_QWORD *)v7 + 67) = 0x600000000LL;
    }
    v72 = v7;
  }
  v7[*v7 + 1] = 2;
  v9 = v72;
  v10 = *(unsigned __int8 *)v72;
  *(_BYTE *)v72 = v10 + 1;
  v9[v10 + 2] = v8;
  v11 = (const char **)sub_B3E290(*(_QWORD *)(a1 + 24), (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
  v12 = *v11;
  if ( *v11 )
  {
    v13 = strlen(*v11);
    v14 = &v12[v13];
    if ( v72 )
    {
      *((_BYTE *)v72 + *(unsigned __int8 *)v72 + 1) = 0;
      src = v71;
      goto LABEL_10;
    }
  }
  else
  {
    v14 = (const char *)v72;
    if ( v72 )
    {
      v13 = 0;
      *((_BYTE *)v72 + *(unsigned __int8 *)v72 + 1) = 0;
      v15 = v71;
      src = v71;
      goto LABEL_13;
    }
    v13 = 0;
  }
  v42 = v73;
  v43 = *(_DWORD *)(v73 + 14976);
  if ( v43 )
  {
    v60 = (unsigned int)(v43 - 1);
    *(_DWORD *)(v73 + 14976) = v60;
    v44 = *(unsigned __int8 **)(v42 + 8 * v60 + 14848);
    v61 = *((unsigned int *)v44 + 134);
    *v44 = 0;
    v62 = *((_QWORD *)v44 + 66);
    *((_DWORD *)v44 + 106) = 0;
    v63 = v62 + (v61 << 6);
    while ( v62 != v63 )
    {
      while ( 1 )
      {
        v63 -= 64;
        v64 = *(void **)(v63 + 24);
        if ( v64 == (void *)(v63 + 40) )
          break;
        v68 = v62;
        v67 = v14;
        operator delete(v64);
        v62 = v68;
        v14 = v67;
        if ( v68 == v63 )
          goto LABEL_89;
      }
    }
LABEL_89:
    *((_DWORD *)v44 + 134) = 0;
  }
  else
  {
    v65 = v14;
    v44 = (unsigned __int8 *)operator new(0x3A0u);
    *v44 = 0;
    *((_QWORD *)v44 + 12) = v44 + 112;
    *((_QWORD *)v44 + 16) = v44 + 144;
    *((_QWORD *)v44 + 20) = v44 + 176;
    *((_QWORD *)v44 + 24) = v44 + 208;
    *((_QWORD *)v44 + 28) = v44 + 240;
    *((_QWORD *)v44 + 32) = v44 + 272;
    *((_QWORD *)v44 + 36) = v44 + 304;
    *((_QWORD *)v44 + 40) = v44 + 336;
    *((_QWORD *)v44 + 44) = v44 + 368;
    *((_QWORD *)v44 + 48) = v44 + 400;
    *((_QWORD *)v44 + 52) = v44 + 432;
    *((_QWORD *)v44 + 13) = 0;
    v44[112] = 0;
    *((_QWORD *)v44 + 17) = 0;
    v44[144] = 0;
    *((_QWORD *)v44 + 21) = 0;
    v44[176] = 0;
    *((_QWORD *)v44 + 25) = 0;
    v44[208] = 0;
    *((_QWORD *)v44 + 29) = 0;
    v44[240] = 0;
    *((_QWORD *)v44 + 33) = 0;
    v44[272] = 0;
    *((_QWORD *)v44 + 37) = 0;
    v44[304] = 0;
    *((_QWORD *)v44 + 41) = 0;
    v44[336] = 0;
    *((_QWORD *)v44 + 45) = 0;
    v44[368] = 0;
    *((_QWORD *)v44 + 49) = 0;
    v44[400] = 0;
    *((_QWORD *)v44 + 53) = 0x800000000LL;
    v14 = v65;
    *((_QWORD *)v44 + 66) = v44 + 544;
    *((_QWORD *)v44 + 67) = 0x600000000LL;
  }
  v72 = v44;
  v44[*v44 + 1] = 0;
  src = v71;
  if ( !v12 && v14 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
LABEL_10:
  if ( v13 > 0xF )
  {
    v15 = (_QWORD *)operator new(v13 + 1);
    v71[0] = v13;
    src = v15;
LABEL_55:
    memcpy(v15, v12, v13);
    v15 = src;
    goto LABEL_13;
  }
  if ( v13 == 1 )
  {
    LOBYTE(v71[0]) = *v12;
    v15 = v71;
    goto LABEL_13;
  }
  v15 = v71;
  if ( v13 )
    goto LABEL_55;
LABEL_13:
  *((_BYTE *)v15 + v13) = 0;
  v16 = v72;
  v17 = *(unsigned __int8 *)v72;
  *(_BYTE *)v72 = v17 + 1;
  v18 = (unsigned __int8)v17;
  v19 = 4 * (v17 + 3);
  v20 = &v16[v19];
  v21 = (_BYTE *)v16[v19];
  if ( src == v71 )
  {
    v40 = v13;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *v21 = v71[0];
        v40 = 1;
      }
      else
      {
        memcpy(v21, src, v13);
        v40 = v13;
      }
      v21 = (_BYTE *)*v20;
    }
    v20[1] = v40;
    v21[v40] = 0;
    v21 = src;
    goto LABEL_17;
  }
  if ( v21 == (_BYTE *)&v16[v19 + 2] )
  {
    *v20 = src;
    v20[1] = v13;
    v20[2] = v71[0];
    goto LABEL_64;
  }
  v22 = v16[4 * v18 + 14];
  *v20 = src;
  v20[1] = v13;
  v20[2] = v71[0];
  if ( !v21 )
  {
LABEL_64:
    v21 = v71;
    src = v71;
    goto LABEL_17;
  }
  src = v21;
  v71[0] = v22;
LABEL_17:
  n = 0;
  *v21 = 0;
  if ( src != v71 )
    operator delete(src);
  v23 = *(_QWORD *)(a2 + 4);
  v24 = v72;
  if ( v72 )
  {
    v25 = *((unsigned int *)v72 + 106);
    v26 = *((unsigned int *)v72 + 107);
    v27 = v25 + 1;
  }
  else
  {
    v45 = v73;
    v46 = *(_DWORD *)(v73 + 14976);
    if ( v46 )
    {
      v47 = (unsigned int)(v46 - 1);
      *(_DWORD *)(v73 + 14976) = v47;
      v24 = *(_QWORD **)(v45 + 8 * v47 + 14848);
      v48 = *((unsigned int *)v24 + 134);
      *(_BYTE *)v24 = 0;
      v49 = v24[66];
      *((_DWORD *)v24 + 106) = 0;
      v50 = v49 + (v48 << 6);
      if ( v49 == v50 )
      {
        v27 = 1;
        v25 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v50 -= 64;
            v51 = *(void **)(v50 + 24);
            if ( v51 == (void *)(v50 + 40) )
              break;
            operator delete(v51);
            if ( v49 == v50 )
              goto LABEL_75;
          }
        }
        while ( v49 != v50 );
LABEL_75:
        v25 = *((unsigned int *)v24 + 106);
        v27 = v25 + 1;
      }
      *((_DWORD *)v24 + 134) = 0;
      v26 = *((unsigned int *)v24 + 107);
    }
    else
    {
      v59 = (_BYTE *)operator new(0x3A0u);
      v26 = 8;
      v27 = 1;
      v24 = v59;
      *v59 = 0;
      *((_QWORD *)v59 + 12) = v59 + 112;
      *((_QWORD *)v59 + 16) = v59 + 144;
      *((_QWORD *)v59 + 20) = v59 + 176;
      *((_QWORD *)v59 + 24) = v59 + 208;
      *((_QWORD *)v59 + 28) = v59 + 240;
      *((_QWORD *)v59 + 32) = v59 + 272;
      *((_QWORD *)v59 + 36) = v59 + 304;
      *((_QWORD *)v59 + 40) = v59 + 336;
      *((_QWORD *)v59 + 44) = v59 + 368;
      *((_QWORD *)v59 + 48) = v59 + 400;
      *((_QWORD *)v59 + 52) = v59 + 432;
      *((_QWORD *)v59 + 13) = 0;
      v59[112] = 0;
      *((_QWORD *)v59 + 17) = 0;
      v59[144] = 0;
      *((_QWORD *)v59 + 21) = 0;
      v59[176] = 0;
      *((_QWORD *)v59 + 25) = 0;
      v59[208] = 0;
      *((_QWORD *)v59 + 29) = 0;
      v59[240] = 0;
      *((_QWORD *)v59 + 33) = 0;
      v59[272] = 0;
      *((_QWORD *)v59 + 37) = 0;
      v59[304] = 0;
      *((_QWORD *)v59 + 41) = 0;
      v59[336] = 0;
      *((_QWORD *)v59 + 45) = 0;
      v59[368] = 0;
      *((_QWORD *)v59 + 49) = 0;
      v59[400] = 0;
      *((_QWORD *)v59 + 53) = 0x800000000LL;
      *((_QWORD *)v59 + 66) = v59 + 544;
      *((_QWORD *)v59 + 67) = 0x600000000LL;
      v25 = 0;
    }
    v72 = v24;
  }
  LOBYTE(n) = 1;
  if ( v27 > v26 )
  {
    sub_2237220(v24 + 52, v24 + 54, v27, 12);
    v25 = *((unsigned int *)v24 + 106);
  }
  v28 = v24[52] + 12 * v25;
  *(_QWORD *)v28 = v23;
  *(_DWORD *)(v28 + 8) = n;
  ++*((_DWORD *)v24 + 106);
  if ( (_BYTE)v77 )
  {
    sub_FC7790(v74, &v72, HIBYTE(v77));
    v74 = 0;
    v77 = 0;
  }
  if ( v75 != &v76 )
    operator delete(v75);
  v29 = (void **)v72;
  if ( v72 )
  {
    v30 = v73;
    if ( v73 )
    {
      if ( (unsigned __int64)v72 < v73 || (unsigned __int64)v72 > v73 + 14848 )
      {
        v31 = *((void ***)v72 + 66);
        v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v72 + 134)];
        if ( v31 != v32 )
        {
          do
          {
            while ( 1 )
            {
              v32 -= 8;
              v33 = (void **)v32[3];
              if ( v33 == v32 + 5 )
                break;
              operator delete(v33);
              if ( v31 == v32 )
                goto LABEL_33;
            }
          }
          while ( v31 != v32 );
LABEL_33:
          v32 = (void **)v29[66];
        }
        if ( v32 != v29 + 68 )
          free(v32);
        v34 = (void **)v29[52];
        if ( v34 != v29 + 54 )
          free(v34);
        v35 = v29 + 48;
        v36 = v29 + 8;
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 -= 4;
            if ( v36 == v35 )
              goto LABEL_41;
          }
          v35 -= 4;
        }
        while ( v36 != v35 );
LABEL_41:
        operator delete(v29, 0x3A0u);
      }
      else
      {
        v41 = *(unsigned int *)(v73 + 14976);
        *(_DWORD *)(v73 + 14976) = v41 + 1;
        *(_QWORD *)(v30 + 8 * v41 + 14848) = v29;
      }
    }
  }
}
