char *__fastcall sub_628910(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  std::__detail::_Prime_rehash_policy *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // r14
  _QWORD *v15; // rax
  char *v17; // r13
  size_t v18; // r15
  char *v19; // r10
  char *v20; // rsi
  unsigned __int64 v21; // r9
  char *v22; // rcx
  unsigned __int64 v23; // rdx
  char *v24; // rax

  v9 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  v10 = *((_QWORD *)v9 - 3);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v9, v10, *((_QWORD *)v9 - 1), a5) )
  {
    v17 = (char *)v11;
    if ( v11 == 1 )
    {
      v19 = (char *)(a1 + 6);
      a1[6] = nullptr;
      v14 = (char *)(a1 + 6);
    }
    else
    {
      if ( v11 >> 60 )
      {
        if ( v11 >> 61 )
          sub_2EBC5E(v9, v10, v11, v12, v13);
        std::__throw_bad_alloc();
      }
      v18 = 8 * v11;
      v14 = (char *)operator new(8 * v11);
      memset(v14, 0, v18);
      v19 = (char *)(a1 + 6);
    }
    v20 = a1[2];
    a1[2] = nullptr;
    v21 = 0;
    while ( v20 )
    {
      while ( 1 )
      {
        v22 = v20;
        v20 = *(char **)v20;
        v23 = *((_QWORD *)v22 + 1) % (unsigned __int64)v17;
        v24 = &v14[8 * v23];
        if ( !*(_QWORD *)v24 )
          break;
        *(_QWORD *)v22 = **(_QWORD **)v24;
        **(_QWORD **)v24 = v22;
        if ( !v20 )
          goto LABEL_13;
      }
      *(_QWORD *)v22 = a1[2];
      a1[2] = v22;
      *(_QWORD *)v24 = a1 + 2;
      if ( *(_QWORD *)v22 )
        *(_QWORD *)&v14[8 * v21] = v22;
      v21 = v23;
    }
LABEL_13:
    if ( *a1 != v19 )
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
    a1[1] = v17;
    *a1 = v14;
    a2 = a3 % (unsigned __int64)v17;
  }
  else
  {
    v14 = *a1;
  }
  v15 = *(_QWORD **)&v14[8 * a2];
  if ( v15 )
  {
    *(_QWORD *)a4 = *v15;
    **(_QWORD **)&(*a1)[8 * a2] = a4;
  }
  else
  {
    *(_QWORD *)a4 = a1[2];
    a1[2] = a4;
    if ( *(_QWORD *)a4 )
      *(_QWORD *)&(*a1)[8 * (*(_QWORD *)(*(_QWORD *)a4 + 8LL) % (unsigned __int64)a1[1])] = a4;
    *(_QWORD *)&(*a1)[8 * a2] = a1 + 2;
  }
  ++a1[3];
  return a4;
}
