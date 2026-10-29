bool __fastcall CoinWarmStartBasis::fixFullBasis(CoinWarmStartBasis *this)
{
  int v1; // r9d
  int v2; // edx
  int i; // esi
  bool v4; // al
  int v5; // r8d
  int j; // esi
  bool v7; // al
  bool result; // al
  int k; // r10d
  _BYTE *v10; // rsi
  char v11; // cl
  int v12; // ebx
  int v13; // r10d
  _BYTE *v14; // rsi
  char v15; // cl
  int v16; // ebp

  v1 = *((_DWORD *)this + 2);
  if ( v1 <= 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 0;
    for ( i = 0; i != v1; ++i )
    {
      v4 = ((*(char *)(*((_QWORD *)this + 3) + (i >> 2)) >> ((2 * i) & 6)) & 3) == 1;
      v2 += v4;
    }
  }
  v5 = *((_DWORD *)this + 3);
  if ( v5 > 0 )
  {
    for ( j = 0; j != v5; ++j )
    {
      v7 = ((*(char *)(*((_QWORD *)this + 4) + (j >> 2)) >> ((2 * j) & 6)) & 3) == 1;
      v2 += v7;
    }
  }
  result = v5 == v2;
  if ( v5 >= v2 )
  {
    if ( v5 > v2 )
    {
      v13 = 0;
      do
      {
        v14 = (_BYTE *)(*((_QWORD *)this + 4) + (v13 >> 2));
        v15 = (2 * v13) & 6;
        v16 = (char)*v14;
        if ( ((v16 >> v15) & 3) != 1 )
        {
          ++v2;
          *v14 = (1 << v15) | v16 & ~(unsigned __int8)(3 << v15);
          v5 = *((_DWORD *)this + 3);
          if ( v5 == v2 )
            break;
        }
        ++v13;
      }
      while ( v13 < v5 );
    }
  }
  else if ( v1 > 0 )
  {
    for ( k = 0; k < v1; ++k )
    {
      while ( 1 )
      {
        v10 = (_BYTE *)(*((_QWORD *)this + 3) + (k >> 2));
        v11 = (2 * k) & 6;
        v12 = (char)*v10;
        if ( ((v12 >> v11) & 3) == 1 )
          break;
        if ( ++k >= v1 )
          return result;
      }
      --v2;
      *v10 = (3 << v11) | v12;
      if ( *((_DWORD *)this + 3) == v2 )
        break;
      v1 = *((_DWORD *)this + 2);
    }
  }
  return result;
}

