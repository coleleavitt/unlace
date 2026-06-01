__int64 __fastcall c_ekkshff(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r11
  int v10; // r8d
  int v11; // edx
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // rax
  int v15; // edx

  v5 = *(_DWORD *)(a1 + 240);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v5 <= 0 )
  {
    v12 = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 312) = v5;
    *(_DWORD *)(a1 + 308) = v5 - v12 + 2;
  }
  else
  {
    v7 = (unsigned int)(v5 - 1);
    v8 = 1;
    v9 = v7 + 2;
    do
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(a3 + 8 * v8 + 4);
        v11 = -v10;
        *(_DWORD *)(a3 + 8 * v8 + 4) = -v10;
        if ( v10 >= 0 || v5 < v11 )
          break;
        *(_DWORD *)(v6 + 4LL * v11) = v8;
        *(_DWORD *)(a2 + 8 * v8 + 4) = -*(_DWORD *)(a2 + 8 * v8 + 4);
        if ( ++v8 == v9 )
          goto LABEL_6;
      }
      *(_DWORD *)(a2 + 8 * v8 + 4) = -*(_DWORD *)(a2 + 8 * v8 + 4);
      ++v8;
    }
    while ( v9 != v8 );
LABEL_6:
    v12 = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 312) = v5;
    v13 = 0;
    *(_DWORD *)(a1 + 308) = v5 - v12 + 2;
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)(a2 + v14 + 12);
      if ( v15 > 0 && v5 >= v15 )
      {
        *(_DWORD *)(a3 + v14 + 8) = v15;
        ++v13;
      }
      v14 += 8;
    }
    while ( 8 * v7 + 8 != v14 );
    if ( v5 - v13 > 0 )
      abort();
  }
  if ( v12 || a4 + *(_DWORD *)(a1 + 288) + 9 >= *(_DWORD *)(a1 + 260) - *(_DWORD *)(a1 + 284) || v5 <= 199 )
    *(_DWORD *)(a1 + 340) = 0;
  c_ekkshfv(a1, a3, a2);
  return 0;
}

