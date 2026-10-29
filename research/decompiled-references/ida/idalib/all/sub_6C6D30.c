char **__fastcall sub_6C6D30(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char ***v7; // r9
  __int64 v8; // r13
  char **v9; // rsi
  char **v10; // rdi
  char **v11; // rbp
  char **v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char *v20; // r14
  char *v21; // rax
  char **v22; // rdx
  char *v23; // r13
  size_t v24; // r15
  char *v25; // r10
  char *v26; // rsi
  unsigned __int64 v27; // r9
  char *v28; // rcx
  unsigned __int64 v29; // rdx
  char *v30; // rax
  char *v31; // rdx

  v4 = *a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *a2 % v5;
  v7 = *(char ****)&(*a1)[8 * v6];
  v8 = 8 * v6;
  if ( !v7 )
    goto LABEL_9;
  v9 = *v7;
  if ( (char *)v4 != (*v7)[1] )
  {
    while ( 1 )
    {
      v10 = (char **)*v9;
      if ( !*v9 )
        break;
      v7 = (char ***)v9;
      if ( v6 != (unsigned __int64)v10[1] % v5 )
        break;
      v9 = (char **)*v9;
      if ( (char *)v4 == v10[1] )
        goto LABEL_6;
    }
LABEL_9:
    v13 = (char **)operator new(0x20u);
    v14 = (unsigned __int64)a1[3];
    v15 = (unsigned __int64)a1[1];
    *v13 = nullptr;
    v11 = v13;
    v16 = *a2;
    v11[2] = nullptr;
    v11[1] = (char *)v16;
    *((_WORD *)v11 + 12) = 0;
    *((_BYTE *)v11 + 26) = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v15,
                            v14,
                            1u) )
    {
      v23 = (char *)v17;
      if ( v17 == 1 )
      {
        v25 = (char *)(a1 + 6);
        a1[6] = nullptr;
        v20 = (char *)(a1 + 6);
      }
      else
      {
        if ( v17 >> 60 )
        {
          if ( v17 >> 61 )
            sub_2EBC5E(a1 + 4, v15, v17, v18, v19);
          std::__throw_bad_alloc();
        }
        v24 = 8 * v17;
        v20 = (char *)operator new(8 * v17);
        memset(v20, 0, v24);
        v25 = (char *)(a1 + 6);
      }
      v26 = a1[2];
      a1[2] = nullptr;
      v27 = 0;
      while ( v26 )
      {
        while ( 1 )
        {
          v28 = v26;
          v26 = *(char **)v26;
          v29 = *((_QWORD *)v28 + 1) % (unsigned __int64)v23;
          v30 = &v20[8 * v29];
          if ( !*(_QWORD *)v30 )
            break;
          *(_QWORD *)v28 = **(_QWORD **)v30;
          **(_QWORD **)v30 = v28;
          if ( !v26 )
            goto LABEL_20;
        }
        *(_QWORD *)v28 = a1[2];
        a1[2] = v28;
        *(_QWORD *)v30 = a1 + 2;
        if ( *(_QWORD *)v28 )
          *(_QWORD *)&v20[8 * v27] = v28;
        v27 = v29;
      }
LABEL_20:
      if ( *a1 != v25 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v23;
      *a1 = v20;
      v8 = 8 * (v4 % (unsigned __int64)v23);
      v21 = &v20[v8];
      v22 = *(char ***)&v20[v8];
      if ( v22 )
        goto LABEL_11;
    }
    else
    {
      v20 = *a1;
      v21 = &(*a1)[v8];
      v22 = *(char ***)v21;
      if ( *(_QWORD *)v21 )
      {
LABEL_11:
        *v11 = *v22;
        **(_QWORD **)v21 = v11;
LABEL_12:
        ++a1[3];
        return v11 + 2;
      }
    }
    v31 = a1[2];
    a1[2] = (char *)v11;
    *v11 = v31;
    if ( v31 )
    {
      *(_QWORD *)&v20[8 * (*((_QWORD *)v31 + 1) % (unsigned __int64)a1[1])] = v11;
      v21 = &(*a1)[v8];
    }
    *(_QWORD *)v21 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v7 )
    goto LABEL_9;
  v11 = *v7;
  if ( !*v7 )
    goto LABEL_9;
  return v11 + 2;
}
