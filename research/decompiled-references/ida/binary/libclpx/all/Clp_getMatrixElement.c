__int64 __fastcall Clp_getMatrixElement(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rax
  CoinPackedMatrix *v4; // rdi
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(ClpPackedMatrix *); // rax
  CoinPackedMatrix *v8; // rax

  v3 = *a1;
  v4 = nullptr;
  v5 = *(_QWORD *)(v3 + 192);
  if ( v5 )
  {
    v6 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v5;
    if ( v6 != ClpPackedMatrix::getPackedMatrix )
    {
      v8 = (CoinPackedMatrix *)v6((ClpPackedMatrix *)v5);
      return CoinPackedMatrix::getMatrixElement(v8, a2, a3);
    }
    v4 = *(CoinPackedMatrix **)(v5 + 88);
  }
  return CoinPackedMatrix::getMatrixElement(v4, a2, a3);
}

