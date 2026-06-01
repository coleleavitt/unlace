__int64 __fastcall sub_74CD30(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // r14
  int v4; // ecx
  unsigned int v5; // esi
  char *v6; // rdx
  char *v7; // rax
  char *v8; // rbp
  void *v9; // r13
  char *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  char *v16; // r14
  int v17; // ecx
  unsigned int v18; // esi
  char *v19; // rdx
  char *v20; // rax
  char *v21; // rbp
  void *v22; // r13
  char *v23; // rsi
  unsigned int v24; // ebp
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  char *v29; // r14
  int v30; // ecx
  unsigned int v31; // esi
  char *v32; // rdx
  char *v33; // rax
  char *v34; // rbp
  void *v35; // r13
  char *v36; // rsi
  unsigned int v37; // ebp
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  char *v42; // r14
  int v43; // ecx
  unsigned int v44; // esi
  char *v45; // rdx
  char *v46; // rax
  char *v47; // rbp
  void *v48; // r13
  char *v49; // rsi
  unsigned int v50; // ebp
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rdx
  void (__fastcall ***v54)(void *); // rbp
  bool v55; // zf
  void (__fastcall ***v56)(void *); // rbp
  __int64 v57; // rdi
  unsigned int v59; // esi
  unsigned int v60; // esi
  unsigned int v61; // esi
  unsigned int v62; // esi

  if ( *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64) )
  {
    v2 = *(unsigned int *)(a1 + 56);
    v3 = *(char **)(a1 + 48);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 56);
    v6 = &v3[40 * v2];
    v7 = v3;
    if ( v3 == v6 )
      goto LABEL_17;
    do
    {
      while ( *(_QWORD *)v7 )
      {
        *(_QWORD *)v7 = 0;
        v7 += 40;
        if ( v6 == v7 )
          goto LABEL_8;
      }
      v7 += 40;
      ++v4;
    }
    while ( v6 != v7 );
LABEL_8:
    if ( v5 <= 0x10 || 3 * v5 >= 4 * v4 )
      goto LABEL_17;
    if ( v3 )
    {
      v8 = v3;
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v10 = v8 + 24;
        v8 += 40;
        sub_182CBA0(v9, v10);
      }
      while ( v8 != &v3[40 * v2] );
      sub_186B220(v3);
      v11 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v11 >>= 1;
      v12 = v11;
      *(_DWORD *)(a1 + 56) = v11;
      v13 = sub_186B270(40LL * v11);
      if ( !v11 )
        goto LABEL_16;
    }
    else
    {
      v62 = v5 >> 1;
      *(_QWORD *)(a1 + 48) = 0;
      v12 = v62;
      *(_DWORD *)(a1 + 56) = v62;
      v13 = sub_186B270(40LL * v62);
    }
    v14 = v13;
    do
    {
      *(_OWORD *)(v14 + 24) = 0;
      v14 += 40;
      *(_OWORD *)(v14 - 32) = 0;
      *(_QWORD *)(v14 - 40) = 0;
      *(_BYTE *)(v14 - 28) = 0;
      *(_DWORD *)(v14 - 16) = 1;
      *(_BYTE *)(v14 - 12) = 0;
    }
    while ( v13 + 40 * v12 != v14 );
LABEL_16:
    *(_QWORD *)(a1 + 48) = v13;
LABEL_17:
    *(_QWORD *)(a1 + 60) = 0;
  }
  if ( *(_DWORD *)(a1 + 84) || *(_DWORD *)(a1 + 88) )
  {
    v15 = *(unsigned int *)(a1 + 80);
    v16 = *(char **)(a1 + 72);
    v17 = 0;
    v18 = *(_DWORD *)(a1 + 80);
    v19 = &v16[40 * v15];
    v20 = v16;
    if ( v16 == v19 )
      goto LABEL_34;
    do
    {
      while ( *(_QWORD *)v20 )
      {
        *(_QWORD *)v20 = 0;
        v20 += 40;
        if ( v19 == v20 )
          goto LABEL_25;
      }
      v20 += 40;
      ++v17;
    }
    while ( v19 != v20 );
LABEL_25:
    if ( v18 <= 0x10 || 3 * v18 >= 4 * v17 )
      goto LABEL_34;
    if ( v16 )
    {
      v21 = v16;
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21 + 8);
        v23 = v21 + 24;
        v21 += 40;
        sub_182CBA0(v22, v23);
      }
      while ( &v16[40 * v15] != v21 );
      sub_186B220(v16);
      v24 = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = 0;
      v24 >>= 1;
      v25 = v24;
      *(_DWORD *)(a1 + 80) = v24;
      v26 = sub_186B270(40LL * v24);
      if ( !v24 )
        goto LABEL_33;
    }
    else
    {
      v59 = v18 >> 1;
      *(_QWORD *)(a1 + 72) = 0;
      v25 = v59;
      *(_DWORD *)(a1 + 80) = v59;
      v26 = sub_186B270(40LL * v59);
    }
    v27 = v26;
    do
    {
      *(_OWORD *)(v27 + 24) = 0;
      v27 += 40;
      *(_OWORD *)(v27 - 32) = 0;
      *(_QWORD *)(v27 - 40) = 0;
      *(_BYTE *)(v27 - 28) = 0;
      *(_DWORD *)(v27 - 16) = 1;
      *(_BYTE *)(v27 - 12) = 0;
    }
    while ( v26 + 40 * v25 != v27 );
