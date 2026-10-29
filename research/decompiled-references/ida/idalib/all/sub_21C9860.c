void __fastcall sub_21C9860(_DWORD *a1)
{
  int v2; // ebp
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *i; // rax
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  char *v18; // rdi
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // r12
  _QWORD *v22; // rax
  int v23; // eax
  char *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rbp
  __int64 v35; // rbp
  __int64 v36; // rax
  unsigned __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // r10
  __int64 v41; // r11
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  unsigned int v44; // ecx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r8
  int v48; // ecx
  char *v49; // rsi
  unsigned __int64 *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rdx
  __int64 *v57; // rcx
  __int64 v58; // rsi
  int v59; // ecx
  char *v60; // rsi
  unsigned int v61; // r12d
  __int64 v62; // [rsp+0h] [rbp-B8h]
  int v63; // [rsp+0h] [rbp-B8h]
  int v64; // [rsp+0h] [rbp-B8h]
  __int64 v65; // [rsp+8h] [rbp-B0h]
  int v66; // [rsp+8h] [rbp-B0h]
  int v67; // [rsp+8h] [rbp-B0h]
  __int64 v68; // [rsp+10h] [rbp-A8h]
  int v69; // [rsp+1Ch] [rbp-9Ch]
  void *v70; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v71; // [rsp+28h] [rbp-90h]
  _QWORD v72[4]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v74; // [rsp+58h] [rbp-60h]
  _BYTE v75[88]; // [rsp+60h] [rbp-58h] BYREF

  v2 = a1[92];
  if ( !v2 )
    goto LABEL_2;
  LODWORD(v28) = a1[93];
  v29 = v72;
  v71 = 0x400000000LL;
  v70 = v72;
  ptr = v75;
  v74 = 0x400000000LL;
  if ( (_DWORD)v28 )
  {
    v30 = *((_QWORD *)a1 + 35);
    LODWORD(v71) = 1;
    v72[0] = v30;
    if ( (_DWORD)v28 == 1 )
    {
      v69 = v2 - 1;
      if ( v2 == 1 )
        goto LABEL_77;
    }
    else
    {
      LODWORD(v28) = 2;
      v72[1] = *((_QWORD *)a1 + 36);
      v31 = a1[93] == 2;
      LODWORD(v71) = 2;
      if ( !v31 )
      {
        *((_QWORD *)v70 + 2) = *((_QWORD *)a1 + 37);
        v31 = a1[93] == 3;
        v28 = (unsigned int)(v71 + 1);
        LODWORD(v71) = v71 + 1;
        if ( !v31 )
        {
          v32 = *((_QWORD *)a1 + 38);
          if ( HIDWORD(v71) < (unsigned __int64)(v28 + 1) )
          {
            sub_2237220(&v70, v72, v28 + 1, 8);
            v28 = (unsigned int)v71;
          }
          *((_QWORD *)v70 + v28) = v32;
          v31 = a1[93] == 4;
          v28 = (unsigned int)(v71 + 1);
          LODWORD(v71) = v71 + 1;
          if ( !v31 )
          {
            v33 = *((_QWORD *)a1 + 39);
            if ( HIDWORD(v71) < (unsigned __int64)(v28 + 1) )
            {
              sub_2237220(&v70, v72, v28 + 1, 8);
              v28 = (unsigned int)v71;
            }
            *((_QWORD *)v70 + v28) = v33;
            v31 = a1[93] == 5;
            v28 = (unsigned int)(v71 + 1);
            LODWORD(v71) = v71 + 1;
            if ( !v31 )
            {
              v34 = *((_QWORD *)a1 + 40);
              if ( HIDWORD(v71) < (unsigned __int64)(v28 + 1) )
              {
                sub_2237220(&v70, v72, v28 + 1, 8);
                v28 = (unsigned int)v71;
              }
              *((_QWORD *)v70 + v28) = v34;
              v31 = a1[93] == 6;
              v28 = (unsigned int)(v71 + 1);
              LODWORD(v71) = v71 + 1;
              if ( !v31 )
              {
                v35 = *((_QWORD *)a1 + 41);
                if ( v28 + 1 > (unsigned __int64)HIDWORD(v71) )
                {
                  sub_2237220(&v70, v72, v28 + 1, 8);
                  v28 = (unsigned int)v71;
                }
                *((_QWORD *)v70 + v28) = v35;
                LODWORD(v28) = v71 + 1;
                LODWORD(v71) = v71 + 1;
              }
            }
          }
        }
      }
      v69 = a1[92] - 1;
      if ( a1[92] == 1 )
        goto LABEL_76;
    }
    v29 = v70;
    v36 = (unsigned int)v74;
  }
  else
  {
    v69 = v2 - 1;
    if ( v2 == 1 )
      goto LABEL_81;
    v36 = 0;
  }
  while ( 2 )
  {
    if ( !(_DWORD)v28 )
      goto LABEL_63;
    v37 = 0;
    v62 = 8LL * (unsigned int)(v28 - 1);
    while ( 2 )
    {
      v38 = v29[v37 / 8];
      v39 = 0;
      v40 = 8 * (v38 & 0x3F) + 8;
      while ( 1 )
      {
        v41 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFC0LL) + v39);
        if ( v36 + 1 > (unsigned __int64)HIDWORD(v74) )
          break;
        v39 += 8;
        *((_QWORD *)ptr + v36) = v41;
        v36 = (unsigned int)(v74 + 1);
        LODWORD(v74) = v74 + 1;
        if ( v40 == v39 )
          goto LABEL_61;
LABEL_58:
        v38 = *(_QWORD *)((char *)v70 + v37);
      }
      v68 = v40;
      v65 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFC0LL) + v39);
      v39 += 8;
      sub_2237220(&ptr, v75, v36 + 1, 8);
      v40 = v68;
      *((_QWORD *)ptr + (unsigned int)v74) = v65;
      v36 = (unsigned int)(v74 + 1);
      LODWORD(v74) = v74 + 1;
      if ( v39 != v68 )
        goto LABEL_58;
