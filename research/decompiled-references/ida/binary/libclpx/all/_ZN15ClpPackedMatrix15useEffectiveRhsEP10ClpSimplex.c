__int64 __fastcall ClpPackedMatrix::useEffectiveRhs(ClpPackedMatrix *this, ClpSimplex *a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // rdi

  v3 = *((void **)this + 1);
  if ( v3 )
    operator delete[](v3);
  v4 = *((int *)a2 + 26);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 1) = operator new[](8 * v4);
  return (*(__int64 (__fastcall **)(ClpPackedMatrix *, ClpSimplex *, __int64, _QWORD))(*(_QWORD *)this + 464LL))(
           this,
           a2,
           1,
           0);
}

