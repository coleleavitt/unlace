_UNKNOWN *__ptr32 *__fastcall sub_1271360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  const char **v7; // rax
  char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // r12
  char *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 *v21; // rbx
  size_t v22; // r8
  _QWORD *v23; // rdx
  size_t v24; // r8
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  void **v28; // rcx
  _BYTE *v29; // rdi
  __int64 v30; // rax
  unsigned __int8 *v31; // r12
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  void **v36; // rbp
  _BYTE *v37; // rdi
  __int64 v38; // rax
  void **v39; // rbp
  unsigned __int64 v40; // rax
  void **v41; // r12
  void **v42; // rbx
  void **v43; // rdi
  void **v44; // rdi
  void **v45; // rbx
  void **v46; // r12
  unsigned int *v47; // rbp
  unsigned int v48; // r12d
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rdi
  _UNKNOWN *__ptr32 *result; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  size_t v57; // rdx
  size_t v58; // rdx
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  int v61; // eax
  unsigned __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rcx
  __int64 v67; // r12
  void *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  void *v73; // rdi
  size_t v74; // [rsp+0h] [rbp-C8h]
  size_t v75; // [rsp+0h] [rbp-C8h]
  size_t v76; // [rsp+0h] [rbp-C8h]
  size_t v77; // [rsp+0h] [rbp-C8h]
  __int64 v78; // [rsp+0h] [rbp-C8h]
  void **v79; // [rsp+8h] [rbp-C0h]
  __int64 v80; // [rsp+8h] [rbp-C0h]
  __int64 v81; // [rsp+8h] [rbp-C0h]
  size_t v82; // [rsp+8h] [rbp-C0h]
  size_t v83; // [rsp+10h] [rbp-B8h]
  __int64 v84; // [rsp+10h] [rbp-B8h]
  __int64 v85; // [rsp+18h] [rbp-B0h]
  void *src; // [rsp+20h] [rbp-A8h] BYREF
  size_t n; // [rsp+28h] [rbp-A0h]
  _QWORD v88[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v89; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v90; // [rsp+48h] [rbp-80h]
  __int64 v91; // [rsp+50h] [rbp-78h]
  void *v92; // [rsp+60h] [rbp-68h]
  __int64 v93; // [rsp+70h] [rbp-58h] BYREF
  __int16 v94; // [rsp+80h] [rbp-48h]

  v5 = sub_10DCD30(a2, 0x95Fu);
  if ( !v5 )
    goto LABEL_5;
  v6 = v5;
  v7 = *(const char ***)(v5 + 48);
  v8 = (char *)*v7;
  if ( *v7 )
  {
    v9 = strlen(*v7);
    v10 = v9;
    if ( v9 == 4 )
    {
      if ( *(_DWORD *)v8 == 1701736302 )
        goto LABEL_5;
    }
    else if ( v9 == 2 )
    {
      if ( *(_WORD *)v8 == 26211 )
      {
        sub_10DC5D0(a3, (__int64)"-cfguard");
        goto LABEL_5;
      }
    }
    else if ( v9 == 11 && *(_QWORD *)v8 == 0x6568636F6E2D6663LL && *((_WORD *)v8 + 4) == 27491 && v8[10] == 115 )
    {
      sub_10DC5D0(a3, (__int64)"-cfguard-no-checks");
      goto LABEL_5;
    }
  }
  else
  {
    v10 = 0;
  }
  v74 = v10;
  sub_FC70B0((__int64)&v89, **(_QWORD **)(a1 + 8), 0, 497);
  v19 = *(_BYTE **)(v6 + 24);
  v20 = *(_QWORD *)(v6 + 32);
  v21 = (unsigned __int8 *)v89;
  v22 = v74;
  if ( !v89 )
  {
    v60 = v90;
    v61 = *(_DWORD *)(v90 + 14976);
    if ( v61 )
    {
      v64 = (unsigned int)(v61 - 1);
      *(_DWORD *)(v90 + 14976) = v64;
      v21 = *(unsigned __int8 **)(v60 + 8 * v64 + 14848);
      v65 = *((unsigned int *)v21 + 134);
      *v21 = 0;
      v66 = *((_QWORD *)v21 + 66);
      *((_DWORD *)v21 + 106) = 0;
      v67 = v66 + (v65 << 6);
      while ( v66 != v67 )
      {
        while ( 1 )
        {
          v67 -= 64;
          v68 = *(void **)(v67 + 24);
          if ( v68 == (void *)(v67 + 40) )
            break;
          v85 = v66;
          v83 = v22;
          v81 = v20;
          operator delete(v68);
          v66 = v85;
          v20 = v81;
          v22 = v83;
          if ( v85 == v67 )
            goto LABEL_104;
        }
      }
LABEL_104:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      v80 = v20;
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
      *((_QWORD *)v21 + 66) = v21 + 544;
      v20 = v80;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
      v22 = v74;
    }
    v89 = v21;
  }
  v75 = v22;
  v21[*v21 + 1] = 0;
  src = v88;
  sub_1270C30(&src, v19, (__int64)&v19[v20]);
  v23 = v89;
  v24 = v75;
  v25 = *(unsigned __int8 *)v89;
  v26 = *(unsigned __int8 *)v89;
  *(_BYTE *)v89 = v25 + 1;
  v27 = 4 * (v26 + 3);
  v28 = (void **)&v23[v27];
  v29 = (_BYTE *)v23[v27];
  if ( src == v88 )
  {
    v57 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v29 = v88[0];
        v57 = n;
        v29 = *v28;
      }
      else
      {
        v79 = v28;
        memcpy(v29, src, n);
        v28 = v79;
        v57 = n;
        v24 = v75;
        v29 = *v79;
      }
    }
    v28[1] = (void *)v57;
    v29[v57] = 0;
    v29 = src;
  }
  else
  {
    if ( v29 == (_BYTE *)&v23[v27 + 2] )
    {
      *v28 = src;
      v28[1] = (void *)n;
      v28[2] = (void *)v88[0];
    }
    else
    {
      v30 = v23[4 * v25 + 14];
      *v28 = src;
      v28[1] = (void *)n;
      v28[2] = (void *)v88[0];
      if ( v29 )
      {
        src = v29;
        v88[0] = v30;
        goto LABEL_21;
      }
    }
    v29 = v88;
    src = v88;
  }
