_DWORD *__fastcall ClpSimplex::unpackPacked(ClpSimplex *this, CoinIndexedVector *a2, signed int a3)
{
  int v4; // eax
  _DWORD *result; // rax

  CoinIndexedVector::clear(a2);
  v4 = *((_DWORD *)this + 27);
  if ( v4 > a3 || *((_DWORD *)this + 26) + v4 <= a3 )
    return (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *, _QWORD))(**((_QWORD **)this + 24)
                                                                                                  + 216LL))(
                       *((_QWORD *)this + 24),
                       this,
                       a2,
                       (unsigned int)a3);
  result = *(_DWORD **)a2;
  **((_QWORD **)a2 + 1) = 0xBFF0000000000000LL;
  *result = a3 - *((_DWORD *)this + 27);
  *((_DWORD *)a2 + 4) = 1;
  *((_BYTE *)a2 + 28) = 1;
  return result;
}

