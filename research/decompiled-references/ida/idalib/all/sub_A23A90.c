void __fastcall sub_A23A90(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r13
  char *v6; // r14
  char *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r13
  char *v11; // r14
  char *v12; // rbp
  __int64 v13; // rax
  _DWORD *v14; // rbp
  _DWORD *v15; // r12
  char **v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  char *v20; // r14
  char *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  char *v25; // r14
  char *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r14
  int v30; // eax
  void *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // r13
  _BYTE *v35; // r14
  _BYTE *v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // r13
  int v40; // eax
  _BYTE *v41; // r14
  _BYTE *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r13
  char *v46; // r14
  char *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r14
  int v51; // eax
  char *v52; // r13
  char *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r12
  int v57; // eax
  char *v58; // rdi
  __int64 v59; // rbp
  __int64 v60; // r12
  _QWORD *v61; // rax
  void *v62; // rdi
  int v63; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v64; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+18h] [rbp-70h] BYREF
  int v67; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v68; // [rsp+38h] [rbp-50h]
  __int64 v69; // [rsp+40h] [rbp-48h]
  __int64 v70; // [rsp+48h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 880);
  v3 = *(unsigned int *)(a1 + 896);
  v4 = 200 * v3;
  if ( (_DWORD)v3 )
  {
    v5 = v2 + 200 * v3;
    while ( 1 )
    {
      if ( *(_DWORD *)v2 == -1 )
      {
        if ( *(_DWORD *)(v2 + 4) != -1 )
          goto LABEL_5;
      }
      else if ( *(_DWORD *)v2 != -2 || *(_DWORD *)(v2 + 4) != -2 )
      {
LABEL_5:
        v6 = *(char **)(v2 + 8);
        v7 = &v6[176 * *(unsigned int *)(v2 + 16)];
        if ( v6 != v7 )
        {
          do
          {
            v7 -= 176;
            sub_A09C70((__int64)(v7 + 16));
          }
          while ( v6 != v7 );
          v7 = *(char **)(v2 + 8);
        }
        if ( v7 != (char *)(v2 + 24) )
          free(v7);
      }
      v2 += 200;
      if ( v5 == v2 )
      {
        v2 = *(_QWORD *)(a1 + 880);
        v4 = 200LL * *(unsigned int *)(a1 + 896);
        break;
      }
    }
  }
  operator delete(v2, v4, 8);
  v8 = *(unsigned int *)(a1 + 872);
  if ( !(_DWORD)v8 )
    goto LABEL_23;
  v9 = *(_QWORD *)(a1 + 856);
  v10 = v9 + 408LL * (unsigned int)v8;
  do
  {
    if ( *(_DWORD *)v9 == -1 )
    {
      if ( *(_DWORD *)(v9 + 4) == -1 )
        goto LABEL_21;
    }
    else if ( *(_DWORD *)v9 == -2 && *(_DWORD *)(v9 + 4) == -2 )
    {
      goto LABEL_21;
    }
    v11 = *(char **)(v9 + 8);
    v12 = &v11[384 * *(unsigned int *)(v9 + 16)];
    if ( v11 != v12 )
    {
      do
      {
        v12 -= 384;
        sub_A0A3E0((__int64)(v12 + 16));
      }
      while ( v11 != v12 );
      v12 = *(char **)(v9 + 8);
    }
    if ( v12 != (char *)(v9 + 24) )
      free(v12);
LABEL_21:
    v9 += 408;
  }
  while ( v10 != v9 );
  v8 = *(unsigned int *)(a1 + 872);
