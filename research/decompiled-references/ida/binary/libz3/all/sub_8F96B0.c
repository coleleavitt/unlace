void __fastcall sub_8F96B0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // eax
  char *v6; // rdi
  int v7; // ecx
  char *v8; // rdx
  unsigned int v9; // esi
  char *v10; // rax
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rax
  char *v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // r12
  void *v18; // rcx
  unsigned int v19; // ebp
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rdx
  char *v23; // rdi
  int v24; // ecx
  char *v25; // rdx
  unsigned int v26; // esi
  char *v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // r13
  void *v30; // rcx
  char *v31; // rdi
  int v32; // ecx
  __int64 v33; // rsi
  char *v34; // rax
  char *v35; // rdx
  unsigned int v36; // r12d
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rdx
  unsigned int v40; // esi
  unsigned int v41; // esi
  unsigned int v42; // esi
  unsigned int v43; // esi

  v3 = *(_DWORD *)(a1 + 9464);
  if ( v3 < a2 )
    return;
  v4 = *(_DWORD *)(a1 + 9468);
  if ( v3 != v4 )
  {
    sub_8F73F0(a1, v3 - v4);
    if ( !*(_DWORD *)(a1 + 9068) && !*(_DWORD *)(a1 + 9072) )
    {
LABEL_44:
      if ( !*(_DWORD *)(a1 + 9044) && !*(_DWORD *)(a1 + 9048) )
        goto LABEL_3;
      v31 = *(char **)(a1 + 9032);
      v32 = 0;
      v33 = *(unsigned int *)(a1 + 9040);
      v34 = v31;
      v35 = &v31[16 * v33];
      if ( v31 == v35 )
        goto LABEL_57;
      do
      {
        while ( *(_QWORD *)v34 )
        {
          *(_QWORD *)v34 = 0;
          v34 += 16;
          if ( v35 == v34 )
            goto LABEL_50;
        }
        v34 += 16;
        ++v32;
      }
      while ( v35 != v34 );
LABEL_50:
      if ( (unsigned int)v33 <= 0x10 || 3 * (int)v33 >= (unsigned int)(4 * v32) )
      {
LABEL_57:
        *(_QWORD *)(a1 + 9044) = 0;
        goto LABEL_3;
      }
      if ( v31 )
      {
        sub_186B220(v31);
        v36 = *(_DWORD *)(a1 + 9040);
        *(_QWORD *)(a1 + 9032) = 0;
        v36 >>= 1;
        v37 = v36;
        *(_DWORD *)(a1 + 9040) = v36;
        v38 = sub_186B270(16LL * v36);
        if ( !v36 )
        {
LABEL_56:
          *(_QWORD *)(a1 + 9032) = v38;
          goto LABEL_57;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 9032) = 0;
        v41 = (unsigned int)v33 >> 1;
        v37 = v41;
        *(_DWORD *)(a1 + 9040) = v41;
        v38 = sub_186B270(16LL * v41);
      }
      v39 = (_QWORD *)v38;
      do
      {
        *v39 = 0;
        v39 += 2;
        *((_DWORD *)v39 - 2) = 0;
      }
      while ( v39 != (_QWORD *)(v38 + 16 * v37) );
      goto LABEL_56;
    }
    v23 = *(char **)(a1 + 9056);
    v24 = 0;
    v25 = &v23[8 * *(unsigned int *)(a1 + 9064)];
    v26 = *(_DWORD *)(a1 + 9064);
    v27 = *(char **)(a1 + 9056);
    if ( v23 == v25 )
      goto LABEL_43;
    do
    {
      while ( *(_QWORD *)v27 )
      {
        *(_QWORD *)v27 = 0;
        v27 += 8;
        if ( v25 == v27 )
          goto LABEL_37;
      }
      v27 += 8;
      ++v24;
    }
    while ( v25 != v27 );
LABEL_37:
    if ( v26 <= 0x10 || 3 * v26 >= 4 * v24 )
    {
LABEL_43:
      *(_QWORD *)(a1 + 9068) = 0;
      goto LABEL_44;
    }
    if ( v23 )
    {
      sub_186B220(v23);
      v28 = *(_DWORD *)(a1 + 9064);
      *(_QWORD *)(a1 + 9056) = 0;
      v28 >>= 1;
      *(_DWORD *)(a1 + 9064) = v28;
      v29 = v28;
      v30 = (void *)sub_186B270(8LL * v28);
      if ( !v28 )
      {
LABEL_42:
        *(_QWORD *)(a1 + 9056) = v30;
        goto LABEL_43;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9056) = 0;
      v40 = v26 >> 1;
      v29 = v40;
      *(_DWORD *)(a1 + 9064) = v40;
      v30 = (void *)sub_186B270(8LL * v40);
    }
    v30 = memset(v30, 0, 8 * v29);
    goto LABEL_42;
  }
