void __fastcall ClpPackedMatrix::specialRowCopy(ClpPackedMatrix *this, ClpSimplex *a2, const ClpMatrixBase *a3)
{
  void *v5; // rbp
  ClpPackedMatrix2 *v6; // rdi
  void (__fastcall *v7)(ClpPackedMatrix2 *); // rax
  __int64 (__fastcall *v8)(ClpPackedMatrix *); // rax
  const CoinPackedMatrix *v9; // r12
  ClpPackedMatrix2 *v10; // rbp
  bool v11; // zf

  v5 = *((void **)this + 13);
  if ( v5 )
  {
    v6 = *((ClpPackedMatrix2 **)this + 13);
    v7 = *(void (__fastcall **)(ClpPackedMatrix2 *))(*(_QWORD *)v5 + 8LL);
    if ( v7 == ClpPackedMatrix2::~ClpPackedMatrix2 )
    {
      ClpPackedMatrix2::~ClpPackedMatrix2(v6);
      operator delete(v5);
    }
    else
    {
      v7(v6);
    }
  }
  v8 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))a3;
  if ( v8 == ClpPackedMatrix::getPackedMatrix )
    v9 = *((const CoinPackedMatrix **)a3 + 11);
  else
    v9 = (const CoinPackedMatrix *)v8(a3);
  v10 = (ClpPackedMatrix2 *)operator new(0x38u);
  ClpPackedMatrix2::ClpPackedMatrix2(v10, a2, v9);
  v11 = *((_QWORD *)v10 + 4) == 0;
  *((_QWORD *)this + 13) = v10;
  if ( v11 )
  {
    ClpPackedMatrix2::~ClpPackedMatrix2(v10);
    *((_QWORD *)this + 13) = 0;
    *((_DWORD *)this + 25) &= ~4u;
  }
  else
  {
    *((_DWORD *)this + 25) |= 4u;
  }
}

