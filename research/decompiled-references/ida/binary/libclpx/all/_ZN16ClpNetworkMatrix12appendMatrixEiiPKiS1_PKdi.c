__int64 __fastcall ClpNetworkMatrix::appendMatrix(
        ClpNetworkMatrix *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  const int *v11; // rbx
  int v12; // r13d
  CoinPackedVector *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // [rsp+0h] [rbp-58h]
  _QWORD *v18; // [rsp+8h] [rbp-50h]

  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v9 = operator new[](8LL * a2);
  v18 = (_QWORD *)v9;
  if ( a2 > 0 )
  {
    v10 = (_QWORD *)v9;
    v11 = a4 + 1;
    v17 = v9 + 8LL * (unsigned int)(a2 - 1) + 8;
    do
    {
      v12 = *(v11 - 1);
      v13 = (CoinPackedVector *)operator new(0x48u);
      CoinPackedVector::CoinPackedVector(v13, *v11 - v12, &a5[v12], &a6[v12], 0);
      *v10 = v13;
      ++v11;
      ++v10;
    }
    while ( v10 != (_QWORD *)v17 );
  }
  v14 = *(_QWORD *)this;
  if ( a3 )
    (*(void (__fastcall **)(ClpNetworkMatrix *, _QWORD, _QWORD *))(v14 + 96))(this, (unsigned int)a2, v18);
  else
    (*(void (__fastcall **)(ClpNetworkMatrix *, _QWORD, _QWORD *))(v14 + 104))(this, (unsigned int)a2, v18);
  if ( a2 > 0 )
  {
    v15 = v18;
    do
    {
      if ( *v15 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 32LL))(*v15);
      ++v15;
    }
    while ( &v18[(unsigned int)(a2 - 1) + 1] != v15 );
  }
  operator delete[](v18);
  return 0;
}