LABEL_23:
  operator delete(*(_QWORD *)(a1 + 856), 408 * v8, 8);
  v13 = *(unsigned int *)(a1 + 848);
  if ( (_DWORD)v13 )
  {
    v14 = *(_DWORD **)(a1 + 832);
    v15 = &v14[28 * v13];
    do
    {
      while ( (unsigned int)(*v14 + 2) <= 1 )
      {
        v14 += 28;
        if ( v15 == v14 )
          goto LABEL_28;
      }
      v16 = (char **)(v14 + 2);
      v14 += 28;
      sub_A23A30(v16);
    }
    while ( v15 != v14 );
LABEL_28:
    v13 = *(unsigned int *)(a1 + 848);
  }
  operator delete(*(_QWORD *)(a1 + 832), 112 * v13, 8);
  v17 = *(unsigned int *)(a1 + 824);
  if ( !(_DWORD)v17 )
    goto LABEL_40;
  v18 = *(_QWORD *)(a1 + 808);
  v19 = v18 + 216 * v17;
  while ( 2 )
  {
    if ( *(_DWORD *)v18 == -1 )
    {
      if ( *(_DWORD *)(v18 + 4) == -1 )
        goto LABEL_38;
    }
    else if ( *(_DWORD *)v18 == -2 && *(_DWORD *)(v18 + 4) == -2 )
    {
      goto LABEL_38;
    }
    v20 = *(char **)(v18 + 8);
    v21 = &v20[192 * *(unsigned int *)(v18 + 16)];
    if ( v20 != v21 )
    {
      do
      {
        v21 -= 192;
        sub_A09D30((__int64)(v21 + 16));
      }
      while ( v20 != v21 );
      v21 = *(char **)(v18 + 8);
    }
    if ( v21 != (char *)(v18 + 24) )
      free(v21);
LABEL_38:
    v18 += 216;
    if ( v19 != v18 )
      continue;
    break;
  }
  v17 = *(unsigned int *)(a1 + 824);
LABEL_40:
  operator delete(*(_QWORD *)(a1 + 808), 216 * v17, 8);
  v22 = *(unsigned int *)(a1 + 800);
  if ( !(_DWORD)v22 )
    goto LABEL_51;
  v23 = *(_QWORD *)(a1 + 784);
  v24 = v23 + 152 * v22;
  while ( 2 )
  {
    if ( *(_DWORD *)v23 == -1 )
    {
      if ( *(_DWORD *)(v23 + 4) == -1 )
        goto LABEL_49;
    }
    else if ( *(_DWORD *)v23 == -2 && *(_DWORD *)(v23 + 4) == -2 )
    {
      goto LABEL_49;
    }
    v25 = *(char **)(v23 + 8);
    v26 = &v25[128 * (unsigned __int64)*(unsigned int *)(v23 + 16)];
    if ( v25 != v26 )
    {
      do
      {
        v26 -= 128;
        sub_A09CE0((__int64)(v26 + 16));
      }
      while ( v25 != v26 );
      v26 = *(char **)(v23 + 8);
    }
    if ( v26 != (char *)(v23 + 24) )
      free(v26);
LABEL_49:
    v23 += 152;
    if ( v24 != v23 )
      continue;
    break;
  }
  v22 = *(unsigned int *)(a1 + 800);
LABEL_51:
  operator delete(*(_QWORD *)(a1 + 784), 152 * v22, 8);
  v27 = *(unsigned int *)(a1 + 776);
  if ( (_DWORD)v27 )
  {
    v28 = *(_QWORD *)(a1 + 760);
    v63 = -1;
    v64 = &v66;
    v29 = v28 + 48 * v27;
    v65 = 0x200000000LL;
    v67 = -2;
    v68 = &v70;
    v69 = 0x200000000LL;
    do
    {
      v30 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 != -1 )
      {
LABEL_54:
        if ( v30 == -2 )
          sub_A1EC00(v28, (__int64)&v67);
        goto LABEL_56;
      }
      while ( 1 )
      {
        sub_A1EC00(v28, (__int64)&v63);
LABEL_56:
        v31 = *(void **)(v28 + 8);
        if ( v31 != (void *)(v28 + 24) )
          break;
        v28 += 48;
        if ( v29 == v28 )
          goto LABEL_58;
        v30 = *(_DWORD *)v28;
        if ( *(_DWORD *)v28 != -1 )
          goto LABEL_54;
      }
      free(v31);
      v28 += 48;
    }
    while ( v29 != v28 );
