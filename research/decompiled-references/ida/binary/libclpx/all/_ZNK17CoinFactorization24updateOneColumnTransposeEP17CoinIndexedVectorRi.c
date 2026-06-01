__int64 __fastcall CoinFactorization::updateOneColumnTranspose(CoinFactorization *this, CoinIndexedVector *a2, int *a3)
{
  __int64 v5; // r12
  __int64 v6; // r15
  int *v7; // rbx
  int v8; // eax
  int v9; // edx
  int *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax

  v5 = *((_QWORD *)this + 69);
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(int **)a2;
  if ( *((int *)this + 140) <= -2 )
    v5 = 0;
  if ( !*((_BYTE *)this + 784) )
    CoinFactorization::updateColumnTransposePFI(this, a2);
  v8 = *((_DWORD *)a2 + 4);
  v9 = *((_DWORD *)this + 9);
  if ( v8 > 0 )
  {
    v10 = v7;
    v11 = (__int64)&v7[v8 - 1 + 1];
    do
    {
      v12 = *v10;
      if ( v9 > (int)v12 )
        v9 = *v10;
      ++v10;
      *(double *)(v6 + 8 * v12) = *(double *)(v6 + 8 * v12) * *(double *)(v5 + 8 * v12);
    }
    while ( (int *)v11 != v10 );
  }
  CoinFactorization::updateColumnTransposeU(this, a2, v9);
  *a3 = *((_DWORD *)a2 + 4);
  CoinFactorization::updateColumnTransposeR(this, a2);
  return CoinFactorization::updateColumnTransposeL(this, a2);
}

