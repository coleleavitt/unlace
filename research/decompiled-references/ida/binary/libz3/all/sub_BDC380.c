__int64 __fastcall sub_BDC380(__int64 a1, unsigned int *a2, int a3, unsigned int **a4, unsigned int **a5)
{
  int v6; // r13d
  __int64 v7; // r12
  unsigned int v8; // ebp
  char *v9; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  char *v12; // rax
  char *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rdx
  char *v18; // rdi
  int v19; // ecx
  __int64 v20; // rsi
  char *v21; // rax
  char *v22; // rdx
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rdx
  char *v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  char *v30; // rax
  char *v31; // rdx
  unsigned int v32; // r15d
  size_t v33; // r14
  _OWORD *v34; // rax
  _OWORD *v35; // rcx
  _OWORD *v36; // rdx
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // esi

  v6 = *(_DWORD *)(a1 + 88);
  v7 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 88) = a3;
  *(_QWORD *)(a1 + 96) = a4;
  v8 = sub_BDB970((__int64 *)a1, a2, 0, a4, a5);
  if ( *(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 32) )
  {
    v9 = *(char **)(a1 + 16);
    v10 = 0;
    v11 = *(unsigned int *)(a1 + 24);
    v12 = v9;
    v13 = &v9[16 * v11];
    if ( v9 == v13 )
      goto LABEL_15;
    do
    {
      while ( *(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = 0;
        v12 += 16;
        if ( v13 == v12 )
          goto LABEL_8;
      }
      v12 += 16;
      ++v10;
    }
    while ( v13 != v12 );
LABEL_8:
    if ( (unsigned int)v11 <= 0x10 || 3 * (int)v11 >= (unsigned int)(4 * v10) )
      goto LABEL_15;
    if ( v9 )
    {
      sub_186B220(v9);
      v14 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v14 >>= 1;
      v15 = v14;
      *(_DWORD *)(a1 + 24) = v14;
      v16 = sub_186B270(16LL * v14);
      if ( !v14 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 16) = v16;
LABEL_15:
        *(_QWORD *)(a1 + 28) = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v38 = (unsigned int)v11 >> 1;
      *(_QWORD *)(a1 + 16) = 0;
      v15 = v38;
      *(_DWORD *)(a1 + 24) = v38;
      v16 = sub_186B270(16LL * v38);
    }
    v17 = (_QWORD *)v16;
    do
    {
      *v17 = 0;
      v17 += 2;
      *((_BYTE *)v17 - 8) = 0;
    }
    while ( v17 != (_QWORD *)(v16 + 16 * v15) );
    goto LABEL_14;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 52) || *(_DWORD *)(a1 + 56) )
  {
    v18 = *(char **)(a1 + 40);
    v19 = 0;
    v20 = *(unsigned int *)(a1 + 48);
    v21 = v18;
    v22 = &v18[16 * v20];
    if ( v18 == v22 )
      goto LABEL_30;
    do
    {
      while ( *(_QWORD *)v21 )
      {
        *(_QWORD *)v21 = 0;
        v21 += 16;
        if ( v22 == v21 )
          goto LABEL_23;
      }
      v21 += 16;
      ++v19;
    }
    while ( v22 != v21 );
LABEL_23:
    if ( (unsigned int)v20 <= 0x10 || 3 * (int)v20 >= (unsigned int)(4 * v19) )
      goto LABEL_30;
    if ( v18 )
    {
      sub_186B220(v18);
      v23 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = 0;
      v23 >>= 1;
      v24 = v23;
      *(_DWORD *)(a1 + 48) = v23;
      v25 = sub_186B270(16LL * v23);
      if ( !v23 )
      {
LABEL_29:
        *(_QWORD *)(a1 + 40) = v25;
LABEL_30:
        *(_QWORD *)(a1 + 52) = 0;
        goto LABEL_31;
      }
    }
    else
    {
      v40 = (unsigned int)v20 >> 1;
      *(_QWORD *)(a1 + 40) = 0;
      v24 = v40;
      *(_DWORD *)(a1 + 48) = v40;
      v25 = sub_186B270(16LL * v40);
    }
    v26 = (_QWORD *)v25;
    do
    {
      *v26 = 0;
      v26 += 2;
      *((_BYTE *)v26 - 8) = 0;
    }
    while ( v26 != (_QWORD *)(v25 + 16 * v24) );
    goto LABEL_29;
  }
LABEL_31:
  if ( *(_DWORD *)(a1 + 76) || *(_DWORD *)(a1 + 80) )
  {
    v27 = *(char **)(a1 + 64);
    v28 = 0;
    v29 = *(unsigned int *)(a1 + 72);
    v30 = v27;
    v31 = &v27[16 * v29];
    if ( v27 == v31 )
      goto LABEL_46;
    do
    {
      while ( *(_QWORD *)v30 )
      {
        *(_QWORD *)v30 = 0;
        v30 += 16;
        if ( v31 == v30 )
          goto LABEL_38;
      }
      v30 += 16;
      ++v28;
    }
    while ( v31 != v30 );
LABEL_38:
    if ( (unsigned int)v29 <= 0x10 || 3 * (int)v29 >= (unsigned int)(4 * v28) )
      goto LABEL_46;
    if ( v27 )
    {
      sub_186B220(v27);
      v32 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) = 0;
      v32 >>= 1;
      *(_DWORD *)(a1 + 72) = v32;
      v33 = 16LL * v32;
      v34 = (_OWORD *)sub_186B270(v33);
      if ( !v32 )
      {
LABEL_45:
        *(_QWORD *)(a1 + 64) = v34;
LABEL_46:
        *(_QWORD *)(a1 + 76) = 0;
        goto LABEL_47;
      }
    }
    else
    {
      v39 = (unsigned int)v29 >> 1;
      *(_QWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 72) = v39;
      v33 = 16LL * v39;
      v34 = (_OWORD *)sub_186B270(v33);
    }
    v35 = &v34[v33 / 0x10];
    v36 = v34;
    if ( (v33 & 0x10) == 0 || (v36 = v34 + 1, *v34 = 0, v35 != v34 + 1) )
    {
      do
      {
        *v36 = 0;
        v36 += 2;
        *(v36 - 1) = 0;
      }
      while ( v35 != v36 );
    }
    goto LABEL_45;
  }
LABEL_47:
  *(_QWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 88) = v6;
  return v8;
}

