__int64 __fastcall ClpNetworkMatrix::unpack(
        ClpNetworkMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        int a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v7; // esi
  int v8; // ebx

  v4 = 2 * a4;
  result = *((_QWORD *)this + 13);
  v7 = *(_DWORD *)(result + 4 * v4);
  v8 = *(_DWORD *)(result + 4 * v4 + 4);
  if ( v7 >= 0 )
    result = CoinIndexedVector::add(a3, v7, -1.0);
  if ( v8 >= 0 )
    return CoinIndexedVector::add(a3, v8, 1.0);
  return result;
}

