__int64 __fastcall sub_898A20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // r11
  _DWORD *v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned int i; // r8d
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned int *v14; // r10
  unsigned int v15; // edi
  unsigned int *v16; // rcx
  unsigned int v17; // edx

  LODWORD(v1) = -1;
  v2 = *(_QWORD *)(a1 + 1576);
  v3 = *(_DWORD *)(v2 - 4);
  if ( v3 == 1 )
    return (unsigned int)v1;
  v4 = *(_QWORD *)(a1 + 1584);
  v1 = *(unsigned int *)(v2 + 4);
  v5 = (_DWORD *)(v4 + 4 * v1);
  if ( v3 == 2 )
  {
    *v5 = 0;
    --*(_DWORD *)(v2 - 4);
    return (unsigned int)v1;
  }
  v7 = *(unsigned int *)(v2 + 4LL * (unsigned int)(v3 - 1));
  *(_DWORD *)(v2 + 4) = v7;
  *(_DWORD *)(v4 + 4 * v7) = 1;
  *v5 = 0;
  v8 = *(unsigned int *)(v2 + 4);
  v9 = *(_DWORD *)(v2 - 4) - 1;
  *(_DWORD *)(v2 - 4) = v9;
  if ( v9 <= 2 )
  {
    v16 = (unsigned int *)(v2 + 4);
    i = 1;
LABEL_13:
    *v16 = v8;
    *(_DWORD *)(v4 + 4 * v8) = i;
  }
  else
  {
    v10 = 2;
    for ( i = 1; ; i = v17 )
    {
      v17 = v10 + 1;
      v14 = (unsigned int *)(v2 + 4LL * v10);
      v15 = *v14;
      v13 = *v14;
      if ( v9 <= (int)(v10 + 1) || (v12 = *(_DWORD *)(v2 + 4LL * v17), v12 >= v15) )
      {
        v17 = v10;
        v16 = (unsigned int *)(v2 + 4LL * i);
        if ( (unsigned int)v13 >= (unsigned int)v8 )
          goto LABEL_13;
      }
      else
      {
        v13 = v12;
        v14 = (unsigned int *)(v2 + 4LL * v17);
        v15 = *v14;
        v16 = (unsigned int *)(v2 + 4LL * i);
        if ( v12 >= (unsigned int)v8 )
          goto LABEL_13;
      }
      *v16 = v15;
      v10 = 2 * v17;
      *(_DWORD *)(v4 + 4 * v13) = i;
      if ( v9 <= (int)(2 * v17) )
        break;
    }
    *v14 = v8;
    *(_DWORD *)(v4 + 4 * v8) = v17;
  }
  return (unsigned int)v1;
}

