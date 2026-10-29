// Alternative name is '_ZN23CoinShallowPackedVectorC1ERK20CoinPackedVectorBase'
void __fastcall CoinShallowPackedVector::CoinShallowPackedVector(
        CoinShallowPackedVector *this,
        const CoinPackedVectorBase *a2)
{
  __int64 (__fastcall **v3)(const CoinPackedVectorBase *); // rdx
  __int64 (__fastcall *v4)(CoinShallowPackedVector *); // rax
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CoinShallowPackedVector *); // rax
  __int64 v7; // rax
  int v8; // eax
  char v9; // si
  int v10; // eax

  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *(_QWORD *)this = off_4D1798;
  v3 = *(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2;
  v4 = *(__int64 (__fastcall **)(CoinShallowPackedVector *))(*(_QWORD *)a2 + 8LL);
  if ( v4 == CoinShallowPackedVector::getIndices )
  {
    v5 = *((_QWORD *)a2 + 4);
  }
  else
  {
    v5 = v4(a2);
    v3 = *(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2;
  }
  *((_QWORD *)this + 4) = v5;
  v6 = v3[2];
  if ( v6 == CoinShallowPackedVector::getElements )
  {
    v7 = *((_QWORD *)a2 + 5);
  }
  else
  {
    v7 = v6(a2);
    v3 = *(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2;
  }
  *((_QWORD *)this + 5) = v7;
  if ( *v3 == CoinShallowPackedVector::getNumElements )
    v8 = *((_DWORD *)a2 + 12);
  else
    v8 = (*v3)(a2);
  *((_DWORD *)this + 12) = v8;
  v9 = *((_BYTE *)a2 + 24);
  v10 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = v10;
  CoinPackedVectorBase::setTestForDuplicateIndex(this, v9);
}

