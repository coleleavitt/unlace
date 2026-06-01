CoinPackedVectorBase *__fastcall CoinShallowPackedVector::operator=(
        CoinPackedVectorBase *this,
        CoinPackedVectorBase *a2)
{
  __int64 (__fastcall **v2)(CoinShallowPackedVector *); // rdx
  __int64 (__fastcall *v3)(CoinShallowPackedVector *); // rax
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CoinShallowPackedVector *); // rax
  __int64 (__fastcall *v6)(CoinShallowPackedVector *); // rax
  int v7; // eax
  int v8; // eax
  __int64 v10; // rax
  __int64 (__fastcall **v11)(CoinShallowPackedVector *); // rdx

  if ( this != a2 )
  {
    v2 = *(__int64 (__fastcall ***)(CoinShallowPackedVector *))a2;
    v3 = *(__int64 (__fastcall **)(CoinShallowPackedVector *))(*(_QWORD *)a2 + 8LL);
    if ( v3 == CoinShallowPackedVector::getIndices )
    {
      v4 = *((_QWORD *)a2 + 4);
    }
    else
    {
      v4 = v3(a2);
      v2 = *(__int64 (__fastcall ***)(CoinShallowPackedVector *))a2;
    }
    *((_QWORD *)this + 4) = v4;
    v5 = v2[2];
    if ( v5 == CoinShallowPackedVector::getElements )
    {
      *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
      v6 = *v2;
      if ( *v2 == CoinShallowPackedVector::getNumElements )
      {
LABEL_6:
        v7 = *((_DWORD *)a2 + 12);
LABEL_7:
        *((_DWORD *)this + 12) = v7;
        CoinPackedVectorBase::clearBase(this);
        v8 = *((_DWORD *)a2 + 3);
        *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)this + 3) = v8;
        CoinPackedVectorBase::duplicateIndex(this, nullptr, nullptr);
        return this;
      }
    }
    else
    {
      v10 = v5(a2);
      v11 = *(__int64 (__fastcall ***)(CoinShallowPackedVector *))a2;
      *((_QWORD *)this + 5) = v10;
      v6 = *v11;
      if ( *v11 == CoinShallowPackedVector::getNumElements )
        goto LABEL_6;
    }
    v7 = v6(a2);
    goto LABEL_7;
  }
  return this;
}

