void __fastcall sub_787B60(__int64 *a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  char v4; // r12
  __int64 *v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  char *v9; // rdi
  int v10; // ecx
  char *v11; // rdx
  unsigned int v12; // esi
  char *v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // r12
  void *v16; // rcx
  char *v17; // rdi
  int v18; // ecx
  __int64 v19; // rsi
  char *v20; // rax
  char *v21; // rdx
  unsigned int v22; // ebp
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rdx
  char *v26; // rdi
  int v27; // edx
  __int64 v28; // rsi
  char *v29; // rcx
  char *v30; // rax
  unsigned int v31; // ebp
  unsigned int v32; // ebp
  __int64 v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  unsigned int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // esi

  v3 = *a1;
  if ( a2 )
  {
    v4 = *(_BYTE *)(v3 + 274);
    v5 = a3;
    v6 = &a3[a2];
    do
    {
      v7 = *(_QWORD *)(v3 + 88);
      v8 = *v5;
      *(_BYTE *)(v3 + 274) = 1;
      if ( v7 && *(_DWORD *)(v7 - 4) )
      {
        sub_1872CE0("");
        sub_1873130(114, 891);
      }
      sub_78F200(v3, v8, 1);
      ++v5;
      *(_BYTE *)(v3 + 274) = v4;
    }
    while ( v5 != v6 );
  }
  if ( *(_DWORD *)(v3 + 180) || *(_DWORD *)(v3 + 184) )
  {
    v9 = *(char **)(v3 + 168);
    v10 = 0;
    v11 = &v9[8 * *(unsigned int *)(v3 + 176)];
    v12 = *(_DWORD *)(v3 + 176);
    v13 = v9;
    if ( v9 == v11 )
      goto LABEL_20;
    do
    {
      while ( *(_QWORD *)v13 )
      {
        *(_QWORD *)v13 = 0;
        v13 += 8;
        if ( v11 == v13 )
          goto LABEL_14;
      }
      v13 += 8;
      ++v10;
    }
    while ( v11 != v13 );
LABEL_14:
    if ( v12 <= 0x10 || 3 * v12 >= 4 * v10 )
      goto LABEL_20;
    if ( v9 )
    {
      sub_186B220(v9);
      v14 = *(_DWORD *)(v3 + 176);
      *(_QWORD *)(v3 + 168) = 0;
      v14 >>= 1;
      *(_DWORD *)(v3 + 176) = v14;
      v15 = v14;
      v16 = (void *)sub_186B270(8LL * v14);
      if ( !v14 )
      {
LABEL_19:
        *(_QWORD *)(v3 + 168) = v16;
LABEL_20:
        *(_QWORD *)(v3 + 180) = 0;
        goto LABEL_21;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 168) = 0;
      v36 = v12 >> 1;
      v15 = v36;
      *(_DWORD *)(v3 + 176) = v36;
      v16 = (void *)sub_186B270(8LL * v36);
    }
    v16 = memset(v16, 0, 8 * v15);
    goto LABEL_19;
  }
LABEL_21:
  if ( *(_DWORD *)(v3 + 108) || *(_DWORD *)(v3 + 112) )
  {
    v17 = *(char **)(v3 + 96);
    v18 = 0;
    v19 = *(unsigned int *)(v3 + 104);
    v20 = v17;
    v21 = &v17[16 * v19];
    if ( v17 == v21 )
      goto LABEL_35;
    do
    {
      while ( *(_QWORD *)v20 )
      {
        *(_QWORD *)v20 = 0;
        v20 += 16;
        if ( v21 == v20 )
          goto LABEL_28;
      }
      v20 += 16;
      ++v18;
    }
    while ( v21 != v20 );
LABEL_28:
    if ( (unsigned int)v19 <= 0x10 || 3 * (int)v19 >= (unsigned int)(4 * v18) )
      goto LABEL_35;
    if ( v17 )
    {
      sub_186B220(v17);
      v22 = *(_DWORD *)(v3 + 104);
      *(_QWORD *)(v3 + 96) = 0;
      v22 >>= 1;
      v23 = v22;
      *(_DWORD *)(v3 + 104) = v22;
      v24 = sub_186B270(16LL * v22);
      if ( !v22 )
      {
LABEL_34:
        *(_QWORD *)(v3 + 96) = v24;
LABEL_35:
        *(_QWORD *)(v3 + 108) = 0;
        goto LABEL_36;
      }
    }
    else
    {
      v38 = (unsigned int)v19 >> 1;
      *(_QWORD *)(v3 + 96) = 0;
      v23 = v38;
      *(_DWORD *)(v3 + 104) = v38;
      v24 = sub_186B270(16LL * v38);
    }
    v25 = (_QWORD *)v24;
    do
    {
      *v25 = 0;
      v25 += 2;
      *((_DWORD *)v25 - 2) = -2;
    }
    while ( v25 != (_QWORD *)(v24 + 16 * v23) );
    goto LABEL_34;
  }
LABEL_36:
  if ( *(_DWORD *)(v3 + 132) || *(_DWORD *)(v3 + 136) )
  {
    v26 = *(char **)(v3 + 120);
    v27 = 0;
    v28 = *(unsigned int *)(v3 + 128);
    v29 = &v26[24 * v28];
    v30 = v26;
    if ( v26 == v29 )
      goto LABEL_54;
    do
    {
      while ( *((_DWORD *)v30 + 1) )
      {
        *((_DWORD *)v30 + 1) = 0;
        v30 += 24;
        if ( v29 == v30 )
          goto LABEL_43;
      }
      v30 += 24;
      ++v27;
    }
    while ( v29 != v30 );
LABEL_43:
    if ( (unsigned int)v28 <= 0x10 || 3 * (int)v28 >= (unsigned int)(4 * v27) )
      goto LABEL_54;
    if ( v26 )
    {
      sub_186B220(v26);
      v31 = *(_DWORD *)(v3 + 128);
      *(_QWORD *)(v3 + 120) = 0;
      v32 = v31 >> 1;
      *(_DWORD *)(v3 + 128) = v32;
      v33 = sub_186B270(24LL * v32);
      if ( !v32 )
      {
LABEL_53:
        *(_QWORD *)(v3 + 120) = v33;
LABEL_54:
        *(_QWORD *)(v3 + 132) = 0;
        return;
      }
      if ( v32 == 1 )
      {
        v35 = (_QWORD *)v33;
LABEL_52:
        *v35 = 0;
        goto LABEL_53;
      }
    }
    else
    {
      v37 = (unsigned int)v28 >> 1;
      *(_QWORD *)(v3 + 120) = 0;
      *(_DWORD *)(v3 + 128) = v37;
      v32 = v37;
      v33 = sub_186B270(24LL * v37);
    }
    v34 = (_QWORD *)v33;
    do
    {
      *v34 = 0;
      v34 += 6;
      *(v34 - 3) = 0;
    }
    while ( v34 != (_QWORD *)(v33 + 48LL * (v32 >> 1)) );
    if ( (v32 & 1) == 0 )
      goto LABEL_53;
    v35 = (_QWORD *)(v33 + 24LL * (v32 & 0x7FFFFFFE));
    goto LABEL_52;
  }
}

