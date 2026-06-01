void __fastcall sub_5E0CF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r12
  unsigned int v11; // edx
  int v12; // edi
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _QWORD *i; // rax
  _DWORD *v17; // rdx
  __int64 v18; // r15
  unsigned int v19; // ebp
  char *v20; // rdi
  __int64 v21; // rsi
  char *v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  unsigned int v33; // esi
  unsigned int v34; // esi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a3);
  v5 = sub_62B230(*(_QWORD *)(a1 + 40), v4);
  v6 = *(_QWORD *)(v4 + 40);
  v7 = *(_QWORD **)(a2 + 152);
  v8 = (__int64 *)v5;
  v9 = *(unsigned int *)(a2 + 160);
  v10 = *(_DWORD **)(v6 + 16);
  v11 = v9 - 1;
  v9 *= 8;
  v12 = v10[3];
  v13 = (_QWORD *)((char *)v7 + v9);
  v14 = 8LL * (v12 & v11);
  v15 = &v7[(unsigned __int64)v14 / 8];
  if ( v14 != v9 )
  {
    for ( i = &v7[(unsigned __int64)v14 / 8]; v13 != i; ++i )
    {
      v17 = (_DWORD *)*i;
      if ( *i > 1u )
      {
        if ( v17[3] == v12 && v10 == v17 )
          return;
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v15 != v7; ++v7 )
  {
    v32 = (_DWORD *)*v7;
    if ( *v7 > 1u )
    {
      if ( v32[3] == v12 && v10 == v32 )
        return;
    }
    else if ( !v32 )
    {
      break;
    }
  }
LABEL_8:
  v18 = *(_QWORD *)(a1 + 40);
  v19 = v10[8];
  if ( *(_DWORD *)(v18 + 28) || (v25 = *(_QWORD *)(a1 + 40), *(_DWORD *)(v18 + 32)) )
  {
    v20 = *(char **)(v18 + 16);
    v21 = *(unsigned int *)(v18 + 24);
    v22 = &v20[16 * v21];
    if ( v20 == v22 )
      goto LABEL_15;
    v23 = *(_QWORD *)(v18 + 16);
    v24 = 0;
    do
    {
      while ( *(_DWORD *)(v23 + 4) )
      {
        *(_DWORD *)(v23 + 4) = 0;
        v23 += 16;
        if ( v22 == (char *)v23 )
          goto LABEL_14;
      }
      v23 += 16;
      ++v24;
    }
    while ( v22 != (char *)v23 );
LABEL_14:
    if ( (unsigned int)v21 <= 0x10 || 3 * (int)v21 >= (unsigned int)(4 * v24) )
    {
LABEL_15:
      v25 = v18;
LABEL_16:
      *(_QWORD *)(v18 + 28) = 0;
      goto LABEL_17;
    }
    if ( v20 )
    {
      sub_186B220(v20);
      v33 = *(_DWORD *)(v18 + 24);
      *(_QWORD *)(v18 + 16) = 0;
      v34 = v33 >> 1;
      *(_DWORD *)(v18 + 24) = v34;
      v35 = (_QWORD *)sub_186B270(16LL * v34);
      v36 = (__int64)v35;
      if ( !v34 )
      {
LABEL_46:
        *(_QWORD *)(v18 + 16) = v36;
        v25 = *(_QWORD *)(a1 + 40);
        goto LABEL_16;
      }
      if ( v34 == 1 )
      {
LABEL_45:
        *v35 = 0;
        goto LABEL_46;
      }
    }
    else
    {
      v34 = (unsigned int)v21 >> 1;
      *(_QWORD *)(v18 + 16) = 0;
      *(_DWORD *)(v18 + 24) = v34;
      v36 = sub_186B270(16LL * v34);
    }
    v37 = (_QWORD *)v36;
    do
    {
      *v37 = 0;
      v37 += 4;
      *(v37 - 2) = 0;
    }
    while ( (_QWORD *)(v36 + 32LL * (v34 >> 1)) != v37 );
    if ( (v34 & 1) == 0 )
      goto LABEL_46;
    v35 = (_QWORD *)(v36 + 16LL * (v34 & 0x7FFFFFFE));
    goto LABEL_45;
  }
LABEL_17:
  sub_148BC40(v25 + 16, v6, 1);
  if ( v19 )
  {
    v26 = v19;
    v27 = 0;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v6 + 8 * v27 + 32);
      if ( *(_WORD *)(v28 + 4) == 1 )
      {
        v29 = *(unsigned int *)(v28 + 16);
        v30 = *v8;
        v31 = (unsigned int)v29 >> 5;
        if ( (!*v8 || v31 >= *(_DWORD *)(v30 - 4) || (*(_DWORD *)(v30 + 4LL * v31) & (1 << v29)) == 0)
          && *(_DWORD *)sub_148B390(*(_QWORD *)(a1 + 40) + 16LL, v29) == 1 )
        {
          break;
        }
      }
      if ( ++v27 == v26 )
        return;
    }
    sub_5DFE70(a1, v10, v27);
  }
}

