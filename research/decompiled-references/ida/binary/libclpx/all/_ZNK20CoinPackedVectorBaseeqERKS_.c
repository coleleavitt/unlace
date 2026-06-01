bool __fastcall CoinPackedVectorBase::operator==(__int64 a1, __int64 a2)
{
  int v3; // r12d
  const void *v4; // r13
  __int64 v5; // r12
  __int64 v6; // r12
  const void *v7; // rax
  size_t v8; // r12
  double *v9; // rbp
  __int64 v10; // r12
  double *v11; // r12
  double *v12; // rax
  bool i; // zf

  if ( (**(unsigned int (__fastcall ***)(__int64))a1)(a1) && (**(unsigned int (__fastcall ***)(__int64))a2)(a2) )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    if ( v3 != (**(unsigned int (__fastcall ***)(__int64))a2)(a2) )
      return 0;
    v4 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v6 = v5 + 4LL * (**(int (__fastcall ***)(__int64))a1)(a1);
    v7 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v8 = v6 - (_QWORD)v7;
    if ( v8 )
    {
      if ( memcmp(v7, v4, v8) )
        return 0;
    }
    v9 = (double *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v11 = (double *)(v10 + 8LL * (**(int (__fastcall ***)(__int64))a1)(a1));
    v12 = (double *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    if ( v11 != v12 )
    {
      for ( i = *v9 == *v12; i; i = *v12 == *v9 )
      {
        ++v12;
        ++v9;
        if ( v11 == v12 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  else
  {
    if ( (**(unsigned int (__fastcall ***)(__int64))a1)(a1) )
      return 0;
    return (**(unsigned int (__fastcall ***)(__int64))a2)(a2) == 0;
  }
}

