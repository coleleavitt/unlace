__int64 __fastcall CoinPackedMatrix::appendMajorVector(CoinPackedMatrix *this, const double **a2)
{
  __int64 (__fastcall **v2)(CoinShallowPackedVector *); // rax
  __int64 (__fastcall *v3)(CoinShallowPackedVector *); // rdx
  __int64 (__fastcall *v4)(CoinShallowPackedVector *); // rdx
  const double *v5; // r12
  __int64 (__fastcall *v6)(CoinShallowPackedVector *); // rax
  const int *v7; // rdx
  int v8; // esi
  int v10; // eax
  const int *v11; // [rsp+8h] [rbp-20h]

  v2 = (__int64 (__fastcall **)(CoinShallowPackedVector *))*a2;
  v3 = *((__int64 (__fastcall **)(CoinShallowPackedVector *))*a2 + 2);
  if ( v3 == CoinShallowPackedVector::getElements )
  {
    v4 = v2[1];
    v5 = a2[5];
    if ( v4 == CoinShallowPackedVector::getIndices )
      goto LABEL_3;
LABEL_7:
    v7 = (const int *)v4((CoinShallowPackedVector *)a2);
    v6 = *(__int64 (__fastcall **)(CoinShallowPackedVector *))*a2;
    if ( v6 == CoinShallowPackedVector::getNumElements )
      goto LABEL_4;
LABEL_8:
    v11 = v7;
    v10 = v6((CoinShallowPackedVector *)a2);
    v7 = v11;
    v8 = v10;
    return CoinPackedMatrix::appendMajorVector(this, v8, v7, v5);
  }
  v5 = (const double *)v3((CoinShallowPackedVector *)a2);
  v2 = (__int64 (__fastcall **)(CoinShallowPackedVector *))*a2;
  v4 = *((__int64 (__fastcall **)(CoinShallowPackedVector *))*a2 + 1);
  if ( v4 != CoinShallowPackedVector::getIndices )
    goto LABEL_7;
LABEL_3:
  v6 = *v2;
  v7 = (const int *)a2[4];
  if ( v6 != CoinShallowPackedVector::getNumElements )
    goto LABEL_8;
LABEL_4:
  v8 = *((_DWORD *)a2 + 12);
  return CoinPackedMatrix::appendMajorVector(this, v8, v7, v5);
}

