__int64 __fastcall ClpPlusMinusOneMatrix::unpack(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        int a4)
{
  __int64 v5; // r15
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r12
  int v9; // esi
  __int64 v10; // r12
  int v11; // esi

  v5 = 4LL * a4;
  result = *((_QWORD *)this + 13);
  v7 = *(_DWORD *)(result + v5);
  v8 = 4LL * v7;
  if ( v7 < *(_DWORD *)(*((_QWORD *)this + 14) + v5) )
  {
    do
    {
      ++v7;
      v9 = *(_DWORD *)(*((_QWORD *)this + 15) + v8);
      v8 += 4;
      CoinIndexedVector::add(a3, v9, 1.0);
    }
    while ( *(_DWORD *)(*((_QWORD *)this + 14) + v5) > v7 );
    result = *((_QWORD *)this + 13);
  }
  v10 = 4LL * v7;
  if ( *(_DWORD *)(result + v5 + 4) > v7 )
  {
    do
    {
      ++v7;
      v11 = *(_DWORD *)(*((_QWORD *)this + 15) + v10);
      v10 += 4;
      CoinIndexedVector::add(a3, v11, -1.0);
      result = *((_QWORD *)this + 13);
    }
    while ( *(_DWORD *)(result + v5 + 4) > v7 );
  }
  return result;
}

