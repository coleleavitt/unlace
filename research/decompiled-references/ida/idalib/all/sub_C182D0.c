__int64 __fastcall sub_C182D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  int v23; // r12d
  void *v24; // rax
  char v25; // r14
  unsigned __int64 v26; // rbp
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rax
  __int64 v30; // rsi
  char *v31; // rdx
  char *v32; // rcx
  char *v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rbp
  int *v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rdi
  int *v39; // r12
  int *v40; // rbp
  __int64 v42; // rax
  int *v43; // rdx
  int *v44; // rax
  unsigned int v45; // edx
  char *v46; // rax
  __int64 v47; // rsi
  char *v48; // rdx
  char *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // [rsp+8h] [rbp-1E0h]
  int *v57; // [rsp+8h] [rbp-1E0h]
  _QWORD *v58; // [rsp+8h] [rbp-1E0h]
  int *v59; // [rsp+8h] [rbp-1E0h]
  int *v60; // [rsp+8h] [rbp-1E0h]
  char *v61; // [rsp+8h] [rbp-1E0h]
  __int64 v62; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v63; // [rsp+10h] [rbp-1D8h]
  __int64 v64; // [rsp+10h] [rbp-1D8h]
  unsigned int v65; // [rsp+10h] [rbp-1D8h]
  int *v66; // [rsp+10h] [rbp-1D8h]
  char *v67; // [rsp+10h] [rbp-1D8h]
  __int64 v68; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v69; // [rsp+18h] [rbp-1D0h]
  int *v70; // [rsp+18h] [rbp-1D0h]
  _QWORD v71[4]; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned int v72; // [rsp+40h] [rbp-1A8h] BYREF
  char v73; // [rsp+44h] [rbp-1A4h]
  void *v74; // [rsp+80h] [rbp-168h] BYREF
  char *v75; // [rsp+88h] [rbp-160h]
  int v76; // [rsp+90h] [rbp-158h]
  int *v77; // [rsp+C0h] [rbp-128h] BYREF
  unsigned __int64 v78; // [rsp+C8h] [rbp-120h] BYREF
  _QWORD v79[35]; // [rsp+D0h] [rbp-118h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57 > 1 )
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v7 = *(_QWORD *)(v6 + 32);
  v72 = 0;
  v73 &= ~1u;
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 != 13 )
  {
    if ( v10 == 47 )
    {
      v14 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
      if ( ((*(_BYTE *)(v14 + 74) & 1) != 0 || (*(_QWORD *)(v14 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *(char *)(sub_F60F10(v9, a2, v15, v16, v17) + 76) >= 0 )
      {
        v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_22;
      }
    }
    else if ( v10 == 10 )
    {
      goto LABEL_22;
    }
LABEL_5:
    v11 = sub_A62D20(*(_QWORD **)(*a1 + 16), v7);
    v12 = sub_21F90D0();
    v13 = (void *)v12;
    if ( v11 == v12 )
    {
      sub_21FFC40(v71, v12, 0);
      if ( (void *)v71[0] != v13 )
        goto LABEL_7;
    }
    else
    {
      sub_21FD1F0(v71, v11, 0);
      if ( (void *)v71[0] != v13 )
      {
LABEL_7:
        sub_21FB9A0(v71, 0);
        goto LABEL_8;
      }
    }
    sub_2200250(v71, 0);
LABEL_8:
    BYTE4(v77) &= ~1u;
    LODWORD(v77) = 0;
    v56 = sub_21F90B0();
    sub_21FBFD0(&v74, 0.0);
    sub_22023D0(&v78, &v74, v56);
    sub_21F9830(&v74);
    LODWORD(v77) = 3;
    if ( v13 == (void *)v71[0] )
      sub_21FFED0(&v74, v71);
    else
      sub_21F97D0(&v74, v71);
    if ( v13 == (void *)v78 )
    {
      if ( v74 == v13 )
      {
        v51 = v79[0];
        if ( v79[0] )
        {
          v52 = 24LL * *(_QWORD *)(v79[0] - 8LL);
          v53 = v79[0] + v52;
          if ( v79[0] != v79[0] + v52 )
          {
            while ( 1 )
            {
              v68 = v53;
              v55 = v53 - 24;
              v62 = v53 - 24;
              if ( v13 == *(void **)(v53 - 24) )
              {
                sub_A4F010(v55);
                v51 = v62;
                v54 = v68;
                if ( v79[0] == v62 )
                {
LABEL_93:
                  v52 = 24LL * *(_QWORD *)(v54 - 32);
                  break;
                }
              }
              else
              {
                sub_21F9830(v55);
                v51 = v62;
                v54 = v68;
                if ( v62 == v79[0] )
                  goto LABEL_93;
              }
              v53 = v51;
            }
          }
          operator delete[]((void *)(v51 - 8), v52 + 8);
        }
LABEL_95:
        sub_21FFED0(&v78, &v74);
LABEL_13:
        if ( v13 != v74 )
        {
LABEL_14:
          sub_21F9830(&v74);
LABEL_15:
          sub_A4FD20((__int64)&v72, (__int64)&v77);
          if ( (unsigned int)v77 > 1 )
            sub_A4F8E0((int *)&v77);
          sub_9955A0(v71);
          goto LABEL_26;
        }
LABEL_71:
        v46 = v75;
        if ( v75 )
        {
          v47 = 24LL * *((_QWORD *)v75 - 1);
          v48 = &v75[v47];
          if ( v75 != &v75[v47] )
          {
            while ( 1 )
            {
              v67 = v48;
              v50 = (__int64)(v48 - 24);
              v61 = v48 - 24;
              if ( v13 == *((void **)v48 - 3) )
              {
                sub_A4F010(v50);
                v46 = v61;
                v49 = v67;
                if ( v75 == v61 )
                {
LABEL_78:
                  v47 = 24LL * *((_QWORD *)v49 - 4);
                  break;
                }
              }
              else
              {
                sub_21F9830(v50);
                v46 = v61;
                v49 = v67;
                if ( v61 == v75 )
                  goto LABEL_78;
              }
              v48 = v46;
            }
          }
          operator delete[](v46 - 8, v47 + 8);
        }
        goto LABEL_15;
      }
    }
    else if ( v74 != v13 )
    {
      sub_21F9590(&v78, &v74);
      goto LABEL_13;
    }
    sub_9955A0(&v78);
    if ( v13 != v74 )
    {
      sub_21F97D0(&v78, &v74);
      if ( v13 != v74 )
        goto LABEL_14;
      goto LABEL_71;
    }
    goto LABEL_95;
  }
  if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
    goto LABEL_5;
LABEL_22:
  v18 = *(_QWORD *)(*a1 + 16);
  LODWORD(v75) = 64;
  v74 = nullptr;
  BYTE4(v75) = sub_F65240(v8) ^ 1;
  v22 = sub_AAC1F0(v18, v7, v19, v20, v21);
  v23 = 64;
  if ( v22 == 64 )
  {
    v24 = v74;
    v25 = BYTE4(v75);
  }
  else
  {
    v25 = BYTE4(v75);
    if ( BYTE4(v75) )
      sub_2206D90(&v77, &v74, v22);
    else
      sub_2206DE0(&v77, &v74, v22);
    v23 = v78;
    v24 = v77;
    if ( (unsigned int)v75 > 0x40 && v74 )
    {
      v60 = v77;
      operator delete[](v74);
      v24 = v60;
    }
  }
  BYTE4(v79[0]) = v25;
  BYTE4(v77) &= ~1u;
  LODWORD(v77) = 2;
  v78 = (unsigned __int64)v24;
  LODWORD(v79[0]) = v23;
  sub_A4FD20((__int64)&v72, (__int64)&v77);
  if ( (unsigned int)v77 > 1 )
    sub_A4F8E0((int *)&v77);
LABEL_26:
  v26 = *(unsigned int *)(v6 + 20);
  v27 = v79;
  v77 = (int *)v79;
  v78 = 0x400000000LL;
  if ( v26 > 4 )
  {
    v42 = sub_2237400(&v77, v79, v26, 56, &v74);
    v57 = (int *)v42;
    v69 = v42 + 56 * v26;
    do
    {
      v64 = v42;
      sub_A53C40(v42, (int *)&v72);
      v42 = v64 + 56;
    }
    while ( v64 + 56 != v69 );
    v43 = v77;
    v44 = &v77[14 * (unsigned int)v78];
    if ( v77 != v44 )
    {
      do
      {
        while ( 1 )
        {
          v44 -= 14;
          if ( (unsigned int)*v44 > 1 )
            break;
          if ( v43 == v44 )
            goto LABEL_60;
        }
        v70 = v43;
        v66 = v44;
        sub_A4F8E0(v44);
        v44 = v66;
        v43 = v70;
      }
      while ( v70 != v66 );
LABEL_60:
      v44 = v77;
    }
    v45 = (unsigned int)v74;
    if ( v44 != (int *)v79 )
    {
      v65 = (unsigned int)v74;
      free(v44);
      v45 = v65;
    }
    v78 = __PAIR64__(v45, v26);
    v77 = v57;
    BYTE4(v74) &= ~1u;
    v75 = nullptr;
    v76 = 0;
    LODWORD(v74) = 8;
    v29 = (unsigned __int64 *)operator new[](56 * v26 + 8);
    v30 = 56 * v26 + 8;
    *v29 = v26;
    v31 = (char *)(v29 + 1);
    goto LABEL_32;
  }
  v57 = (int *)v79;
  if ( v26 )
  {
    v28 = v26;
    do
    {
      v63 = v28;
      v58 = v27;
      sub_A53C40((__int64)v27, (int *)&v72);
      v27 = v58 + 7;
      v28 = v63 - 1;
    }
    while ( v63 != 1 );
    v57 = v77;
  }
  BYTE4(v74) &= ~1u;
  LODWORD(v78) = v26;
  v75 = nullptr;
  v76 = 0;
  LODWORD(v74) = 8;
  v29 = (unsigned __int64 *)operator new[](56 * v26 + 8);
  v30 = 56 * v26 + 8;
  *v29 = v26;
  v31 = (char *)(v29 + 1);
  if ( v26 )
  {
LABEL_32:
    v32 = v31;
    v33 = (char *)v29 + v30;
    do
    {
      *(_DWORD *)v32 = 0;
      v32[4] &= ~1u;
      v32 += 56;
    }
    while ( v33 != v32 );
  }
  v75 = v31;
  v76 = v26;
  if ( (_DWORD)v26 )
  {
    v34 = (unsigned int)(v26 - 1);
    v35 = (__int64)v31;
    v36 = v57;
    v37 = (__int64)&v29[7 * v34 + 8];
    do
    {
      v38 = v35;
      v59 = v36;
      v35 += 56;
      sub_A54D20(v38, v36);
      v36 = v59 + 14;
    }
    while ( v35 != v37 );
  }
  sub_A4FD20(a1[1], (__int64)&v74);
  if ( (unsigned int)v74 > 1 )
    sub_A4F8E0((int *)&v74);
  v39 = v77;
  v40 = &v77[14 * (unsigned int)v78];
  if ( v77 != v40 )
  {
    do
    {
      while ( 1 )
      {
        v40 -= 14;
        if ( (unsigned int)*v40 > 1 )
          break;
        if ( v39 == v40 )
          goto LABEL_42;
      }
      sub_A4F8E0(v40);
    }
    while ( v39 != v40 );
LABEL_42:
    v40 = v77;
  }
  if ( v40 != (int *)v79 )
    free(v40);
  if ( v72 > 1 )
    sub_A4F8E0((int *)&v72);
  return 1;
}
