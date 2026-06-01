bool __fastcall CoinWarmStartBasis::fullBasis(CoinWarmStartBasis *this)
{
  int v1; // r8d
  int v2; // esi
  int i; // edx
  bool v4; // al
  int v5; // r8d
  __int64 v6; // rdi
  int j; // edx
  bool v8; // al

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
    v6 = *((_QWORD *)this + 4);
    for ( j = 0; j != v5; ++j )
    {
      v8 = ((*(char *)(v6 + (j >> 2)) >> ((2 * j) & 6)) & 3) == 1;
      v2 += v8;
    }
  }
  return v5 == v2;
}

