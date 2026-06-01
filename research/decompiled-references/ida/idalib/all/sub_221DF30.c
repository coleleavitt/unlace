char *__fastcall sub_221DF30(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int64 v9; // rdx
  char *v10; // r13
  _QWORD *v11; // rax
  unsigned __int64 v13; // rbp
  size_t v14; // r15
  char *v15; // r9
  char *v16; // rcx
  unsigned __int64 v17; // rdi
  char *v18; // rsi
  unsigned __int64 v19; // rdx
  char *v20; // rax
  _QWORD *v21; // rsi

  if ( !(unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                           (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                           (unsigned __int64)a1[1],
                           (unsigned __int64)a1[3],
                           a5) )
  {
    v10 = *a1;
    goto LABEL_3;
  }
  v13 = v9;
  if ( v9 == 1 )
  {
    v10 = (char *)(a1 + 6);
    a1[6] = nullptr;
    v15 = (char *)(a1 + 6);
  }
  else
  {
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v14 = 8 * v9;
    v10 = (char *)operator new(8 * v9);
    memset(v10, 0, v14);
    v15 = (char *)(a1 + 6);
  }
  v16 = a1[2];
  a1[2] = nullptr;
  if ( v16 )
  {
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v18 = *(char **)v16;
        v19 = *((unsigned int *)v16 + 2) % v13;
        v20 = &v10[8 * v19];
        if ( !*(_QWORD *)v20 )
          break;
        *(_QWORD *)v16 = **(_QWORD **)v20;
        **(_QWORD **)v20 = v16;
LABEL_12:
        v16 = v18;
        if ( !v18 )
          goto LABEL_16;
      }
      *(_QWORD *)v16 = a1[2];
      a1[2] = v16;
      *(_QWORD *)v20 = a1 + 2;
      if ( !*(_QWORD *)v16 )
      {
        v17 = v19;
        goto LABEL_12;
      }
      *(_QWORD *)&v10[8 * v17] = v16;
      v17 = v19;
      v16 = v18;
    }
    while ( v18 );
  }
LABEL_16:
  if ( *a1 != v15 )
    operator delete(*a1);
  a1[1] = (char *)v13;
  *a1 = v10;
  a2 = a3 % v13;
LABEL_3:
  v11 = *(_QWORD **)&v10[8 * a2];
  if ( v11 )
  {
    *(_QWORD *)a4 = *v11;
    **(_QWORD **)&(*a1)[8 * a2] = a4;
  }
  else
  {
    *(_QWORD *)a4 = a1[2];
    v21 = *a1;
    a1[2] = a4;
    if ( *(_QWORD *)a4 )
      v21[*(unsigned int *)(*(_QWORD *)a4 + 8LL) % (unsigned __int64)a1[1]] = a4;
    v21[a2] = a1 + 2;
  }
  ++a1[3];
  return a4;
}
