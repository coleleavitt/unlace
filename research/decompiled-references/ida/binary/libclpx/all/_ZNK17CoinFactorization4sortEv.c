__int64 __fastcall CoinFactorization::sort(CoinFactorization *this)
{
  __int64 result; // rax
  int v2; // r13d
  int *v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx

  result = *((unsigned int *)this + 8);
  if ( (int)result > 0 )
  {
    v2 = 0;
    v3 = nullptr;
    do
    {
      v6 = *((_QWORD *)this + 75);
      v7 = 0;
      if ( *((int *)this + 152) <= -2 )
        v6 = 0;
      if ( *((int *)this + 164) > -2 )
        v7 = *((_QWORD *)this + 81);
      v8 = *(int *)((char *)v3 + v7);
      v9 = v6 + 8 * v8;
      v10 = *((_QWORD *)this + 78);
      if ( *((int *)this + 158) <= -2 )
        v10 = 0;
      if ( *((int *)this + 60) >= -1 )
        v5 = *(int *)((char *)v3 + *((_QWORD *)this + 29));
      else
        v5 = *v3;
      ++v2;
      ++v3;
      CoinSort_2<int,double>(v10 + 4 * v8, v10 + 4 * (v8 + v5), v9);
      result = *((unsigned int *)this + 8);
    }
    while ( (int)result > v2 );
    if ( (int)result > 0 )
    {
      v11 = 4;
      v12 = 0;
      do
      {
        v15 = *((_QWORD *)this + 89);
        v16 = *((_QWORD *)this + 95);
        v17 = *((_QWORD *)this + 92);
        if ( *((int *)this + 180) <= -2 )
          v15 = 0;
        if ( *((int *)this + 192) <= -2 )
          v16 = 0;
        v18 = *(int *)(v16 + v11 - 4);
        v19 = v15 + 8 * v18;
        if ( *((int *)this + 186) >= -1 )
        {
          v13 = v17 + 4 * v18;
          v14 = v17 + 4LL * *(int *)(v16 + v11);
        }
        else
        {
          v13 = 4 * v18;
          v14 = 4LL * *(int *)(v16 + v11);
        }
        result = CoinSort_2<int,double>(v13, v14, v19);
        ++v12;
        v11 += 4;
      }
      while ( *((_DWORD *)this + 8) > v12 );
    }
  }
  return result;
}

