// Alternative name is '_ZN15ClpPackedMatrixD1Ev'
void __fastcall ClpPackedMatrix::~ClpPackedMatrix(ClpPackedMatrix *this)
{
  __int64 v2; // rdi
  void *v3; // rbp
  ClpPackedMatrix2 *v4; // rdi
  void (__fastcall *v5)(ClpPackedMatrix2 *); // rax
  void *v6; // rbp
  ClpPackedMatrix3 *v7; // rdi
  void (__fastcall *v8)(ClpPackedMatrix3 *); // rax

  *(_QWORD *)this = off_4D0C20;
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((void **)this + 13);
  if ( v3 )
  {
    v4 = *((ClpPackedMatrix2 **)this + 13);
    v5 = *(void (__fastcall **)(ClpPackedMatrix2 *))(*(_QWORD *)v3 + 8LL);
    if ( v5 == ClpPackedMatrix2::~ClpPackedMatrix2 )
    {
      ClpPackedMatrix2::~ClpPackedMatrix2(v4);
      operator delete(v3);
    }
    else
    {
      v5(v4);
    }
  }
  v6 = *((void **)this + 14);
  if ( !v6 )
    goto LABEL_9;
  v7 = *((ClpPackedMatrix3 **)this + 14);
  v8 = *(void (__fastcall **)(ClpPackedMatrix3 *))(*(_QWORD *)v6 + 8LL);
  if ( v8 == ClpPackedMatrix3::~ClpPackedMatrix3 )
  {
    ClpPackedMatrix3::~ClpPackedMatrix3(v7);
    operator delete(v6);
LABEL_9:
    ClpMatrixBase::~ClpMatrixBase(this);
    return;
  }
  v8(v7);
  ClpMatrixBase::~ClpMatrixBase(this);
}

