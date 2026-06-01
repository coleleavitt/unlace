__int64 __fastcall sub_7014C0(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  char *v4; // rdx
  unsigned int v5; // esi
  char *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  void *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi

  sub_700C00(a1 + 24);
  sub_1816990(a1 + 440);
  sub_1142D80(a1 + 40, a1 + 440);
  if ( !*(_DWORD *)(a1 + 468) && !*(_DWORD *)(a1 + 472) )
    goto LABEL_15;
  v2 = *(char **)(a1 + 456);
  v3 = 0;
  v4 = &v2[8 * *(unsigned int *)(a1 + 464)];
  v5 = *(_DWORD *)(a1 + 464);
  v6 = *(char **)(a1 + 456);
  if ( v2 != v4 )
  {
    do
    {
      while ( *(_QWORD *)v6 )
      {
        *(_QWORD *)v6 = 0;
        v6 += 8;
        if ( v4 == v6 )
          goto LABEL_8;
      }
      v6 += 8;
      ++v3;
    }
    while ( v4 != v6 );
LABEL_8:
    if ( v5 > 0x10 && 3 * v5 < 4 * v3 )
    {
      if ( v2 )
      {
        sub_186B220(v2);
        v7 = *(_DWORD *)(a1 + 464);
        *(_QWORD *)(a1 + 456) = 0;
        v7 >>= 1;
        *(_DWORD *)(a1 + 464) = v7;
        v8 = v7;
        v9 = (void *)sub_186B270(8LL * v7);
        if ( !v7 )
        {
LABEL_13:
          *(_QWORD *)(a1 + 456) = v9;
          goto LABEL_14;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 456) = 0;
        *(_DWORD *)(a1 + 464) = v5 >> 1;
        v8 = v5 >> 1;
        v9 = (void *)sub_186B270(8 * v8);
      }
      v9 = memset(v9, 0, 8 * v8);
      goto LABEL_13;
    }
  }
LABEL_14:
  *(_QWORD *)(a1 + 468) = 0;
LABEL_15:
  v10 = *(_QWORD **)(a1 + 488);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(_QWORD *)(a1 + 480);
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_22;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_22:
    v10 = *(_QWORD **)(a1 + 488);
    if ( v10 )
LABEL_23:
      *((_DWORD *)v10 - 1) = 0;
  }
  result = sub_14E9CE0(a1 + 496);
  v16 = *(_QWORD **)(a1 + 640);
  if ( v16 )
  {
    result = *((unsigned int *)v16 - 1);
    v17 = &v16[result];
    if ( v16 >= v17 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 632);
          v14 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_31;
      }
      result = sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_31:
    v16 = *(_QWORD **)(a1 + 640);
    if ( v16 )
LABEL_32:
      *((_DWORD *)v16 - 1) = 0;
  }
  return result;
}

