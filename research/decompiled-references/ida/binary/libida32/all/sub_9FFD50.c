void __fastcall sub_9FFD50(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r13
  char *v5; // r14
  char *v6; // r12
  unsigned int v7; // esi
  __int64 v8; // r12
  __int64 v9; // r13
  char *v10; // r14
  char *v11; // rbp
  __int64 v12; // rax
  _DWORD *v13; // rbp
  _DWORD *v14; // r12
  char **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  char *v19; // r14
  char *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  char *v24; // r14
  char *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r14
  int v29; // eax
  void *v30; // rdi
  unsigned int v31; // esi
  __int64 v32; // r12
  __int64 v33; // r13
  _BYTE *v34; // r14
  _BYTE *v35; // rbp
  unsigned int v36; // esi
  __int64 v37; // r12
  __int64 v38; // r13
  int v39; // eax
  _BYTE *v40; // r14
  _BYTE *v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r13
  char *v45; // r14
  char *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r14
  int v50; // eax
  char *v51; // r13
  char *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // r12
  int v56; // eax
  char *v57; // rdi
  __int64 v58; // rbp
  __int64 v59; // r12
  __int64 v60; // rax
  void *v61; // rdi
  int v62; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  __int64 v65; // [rsp+18h] [rbp-70h] BYREF
  int v66; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v67; // [rsp+38h] [rbp-50h]
  __int64 v68; // [rsp+40h] [rbp-48h]
  __int64 v69; // [rsp+48h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 880);
  v3 = *(unsigned int *)(a1 + 896);
  if ( (_DWORD)v3 )
  {
    v4 = v2 + 200 * v3;
    do
    {
      if ( *(_DWORD *)v2 == -1 )
      {
        if ( *(_DWORD *)(v2 + 4) != -1 )
          goto LABEL_5;
      }
      else if ( *(_DWORD *)v2 != -2 || *(_DWORD *)(v2 + 4) != -2 )
      {
LABEL_5:
        v5 = *(char **)(v2 + 8);
        v6 = &v5[176 * *(unsigned int *)(v2 + 16)];
        if ( v5 != v6 )
        {
          do
          {
            v6 -= 176;
            sub_9E5F30((__int64)(v6 + 16));
          }
          while ( v5 != v6 );
          v6 = *(char **)(v2 + 8);
        }
        if ( v6 != (char *)(v2 + 24) )
          free(v6);
      }
      v2 += 200;
    }
    while ( v4 != v2 );
  }
  operator delete();
  v7 = *(_DWORD *)(a1 + 872);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 856);
    v9 = v8 + 408LL * v7;
    do
    {
      if ( *(_DWORD *)v8 == -1 )
      {
        if ( *(_DWORD *)(v8 + 4) != -1 )
          goto LABEL_15;
      }
      else if ( *(_DWORD *)v8 != -2 || *(_DWORD *)(v8 + 4) != -2 )
      {
LABEL_15:
        v10 = *(char **)(v8 + 8);
        v11 = &v10[384 * *(unsigned int *)(v8 + 16)];
        if ( v10 != v11 )
        {
          do
          {
            v11 -= 384;
            sub_9E66A0((__int64)(v11 + 16));
          }
          while ( v10 != v11 );
          v11 = *(char **)(v8 + 8);
        }
        if ( v11 != (char *)(v8 + 24) )
          free(v11);
      }
      v8 += 408;
    }
    while ( v9 != v8 );
  }
  operator delete();
  v12 = *(unsigned int *)(a1 + 848);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD **)(a1 + 832);
    v14 = &v13[28 * v12];
    do
    {
      while ( (unsigned int)(*v13 + 2) <= 1 )
      {
        v13 += 28;
        if ( v14 == v13 )
          goto LABEL_26;
      }
      v15 = (char **)(v13 + 2);
      v13 += 28;
      sub_9FFCF0(v15);
    }
    while ( v14 != v13 );
  }
