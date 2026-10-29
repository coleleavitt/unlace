__int64 __fastcall ClpSimplex::unpack(ClpSimplex *this, CoinIndexedVector *a2)
{
  int v2; // ecx
  int v3; // eax

  CoinIndexedVector::clear(a2);
  v2 = *((_DWORD *)this + 288);
  v3 = *((_DWORD *)this + 27);
  if ( v2 >= v3 && v2 < v3 + *((_DWORD *)this + 26) )
    return CoinIndexedVector::insert(a2, v2 - v3, -1.0);
  else
    return (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *))(**((_QWORD **)this + 24) + 208LL))(
             *((_QWORD *)this + 24),
             this,
             a2);
}