LABEL_21:
  n = 0;
  *v29 = 0;
  if ( src != v88 )
  {
    v76 = v24;
    operator delete(src);
    v24 = v76;
  }
  v31 = (unsigned __int8 *)v89;
  if ( !v89 )
  {
    v62 = v90;
    v63 = *(_DWORD *)(v90 + 14976);
    if ( v63 )
    {
      v69 = (unsigned int)(v63 - 1);
      *(_DWORD *)(v90 + 14976) = v69;
      v31 = *(unsigned __int8 **)(v62 + 8 * v69 + 14848);
      v70 = *((unsigned int *)v31 + 134);
      v71 = *((_QWORD *)v31 + 66);
      *v31 = 0;
      *((_DWORD *)v31 + 106) = 0;
      v72 = v71 + (v70 << 6);
      while ( v71 != v72 )
      {
        while ( 1 )
        {
          v72 -= 64;
          v73 = *(void **)(v72 + 24);
          if ( v73 == (void *)(v72 + 40) )
            break;
          v84 = v71;
          v82 = v24;
          v78 = v72;
          operator delete(v73);
          v72 = v78;
          v71 = v84;
          v24 = v82;
          if ( v84 == v78 )
            goto LABEL_109;
        }
      }
LABEL_109:
      *((_DWORD *)v31 + 134) = 0;
    }
    else
    {
      v77 = v24;
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
      v24 = v77;
      *((_QWORD *)v31 + 66) = v31 + 544;
      *((_QWORD *)v31 + 67) = 0x600000000LL;
    }
    v89 = v31;
  }
  v31[*v31 + 1] = 0;
  src = v88;
  sub_1270C30(&src, v8, (__int64)&v8[v24]);
  v32 = v89;
  v33 = *(unsigned __int8 *)v89;
  *(_BYTE *)v89 = v33 + 1;
  v34 = (unsigned __int8)v33;
  v35 = 4 * (v33 + 3);
  v36 = (void **)&v32[v35];
  v37 = (_BYTE *)v32[v35];
  if ( src == v88 )
  {
    v58 = n;
    if ( n )
    {
      if ( n == 1 )
        *v37 = v88[0];
      else
        memcpy(v37, src, n);
      v58 = n;
      v37 = *v36;
    }
    v36[1] = (void *)v58;
    v37[v58] = 0;
    v37 = src;
  }
  else
  {
    if ( v37 == (_BYTE *)&v32[v35 + 2] )
    {
      *v36 = src;
      v36[1] = (void *)n;
      v36[2] = (void *)v88[0];
    }
    else
    {
      v38 = v32[4 * v34 + 14];
      *v36 = src;
      v36[1] = (void *)n;
      v36[2] = (void *)v88[0];
      if ( v37 )
      {
        src = v37;
        v88[0] = v38;
        goto LABEL_28;
      }
    }
    v37 = v88;
    src = v88;
  }
