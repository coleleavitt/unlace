__int64 __fastcall c_ekkrwco(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // eax
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // r11
  int v15; // r9d
  __int64 v16; // r9
  _DWORD *v17; // r10

  v6 = *(_DWORD *)(a1 + 240);
  if ( v6 > 0 )
  {
    v7 = 1;
    v8 = (unsigned int)(v6 - 1) + 2LL;
    do
    {
      v9 = *(_DWORD *)(a5 + 4 * v7);
      if ( v9 > 0 )
      {
        v10 = (_DWORD *)(a3 + 4LL * (*(_DWORD *)(a4 + 4 * v7) + v9 - 1));
        *(_DWORD *)(a5 + 4 * v7) = *v10;
        *v10 = -(int)v7;
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  if ( a6 <= 0 )
    return 0;
  v11 = 1;
  result = 0;
  v13 = 0;
  v14 = (unsigned int)(a6 - 1) + 2LL;
  do
  {
    v15 = *(_DWORD *)(a3 + 4 * v11);
    if ( v15 )
    {
      result = (unsigned int)(result + 1);
      if ( v15 < 0 )
      {
        v16 = -v15;
        v17 = (_DWORD *)(a5 + 4 * v16);
        *(_DWORD *)(a3 + 4 * v11) = *v17;
        *(_DWORD *)(a4 + 4 * v16) = v13 + 1;
        LODWORD(v16) = result - v13;
        v13 = result;
        *v17 = v16;
        v15 = *(_DWORD *)(a3 + 4 * v11);
      }
      *(_QWORD *)(a2 + 8LL * (int)result) = *(_QWORD *)(a2 + 8 * v11);
      *(_DWORD *)(a3 + 4LL * (int)result) = v15;
    }
    ++v11;
  }
  while ( v14 != v11 );
  return result;
}