LABEL_58:
    v27 = *(unsigned int *)(a1 + 776);
  }
  operator delete(*(_QWORD *)(a1 + 760), 48 * v27, 8);
  v32 = *(unsigned int *)(a1 + 752);
  if ( !(_DWORD)v32 )
    goto LABEL_71;
  v33 = *(_QWORD *)(a1 + 736);
  v34 = v33 + 344LL * (unsigned int)v32;
  while ( 2 )
  {
    if ( *(_DWORD *)v33 == -1 )
    {
      if ( *(_DWORD *)(v33 + 4) == -1 )
        goto LABEL_69;
    }
    else if ( *(_DWORD *)v33 == -2 && *(_DWORD *)(v33 + 4) == -2 )
    {
      goto LABEL_69;
    }
    v35 = *(_BYTE **)(v33 + 8);
    v36 = &v35[320 * *(unsigned int *)(v33 + 16)];
    if ( v35 != v36 )
    {
      do
      {
        while ( 1 )
        {
          v36 -= 320;
          if ( v36[312] )
            break;
          sub_A09D30((__int64)(v36 + 16));
          if ( v35 == v36 )
            goto LABEL_66;
        }
        sub_A09CE0((__int64)(v36 + 192));
        sub_A09D30((__int64)(v36 + 16));
      }
      while ( v35 != v36 );
LABEL_66:
      v36 = *(_BYTE **)(v33 + 8);
    }
    if ( v36 != (_BYTE *)(v33 + 24) )
      free(v36);
LABEL_69:
    v33 += 344;
    if ( v34 != v33 )
      continue;
    break;
  }
  v32 = *(unsigned int *)(a1 + 752);
LABEL_71:
  operator delete(*(_QWORD *)(a1 + 736), 344 * v32, 8);
  v37 = *(unsigned int *)(a1 + 728);
  if ( !(_DWORD)v37 )
    goto LABEL_84;
  v38 = *(_QWORD *)(a1 + 712);
  v39 = v38 + 360LL * (unsigned int)v37;
  while ( 2 )
  {
    v40 = *(_DWORD *)(v38 + 8);
    if ( v40 == -1 )
    {
      if ( *(_DWORD *)(v38 + 4) != -1 || *(_BYTE *)v38 != 0xFF )
        goto LABEL_76;
    }
    else
    {
      if ( v40 == -2 && *(_DWORD *)(v38 + 4) == -2 && *(_BYTE *)v38 == 0xFE )
        goto LABEL_82;
LABEL_76:
      v41 = *(_BYTE **)(v38 + 16);
      v42 = &v41[328 * *(unsigned int *)(v38 + 24)];
      if ( v41 != v42 )
      {
        do
        {
          while ( 1 )
          {
            v42 -= 328;
            if ( v42[320] )
              break;
            sub_A09D30((__int64)(v42 + 16));
            if ( v41 == v42 )
              goto LABEL_79;
          }
          sub_A09CE0((__int64)(v42 + 200));
          sub_A09D30((__int64)(v42 + 16));
        }
        while ( v41 != v42 );
LABEL_79:
        v42 = *(_BYTE **)(v38 + 16);
      }
      if ( v42 != (_BYTE *)(v38 + 32) )
        free(v42);
    }
LABEL_82:
    v38 += 360;
    if ( v39 != v38 )
      continue;
    break;
  }
  v37 = *(unsigned int *)(a1 + 728);
LABEL_84:
  operator delete(*(_QWORD *)(a1 + 712), 360 * v37, 8);
  v43 = *(unsigned int *)(a1 + 704);
  if ( !(_DWORD)v43 )
    goto LABEL_95;
  v44 = *(_QWORD *)(a1 + 688);
  v45 = v44 + 152 * v43;
  while ( 2 )
  {
    if ( *(_DWORD *)v44 == -1 )
    {
      if ( *(_DWORD *)(v44 + 4) == -1 )
        goto LABEL_93;
    }
    else if ( *(_DWORD *)v44 == -2 && *(_DWORD *)(v44 + 4) == -2 )
    {
      goto LABEL_93;
    }
    v46 = *(char **)(v44 + 8);
    v47 = &v46[128 * (unsigned __int64)*(unsigned int *)(v44 + 16)];
    if ( v46 != v47 )
    {
      do
      {
        v47 -= 128;
        sub_A09CE0((__int64)(v47 + 16));
      }
      while ( v46 != v47 );
      v47 = *(char **)(v44 + 8);
    }
    if ( v47 != (char *)(v44 + 24) )
      free(v47);
LABEL_93:
    v44 += 152;
    if ( v45 != v44 )
      continue;
    break;
  }
  v43 = *(unsigned int *)(a1 + 704);
