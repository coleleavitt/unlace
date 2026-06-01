__int64 __fastcall CoinSimpFactorization::makeNonSingular(CoinSimpFactorization *this, int *a2, int a3)
{
  __int64 result; // rax
  _DWORD *v4; // r9
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // r8
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r10
  int *v13; // rbx
  int v14; // r11d
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  _DWORD *v19; // r8

  result = *((unsigned int *)this + 9);
  v4 = *((_DWORD **)this + 11);
  if ( (int)result <= 0 )
  {
    v7 = *((int *)this + 11);
    v10 = -1;
    if ( (int)v7 <= 0 )
      goto LABEL_13;
    goto LABEL_5;
  }
  v5 = 1;
  do
  {
    v4[v5 - 1] = -1;
    result = *((unsigned int *)this + 9);
    v6 = v5++;
  }
  while ( (int)result > v6 );
  v7 = *((int *)this + 11);
  if ( (int)v7 > 0 )
  {
LABEL_5:
    v8 = *((_QWORD *)this + 9);
    v9 = 0;
    do
    {
      v4[*(int *)(v8 + 4LL * (v9 + (int)result))] = v9;
      v7 = *((int *)this + 11);
      ++v9;
      result = *((unsigned int *)this + 9);
    }
    while ( (int)v7 > v9 );
  }
  v10 = -1;
  if ( (int)result > 0 )
  {
    if ( *v4 == -1 )
    {
      v10 = 0;
    }
    else
    {
      v11 = 1;
      while ( 1 )
      {
        v10 = v11;
        if ( (unsigned int)(result - 1) + 1LL == v11 )
          break;
        if ( v4[v11++] == -1 )
          goto LABEL_13;
      }
      v10 = -1;
    }
  }
LABEL_13:
  if ( (int)result > (int)v7 )
  {
    v12 = (int)v7 + 1;
    v13 = &a2[v7 - v12];
    do
    {
      while ( 1 )
      {
        v13[v12] = a3 + v10;
        v14 = *((_DWORD *)this + 9);
        v15 = v10 + 1;
        if ( v10 + 1 < v14 )
        {
          v16 = v15;
          if ( v4[v15] != -1 )
            break;
        }
        ++v10;
        result = (unsigned int)v12++;
        if ( (int)result >= v14 )
          return result;
      }
      v17 = v10 + 2;
      v18 = v17 + (unsigned int)(v14 - 2 - v10);
      v19 = &v4[v16 - v17];
      do
      {
        v10 = v17;
        if ( v18 == v17 )
          break;
        ++v17;
      }
      while ( v19[v17] != -1 );
      result = (unsigned int)v12++;
    }
    while ( (int)result < v14 );
  }
  return result;
}

