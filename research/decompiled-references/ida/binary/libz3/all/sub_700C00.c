__int64 __fastcall sub_700C00(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rbp
  void *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbp
  void *v13; // rdi
  _QWORD **v14; // r13
  _QWORD **v15; // r14
  _QWORD *v16; // r15
  unsigned int *v17; // rbx
  unsigned int *v18; // rbp
  unsigned int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rdi
  int v25; // edx
  __int64 v26; // rsi
  char *v27; // rcx
  char *v28; // rax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  char *v34; // rdi
  int v35; // edx
  __int64 v36; // rsi
  char *v37; // rcx
  char *v38; // rax
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  char *v44; // rdi
  int v45; // edx
  __int64 v46; // rsi
  char *v47; // rcx
  char *v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 result; // rax
  char *v55; // rdi
  int v56; // edx
  __int64 v57; // rsi
  char *v58; // rcx
  unsigned int v59; // ebx
  unsigned int v60; // ebx
  __int64 v61; // rcx
  unsigned int v62; // esi
  unsigned int v63; // esi
  unsigned int v64; // esi
  unsigned int v65; // esi

  v2 = *(_QWORD *)(a1 + 336);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 344);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 352);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  *(_DWORD *)(a1 + 32) = -2;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD **)(a1 + 128);
  *(_BYTE *)(a1 + 120) = 0;
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        while ( *v6 )
        {
          v9 = (void *)(*v6++ - 8LL);
          sub_186B220(v9);
          if ( v8 == v6 )
          {
            v6 = *(_QWORD **)(a1 + 128);
            goto LABEL_15;
          }
        }
        ++v6;
      }
      while ( v6 != v8 );
      v6 = *(_QWORD **)(a1 + 128);
    }
LABEL_15:
    *((_DWORD *)v6 - 1) = 0;
  }
  v10 = *(_QWORD **)(a1 + 136);
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = &v10[v11];
      do
      {
        while ( *v10 )
        {
          v13 = (void *)(*v10++ - 8LL);
          sub_186B220(v13);
          if ( v12 == v10 )
          {
            v10 = *(_QWORD **)(a1 + 136);
            goto LABEL_22;
          }
        }
        ++v10;
      }
      while ( v10 != v12 );
      v10 = *(_QWORD **)(a1 + 136);
    }
LABEL_22:
    *((_DWORD *)v10 - 1) = 0;
  }
  v14 = *(_QWORD ***)(a1 + 144);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 == v15 )
      goto LABEL_34;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = (unsigned int *)v16[1];
        if ( v17 )
        {
          v18 = &v17[*(v17 - 1)];
          if ( v17 == v18 )
            goto LABEL_30;
          do
          {
            v19 = *v17++;
            sub_1144670(*v16, v19 >> 1);
          }
          while ( v18 != v17 );
          v18 = (unsigned int *)v16[1];
          if ( v18 )
          {
LABEL_30:
            *(v18 - 1) = 0;
            sub_186B220(v18 - 2);
          }
        }
        sub_186B220(v16);
      }
      ++v14;
    }
    while ( v15 != v14 );
    v15 = *(_QWORD ***)(a1 + 144);
    if ( v15 )
LABEL_34:
      *((_DWORD *)v15 - 1) = 0;
  }
  v20 = *(_QWORD *)(a1 + 160);
  v21 = v20 + 20LL * *(unsigned int *)(a1 + 168);
  if ( v20 != v21 )
  {
    while ( *(_DWORD *)(v20 + 4) != 2 )
    {
      v20 += 20;
      if ( v21 == v20 )
        goto LABEL_45;
    }
    if ( v21 != v20 )
    {
      do
      {
        sub_1144670(a1 + 16, *(unsigned int *)(v20 + 8));
        v22 = v20 + 20;
        if ( v21 == v20 + 20 )
          break;
        while ( 1 )
        {
          v20 = v22;
          if ( *(_DWORD *)(v22 + 4) == 2 )
            break;
          v22 += 20;
          if ( v21 == v22 )
            goto LABEL_45;
        }
      }
      while ( v21 != v22 );
    }
  }
