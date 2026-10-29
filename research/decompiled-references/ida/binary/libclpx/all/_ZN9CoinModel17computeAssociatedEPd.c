__int64 __fastcall CoinModel::computeAssociated(CoinModel *this, double *a2)
{
  double DoubleFromString; // xmm0_8
  int v3; // edx
  CoinModelHash *v4; // r13
  int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rax
  void **i; // rbx
  void **v10; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]

  DoubleFromString = 0.0;
  v3 = *((_DWORD *)this + 66);
  v13 = 0;
  v14 = 0;
  *(_OWORD *)ptr = 0;
  if ( v3 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = (CoinModel *)((char *)this + 248);
    v6 = 0;
    v7 = 0;
    do
    {
      if ( CoinModelHash::name(v4, v6) && *a2 == -1.23456787654321e-97 )
      {
        v8 = CoinModelHash::name(v4, v6);
        DoubleFromString = CoinModel::getDoubleFromString(this, ptr, v8, DoubleFromString, -1.23456787654321e-97);
        *a2 = DoubleFromString;
        v7 += DoubleFromString == -1.23456787654321e-97;
      }
      ++v6;
      ++a2;
    }
    while ( v6 < *((_DWORD *)this + 66) );
    if ( v13 )
    {
      free(ptr[1]);
      ptr[1] = nullptr;
    }
    for ( i = (void **)ptr[0]; i; i = v10 )
    {
      free(*i);
      v10 = (void **)i[3];
      ptr[0] = i;
      free(i);
    }
  }
  return v7;
}