LABEL_61:
      v42 = *((_QWORD **)a1 + 47);
      v43 = (_QWORD *)(*(_QWORD *)((_BYTE *)v70 + v37) & 0xFFFFFFFFFFFFFFC0LL);
      *v43 = *v42;
      *v42 = v43;
      v29 = v70;
      if ( v62 != v37 )
      {
        v37 += 8LL;
        continue;
      }
      break;
    }
LABEL_63:
    LODWORD(v71) = 0;
    if ( v29 != v72 && ptr != v75 )
    {
      v70 = ptr;
      v44 = HIDWORD(v74);
      ptr = v29;
      LODWORD(v74) = 0;
      HIDWORD(v74) = HIDWORD(v71);
      v71 = __PAIR64__(v44, v36);
      LODWORD(v28) = v36;
      v36 = 0;
      goto LABEL_66;
    }
    v45 = (unsigned int)v36;
    if ( HIDWORD(v71) < (unsigned int)v36 )
    {
      sub_2237220(&v70, v72, (unsigned int)v36, 8);
      v46 = (unsigned int)v71;
      LODWORD(v28) = v71;
      if ( HIDWORD(v74) < (unsigned int)v71 )
      {
        sub_2237220(&ptr, v75, (unsigned int)v71, 8);
        v46 = (unsigned int)v71;
        LODWORD(v28) = v71;
      }
      v36 = (unsigned int)v74;
      v45 = (unsigned int)v74;
      v47 = (unsigned int)v74;
      if ( v46 <= (unsigned int)v74 )
        v47 = v46;
      if ( v47 )
      {
        v55 = 0;
        do
        {
          v56 = (__int64 *)((char *)ptr + v55);
          v57 = (__int64 *)((char *)v70 + v55);
          v55 += 8;
          v58 = *v57;
          *v57 = *v56;
          *v56 = v58;
        }
        while ( 8 * v47 != v55 );
        v46 = (unsigned int)v71;
        v36 = (unsigned int)v74;
        LODWORD(v28) = v71;
        v45 = (unsigned int)v74;
      }
      if ( v46 > v45 )
      {
        v59 = v45;
        v60 = (char *)v70 + 8 * v47;
        if ( v60 != (char *)v70 + 8 * v46 )
        {
          v67 = v47;
          v64 = v45;
          memcpy((char *)ptr + 8 * v45, v60, 8 * v46 - 8 * v47);
          v59 = v74;
          LODWORD(v47) = v67;
          LODWORD(v45) = v64;
        }
        LODWORD(v71) = v47;
        v61 = v59 + v46 - v45;
        LODWORD(v28) = v47;
        v36 = v61;
        LODWORD(v74) = v61;
        goto LABEL_66;
      }
    }
    else
    {
      v46 = 0;
      LODWORD(v28) = 0;
      v47 = 0;
    }
    if ( v45 <= v46 )
    {
LABEL_66:
      if ( --v69 )
        goto LABEL_67;
    }
    else
    {
      v48 = v46;
      v49 = (char *)ptr + 8 * v47;
      if ( v49 != (char *)ptr + 8 * v45 )
      {
        v66 = v45;
        v63 = v47;
        memcpy((char *)v70 + 8 * v46, v49, 8 * v45 - 8 * v47);
        v48 = v71;
        LODWORD(v45) = v66;
        LODWORD(v47) = v63;
      }
      v36 = (unsigned int)v47;
      LODWORD(v74) = v47;
      v31 = v69-- == 1;
      LODWORD(v28) = v48 + v45 - v46;
      LODWORD(v71) = v28;
      if ( !v31 )
      {
LABEL_67:
        v29 = v70;
        continue;
      }
    }
    break;
  }
