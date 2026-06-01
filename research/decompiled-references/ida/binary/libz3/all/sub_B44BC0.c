__int64 __fastcall sub_B44BC0(__int64 a1)
{
  unsigned int *v2; // rax
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int i; // ebx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdi
  _QWORD **v16; // rbx
  _QWORD **v17; // r13
  _QWORD *v18; // rbp
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 304);
  if ( !v2 )
    goto LABEL_12;
  v3 = *(v2 - 1);
  if ( !v3 )
    goto LABEL_12;
  v4 = *(_QWORD *)(a1 + 296);
  v5 = *v2;
  v6 = 8 * v5;
  v7 = v4 + 8 * v5;
  if ( v4 )
  {
    v8 = 8LL * *(unsigned int *)(v4 - 4);
    v9 = v4 + v8;
    if ( v8 != v6 )
      goto LABEL_5;
    *(_DWORD *)(v4 - 4) = v5;
  }
  else
  {
    v9 = 0;
    if ( v6 )
    {
      do
      {
LABEL_5:
        v10 = *(_QWORD *)(v9 - 8);
        v9 -= 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      while ( v7 != v9 );
      v11 = *(_QWORD *)(a1 + 296);
      v2 = *(unsigned int **)(a1 + 304);
      if ( v11 )
        *(_DWORD *)(v11 - 4) = v5;
      if ( !v2 )
        goto LABEL_10;
    }
  }
  *(v2 - 1) = 0;
LABEL_10:
  for ( i = 0; i != v3; ++i )
    sub_180C2E0(a1 + 312);
LABEL_12:
  v13 = *(_QWORD *)(a1 + 296);
  if ( v13 )
  {
    v14 = v13 + 8LL * *(unsigned int *)(v13 - 4);
    if ( v13 == v14 )
      goto LABEL_16;
    do
    {
      v15 = *(_QWORD *)(v14 - 8);
      v14 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    while ( v13 != v14 );
    v14 = *(_QWORD *)(a1 + 296);
    if ( v14 )
LABEL_16:
      *(_DWORD *)(v14 - 4) = 0;
  }
  v16 = *(_QWORD ***)(a1 + 232);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 == v17 )
      goto LABEL_25;
    do
    {
      v18 = *v16;
      if ( *v16 )
      {
        if ( *v18 )
          sub_186B220((void *)(*v18 - 8LL));
        sub_186B220(v18);
      }
      ++v16;
    }
    while ( v16 != v17 );
    v17 = *(_QWORD ***)(a1 + 232);
    if ( v17 )
LABEL_25:
      *((_DWORD *)v17 - 1) = 0;
  }
  sub_965AC0(a1);
  result = sub_15F86B0(a1 + 56);
  *(_DWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  return result;
}

