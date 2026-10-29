__int64 __fastcall CoinFactorization::separateLinks(CoinFactorization *this, int a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r11
  int *v6; // r13
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rbp
  int v12; // r12d
  __int64 v13; // rax
  int *v14; // rsi
  int v15; // r14d

  v3 = *((_QWORD *)this + 38);
  result = *((_QWORD *)this + 35);
  v5 = *((_QWORD *)this + 41);
  if ( *((int *)this + 78) <= -2 )
    v3 = 0;
  if ( *((int *)this + 72) <= -2 )
    result = 0;
  if ( *((int *)this + 84) <= -2 )
    v5 = 0;
  v6 = (int *)(result + 4LL * a2);
  v7 = *v6;
  if ( *v6 < 0 )
  {
    LODWORD(v10) = -1;
    goto LABEL_26;
  }
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -2 - a2;
  do
  {
    while ( 1 )
    {
      v13 = 4LL * v7;
      v14 = (int *)(v3 + v13);
      result = v5 + v13;
      v15 = *v14;
      if ( *((_DWORD *)this + 8) <= v7 )
      {
        *v14 = -1;
        if ( (int)v10 < 0 )
        {
          v8 = v7;
          *(_DWORD *)result = v12;
          v10 = v7;
        }
        else
        {
          *(_DWORD *)result = v8;
          *(_DWORD *)(v3 + 4 * v8) = v7;
          v8 = v7;
        }
        goto LABEL_11;
      }
      if ( (int)v11 >= 0 )
        break;
      v9 = v7;
      *(_DWORD *)result = v12;
      v11 = v7;
LABEL_11:
      v7 = v15;
      if ( v15 < 0 )
        goto LABEL_15;
    }
    *(_DWORD *)result = v9;
    *(_DWORD *)(v3 + 4 * v9) = v7;
    v9 = v7;
    v7 = v15;
  }
  while ( v15 >= 0 );
LABEL_15:
  if ( (int)v11 >= 0 && a3 )
  {
    result = (int)v9;
    *v6 = v11;
    *(_DWORD *)(v3 + 4LL * (int)v9) = v10;
    if ( (int)v10 >= 0 )
      *(_DWORD *)(v5 + 4 * v10) = v9;
    return result;
  }
  if ( (int)v11 < 0 )
  {
LABEL_26:
    *v6 = v10;
    return result;
  }
  if ( (int)v10 >= 0 )
  {
    *v6 = v10;
    *(_DWORD *)(v3 + 4LL * (int)v8) = v11;
    *(_DWORD *)(v5 + 4 * v11) = v8;
    return (int)v8;
  }
  return result;
}