LABEL_95:
  operator delete(*(_QWORD *)(a1 + 688), 152 * v43, 8);
  v48 = *(unsigned int *)(a1 + 680);
  if ( !(_DWORD)v48 )
    goto LABEL_107;
  v49 = *(_QWORD *)(a1 + 664);
  v50 = v49 + 168 * v48;
  while ( 2 )
  {
    v51 = *(_DWORD *)(v49 + 8);
    if ( v51 == -1 )
    {
      if ( *(_DWORD *)(v49 + 4) != -1 || *(_BYTE *)v49 != 0xFF )
        goto LABEL_100;
    }
    else
    {
      if ( v51 == -2 && *(_DWORD *)(v49 + 4) == -2 && *(_BYTE *)v49 == 0xFE )
        goto LABEL_105;
LABEL_100:
      v52 = *(char **)(v49 + 16);
      v53 = &v52[136 * *(unsigned int *)(v49 + 24)];
      if ( v52 != v53 )
      {
        do
        {
          v53 -= 136;
          sub_A09CE0((__int64)(v53 + 16));
        }
        while ( v52 != v53 );
        v53 = *(char **)(v49 + 16);
      }
      if ( v53 != (char *)(v49 + 32) )
        free(v53);
    }
LABEL_105:
    v49 += 168;
    if ( v50 != v49 )
      continue;
    break;
  }
  v48 = *(unsigned int *)(a1 + 680);
LABEL_107:
  operator delete(*(_QWORD *)(a1 + 664), 168 * v48, 8);
  operator delete(*(_QWORD *)(a1 + 640), 8LL * *(unsigned int *)(a1 + 656), 4);
  operator delete(*(_QWORD *)(a1 + 616), 8LL * *(unsigned int *)(a1 + 632), 4);
  v54 = *(unsigned int *)(a1 + 608);
  if ( !(_DWORD)v54 )
    goto LABEL_118;
  v55 = *(_QWORD *)(a1 + 592);
  v56 = v55 + 216 * v54;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( *(_DWORD *)v55 != -1 )
      {
        if ( *(_DWORD *)v55 == -2 && *(_BYTE *)(v55 + 4) == 0xFE && *(_DWORD *)(v55 + 8) == -2 )
        {
LABEL_112:
          v55 += 216;
          if ( v56 == v55 )
            goto LABEL_117;
          continue;
        }
LABEL_111:
        sub_A20D20((char **)(v55 + 24));
        goto LABEL_112;
      }
      break;
    }
    if ( *(_BYTE *)(v55 + 4) != 0xFF || *(_DWORD *)(v55 + 8) != -1 )
      goto LABEL_111;
    v55 += 216;
    if ( v56 != v55 )
      continue;
    break;
  }
LABEL_117:
  v54 = *(unsigned int *)(a1 + 608);
LABEL_118:
  operator delete(*(_QWORD *)(a1 + 592), 216 * v54, 8);
  if ( *(_DWORD *)(a1 + 580) )
  {
    v57 = *(_DWORD *)(a1 + 576);
    v58 = *(char **)(a1 + 568);
    if ( v57 )
    {
      v59 = 0;
      v60 = 8LL * (unsigned int)(v57 - 1) + 8;
      do
      {
        v61 = *(_QWORD **)&v58[v59];
        if ( v61 != (_QWORD *)-8LL && v61 )
        {
          operator delete(*(_QWORD *)&v58[v59], *v61 + 17LL, 8);
          v58 = *(char **)(a1 + 568);
        }
        v59 += 8;
      }
      while ( v59 != v60 );
    }
  }
  else
  {
    v58 = *(char **)(a1 + 568);
  }
  free(v58);
  v62 = *(void **)(a1 + 40);
  if ( v62 != (void *)(a1 + 56) )
    free(v62);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
