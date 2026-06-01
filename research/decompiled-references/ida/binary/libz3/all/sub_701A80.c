__int64 __fastcall sub_701A80(__int64 a1)
{
  __int64 (*v2)(void); // rax
  char *v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int v6; // esi
  char *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // r12
  void *v20; // rcx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v2 != (char *)sub_7014C0 )
    return v2();
  sub_700C00(a1 + 24);
  sub_1816990(a1 + 440);
  sub_1142D80(a1 + 40, a1 + 440);
  if ( *(_DWORD *)(a1 + 468) || *(_DWORD *)(a1 + 472) )
  {
    v3 = *(char **)(a1 + 456);
    v4 = 0;
    v5 = &v3[8 * *(unsigned int *)(a1 + 464)];
    v6 = *(_DWORD *)(a1 + 464);
    v7 = *(char **)(a1 + 456);
    if ( v3 == v5 )
      goto LABEL_9;
    do
    {
      while ( *(_QWORD *)v7 )
      {
        *(_QWORD *)v7 = 0;
        v7 += 8;
        if ( v5 == v7 )
          goto LABEL_8;
      }
      v7 += 8;
      ++v4;
    }
    while ( v5 != v7 );
LABEL_8:
    if ( v6 <= 0x10 || 3 * v6 >= 4 * v4 )
      goto LABEL_9;
    if ( v3 )
    {
      sub_186B220(v3);
      v18 = *(_DWORD *)(a1 + 464);
      *(_QWORD *)(a1 + 456) = 0;
      v18 >>= 1;
      *(_DWORD *)(a1 + 464) = v18;
      v19 = v18;
      v20 = (void *)sub_186B270(8LL * v18);
      if ( !v18 )
      {
LABEL_35:
        *(_QWORD *)(a1 + 456) = v20;
LABEL_9:
        *(_QWORD *)(a1 + 468) = 0;
        goto LABEL_10;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 456) = 0;
      *(_DWORD *)(a1 + 464) = v6 >> 1;
      v19 = v6 >> 1;
      v20 = (void *)sub_186B270(8 * v19);
    }
    v20 = memset(v20, 0, 8 * v19);
    goto LABEL_35;
  }
LABEL_10:
  v8 = *(_QWORD **)(a1 + 488);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *(_QWORD *)(a1 + 480);
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_17;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_17:
    v8 = *(_QWORD **)(a1 + 488);
    if ( v8 )
LABEL_18:
      *((_DWORD *)v8 - 1) = 0;
  }
  result = sub_14E9CE0(a1 + 496);
  v14 = *(_QWORD **)(a1 + 640);
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 632);
          v12 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_26:
    v14 = *(_QWORD **)(a1 + 640);
    if ( v14 )
LABEL_27:
      *((_DWORD *)v14 - 1) = 0;
  }
  return result;
}