LABEL_45:
  v23 = *(_QWORD *)(a1 + 152);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  if ( *(_DWORD *)(a1 + 172) || *(_DWORD *)(a1 + 176) )
  {
    v24 = *(char **)(a1 + 160);
    v25 = 0;
    v26 = *(unsigned int *)(a1 + 168);
    v27 = &v24[20 * v26];
    v28 = v24;
    if ( v24 == v27 )
      goto LABEL_65;
    do
    {
      while ( *((_DWORD *)v28 + 1) )
      {
        *((_DWORD *)v28 + 1) = 0;
        v28 += 20;
        if ( v27 == v28 )
          goto LABEL_54;
      }
      v28 += 20;
      ++v25;
    }
    while ( v27 != v28 );
LABEL_54:
    if ( (unsigned int)v26 <= 0x10 || 3 * (int)v26 >= (unsigned int)(4 * v25) )
      goto LABEL_65;
    if ( v24 )
    {
      sub_186B220(v24);
      v29 = *(_DWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 160) = 0;
      v30 = v29 >> 1;
      *(_DWORD *)(a1 + 168) = v30;
      v31 = (_QWORD *)sub_186B270(20LL * v30);
      v32 = (__int64)v31;
      if ( !v30 )
      {
LABEL_64:
        *(_QWORD *)(a1 + 160) = v32;
LABEL_65:
        *(_QWORD *)(a1 + 172) = 0;
        goto LABEL_66;
      }
      if ( v30 == 1 )
      {
LABEL_63:
        *v31 = 0;
        *(_QWORD *)((char *)v31 + 12) = -1;
        goto LABEL_64;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 160) = 0;
      v65 = (unsigned int)v26 >> 1;
      *(_DWORD *)(a1 + 168) = v65;
      v30 = v65;
      v32 = sub_186B270(20LL * v65);
    }
    v33 = (_QWORD *)v32;
    do
    {
      *v33 = 0;
      v33 += 5;
      *(_QWORD *)((char *)v33 - 20) = 0;
      *(_QWORD *)((char *)v33 - 28) = -1;
      *(v33 - 1) = -1;
    }
    while ( v33 != (_QWORD *)(v32 + 40LL * (v30 >> 1)) );
    if ( (v30 & 1) == 0 )
      goto LABEL_64;
    v31 = (_QWORD *)(v32 + 20LL * (v30 & 0x7FFFFFFE));
    goto LABEL_63;
  }
LABEL_66:
  sub_16236C0(a1 + 232);
  sub_16236C0(a1 + 184);
  if ( *(_DWORD *)(a1 + 292) || *(_DWORD *)(a1 + 296) )
  {
    v34 = *(char **)(a1 + 280);
    v35 = 0;
    v36 = *(unsigned int *)(a1 + 288);
    v37 = &v34[24 * v36];
    v38 = v34;
    if ( v34 == v37 )
      goto LABEL_84;
    do
    {
      while ( *((_DWORD *)v38 + 1) )
      {
        *((_DWORD *)v38 + 1) = 0;
        v38 += 24;
        if ( v37 == v38 )
          goto LABEL_73;
      }
      v38 += 24;
      ++v35;
    }
    while ( v37 != v38 );
LABEL_73:
    if ( (unsigned int)v36 <= 0x10 || 3 * (int)v36 >= (unsigned int)(4 * v35) )
      goto LABEL_84;
    if ( v34 )
    {
      sub_186B220(v34);
      v39 = *(_DWORD *)(a1 + 288);
      *(_QWORD *)(a1 + 280) = 0;
      v40 = v39 >> 1;
      *(_DWORD *)(a1 + 288) = v40;
      v41 = (_QWORD *)sub_186B270(24LL * v40);
      v42 = (__int64)v41;
      if ( !v40 )
      {
LABEL_83:
        *(_QWORD *)(a1 + 280) = v42;
LABEL_84:
        *(_QWORD *)(a1 + 292) = 0;
        goto LABEL_85;
      }
      if ( v40 == 1 )
      {
LABEL_82:
        *v41 = 0;
        goto LABEL_83;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 280) = 0;
      v64 = (unsigned int)v36 >> 1;
      *(_DWORD *)(a1 + 288) = v64;
      v40 = v64;
      v42 = sub_186B270(24LL * v64);
    }
    v43 = (_QWORD *)v42;
    do
    {
      *v43 = 0;
      v43 += 6;
      *(v43 - 3) = 0;
    }
    while ( (_QWORD *)(v42 + 48LL * (v40 >> 1)) != v43 );
    if ( (v40 & 1) == 0 )
      goto LABEL_83;
    v41 = (_QWORD *)(v42 + 24LL * (v40 & 0x7FFFFFFE));
    goto LABEL_82;
  }
