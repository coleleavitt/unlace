__int64 (__fastcall **__fastcall CoinPackedMatrix::timesMajor(
        CoinPackedMatrix *this,
        __int64 (__fastcall ***a2)(CoinShallowPackedVector *this),
        double *a3))(CoinShallowPackedVector *this)
{
  __int64 (__fastcall *v6)(CoinShallowPackedVector *); // rax
  int v7; // eax
  __int64 (__fastcall **result)(CoinShallowPackedVector *); // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 (__fastcall *v12)(CoinShallowPackedVector *); // rax
  double v13; // xmm1_8
  __int64 (__fastcall *v14)(CoinShallowPackedVector *); // rax
  __int64 (__fastcall **v15)(CoinShallowPackedVector *); // rax
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdx
  double v22; // xmm0_8

  memset(a3, 0, 8LL * *((int *)this + 17));
  v6 = **a2;
  if ( v6 == CoinShallowPackedVector::getNumElements )
    v7 = *((_DWORD *)a2 + 12);
  else
    v7 = v6((CoinShallowPackedVector *)a2);
  result = (__int64 (__fastcall **)(CoinShallowPackedVector *))(unsigned int)(v7 - 1);
  if ( (int)result >= 0 )
  {
    v9 = 8LL * (int)result;
    v10 = 4LL * (int)result;
    v11 = 8 * ((int)result - (unsigned __int64)(unsigned int)result) - 8;
    do
    {
      while ( 1 )
      {
        v12 = (*a2)[2];
        result = v12 == CoinShallowPackedVector::getElements
               ? a2[5]
               : (__int64 (__fastcall **)(CoinShallowPackedVector *))v12((CoinShallowPackedVector *)a2);
        v13 = *(double *)&result[(unsigned __int64)v9 / 8];
        if ( v13 != 0.0 )
        {
          v14 = (*a2)[1];
          v15 = v14 == CoinShallowPackedVector::getIndices
              ? a2[4]
              : (__int64 (__fastcall **)(CoinShallowPackedVector *))v14((CoinShallowPackedVector *)a2);
          v16 = *(int *)((char *)v15 + v10);
          result = (__int64 (__fastcall **)(CoinShallowPackedVector *))*(int *)(*((_QWORD *)this + 6) + 4 * v16);
          v17 = *(_DWORD *)(*((_QWORD *)this + 7) + 4 * v16);
          if ( (int)result < (int)result + v17 )
            break;
        }
        v9 -= 8;
        v10 -= 4;
        if ( v11 == v9 )
          return result;
      }
      v18 = (unsigned int)(v17 - 1) + 1LL;
      v19 = *((_QWORD *)this + 5) + 4LL * (_QWORD)result;
      v20 = *((_QWORD *)this + 4) + 8LL * (_QWORD)result;
      result = nullptr;
      do
      {
        v21 = *(int *)(v19 + 4LL * (_QWORD)result);
        v22 = *(double *)(v20 + 8LL * (_QWORD)result);
        result = (__int64 (__fastcall **)(CoinShallowPackedVector *))((char *)result + 1);
        a3[v21] = v22 * v13 + a3[v21];
      }
      while ( result != (__int64 (__fastcall **)(CoinShallowPackedVector *))v18 );
      v9 -= 8;
      v10 -= 4;
    }
    while ( v11 != v9 );
  }
  return result;
}

