char *__fastcall sub_3CD2A0(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  std::__detail::_Prime_rehash_policy *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r14
  _QWORD *v16; // rax
  char *v18; // r13
  size_t v19; // r15
  char *v20; // r10
  char *v21; // rsi
  unsigned __int64 v22; // r9
  char *v23; // rcx
  unsigned __int64 v24; // rdx
  char *v25; // rax

  v9 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  v10 = *((_QWORD *)v9 - 3);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v9, v10, *((_QWORD *)v9 - 1), a5) )
  {
    v18 = (char *)v11;
    if ( v11 == 1 )
    {
      v20 = (char *)(a1 + 6);
      a1[6] = nullptr;
      v15 = (char *)(a1 + 6);
    }
    else
    {
      if ( v11 >> 60 )
      {
        if ( v11 >> 61 )
          sub_162118(v9, v10, v11, v12, v13, v14);
        std::__throw_bad_alloc();
      }
      v19 = 8 * v11;
      v15 = (char *)operator new(8 * v11);
      memset(v15, 0, v19);
      v20 = (char *)(a1 + 6);
    }
    v21 = a1[2];
    a1[2] = nullptr;
    v22 = 0;
    while ( v21 )
    {
      while ( 1 )
      {
        v23 = v21;
        v21 = *(char **)v21;
        v24 = *((_QWORD *)v23 + 1) % (unsigned __int64)v18;
        v25 = &v15[8 * v24];
        if ( !*(_QWORD *)v25 )
          break;
        *(_QWORD *)v23 = **(_QWORD **)v25;
        **(_QWORD **)v25 = v23;
        if ( !v21 )
          goto LABEL_13;
      }
      *(_QWORD *)v23 = a1[2];
      a1[2] = v23;
      *(_QWORD *)v25 = a1 + 2;
      if ( *(_QWORD *)v23 )
        *(_QWORD *)&v15[8 * v22] = v23;
      v22 = v24;
    }
LABEL_13:
    if ( *a1 != v20 )
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
    a1[1] = v18;
    *a1 = v15;
    a2 = a3 % (unsigned __int64)v18;
  }
  else
  {
    v15 = *a1;
  }
  v16 = *(_QWORD **)&v15[8 * a2];
  if ( v16 )
  {
    *(_QWORD *)a4 = *v16;
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
