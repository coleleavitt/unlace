char **__fastcall sub_4EDF10(char **a1, _DWORD *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  char ***v6; // r8
  __int64 v7; // r13
  char **v8; // rax
  unsigned __int64 v9; // r9
  char **v10; // rsi
  char **v11; // rbp
  char **v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r15
  char *v20; // rax
  char **v21; // rdx
  char *v22; // r14
  size_t v23; // r13
  char *v24; // r9
  char *v25; // rsi
  unsigned __int64 v26; // r8
  char *v27; // rcx
  unsigned __int64 v28; // rdx
  char *v29; // rax
  char *v30; // rdx

  v4 = (unsigned int)*a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *(char ****)&(*a1)[8 * (v4 % v5)];
  v7 = 8 * (v4 % v5);
  if ( !v6 )
    goto LABEL_9;
  v8 = *v6;
  v9 = (unsigned int)*a2 % v5;
  if ( (_DWORD)v4 != *((_DWORD *)*v6 + 2) )
  {
    while ( 1 )
    {
      v10 = (char **)*v8;
      if ( !*v8 )
        break;
      v6 = (char ***)v8;
      if ( v9 != *((unsigned int *)v10 + 2) % v5 )
        break;
      v8 = (char **)*v8;
      if ( (_DWORD)v4 == *((_DWORD *)v10 + 2) )
        goto LABEL_6;
    }
LABEL_9:
    v13 = (char **)operator new(0x28u);
    v14 = (unsigned __int64)a1[3];
    v15 = (unsigned __int64)a1[1];
    v11 = v13;
    *v13 = nullptr;
    LODWORD(v13) = *a2;
    v11[2] = nullptr;
    *((_DWORD *)v11 + 2) = (_DWORD)v13;
    *(_OWORD *)(v11 + 3) = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v15,
                            v14,
                            1u) )
    {
      v22 = (char *)v16;
      if ( v16 == 1 )
      {
        v24 = (char *)(a1 + 6);
        a1[6] = nullptr;
        v19 = (char *)(a1 + 6);
      }
      else
      {
        if ( v16 >> 60 )
        {
          if ( v16 >> 61 )
            sub_2E883E(a1 + 4, v15, v16, v17, v18);
          std::__throw_bad_alloc();
        }
        v23 = 8 * v16;
        v19 = (char *)operator new(8 * v16);
        memset(v19, 0, v23);
        v24 = (char *)(a1 + 6);
      }
      v25 = a1[2];
      a1[2] = nullptr;
      v26 = 0;
      while ( v25 )
      {
        while ( 1 )
        {
          v27 = v25;
          v25 = *(char **)v25;
          v28 = *((unsigned int *)v27 + 2) % (unsigned __int64)v22;
          v29 = &v19[8 * v28];
          if ( !*(_QWORD *)v29 )
            break;
          *(_QWORD *)v27 = **(_QWORD **)v29;
          **(_QWORD **)v29 = v27;
          if ( !v25 )
            goto LABEL_20;
        }
        *(_QWORD *)v27 = a1[2];
        a1[2] = v27;
        *(_QWORD *)v29 = a1 + 2;
        if ( *(_QWORD *)v27 )
          *(_QWORD *)&v19[8 * v26] = v27;
        v26 = v28;
      }
LABEL_20:
      if ( *a1 != v24 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v22;
      *a1 = v19;
      v7 = 8 * (v4 % (unsigned __int64)v22);
      v20 = &v19[v7];
      v21 = *(char ***)&v19[v7];
      if ( v21 )
        goto LABEL_11;
    }
    else
    {
      v19 = *a1;
      v20 = &(*a1)[v7];
      v21 = *(char ***)v20;
      if ( *(_QWORD *)v20 )
      {
LABEL_11:
        *v11 = *v21;
        **(_QWORD **)v20 = v11;
LABEL_12:
        ++a1[3];
        return v11 + 2;
      }
    }
    v30 = a1[2];
    a1[2] = (char *)v11;
    *v11 = v30;
    if ( v30 )
    {
      *(_QWORD *)&v19[8 * (*((unsigned int *)v30 + 2) % (unsigned __int64)a1[1])] = v11;
      v20 = &(*a1)[v7];
    }
    *(_QWORD *)v20 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v6 )
    goto LABEL_9;
  v11 = *v6;
  if ( !*v6 )
    goto LABEL_9;
  return v11 + 2;
}

