char *__fastcall sub_3FA810(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  std::__detail::_Prime_rehash_policy *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // r14
  _QWORD *v14; // rax
  char *v16; // r13
  size_t v17; // r15
  char *v18; // r10
  char *v19; // rsi
  unsigned __int64 v20; // r9
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  char *v23; // rax

  v9 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  v10 = *((_QWORD *)v9 - 3);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v9, v10, *((_QWORD *)v9 - 1), a5) )
  {
    v16 = (char *)v11;
    if ( v11 == 1 )
    {
      v18 = (char *)(a1 + 6);
      a1[6] = nullptr;
      v13 = (char *)(a1 + 6);
    }
    else
    {
      if ( v11 >> 60 )
      {
        if ( v11 >> 61 )
          sub_5DF44(v9, v10, v11, v12);
        std::__throw_bad_alloc();
      }
      v17 = 8 * v11;
      v13 = (char *)operator new(8 * v11);
      memset(v13, 0, v17);
      v18 = (char *)(a1 + 6);
    }
    v19 = a1[2];
    a1[2] = nullptr;
    v20 = 0;
    while ( v19 )
    {
      while ( 1 )
      {
        v21 = v19;
        v19 = *(char **)v19;
        v22 = *((_QWORD *)v21 + 1) % (unsigned __int64)v16;
        v23 = &v13[8 * v22];
        if ( !*(_QWORD *)v23 )
          break;
        *(_QWORD *)v21 = **(_QWORD **)v23;
        **(_QWORD **)v23 = v21;
        if ( !v19 )
          goto LABEL_13;
      }
      *(_QWORD *)v21 = a1[2];
      a1[2] = v21;
      *(_QWORD *)v23 = a1 + 2;
      if ( *(_QWORD *)v21 )
        *(_QWORD *)&v13[8 * v20] = v21;
      v20 = v22;
    }
LABEL_13:
    if ( *a1 != v18 )
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
    a1[1] = v16;
    *a1 = v13;
    a2 = a3 % (unsigned __int64)v16;
  }
  else
  {
    v13 = *a1;
  }
  v14 = *(_QWORD **)&v13[8 * a2];
  if ( v14 )
  {
    *(_QWORD *)a4 = *v14;
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
