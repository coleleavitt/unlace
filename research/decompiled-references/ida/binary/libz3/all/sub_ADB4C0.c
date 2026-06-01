__int64 __fastcall sub_ADB4C0(_QWORD *a1, int a2)
{
  __int64 v3; // rdi
  int v4; // ebp
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // rcx
  _DWORD *v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int64 v16; // r14
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 result; // rax

  v3 = a1[134];
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = a1[133];
  v7 = a1[130];
  v8 = (_DWORD *)(v3 + 12LL * v5);
  if ( v6 )
  {
    v9 = v8[2];
    v10 = *(_DWORD *)(v6 - 4);
    if ( v9 < v10 )
    {
      v11 = (unsigned int *)(v6 + 4LL * v9);
      v12 = v6 + 4 * (v9 + (unsigned __int64)(v10 - 1 - v9)) + 4;
      do
      {
        v13 = *v11++;
        *(_BYTE *)(v7 + 16 * v13 + 15) &= ~0x80u;
      }
      while ( v11 != (unsigned int *)v12 );
    }
    *(_DWORD *)(v6 - 4) = v9;
  }
  if ( v7 )
    *(_DWORD *)(v7 - 4) = *v8;
  v14 = a1[132];
  if ( v14 )
  {
    v15 = v8[1];
    v16 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    v17 = (__int64 *)(v14 + 8LL * v15);
    if ( (unsigned __int64)v17 >= v16 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( *v17 )
        {
          v19 = a1[131];
          if ( (*(_DWORD *)(v18 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v16 )
          goto LABEL_17;
      }
      sub_15D7BC0(v19, v18);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v16 );
LABEL_17:
    v14 = a1[132];
    v3 = a1[134];
    if ( v14 )
LABEL_18:
      *(_DWORD *)(v14 - 4) = v15;
  }
  result = a1[129];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( v3 )
    *(_DWORD *)(v3 - 4) = v5;
  return result;
}

