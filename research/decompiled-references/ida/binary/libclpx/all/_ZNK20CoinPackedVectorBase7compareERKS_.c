int __fastcall CoinPackedVectorBase::compare(CoinPackedVectorBase *this, const CoinPackedVectorBase *a2)
{
  __int64 v2; // r12
  int result; // eax
  const void *v4; // r13
  const void *v5; // rax
  const void *v6; // rbp
  const void *v7; // rax

  v2 = (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this);
  result = v2 - (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2)(a2);
  if ( !result )
  {
    v4 = (const void *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (const void *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
    result = memcmp(v5, v4, 4 * v2);
    if ( !result )
    {
      v6 = (const void *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 16LL))(a2);
      v7 = (const void *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
      return memcmp(v7, v6, 8 * v2);
    }
  }
  return result;
}