LABEL_3:
  sub_8F73F0(a1, a2);
  if ( *(_DWORD *)(a1 + 9068) || *(_DWORD *)(a1 + 9072) )
  {
    v6 = *(char **)(a1 + 9056);
    v7 = 0;
    v8 = &v6[8 * *(unsigned int *)(a1 + 9064)];
    v9 = *(_DWORD *)(a1 + 9064);
    v10 = v6;
    if ( v6 == v8 )
      goto LABEL_6;
    do
    {
      while ( *(_QWORD *)v10 )
      {
        *(_QWORD *)v10 = 0;
        v10 += 8;
        if ( v8 == v10 )
          goto LABEL_15;
      }
      v10 += 8;
      ++v7;
    }
    while ( v8 != v10 );
LABEL_15:
    if ( v9 <= 0x10 || 3 * v9 >= 4 * v7 )
      goto LABEL_6;
    if ( v6 )
    {
      sub_186B220(v6);
      v16 = *(_DWORD *)(a1 + 9064);
      *(_QWORD *)(a1 + 9056) = 0;
      v16 >>= 1;
      *(_DWORD *)(a1 + 9064) = v16;
      v17 = v16;
      v18 = (void *)sub_186B270(8LL * v16);
      if ( !v16 )
      {
LABEL_20:
        *(_QWORD *)(a1 + 9056) = v18;
LABEL_6:
        *(_QWORD *)(a1 + 9068) = 0;
        goto LABEL_7;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9056) = 0;
      v42 = v9 >> 1;
      v17 = v42;
      *(_DWORD *)(a1 + 9064) = v42;
      v18 = (void *)sub_186B270(8LL * v42);
    }
    v18 = memset(v18, 0, 8 * v17);
    goto LABEL_20;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 9044) || *(_DWORD *)(a1 + 9048) )
  {
    v11 = *(char **)(a1 + 9032);
    v12 = 0;
    v13 = *(unsigned int *)(a1 + 9040);
    v14 = v11;
    v15 = &v11[16 * v13];
    if ( v11 == v15 )
      goto LABEL_10;
    do
    {
      while ( *(_QWORD *)v14 )
      {
        *(_QWORD *)v14 = 0;
        v14 += 16;
        if ( v15 == v14 )
          goto LABEL_24;
      }
      v14 += 16;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_24:
    if ( (unsigned int)v13 <= 0x10 || 3 * (int)v13 >= (unsigned int)(4 * v12) )
      goto LABEL_10;
    if ( v11 )
    {
      sub_186B220(v11);
      v19 = *(_DWORD *)(a1 + 9040);
      *(_QWORD *)(a1 + 9032) = 0;
      v19 >>= 1;
      v20 = v19;
      *(_DWORD *)(a1 + 9040) = v19;
      v21 = sub_186B270(16LL * v19);
      if ( !v19 )
      {
LABEL_30:
        *(_QWORD *)(a1 + 9032) = v21;
LABEL_10:
        *(_QWORD *)(a1 + 9044) = 0;
        return;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 9032) = 0;
      v43 = (unsigned int)v13 >> 1;
      v20 = v43;
      *(_DWORD *)(a1 + 9040) = v43;
      v21 = sub_186B270(16LL * v43);
    }
    v22 = (_QWORD *)v21;
    do
    {
      *v22 = 0;
      v22 += 2;
      *((_DWORD *)v22 - 2) = 0;
    }
    while ( v22 != (_QWORD *)(v21 + 16 * v20) );
    goto LABEL_30;
  }
}

