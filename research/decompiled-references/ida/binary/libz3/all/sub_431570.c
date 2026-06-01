void __fastcall sub_431570(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rdx
  unsigned int v7; // r13d
  unsigned int v8; // edx
  unsigned __int64 v9; // r12
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax

  if ( !a2 )
    return;
  v4 = *(_QWORD *)(a1 + 216);
  v5 = *(_DWORD *)(a1 + 224);
  if ( !v4 )
  {
    v19 = v5 - a2;
    if ( a2 >= v5 )
      v19 = 0;
    *(_DWORD *)(a1 + 224) = v19;
    return;
  }
  v6 = *(unsigned int *)(v4 - 4);
  if ( v5 < (unsigned int)v6 )
  {
    v14 = v4 + 8 * v6;
    v15 = (__int64 *)(v4 + 8LL * v5);
    if ( (unsigned __int64)v15 < v14 )
    {
      do
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 )
          {
            v17 = *(_QWORD *)(a1 + 208);
            v13 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v15 >= v14 )
            goto LABEL_22;
        }
        sub_15D7BC0(v17, v16);
        ++v15;
      }
      while ( (unsigned __int64)v15 < v14 );
LABEL_22:
      v4 = *(_QWORD *)(a1 + 216);
      if ( !v4 )
      {
        v18 = *(_DWORD *)(a1 + 224) - a2;
        if ( a2 >= *(_DWORD *)(a1 + 224) )
          v18 = 0;
        *(_DWORD *)(a1 + 224) = v18;
        return;
      }
    }
    *(_DWORD *)(v4 - 4) = v5;
    v5 = *(_DWORD *)(a1 + 224);
    if ( a2 < v5 )
      goto LABEL_5;
LABEL_24:
    v8 = 0;
    v7 = 0;
    goto LABEL_6;
  }
  if ( a2 >= v5 )
    goto LABEL_24;
LABEL_5:
  v7 = v5 - a2;
  v8 = v7;
LABEL_6:
  *(_DWORD *)(a1 + 224) = v8;
  v9 = v4 + 8LL * *(unsigned int *)(v4 - 4);
  v10 = (__int64 *)(v4 + 8LL * v7);
  if ( (unsigned __int64)v10 >= v9 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v12 = *(_QWORD *)(a1 + 208);
        v13 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v13 )
          break;
      }
      if ( (unsigned __int64)++v10 >= v9 )
        goto LABEL_12;
    }
    sub_15D7BC0(v12, v11);
    ++v10;
  }
  while ( (unsigned __int64)v10 < v9 );
LABEL_12:
  v4 = *(_QWORD *)(a1 + 216);
  if ( v4 )
LABEL_13:
    *(_DWORD *)(v4 - 4) = v7;
}