LABEL_26:
  operator delete();
  v16 = *(unsigned int *)(a1 + 824);
  if ( (_DWORD)v16 )
  {
    v17 = *(_QWORD *)(a1 + 808);
    v18 = v17 + 216 * v16;
    do
    {
      if ( *(_DWORD *)v17 == -1 )
      {
        if ( *(_DWORD *)(v17 + 4) != -1 )
          goto LABEL_30;
      }
      else if ( *(_DWORD *)v17 != -2 || *(_DWORD *)(v17 + 4) != -2 )
      {
LABEL_30:
        v19 = *(char **)(v17 + 8);
        v20 = &v19[192 * *(unsigned int *)(v17 + 16)];
        if ( v19 != v20 )
        {
          do
          {
            v20 -= 192;
            sub_9E5FF0((__int64)(v20 + 16));
          }
          while ( v19 != v20 );
          v20 = *(char **)(v17 + 8);
        }
        if ( v20 != (char *)(v17 + 24) )
          free(v20);
      }
      v17 += 216;
    }
    while ( v18 != v17 );
  }
  operator delete();
  v21 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v21 )
  {
    v22 = *(_QWORD *)(a1 + 784);
    v23 = v22 + 152 * v21;
    do
    {
      if ( *(_DWORD *)v22 == -1 )
      {
        if ( *(_DWORD *)(v22 + 4) != -1 )
          goto LABEL_40;
      }
      else if ( *(_DWORD *)v22 != -2 || *(_DWORD *)(v22 + 4) != -2 )
      {
LABEL_40:
        v24 = *(char **)(v22 + 8);
        v25 = &v24[128 * (unsigned __int64)*(unsigned int *)(v22 + 16)];
        if ( v24 != v25 )
        {
          do
          {
            v25 -= 128;
            sub_9E5FA0((__int64)(v25 + 16));
          }
          while ( v24 != v25 );
          v25 = *(char **)(v22 + 8);
        }
        if ( v25 != (char *)(v22 + 24) )
          free(v25);
      }
      v22 += 152;
    }
    while ( v23 != v22 );
  }
  operator delete();
  v26 = *(unsigned int *)(a1 + 776);
  if ( (_DWORD)v26 )
  {
    v27 = *(_QWORD *)(a1 + 760);
    v62 = -1;
    v63 = &v65;
    v28 = v27 + 48 * v26;
    v64 = 0x200000000LL;
    v66 = -2;
    v67 = &v69;
    v68 = 0x200000000LL;
    do
    {
      v29 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 != -1 )
      {
LABEL_49:
        if ( v29 == -2 )
          sub_9FAEC0(v27, (__int64)&v66);
        goto LABEL_51;
      }
      while ( 1 )
      {
        sub_9FAEC0(v27, (__int64)&v62);
LABEL_51:
        v30 = *(void **)(v27 + 8);
        if ( v30 != (void *)(v27 + 24) )
          break;
        v27 += 48;
        if ( v28 == v27 )
          goto LABEL_53;
        v29 = *(_DWORD *)v27;
        if ( *(_DWORD *)v27 != -1 )
          goto LABEL_49;
      }
      free(v30);
      v27 += 48;
    }
    while ( v28 != v27 );
  }
