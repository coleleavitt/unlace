__int64 __fastcall sub_B70220(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 24) )
    goto LABEL_17;
  v2 = *(char **)(a1 + 8);
  v3 = 0;
  v4 = *(unsigned int *)(a1 + 16);
  v5 = v2;
  v6 = &v2[16 * v4];
  if ( v2 != v6 )
  {
    do
    {
      while ( *((_QWORD *)v5 + 1) )
      {
        *((_QWORD *)v5 + 1) = 0;
        v5 += 16;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 16;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 > 0x10 && 3 * (int)v4 < (unsigned int)(4 * v3) )
    {
      if ( v2 )
      {
        sub_186B220(v2);
        v7 = *(_DWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v7 >>= 1;
        v8 = v7;
        *(_DWORD *)(a1 + 16) = v7;
        v9 = sub_186B270(16LL * v7);
        if ( !v7 )
        {
LABEL_15:
          *(_QWORD *)(a1 + 8) = v9;
          goto LABEL_16;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        v8 = (unsigned int)v4 >> 1;
        *(_DWORD *)(a1 + 16) = (unsigned int)v4 >> 1;
        v9 = sub_186B270(16 * v8);
      }
      v10 = 16 * v8;
      v11 = v9;
      v12 = v9 + v10;
      if ( (v10 & 0x10) == 0 || (v11 = v9 + 16, *(_QWORD *)(v9 + 8) = 0, v9 + 16 != v12) )
      {
        do
        {
          *(_QWORD *)(v11 + 8) = 0;
          v11 += 32;
          *(_QWORD *)(v11 - 8) = 0;
        }
        while ( v11 != v12 );
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  *(_QWORD *)(a1 + 20) = 0;
LABEL_17:
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v14 = *(_QWORD **)(a1 + 48);
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
          v17 = *(_QWORD *)(a1 + 40);
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
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
    v14 = *(_QWORD **)(a1 + 48);
    if ( v14 )
LABEL_27:
      *((_DWORD *)v14 - 1) = 0;
  }
  return result;
}

