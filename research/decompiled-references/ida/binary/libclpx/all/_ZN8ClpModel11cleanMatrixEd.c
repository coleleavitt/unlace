__int64 __fastcall ClpModel::cleanMatrix(ClpModel *this, double a2)
{
  const void *v2; // rdi
  void *v3; // rax
  __int64 (__fastcall *v4)(ClpPackedMatrix *); // rdx
  CoinPackedMatrix *v6; // rax

  v2 = *((const void **)this + 24);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = __dynamic_cast(
         v2,
         (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
         (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
         0);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v3;
  if ( v4 == ClpPackedMatrix::getPackedMatrix )
    return CoinPackedMatrix::cleanMatrix(*((CoinPackedMatrix **)v3 + 11), a2);
  v6 = (CoinPackedMatrix *)v4((ClpPackedMatrix *)v3);
  return CoinPackedMatrix::cleanMatrix(v6, a2);
}

