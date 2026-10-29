__int64 __fastcall ClpSimplex::unpackPacked(ClpSimplex *this, CoinIndexedVector *a2)
{
  int v2; // ecx
  int v3; // eax
  __int64 result; // rax
  _DWORD *v5; // rdx

  CoinIndexedVector::clear(a2);
  v2 = *((_DWORD *)this + 288);
  v3 = *((_DWORD *)this + 27);
  if ( v2 < v3 || v2 >= *((_DWORD *)this + 26) + v3 )
    return (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *))(**((_QWORD **)this + 24) + 216LL))(
             *((_QWORD *)this + 24),
             this,
             a2);
  v5 = *(_DWORD **)a2;
  **((_QWORD **)a2 + 1) = 0xBFF0000000000000LL;
  result = (unsigned int)(*((_DWORD *)this + 288) - *((_DWORD *)this + 27));
  *v5 = result;
  *((_DWORD *)a2 + 4) = 1;
  *((_BYTE *)a2 + 28) = 1;
  return result;
}

