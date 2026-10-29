__int64 __fastcall ClpSimplex::unpack(ClpSimplex *this, CoinIndexedVector *a2, signed int a3)
{
  int v4; // eax

  CoinIndexedVector::clear(a2);
  v4 = *((_DWORD *)this + 27);
  if ( v4 <= a3 && v4 + *((_DWORD *)this + 26) > a3 )
    return CoinIndexedVector::insert(a2, a3 - v4, -1.0);
  else
    return (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *, _QWORD))(**((_QWORD **)this + 24)
                                                                                        + 208LL))(
             *((_QWORD *)this + 24),
             this,
             a2,
             (unsigned int)a3);
}