LABEL_76:
  if ( (_DWORD)v28 )
  {
LABEL_77:
    v50 = *((unsigned __int64 **)a1 + 47);
    v51 = 0;
    v52 = 8LL * (unsigned int)(v28 - 1) + 8;
    v53 = *v50;
    do
    {
      v54 = *(_QWORD *)((char *)v70 + v51);
      v51 += 8;
      v54 &= 0xFFFFFFFFFFFFFFC0LL;
      *(_QWORD *)v54 = v53;
      v53 = v54;
      *v50 = v54;
    }
    while ( v52 != v51 );
  }
  if ( ptr != v75 )
    free(ptr);
LABEL_81:
  if ( v70 != v72 )
    free(v70);
LABEL_2:
  v3 = *((__int64 **)a1 + 24);
  v4 = (unsigned int)a1[50];
  *((_QWORD *)a1 + 21) = 0;
  v5 = &v3[v4];
  if ( v3 != v5 )
  {
    for ( i = v3; ; i = *((__int64 **)a1 + 24) )
    {
      v7 = 0x40000000000LL;
      v8 = (unsigned int)(v3 - i) >> 7;
      if ( v8 <= 0x1D )
        v7 = 4096LL << v8;
      v9 = *v3++;
      operator delete(v9, v7, 16);
      if ( v5 == v3 )
        break;
    }
  }
  v10 = *((__int64 **)a1 + 30);
  v11 = &v10[2 * (unsigned int)a1[62]];
  if ( v10 != v11 )
  {
    do
    {
      v12 = v10[1];
      v13 = *v10;
      v10 += 2;
      operator delete(v13, v12, 16);
    }
    while ( v11 != v10 );
    v11 = *((__int64 **)a1 + 30);
  }
  if ( v11 != (__int64 *)(a1 + 64) )
    free(v11);
  v14 = *((_DWORD **)a1 + 24);
  if ( v14 != a1 + 52 )
    free(v14);
  v15 = *((void **)a1 + 18);
  if ( v15 )
    operator delete(v15);
  operator delete(*((_QWORD *)a1 + 15), 16LL * (unsigned int)a1[34], 8);
  v16 = *((void **)a1 + 12);
  if ( v16 )
    operator delete(v16);
  v17 = *((void **)a1 + 9);
  if ( v17 )
    operator delete(v17);
  v18 = *((char **)a1 + 6);
  if ( a1[15] )
  {
    v19 = a1[14];
    if ( v19 )
    {
      v20 = 0;
      v21 = 8LL * (unsigned int)(v19 - 1) + 8;
      do
      {
        v22 = *(_QWORD **)&v18[v20];
        if ( v22 && v22 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v18[v20], *v22 + 9LL, 8);
          v18 = *((char **)a1 + 6);
        }
        v20 += 8;
      }
      while ( v21 != v20 );
    }
  }
  free(v18);
  if ( a1[9] )
  {
    v23 = a1[8];
    v24 = *((char **)a1 + 3);
    if ( v23 )
    {
      v25 = 0;
      v26 = 8LL * (unsigned int)(v23 - 1) + 8;
      do
      {
        v27 = *(_QWORD **)&v24[v25];
        if ( v27 != (_QWORD *)-8LL && v27 )
        {
          operator delete(*(_QWORD *)&v24[v25], *v27 + 9LL, 8);
          v24 = *((char **)a1 + 3);
        }
        v25 += 8;
      }
      while ( v26 != v25 );
    }
  }
  else
  {
    v24 = *((char **)a1 + 3);
  }
  free(v24);
  operator delete(a1, 0x188u);
}
