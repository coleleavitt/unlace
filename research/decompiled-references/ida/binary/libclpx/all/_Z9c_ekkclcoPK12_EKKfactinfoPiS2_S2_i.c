__int64 __fastcall c_ekkclco(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  int v7; // eax
  _DWORD *v8; // rax
  int *v9; // rdi
  int v10; // ebp
  __int64 v11; // r11
  __int64 result; // rax
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // r8
  int *v16; // rbx
  unsigned int v17; // r8d

  v5 = *(int *)(a1 + 240);
  if ( (int)v5 > 0 )
  {
    v6 = 1;
    do
    {
      v7 = *(_DWORD *)(a4 + 4 * v6);
      if ( v7 > 0 )
      {
        v8 = (_DWORD *)(a2 + 4LL * (*(_DWORD *)(a3 + 4 * v6) + v7 - 1));
        *(_DWORD *)(a4 + 4 * v6) = *v8;
        *v8 = -(int)v6;
      }
      ++v6;
    }
    while ( (unsigned int)(v5 - 1) + 2LL != v6 );
  }
  if ( a5 <= 0 )
  {
    *(_DWORD *)(a3 + 4 * v5 + 4) = 1;
    return 0;
  }
  else
  {
    v9 = (int *)(a2 + 4);
    v10 = 0;
    v11 = a2 + 4LL * (unsigned int)(a5 - 1) + 8;
    result = 0;
    do
    {
      v13 = *v9;
      v14 = result + 1;
      if ( *v9 )
      {
        if ( v13 < 0 )
        {
          v15 = -v13;
          v16 = (int *)(a4 + 4 * v15);
          *v9 = *v16;
          *(_DWORD *)(a3 + 4 * v15) = v10 + 1;
          LODWORD(v15) = v14 - v10;
          v10 = result + 1;
          *v16 = v15;
          v13 = *v9;
        }
        *(_DWORD *)(a2 + 4LL * (int)v14) = v13;
        v17 = result + 2;
        result = v14;
        v14 = v17;
      }
      ++v9;
    }
    while ( (int *)v11 != v9 );
    *(_DWORD *)(a3 + 4 * v5 + 4) = v14;
  }
  return result;
}

