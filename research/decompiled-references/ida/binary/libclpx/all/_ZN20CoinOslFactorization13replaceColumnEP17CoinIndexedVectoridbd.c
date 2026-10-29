__int64 __fastcall CoinOslFactorization::replaceColumn(
        CoinOslFactorization *this,
        CoinIndexedVector *a2,
        int a3,
        double a4,
        double a5)
{
  int v5; // r8d
  __int64 result; // rax
  int v8; // eax
  double *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  double v12; // xmm2_8

  v5 = *((_DWORD *)this + 13);
  result = 3;
  if ( v5 + 1 != *((_DWORD *)this + 12) )
  {
    v8 = a3 + 1;
    v9 = (double *)((char *)this + 104);
    v10 = *(_QWORD *)a2;
    v11 = *((_QWORD *)a2 + 1);
    v12 = *v9;
    *v9 = a5;
    result = c_ekketsj((int)v9, (int)v11 - 8, v10, 0, v5, (int)this + 456, v8, *((_QWORD *)this + 39));
    *((double *)this + 13) = v12;
    if ( (_DWORD)result != 2 )
      ++*((_DWORD *)this + 13);
  }
  return result;
}