LABEL_28:
  n = 0;
  *v37 = 0;
  if ( src != v88 )
    operator delete(src);
  if ( (_BYTE)v94 )
  {
    sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
    v91 = 0;
    v94 = 0;
  }
  if ( v92 != &v93 )
    operator delete(v92);
  v39 = (void **)v89;
  if ( v89 )
  {
    v40 = v90;
    if ( v90 )
    {
      if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
      {
        v41 = *((void ***)v89 + 66);
        v42 = &v41[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
        if ( v41 != v42 )
        {
          do
          {
            while ( 1 )
            {
              v42 -= 8;
              v43 = (void **)v42[3];
              if ( v43 == v42 + 5 )
                break;
              operator delete(v43);
              if ( v41 == v42 )
                goto LABEL_40;
            }
          }
          while ( v41 != v42 );
LABEL_40:
          v42 = (void **)v39[66];
        }
        if ( v42 != v39 + 68 )
          free(v42);
        v44 = (void **)v39[52];
        if ( v44 != v39 + 54 )
          free(v44);
        v45 = v39 + 48;
        v46 = v39 + 8;
        do
        {
          while ( *v45 != v45 + 2 )
          {
            operator delete(*v45);
            v45 -= 4;
            if ( v46 == v45 )
              goto LABEL_48;
          }
          v45 -= 4;
        }
        while ( v46 != v45 );
LABEL_48:
        operator delete(v39, 0x3A0u);
      }
      else
      {
        v59 = *(unsigned int *)(v90 + 14976);
        *(_DWORD *)(v90 + 14976) = v59 + 1;
        *(_QWORD *)(v40 + 8 * v59 + 14848) = v39;
      }
    }
  }
LABEL_5:
  v89 = (void *)0x57C0000070FLL;
  v11 = sub_21B6DA0(a2, &v89, 2);
  v12 = *(_QWORD *)(a2 + 8);
  v91 = 0x57C0000070FLL;
  v13 = (char *)(v12 + 8LL * (unsigned int)v11);
  v14 = (char *)(v12 + 8 * HIDWORD(v11));
  v90 = (unsigned __int64)v13;
  v89 = v14;
  if ( v14 == v13 )
  {
LABEL_10:
    v16 = *(unsigned int *)(a3 + 8);
  }
  else
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)v14 - 1);
      if ( v15 )
      {
        if ( (unsigned __int8)sub_21B9810(*((_QWORD *)v14 - 1), 1807) || (unsigned __int8)sub_21B9810(v15, 1404) )
          break;
      }
      v14 -= 8;
      v89 = v14;
      if ( v13 == v14 )
        goto LABEL_10;
    }
    v16 = *(unsigned int *)(a3 + 8);
    if ( v13 != v14 && *((_QWORD *)v14 - 1) )
    {
      v18 = v16 + 1;
      if ( v16 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
        goto LABEL_52;
      goto LABEL_14;
    }
  }
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v16 + 1, 8);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-fno-sized-deallocation";
  v17 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v18 = v16 + 1;
  *(_DWORD *)(a3 + 8) = v16;
  if ( v16 + 1 <= v17 )
    goto LABEL_52;
LABEL_14:
  sub_2237220(a3, a3 + 16, v18, 8);
  v16 = *(unsigned int *)(a3 + 8);
LABEL_52:
  v47 = (unsigned int *)&unk_2600D70;
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-fno-use-init-array";
  ++*(_DWORD *)(a3 + 8);
  do
  {
    v48 = *v47;
    LODWORD(v89) = *v47;
    v49 = sub_21B6DA0(a2, &v89, 1);
    v50 = *(_QWORD *)(a2 + 8);
    v51 = v50 + 8LL * (unsigned int)v49;
    v52 = v50 + 8 * HIDWORD(v49);
    if ( v52 != v51 )
    {
      if ( v48 )
      {
        while ( 1 )
        {
          v53 = *(_QWORD *)(v52 - 8);
          if ( v53 )
          {
            if ( (unsigned __int8)sub_21B9810(v53, v48) )
              break;
          }
          v52 -= 8;
          if ( v51 == v52 )
            goto LABEL_58;
        }
      }
      else
      {
        v52 += ~(v52 - 8 - v51) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( v51 != v52 )
      {
        v55 = *(_QWORD *)(v52 - 8);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 16);
          if ( !v56 )
            v56 = *(_QWORD *)(v52 - 8);
          *(_BYTE *)(v56 + 44) |= 2u;
        }
      }
    }
LABEL_58:
    ++v47;
    result = jpt_128742E;
  }
  while ( jpt_128742E != (_UNKNOWN *__ptr32 *)v47 );
  return result;
}
