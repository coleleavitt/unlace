__int64 __fastcall CoinSimpFactorization::mainLoopFactor(CoinSimpFactorization *this, FactorPointers *a2)
{
  int v2; // eax
  __int64 v5; // rbp
  int i; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // edi
  int *v11; // rsi
  int *v12; // r9
  int v13; // r10d
  int v14; // r8d
  __int64 v15; // rcx
  int *v16; // rax
  int *v17; // rcx
  char v19; // [rsp+17h] [rbp-41h] BYREF
  int v20; // [rsp+18h] [rbp-40h] BYREF
  int v21[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v2 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 141) = 0;
  v19 = 1;
  if ( v2 <= 0 )
    return 0;
  v5 = 0;
  for ( i = CoinSimpFactorization::findPivot(this, a2, &v20, v21, (bool *)&v19);
        !i;
        i = CoinSimpFactorization::findPivot(this, a2, &v20, v21, (bool *)&v19) )
  {
    if ( v19 )
      ++*((_DWORD *)this + 141);
    v7 = *((_QWORD *)this + 54);
    v8 = *((_QWORD *)this + 52);
    v9 = *((_QWORD *)this + 51);
    v10 = *(_DWORD *)(v7 + 4LL * v20);
    v11 = (int *)(v9 + 4 * v5);
    v12 = (int *)(v9 + 4LL * *(int *)(v8 + 4LL * v21[0]));
    v13 = *v11;
    v14 = *(_DWORD *)(v8 + 4LL * v21[0]);
    *v11 = *v12;
    *v12 = v13;
    *(_DWORD *)(v8 + 4LL * *v11) = v5;
    *(_DWORD *)(v8 + 4LL * *v12) = v14;
    v15 = *((_QWORD *)this + 53);
    v16 = (int *)(v15 + 4 * v5);
    v17 = (int *)(v15 + 4LL * v10);
    LODWORD(v11) = *v16;
    *v16 = *v17;
    *v17 = (int)v11;
    *(_DWORD *)(v7 + 4LL * *v16) = v5;
    *(_DWORD *)(v7 + 4LL * *v17) = v10;
    CoinSimpFactorization::GaussEliminate(this, a2, &v20, v21);
    ++*((_DWORD *)this + 11);
    if ( *((_DWORD *)this + 10) <= (int)++v5 )
      return 0;
  }
  return 0xFFFFFFFFLL;
}

