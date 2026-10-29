__int64 __fastcall ClpPackedMatrix::clearCopies(ClpPackedMatrix *this)
{
  void *v2; // rbp
  ClpPackedMatrix2 *v3; // rdi
  void (__fastcall *v4)(ClpPackedMatrix2 *); // rax
  void *v5; // rbp
  ClpPackedMatrix3 *v6; // rdi
  void (__fastcall *v7)(ClpPackedMatrix3 *); // rax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned int v13; // ecx

  v2 = *((void **)this + 13);
  if ( v2 )
  {
    v3 = *((ClpPackedMatrix2 **)this + 13);
    v4 = *(void (__fastcall **)(ClpPackedMatrix2 *))(*(_QWORD *)v2 + 8LL);
    if ( v4 == ClpPackedMatrix2::~ClpPackedMatrix2 )
    {
      ClpPackedMatrix2::~ClpPackedMatrix2(v3);
      operator delete(v2);
    }
    else
    {
      v4(v3);
    }
  }
  v5 = *((void **)this + 14);
  if ( v5 )
  {
    v6 = *((ClpPackedMatrix3 **)this + 14);
    v7 = *(void (__fastcall **)(ClpPackedMatrix3 *))(*(_QWORD *)v5 + 8LL);
    if ( v7 == ClpPackedMatrix3::~ClpPackedMatrix3 )
    {
      ClpPackedMatrix3::~ClpPackedMatrix3(v6);
      operator delete(v5);
    }
    else
    {
      v7(v6);
    }
  }
  v8 = *((_DWORD *)this + 25);
  v9 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  v10 = v8;
  v11 = *(_QWORD *)(v9 + 48);
  result = v8 & 0xFFFFFFF1;
  v13 = v10 & 0xFFFFFFF3;
  *((_DWORD *)this + 25) = v13;
  if ( *(_DWORD *)(v9 + 72) < *(_DWORD *)(v11 + 4LL * *(int *)(v9 + 64)) )
    result = v13 | 2;
  *((_DWORD *)this + 25) = result;
  return result;
}