LABEL_53:
  operator delete();
  v31 = *(_DWORD *)(a1 + 752);
  if ( v31 )
  {
    v32 = *(_QWORD *)(a1 + 736);
    v33 = v32 + 344LL * v31;
    do
    {
      if ( *(_DWORD *)v32 == -1 )
      {
        if ( *(_DWORD *)(v32 + 4) != -1 )
          goto LABEL_57;
      }
      else if ( *(_DWORD *)v32 != -2 || *(_DWORD *)(v32 + 4) != -2 )
      {
LABEL_57:
        v34 = *(_BYTE **)(v32 + 8);
        v35 = &v34[320 * *(unsigned int *)(v32 + 16)];
        if ( v34 != v35 )
        {
          do
          {
            while ( 1 )
            {
              v35 -= 320;
              if ( v35[312] )
                break;
              sub_9E5FF0((__int64)(v35 + 16));
              if ( v34 == v35 )
                goto LABEL_60;
            }
            sub_9E5FA0((__int64)(v35 + 192));
            sub_9E5FF0((__int64)(v35 + 16));
          }
          while ( v34 != v35 );
LABEL_60:
          v35 = *(_BYTE **)(v32 + 8);
        }
        if ( v35 != (_BYTE *)(v32 + 24) )
          free(v35);
      }
      v32 += 344;
    }
    while ( v33 != v32 );
  }
  operator delete();
  v36 = *(_DWORD *)(a1 + 728);
  if ( v36 )
  {
    v37 = *(_QWORD *)(a1 + 712);
    v38 = v37 + 360LL * v36;
    do
    {
      v39 = *(_DWORD *)(v37 + 8);
      if ( v39 == -1 )
      {
        if ( *(_DWORD *)(v37 + 4) != -1 || *(_BYTE *)v37 != 0xFF )
        {
LABEL_69:
          v40 = *(_BYTE **)(v37 + 16);
          v41 = &v40[328 * *(unsigned int *)(v37 + 24)];
          if ( v40 != v41 )
          {
            do
            {
              while ( 1 )
              {
                v41 -= 328;
                if ( v41[320] )
                  break;
                sub_9E5FF0((__int64)(v41 + 16));
                if ( v40 == v41 )
                  goto LABEL_72;
              }
              sub_9E5FA0((__int64)(v41 + 200));
              sub_9E5FF0((__int64)(v41 + 16));
            }
            while ( v40 != v41 );
LABEL_72:
            v41 = *(_BYTE **)(v37 + 16);
          }
          if ( v41 != (_BYTE *)(v37 + 32) )
            free(v41);
        }
      }
      else if ( v39 != -2 || *(_DWORD *)(v37 + 4) != -2 || *(_BYTE *)v37 != 0xFE )
      {
        goto LABEL_69;
      }
      v37 += 360;
    }
    while ( v38 != v37 );
  }
  operator delete();
  v42 = *(unsigned int *)(a1 + 704);
  if ( (_DWORD)v42 )
  {
    v43 = *(_QWORD *)(a1 + 688);
    v44 = v43 + 152 * v42;
    do
    {
      if ( *(_DWORD *)v43 == -1 )
      {
        if ( *(_DWORD *)(v43 + 4) != -1 )
          goto LABEL_80;
      }
      else if ( *(_DWORD *)v43 != -2 || *(_DWORD *)(v43 + 4) != -2 )
      {
LABEL_80:
        v45 = *(char **)(v43 + 8);
        v46 = &v45[128 * (unsigned __int64)*(unsigned int *)(v43 + 16)];
        if ( v45 != v46 )
        {
          do
          {
            v46 -= 128;
            sub_9E5FA0((__int64)(v46 + 16));
          }
          while ( v45 != v46 );
          v46 = *(char **)(v43 + 8);
        }
        if ( v46 != (char *)(v43 + 24) )
          free(v46);
      }
      v43 += 152;
    }
    while ( v44 != v43 );
  }
  operator delete();
  v47 = *(unsigned int *)(a1 + 680);
  if ( (_DWORD)v47 )
  {
    v48 = *(_QWORD *)(a1 + 664);
    v49 = v48 + 168 * v47;
    do
    {
      v50 = *(_DWORD *)(v48 + 8);
      if ( v50 == -1 )
      {
        if ( *(_DWORD *)(v48 + 4) != -1 || *(_BYTE *)v48 != 0xFF )
        {
LABEL_91:
          v51 = *(char **)(v48 + 16);
          v52 = &v51[136 * *(unsigned int *)(v48 + 24)];
          if ( v51 != v52 )
          {
            do
            {
              v52 -= 136;
              sub_9E5FA0((__int64)(v52 + 16));
            }
            while ( v51 != v52 );
            v52 = *(char **)(v48 + 16);
          }
          if ( v52 != (char *)(v48 + 32) )
            free(v52);
        }
      }
      else if ( v50 != -2 || *(_DWORD *)(v48 + 4) != -2 || *(_BYTE *)v48 != 0xFE )
      {
        goto LABEL_91;
      }
      v48 += 168;
    }
    while ( v49 != v48 );
  }
  operator delete();
  operator delete();
  operator delete();
  v53 = *(unsigned int *)(a1 + 608);
  if ( (_DWORD)v53 )
  {
    v54 = *(_QWORD *)(a1 + 592);
    v55 = v54 + 216 * v53;
    while ( *(_DWORD *)v54 == -1 )
    {
      if ( *(_BYTE *)(v54 + 4) == 0xFF && *(_DWORD *)(v54 + 8) == -1 )
      {
        v54 += 216;
        if ( v55 == v54 )
          goto LABEL_107;
      }
      else
      {
LABEL_101:
        sub_9FCFE0((char **)(v54 + 24));
LABEL_102:
        v54 += 216;
        if ( v55 == v54 )
          goto LABEL_107;
      }
    }
    if ( *(_DWORD *)v54 == -2 && *(_BYTE *)(v54 + 4) == 0xFE && *(_DWORD *)(v54 + 8) == -2 )
      goto LABEL_102;
    goto LABEL_101;
  }
LABEL_107:
  operator delete();
  if ( *(_DWORD *)(a1 + 580) )
  {
    v56 = *(_DWORD *)(a1 + 576);
    v57 = *(char **)(a1 + 568);
    if ( v56 )
    {
      v58 = 0;
      v59 = 8LL * (unsigned int)(v56 - 1) + 8;
      do
      {
        v60 = *(_QWORD *)&v57[v58];
        if ( v60 != -8 && v60 )
        {
          operator delete();
          v57 = *(char **)(a1 + 568);
        }
        v58 += 8;
      }
      while ( v58 != v59 );
    }
  }
  else
  {
    v57 = *(char **)(a1 + 568);
  }
  free(v57);
  v61 = *(void **)(a1 + 40);
  if ( v61 != (void *)(a1 + 56) )
    free(v61);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

