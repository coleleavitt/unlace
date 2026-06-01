void __fastcall ClpPackedMatrix::releaseSpecialColumnCopy(ClpPackedMatrix *this)
{
  ClpPackedMatrix3 *v1; // rbp
  void (__fastcall *v2)(ClpPackedMatrix3 *); // rax

  v1 = *((ClpPackedMatrix3 **)this + 14);
  *((_DWORD *)this + 25) &= 0xFFFFFFE7;
  if ( !v1 )
    goto LABEL_4;
  v2 = *(void (__fastcall **)(ClpPackedMatrix3 *))(*(_QWORD *)v1 + 8LL);
  if ( v2 == ClpPackedMatrix3::~ClpPackedMatrix3 )
  {
    ClpPackedMatrix3::~ClpPackedMatrix3(v1);
    operator delete(v1);
LABEL_4:
    *((_QWORD *)this + 14) = 0;
    return;
  }
  v2(v1);
  *((_QWORD *)this + 14) = 0;
}