LABEL_33:
    *(_QWORD *)(a1 + 72) = v26;
LABEL_34:
    *(_QWORD *)(a1 + 84) = 0;
  }
  if ( *(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 112) )
  {
    v28 = *(unsigned int *)(a1 + 104);
    v29 = *(char **)(a1 + 96);
    v30 = 0;
    v31 = *(_DWORD *)(a1 + 104);
    v32 = &v29[40 * v28];
    v33 = v29;
    if ( v29 == v32 )
      goto LABEL_51;
    do
    {
      while ( *(_QWORD *)v33 )
      {
        *(_QWORD *)v33 = 0;
        v33 += 40;
        if ( v32 == v33 )
          goto LABEL_42;
      }
      v33 += 40;
      ++v30;
    }
    while ( v32 != v33 );
LABEL_42:
    if ( v31 <= 0x10 || 3 * v31 >= 4 * v30 )
      goto LABEL_51;
    if ( v29 )
    {
      v34 = v29;
      do
      {
        v35 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v34 + 8);
        v36 = v34 + 24;
        v34 += 40;
        sub_182CBA0(v35, v36);
      }
      while ( v34 != &v29[40 * v28] );
      sub_186B220(v29);
      v37 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = 0;
      v37 >>= 1;
      v38 = v37;
      *(_DWORD *)(a1 + 104) = v37;
      v39 = sub_186B270(40LL * v37);
      if ( !v37 )
        goto LABEL_50;
    }
    else
    {
      v61 = v31 >> 1;
      *(_QWORD *)(a1 + 96) = 0;
      v38 = v61;
      *(_DWORD *)(a1 + 104) = v61;
      v39 = sub_186B270(40LL * v61);
    }
    v40 = v39;
    do
    {
      *(_OWORD *)(v40 + 24) = 0;
      v40 += 40;
      *(_OWORD *)(v40 - 32) = 0;
      *(_QWORD *)(v40 - 40) = 0;
      *(_BYTE *)(v40 - 28) = 0;
      *(_DWORD *)(v40 - 16) = 1;
      *(_BYTE *)(v40 - 12) = 0;
    }
    while ( v40 != v39 + 40 * v38 );
LABEL_50:
    *(_QWORD *)(a1 + 96) = v39;
LABEL_51:
    *(_QWORD *)(a1 + 108) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || *(_DWORD *)(a1 + 136) )
  {
    v41 = *(unsigned int *)(a1 + 128);
    v42 = *(char **)(a1 + 120);
    v43 = 0;
    v44 = *(_DWORD *)(a1 + 128);
    v45 = &v42[40 * v41];
    v46 = v42;
    if ( v42 == v45 )
      goto LABEL_68;
    do
    {
      while ( *(_QWORD *)v46 )
      {
        *(_QWORD *)v46 = 0;
        v46 += 40;
        if ( v45 == v46 )
          goto LABEL_59;
      }
      v46 += 40;
      ++v43;
    }
    while ( v45 != v46 );
LABEL_59:
    if ( v44 <= 0x10 || 3 * v44 >= 4 * v43 )
      goto LABEL_68;
    if ( v42 )
    {
      v47 = v42;
      do
      {
        v48 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v47 + 8);
        v49 = v47 + 24;
        v47 += 40;
        sub_182CBA0(v48, v49);
      }
      while ( &v42[40 * v41] != v47 );
      sub_186B220(v42);
      v50 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v50 >>= 1;
      v51 = v50;
      *(_DWORD *)(a1 + 128) = v50;
      v52 = sub_186B270(40LL * v50);
      if ( !v50 )
        goto LABEL_67;
    }
    else
    {
      v60 = v44 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      v51 = v60;
      *(_DWORD *)(a1 + 128) = v60;
      v52 = sub_186B270(40LL * v60);
    }
    v53 = v52;
    do
    {
      *(_OWORD *)(v53 + 24) = 0;
      v53 += 40;
      *(_OWORD *)(v53 - 32) = 0;
      *(_QWORD *)(v53 - 40) = 0;
      *(_BYTE *)(v53 - 28) = 0;
      *(_DWORD *)(v53 - 16) = 1;
      *(_BYTE *)(v53 - 12) = 0;
    }
    while ( v53 != v52 + 40 * v51 );
LABEL_67:
    *(_QWORD *)(a1 + 120) = v52;
LABEL_68:
    *(_QWORD *)(a1 + 132) = 0;
  }
  v54 = *(void (__fastcall ****)(void *))(a1 + 144);
  if ( v54 )
  {
    v55 = (*((_DWORD *)v54 + 2))-- == 1;
    if ( v55 )
    {
      (**v54)(v54);
      sub_186B220(v54);
    }
  }
  v56 = *(void (__fastcall ****)(void *))(a1 + 152);
  *(_QWORD *)(a1 + 144) = 0;
  if ( v56 )
  {
    v55 = (*((_DWORD *)v56 + 2))-- == 1;
    if ( v55 )
    {
      (**v56)(v56);
      sub_186B220(v56);
    }
  }
  v57 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 48LL))(v57);
}

