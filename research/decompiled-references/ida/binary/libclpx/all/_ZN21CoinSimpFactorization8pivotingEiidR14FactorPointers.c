__int64 __fastcall CoinSimpFactorization::pivoting(
        CoinSimpFactorization *this,
        int a2,
        int a3,
        double a4,
        FactorPointers *a5)
{
  __int64 v7; // rbp
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rdx
  _DWORD *v12; // rax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _DWORD *v17; // rdx
  double *v18; // rsi
  double v19; // xmm1_8
  __int64 v20; // r8
  int v21; // eax
  _DWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  int *v25; // rcx
  int *v26; // rax
  __int64 v27; // rdx
  __int64 result; // rax
  int v29; // edx
  unsigned __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  int v33[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v7 = 4LL * a2;
  *(_DWORD *)(*((_QWORD *)this + 28) + v7) = *((_DWORD *)this + 64);
  v32 = 4LL * a3;
  v9 = *(_DWORD *)(*((_QWORD *)this + 41) + v32);
  if ( v9 >= v9 + *(_DWORD *)(*((_QWORD *)this + 42) + v32) )
  {
    v22 = (_DWORD *)(*((_QWORD *)this + 42) + v32);
  }
  else
  {
    v10 = 4LL * v9;
    v31 = 4 * (v9 + (unsigned __int64)(unsigned int)(*(_DWORD *)(*((_QWORD *)this + 42) + 4LL * a3) - 1) + 1);
    do
    {
      v13 = *(_DWORD *)(*((_QWORD *)this + 44) + v10);
      CoinSimpFactorization::removeRowFromActSet(this, v13, a5);
      v14 = CoinSimpFactorization::findInRow(this, v13, a3);
      v15 = *((_QWORD *)this + 34);
      v16 = *((_QWORD *)this + 35);
      v17 = (_DWORD *)(v15 + 4LL * v13);
      v18 = (double *)(v16 + 8LL * v14);
      v19 = a4 * *v18;
      v20 = *v17 + *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * v13);
      *v18 = *(double *)(v16 + 8 * v20 - 8);
      *(_DWORD *)(*((_QWORD *)this + 36) + 4LL * v14) = *(_DWORD *)(*((_QWORD *)this + 36) + 4 * v20 - 4);
      --*v17;
      v33[0] = *(_DWORD *)(v15 + v7);
      CoinSimpFactorization::updateCurrentRow(this, a2, v13, v19, a5, v33);
      v21 = *((_DWORD *)this + 64);
      if ( v21 == *((_DWORD *)this + 65) )
      {
        CoinSimpFactorization::increaseLsize(this);
        v21 = *((_DWORD *)this + 64);
      }
      v11 = v21;
      v10 += 4;
      *(double *)(*((_QWORD *)this + 30) + 8LL * v21) = v19;
      *((_DWORD *)this + 64) = v21 + 1;
      v12 = (_DWORD *)(v7 + *((_QWORD *)this + 29));
      *(_DWORD *)(*((_QWORD *)this + 31) + 4 * v11) = v13;
      ++*v12;
    }
    while ( v31 != v10 );
    v22 = (_DWORD *)(*((_QWORD *)this + 42) + v32);
  }
  v23 = *((_QWORD *)this + 45);
  *v22 = 0;
  v24 = *((_QWORD *)this + 46);
  v25 = (int *)(v23 + v32);
  v26 = (int *)(v24 + v32);
  v27 = *(int *)(v23 + v32);
  if ( (_DWORD)v27 == -1 )
  {
    *((_DWORD *)this + 94) = *v26;
    result = *v26;
    v29 = *v25;
    if ( (_DWORD)result != -1 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)(v24 + 4 * v27) = *v26;
    result = *v26;
    v29 = *v25;
    if ( (_DWORD)result != -1 )
    {
LABEL_9:
      *(_DWORD *)(v23 + 4 * result) = v29;
      return result;
    }
  }
  *((_DWORD *)this + 95) = v29;
  return result;
}

