CoinPackedVector *__fastcall CoinPackedVector::operator=(CoinPackedVector *this, CoinPackedVector *a2)
{
  __int64 (__fastcall **v2)(CoinPackedVector *__hidden); // rax
  char v3; // r13
  __int64 (__fastcall *v4)(CoinPackedVector *__hidden); // rdx
  __int64 (__fastcall *v5)(CoinPackedVector *__hidden); // rdx
  const double *v6; // r12
  __int64 (__fastcall *v7)(CoinPackedVector *__hidden); // rax
  const int *v8; // rdx
  int v9; // esi
  int v11; // eax
  const int *v12; // [rsp+8h] [rbp-30h]

  if ( this != a2 )
  {
    CoinPackedVector::clear(this);
    v2 = *(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
    v3 = *((_BYTE *)this + 24);
    v4 = *(__int64 (__fastcall **)(CoinPackedVector *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v4 == CoinPackedVector::getElements )
    {
      v5 = v2[1];
      v6 = *((const double **)a2 + 5);
      if ( v5 == CoinPackedVector::getIndices )
        goto LABEL_4;
    }
    else
    {
      v6 = (const double *)v4(a2);
      v2 = *(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
      v5 = *(__int64 (__fastcall **)(CoinPackedVector *__hidden))(*(_QWORD *)a2 + 8LL);
      if ( v5 == CoinPackedVector::getIndices )
      {
LABEL_4:
        v7 = *v2;
        v8 = *((const int **)a2 + 4);
        if ( v7 == CoinPackedVector::getNumElements )
        {
LABEL_5:
          v9 = *((_DWORD *)a2 + 12);
LABEL_6:
          CoinPackedVector::gutsOfSetVector(this, v9, v8, v6, v3, "operator= from base");
          return this;
        }
LABEL_10:
        v12 = v8;
        v11 = v7(a2);
        v8 = v12;
        v9 = v11;
        goto LABEL_6;
      }
    }
    v8 = (const int *)v5(a2);
    v7 = **(__int64 (__fastcall ***)(CoinPackedVector *__hidden))a2;
    if ( v7 == CoinPackedVector::getNumElements )
      goto LABEL_5;
    goto LABEL_10;
  }
  return this;
}

