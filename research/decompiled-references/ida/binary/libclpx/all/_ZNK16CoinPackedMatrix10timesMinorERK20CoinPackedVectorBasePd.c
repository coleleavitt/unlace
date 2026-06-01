unsigned __int64 __fastcall CoinPackedMatrix::timesMinor(
        CoinPackedMatrix *this,
        const CoinPackedVectorBase *a2,
        double *a3,
        double a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r12
  int v7; // esi
  int v8; // eax
  double v9; // xmm1_8
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  int v13; // esi
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  memset(a3, 0, 8LL * *((int *)this + 16));
  result = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (result & 0x80000000) == 0LL )
  {
    v6 = 4LL * (int)result;
    v15 = 4 * ((int)result - (unsigned __int64)(unsigned int)result) - 4;
    do
    {
      v7 = *(_DWORD *)(*((_QWORD *)this + 7) + v6);
      v8 = *(_DWORD *)(*((_QWORD *)this + 6) + v6);
      if ( v8 >= v8 + v7 )
      {
        v9 = 0.0;
      }
      else
      {
        v9 = 0.0;
        v10 = 4LL * v8;
        v11 = 8LL * v8;
        v12 = 4 * (v8 + (unsigned __int64)(unsigned int)(v7 - 1) + 1);
        do
        {
          v13 = *(_DWORD *)(*((_QWORD *)this + 5) + v10);
          v10 += 4;
          CoinPackedVectorBase::operator[](a2, v13);
          a4 = a4 * *(double *)(*((_QWORD *)this + 4) + v11);
          v11 += 8;
          v9 = v9 + a4;
        }
        while ( v12 != v10 );
      }
      result = (unsigned __int64)a3;
      a3[v6 / 4] = v9;
      v6 -= 4LL;
    }
    while ( v15 != v6 );
  }
  return result;
}

