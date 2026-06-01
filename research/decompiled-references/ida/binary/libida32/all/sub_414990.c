__int64 __fastcall sub_414990(char **a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r12
  __int64 *v7; // r9
  unsigned __int64 v8; // r15
  __int64 *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r14
  __int64 v20; // r15
  __int64 **v21; // rax
  __int64 *v22; // rdx
  char *v23; // r13
  size_t v24; // r15
  char *v25; // r9
  char *v26; // rsi
  unsigned __int64 v27; // r8
  char *v28; // rcx
  unsigned __int64 v29; // rdx
  char *v30; // rax
  char *v31; // rdx

  v4 = *a2;
  if ( a1[3] )
  {
    v5 = (unsigned __int64)a1[1];
    v6 = v4;
    v7 = *(__int64 **)&(*a1)[8 * (v4 % v5)];
    v8 = v4 % v5;
    if ( !v7 )
      goto LABEL_12;
    v9 = (__int64 *)*v7;
    if ( v4 != *(_DWORD *)(*v7 + 8) )
    {
      while ( 1 )
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
        v7 = v9;
        if ( *((unsigned int *)v10 + 2) % v5 != v4 % v5 )
          break;
        v9 = (__int64 *)*v9;
        if ( v4 == *((_DWORD *)v10 + 2) )
          goto LABEL_7;
      }
LABEL_12:
      v13 = operator new(0x10u);
      v14 = (unsigned __int64)a1[3];
      v15 = (unsigned __int64)a1[1];
      *(_QWORD *)v13 = 0;
      v11 = v13;
      *(_DWORD *)(v13 + 8) = *a2;
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v15,
                              v14,
                              1u) )
      {
        v23 = (char *)v16;
        if ( v16 == 1 )
        {
          v25 = (char *)(a1 + 6);
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
          v24 = 8 * v16;
          v19 = (char *)operator new(8 * v16);
          memset(v19, 0, v24);
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
            v29 = *((unsigned int *)v28 + 2) % (unsigned __int64)v23;
            v30 = &v19[8 * v29];
            if ( !*(_QWORD *)v30 )
              break;
            *(_QWORD *)v28 = **(_QWORD **)v30;
            **(_QWORD **)v30 = v28;
            if ( !v26 )
              goto LABEL_26;
          }
          *(_QWORD *)v28 = a1[2];
          a1[2] = v28;
          *(_QWORD *)v30 = a1 + 2;
          if ( *(_QWORD *)v28 )
            *(_QWORD *)&v19[8 * v27] = v28;
          v27 = v29;
        }
LABEL_26:
        if ( *a1 != v25 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v23;
        *a1 = v19;
        v20 = 8 * (v6 % (unsigned __int64)v23);
        v21 = (__int64 **)&v19[v20];
        v22 = *(__int64 **)&v19[v20];
        if ( v22 )
          goto LABEL_14;
      }
      else
      {
        v19 = *a1;
        v20 = 8 * v8;
        v21 = (__int64 **)&(*a1)[v20];
        v22 = *v21;
        if ( *v21 )
        {
LABEL_14:
          *(_QWORD *)v11 = *v22;
          **v21 = v11;
LABEL_15:
          ++a1[3];
          return v11;
        }
      }
      v31 = a1[2];
      a1[2] = (char *)v11;
      *(_QWORD *)v11 = v31;
      if ( v31 )
      {
        *(_QWORD *)&v19[8 * (*((unsigned int *)v31 + 2) % (unsigned __int64)a1[1])] = v11;
        v21 = (__int64 **)&(*a1)[v20];
      }
      *v21 = (__int64 *)(a1 + 2);
      goto LABEL_15;
    }
LABEL_7:
    if ( !v7 )
      goto LABEL_12;
    v11 = *v7;
    if ( !*v7 )
      goto LABEL_12;
  }
  else
  {
    v11 = (__int64)a1[2];
    if ( !v11 )
    {
LABEL_11:
      v6 = v4;
      v8 = v4 % (unsigned __int64)a1[1];
      goto LABEL_12;
    }
    while ( *(_DWORD *)(v11 + 8) != v4 )
    {
      v11 = *(_QWORD *)v11;
      if ( !v11 )
        goto LABEL_11;
    }
  }
  return v11;
}

