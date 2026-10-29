__int64 __fastcall CoinSimpFactorization::factor(CoinSimpFactorization *this)
{
  int v2; // esi
  int *v3; // rcx
  int v4; // edx
  int *v5; // r8
  unsigned int v6; // r12d
  int v7; // edx
  __int64 v8; // rcx
  int *v9; // rsi
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int i; // eax
  _DWORD *v15; // rsi
  int v16; // eax
  _DWORD *v17; // rcx
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = *((int **)this + 34);
  v4 = *((_DWORD *)this + 10);
  v5 = *((int **)this + 42);
  *(_QWORD *)((char *)this + 52) = 0;
  FactorPointers::FactorPointers((FactorPointers *)savedregs, v2, v4, v3, v5);
  if ( (unsigned int)CoinSimpFactorization::mainLoopFactor(this, (FactorPointers *)savedregs) )
    *((_DWORD *)this + 14) = -1;
  CoinSimpFactorization::copyUbyColumns(this);
  CoinSimpFactorization::copyRowPermutations(this);
  v6 = *((_DWORD *)this + 14);
  v7 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 142) = *((_DWORD *)this + 141);
  if ( v6 != -1 && *((_DWORD *)this + 10) >= v7 )
  {
    if ( v7 <= 0 )
      goto LABEL_12;
    v15 = *((_DWORD **)this + 9);
    v16 = 0;
    v17 = v15;
    do
    {
      *v17++ = v16;
      v15[v16 + *((_DWORD *)this + 9)] = v16;
      ++v16;
    }
    while ( *((_DWORD *)this + 9) > v16 );
    goto LABEL_11;
  }
  if ( v7 > 0 )
  {
    v8 = *((_QWORD *)this + 9);
    v9 = *((int **)this + 53);
    v10 = 0;
    do
    {
      v11 = *v9;
      v12 = v10 + v7;
      ++v10;
      ++v9;
      *(_DWORD *)(v8 + 4LL * v12) = v11;
      v7 = *((_DWORD *)this + 9);
    }
    while ( v7 > v10 );
    if ( v7 > 0 )
    {
      for ( i = 0; i < v7; ++i )
      {
        *(_DWORD *)(v8 + 4LL * *(int *)(v8 + 4LL * (i + v7))) = i;
        v7 = *((_DWORD *)this + 9);
      }
    }
LABEL_11:
    v6 = *((_DWORD *)this + 14);
  }
LABEL_12:
  FactorPointers::~FactorPointers((FactorPointers *)savedregs);
  return v6;
}

