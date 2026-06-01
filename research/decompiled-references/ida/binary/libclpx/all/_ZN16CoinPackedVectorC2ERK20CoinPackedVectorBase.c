// Alternative name is '_ZN16CoinPackedVectorC1ERK20CoinPackedVectorBase'
void __fastcall CoinPackedVector::CoinPackedVector(CoinPackedVector *this, const CoinPackedVectorBase *a2)
{
  char v2; // r14
  __int64 (__fastcall **v3)(CoinPackedVector *__hidden); // rax
  __int64 (__fastcall *v4)(CoinPackedVector *__hidden); // rdx
  __int64 (__fastcall *v5)(CoinPackedVector *__hidden); // rdx
  const double *v6; // r13
  __int64 (__fastcall *v7)(CoinPackedVector *__hidden); // rax
  const int *v8; // r12
  int v9; // esi

  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  v2 = *((_BYTE *)a2 + 24);
  *(_QWORD *)this = off_4D1A98;
  v3 = *(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
  v4 = *(__int64 (__fastcall **)(CoinPackedVector *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v4 == CoinPackedVector::getElements )
  {
    v5 = v3[1];
    v6 = *((const double **)a2 + 5);
    if ( v5 == CoinPackedVector::getIndices )
      goto LABEL_3;
LABEL_7:
    v8 = (const int *)v5(a2);
    v7 = **(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
    if ( v7 == CoinPackedVector::getNumElements )
      goto LABEL_4;
LABEL_8:
    v9 = v7(a2);
    goto LABEL_5;
  }
  v6 = (const double *)v4(a2);
  v3 = *(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
  v5 = *(__int64 (__fastcall **)(CoinPackedVector *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v5 != CoinPackedVector::getIndices )
    goto LABEL_7;
LABEL_3:
  v7 = *v3;
  v8 = *((const int **)a2 + 4);
  if ( v7 != CoinPackedVector::getNumElements )
    goto LABEL_8;
LABEL_4:
  v9 = *((_DWORD *)a2 + 12);
LABEL_5:
  CoinPackedVector::gutsOfSetVector(this, v9, v8, v6, v2, "copy constructor from base");
}