LABEL_85:
  if ( *(_DWORD *)(a1 + 316) || *(_DWORD *)(a1 + 320) )
  {
    v44 = *(char **)(a1 + 304);
    v45 = 0;
    v46 = *(unsigned int *)(a1 + 312);
    v47 = &v44[24 * v46];
    v48 = v44;
    if ( v44 == v47 )
      goto LABEL_103;
    do
    {
      while ( *((_DWORD *)v48 + 1) )
      {
        *((_DWORD *)v48 + 1) = 0;
        v48 += 24;
        if ( v47 == v48 )
          goto LABEL_92;
      }
      v48 += 24;
      ++v45;
    }
    while ( v47 != v48 );
LABEL_92:
    if ( (unsigned int)v46 <= 0x10 || 3 * (int)v46 >= (unsigned int)(4 * v45) )
      goto LABEL_103;
    if ( v44 )
    {
      sub_186B220(v44);
      v49 = *(_DWORD *)(a1 + 312);
      *(_QWORD *)(a1 + 304) = 0;
      v50 = v49 >> 1;
      *(_DWORD *)(a1 + 312) = v50;
      v51 = (_QWORD *)sub_186B270(24LL * v50);
      v52 = (__int64)v51;
      if ( !v50 )
      {
LABEL_102:
        *(_QWORD *)(a1 + 304) = v52;
LABEL_103:
        *(_QWORD *)(a1 + 316) = 0;
        goto LABEL_104;
      }
      if ( v50 == 1 )
      {
LABEL_101:
        *v51 = 0;
        goto LABEL_102;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 304) = 0;
      v63 = (unsigned int)v46 >> 1;
      *(_DWORD *)(a1 + 312) = v63;
      v50 = v63;
      v52 = sub_186B270(24LL * v63);
    }
    v53 = (_QWORD *)v52;
    do
    {
      *v53 = 0;
      v53 += 6;
      *(v53 - 3) = 0;
    }
    while ( v53 != (_QWORD *)(v52 + 48LL * (v50 >> 1)) );
    if ( (v50 & 1) == 0 )
      goto LABEL_102;
    v51 = (_QWORD *)(v52 + 24LL * (v50 & 0x7FFFFFFE));
    goto LABEL_101;
  }
LABEL_104:
  result = *(_QWORD *)(a1 + 328);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( *(_DWORD *)(a1 + 372) || *(_DWORD *)(a1 + 376) )
  {
    v55 = *(char **)(a1 + 360);
    v56 = 0;
    v57 = *(unsigned int *)(a1 + 368);
    v58 = &v55[24 * v57];
    result = (__int64)v55;
    if ( v55 == v58 )
      goto LABEL_124;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( v58 == (char *)result )
          goto LABEL_113;
      }
      result += 24;
      ++v56;
    }
    while ( v58 != (char *)result );
LABEL_113:
    if ( (unsigned int)v57 <= 0x10 )
      goto LABEL_124;
    result = (unsigned int)(3 * v57);
    if ( (unsigned int)result >= 4 * v56 )
      goto LABEL_124;
    if ( v55 )
    {
      sub_186B220(v55);
      v59 = *(_DWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 360) = 0;
      v60 = v59 >> 1;
      *(_DWORD *)(a1 + 368) = v60;
      result = sub_186B270(24LL * v60);
      v61 = result;
      if ( !v60 )
      {
LABEL_123:
        *(_QWORD *)(a1 + 360) = v61;
LABEL_124:
        *(_QWORD *)(a1 + 372) = 0;
        return result;
      }
      if ( v60 == 1 )
      {
LABEL_122:
        *(_QWORD *)result = 0;
        goto LABEL_123;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0;
      v62 = (unsigned int)v57 >> 1;
      *(_DWORD *)(a1 + 368) = v62;
      v60 = v62;
      v61 = sub_186B270(24LL * v62);
    }
    result = v61;
    do
    {
      *(_QWORD *)result = 0;
      result += 48;
      *(_QWORD *)(result - 24) = 0;
    }
    while ( v61 + 48LL * (v60 >> 1) != result );
    if ( (v60 & 1) == 0 )
      goto LABEL_123;
    result = v61 + 24LL * (v60 & 0x7FFFFFFE);
    goto LABEL_122;
  }
  return result;
}

