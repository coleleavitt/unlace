__int64 __fastcall ClpFactorization::replaceColumn(
        ClpNetworkBasis **this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        unsigned int a5,
        double a6,
        bool a7,
        double a8)
{
  CoinIndexedVector *v9; // r12
  ClpNetworkBasis *v11; // rdi
  __int64 (__fastcall ***v13)(_QWORD); // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  CoinFactorization *v23; // rdi
  char v24; // al
  __int64 *v25; // rdi
  __int64 v26; // rcx
  char v27; // [rsp+8h] [rbp-60h]
  _DWORD v28[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v9 = a3;
  v11 = *this;
  if ( v11 )
  {
    ++*((_DWORD *)*(this + 1) + 17);
    return ClpNetworkBasis::replaceColumn(v11, a3, a5);
  }
  else
  {
    v13 = *((__int64 (__fastcall ****)(_QWORD))a2 + 24);
    if ( !v13 )
      BUG();
    v17 = *(_QWORD *)((**v13)(v13) + 56);
    v18 = *((int *)a2 + 288);
    v19 = 0;
    if ( (int)v18 >= 0 )
    {
      v20 = *((_DWORD *)a2 + 27);
      if ( v20 + *((_DWORD *)a2 + 26) > (int)v18 )
      {
        v19 = 1;
        if ( v20 > (int)v18 )
          v19 = *(_DWORD *)(v17 + 4 * v18);
      }
    }
    v21 = *((int *)a2 + 290);
    if ( (int)v21 >= 0 )
    {
      v22 = *((_DWORD *)a2 + 27);
      if ( v22 + *((_DWORD *)a2 + 26) > (int)v21 )
      {
        if ( v22 > (int)v21 )
          v19 -= *(_DWORD *)(v17 + 4 * v21);
        else
          --v19;
      }
    }
    v23 = *(this + 1);
    *((_DWORD *)this + 18) += v19;
    if ( v23 )
    {
      if ( *((_BYTE *)v23 + 784) )
        return CoinFactorization::replaceColumn(v23, v9, a5, a6, a7, a8);
      else
        return CoinFactorization::replaceColumnPFI(v23, a4, a5, a6);
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*(this + 2) + 96LL))(*(this + 2), v17);
      v25 = (__int64 *)*(this + 2);
      v27 = v24;
      v26 = *v25;
      v28[0] = *((_DWORD *)a2 + 77);
      (*(void (__fastcall **)(__int64 *, _DWORD *, __int64))(v26 + 104))(v25, v28, 1);
      if ( v27 )
        v9 = a4;
      return (*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, _QWORD, bool, double, double))(*(_QWORD *)*(this + 2)
                                                                                                  + 184LL))(
               *(this + 2),
               v9,
               a5,
               a7,
               a6,
               a8);
    }
  }
}

