char *__fastcall sub_211DEC0(char **a1, unsigned __int64 a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int64 v9; // rdx
  char *v10; // r13
  _QWORD *v11; // rax
  unsigned __int64 v13; // rbp
  size_t v14; // r15
  char *v15; // r10
  char *v16; // rcx
  unsigned __int64 v17; // r8
  _QWORD *v18; // r9
  char *v19; // rdi
  unsigned __int64 v20; // rdx
  char *v21; // rax
  _QWORD *v22; // rsi

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
    v18 = a1 + 2;
    do
    {
      while ( 1 )
      {
        v19 = *(char **)v16;
        v20 = *((_QWORD *)v16 + 1) % v13;
        v21 = &v10[8 * v20];
        if ( !*(_QWORD *)v21 )
          break;
        *(_QWORD *)v16 = **(_QWORD **)v21;
        **(_QWORD **)v21 = v16;
LABEL_12:
        v16 = v19;
        if ( !v19 )
          goto LABEL_16;
      }
      *(_QWORD *)v16 = a1[2];
      a1[2] = v16;
      *(_QWORD *)v21 = v18;
      if ( !*(_QWORD *)v16 )
      {
        v17 = v20;
        goto LABEL_12;
      }
      *(_QWORD *)&v10[8 * v17] = v16;
      v17 = v20;
      v16 = v19;
    }
    while ( v19 );
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
    v22 = *a1;
    a1[2] = a4;
    if ( *(_QWORD *)a4 )
      v22[*(_QWORD *)(*(_QWORD *)a4 + 8LL) % (unsigned __int64)a1[1]] = a4;
    v22[a2] = a1 + 2;
  }
  ++a1[3];
  return a4;
}
