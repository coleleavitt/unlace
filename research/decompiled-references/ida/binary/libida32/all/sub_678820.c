char *__fastcall sub_678820(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  char **v6; // r8
  unsigned __int64 v7; // r15
  char *v8; // rax
  char *v9; // rsi
  char *v10; // rbx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // r14
  __int64 v19; // r15
  char *v20; // rax
  _QWORD *v21; // rdx
  char *v22; // r13
  size_t v23; // r15
  char *v24; // r10
  char *v25; // rsi
  unsigned __int64 v26; // r9
  char *v27; // rcx
  unsigned __int64 v28; // rdx
  char *v29; // rax
  char *v30; // rdx

  v4 = *a2;
  if ( a1[3] )
  {
    v5 = (unsigned __int64)a1[1];
    v6 = *(char ***)&(*a1)[8 * (v4 % v5)];
    v7 = v4 % v5;
    if ( !v6 )
      goto LABEL_12;
    v8 = *v6;
    if ( v4 != *((_QWORD *)*v6 + 1) )
    {
      while ( 1 )
      {
        v9 = *(char **)v8;
        if ( !*(_QWORD *)v8 )
          break;
        v6 = (char **)v8;
        if ( *((_QWORD *)v9 + 1) % v5 != v4 % v5 )
          break;
        v8 = *(char **)v8;
        if ( v4 == *((_QWORD *)v9 + 1) )
          goto LABEL_7;
      }
LABEL_12:
      v12 = (char *)operator new(0x10u);
      v13 = (unsigned __int64)a1[3];
      v14 = (unsigned __int64)a1[1];
      *(_QWORD *)v12 = 0;
      v10 = v12;
      *((_QWORD *)v12 + 1) = *a2;
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v14,
                              v13,
                              1u) )
      {
        v22 = (char *)v15;
        if ( v15 == 1 )
        {
          v24 = (char *)(a1 + 6);
          a1[6] = nullptr;
          v18 = (char *)(a1 + 6);
        }
        else
        {
          if ( v15 >> 60 )
          {
            if ( v15 >> 61 )
              sub_2E883E(a1 + 4, v14, v15, v16, v17);
            std::__throw_bad_alloc();
          }
          v23 = 8 * v15;
          v18 = (char *)operator new(8 * v15);
          memset(v18, 0, v23);
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
            v28 = *((_QWORD *)v27 + 1) % (unsigned __int64)v22;
            v29 = &v18[8 * v28];
            if ( !*(_QWORD *)v29 )
              break;
            *(_QWORD *)v27 = **(_QWORD **)v29;
            **(_QWORD **)v29 = v27;
            if ( !v25 )
              goto LABEL_26;
          }
          *(_QWORD *)v27 = a1[2];
          a1[2] = v27;
          *(_QWORD *)v29 = a1 + 2;
          if ( *(_QWORD *)v27 )
            *(_QWORD *)&v18[8 * v26] = v27;
          v26 = v28;
        }
LABEL_26:
        if ( *a1 != v24 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v22;
        *a1 = v18;
        v19 = 8 * (v4 % (unsigned __int64)v22);
        v20 = &v18[v19];
        v21 = *(_QWORD **)&v18[v19];
        if ( v21 )
          goto LABEL_14;
      }
      else
      {
        v18 = *a1;
        v19 = 8 * v7;
        v20 = &(*a1)[v19];
        v21 = *(_QWORD **)v20;
        if ( *(_QWORD *)v20 )
        {
LABEL_14:
          *(_QWORD *)v10 = *v21;
          **(_QWORD **)v20 = v10;
LABEL_15:
          ++a1[3];
          return v10;
        }
      }
      v30 = a1[2];
      a1[2] = v10;
      *(_QWORD *)v10 = v30;
      if ( v30 )
      {
        *(_QWORD *)&v18[8 * (*((_QWORD *)v30 + 1) % (unsigned __int64)a1[1])] = v10;
        v20 = &(*a1)[v19];
      }
      *(_QWORD *)v20 = a1 + 2;
      goto LABEL_15;
    }
LABEL_7:
    if ( !v6 )
      goto LABEL_12;
    v10 = *v6;
    if ( !*v6 )
      goto LABEL_12;
  }
  else
  {
    v10 = a1[2];
    if ( !v10 )
    {
LABEL_11:
      v7 = v4 % (unsigned __int64)a1[1];
      goto LABEL_12;
    }
    while ( *((_QWORD *)v10 + 1) != v4 )
    {
      v10 = *(char **)v10;
      if ( !v10 )
        goto LABEL_11;
    }
  }
  return v10;
}

