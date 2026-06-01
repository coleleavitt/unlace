__int64 __fastcall CoinOslFactorization::preProcess(CoinOslFactorization *this)
{
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // rbx
  __int64 v4; // rax
  int *v5; // r8
  int v6; // r9d
  __int64 v7; // rdx
  bool v8; // cc
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // esi

  v1 = *((_QWORD *)this + 33);
  v2 = *((_QWORD *)this + 34);
  v3 = *((_QWORD *)this + 19) + 4LL;
  v4 = *((int *)this + 9);
  *((_QWORD *)this + 15) = *((_QWORD *)this + 1);
  if ( (int)v4 > 0 )
  {
    v5 = (int *)v3;
    v6 = 0;
    do
    {
      v7 = *v5;
      ++v6;
      v8 = (int)v7 < v5[1];
      LODWORD(v9) = v7 + 1;
      *v5 = v7 + 1;
      if ( v8 )
      {
        v9 = (int)v9;
        v10 = 4 * (v7 - (int)v9);
        v11 = v2 + v10;
        v12 = v1 + v10;
        do
        {
          ++*(_DWORD *)(v11 + 4 * v9 + 4);
          v13 = v9;
          *(_DWORD *)(v12 + 4 * v9++ + 4) = v6;
        }
        while ( v5[1] > v13 );
      }
      v4 = *((int *)this + 9);
      ++v5;
    }
    while ( (int)v4 > v6 );
  }
  ++*(_DWORD *)(v3 + 4 * v4);
  return c_ekkslcf((char *)this + 104);
}

