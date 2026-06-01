char *__fastcall sub_4C6C90(char **a1, __int64 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // r9
  char *v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char **v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r15
  char *v12; // rax
  char *v13; // r8
  char *v14; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r14
  __int64 v20; // r15
  char *v21; // rax
  _QWORD *v22; // rdx
  char *v23; // r12
  size_t v24; // r15
  char *v25; // r9
  char *v26; // rsi
  unsigned __int64 v27; // r8
  char *v28; // rcx
  unsigned __int64 v29; // rdx
  char *v30; // rax
  char *v31; // rdx

  v2 = (char *)operator new(0x10u);
  v3 = (unsigned __int64)a1[3];
  *(_QWORD *)v2 = 0;
  v4 = v2;
  v5 = *a2;
  *((_QWORD *)v4 + 1) = *a2;
  v6 = v5;
  if ( v3 )
  {
    v7 = (unsigned __int64)a1[1];
    v8 = (unsigned int)v5;
    v9 = *(char ***)&(*a1)[8 * ((unsigned int)v5 % v7)];
    v10 = (unsigned int)v5 % v7;
    v11 = v10;
    if ( !v9 )
      goto LABEL_14;
    v12 = *v9;
    if ( v6 != *((_DWORD *)*v9 + 2) )
    {
      while ( 1 )
      {
        v13 = *(char **)v12;
        if ( !*(_QWORD *)v12 )
          break;
        v9 = (char **)v12;
        if ( *((unsigned int *)v13 + 2) % v7 != v10 )
          break;
        v12 = *(char **)v12;
        if ( v6 == *((_DWORD *)v13 + 2) )
          goto LABEL_7;
      }
LABEL_14:
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                              v7,
                              v3,
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
              sub_2E883E(a1 + 4, v7, v16, v17, v18);
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
              goto LABEL_29;
          }
          *(_QWORD *)v28 = a1[2];
          a1[2] = v28;
          *(_QWORD *)v30 = a1 + 2;
          if ( *(_QWORD *)v28 )
            *(_QWORD *)&v19[8 * v27] = v28;
          v27 = v29;
        }
LABEL_29:
        if ( *a1 != v25 )
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
        a1[1] = v23;
        *a1 = v19;
        v20 = 8 * (v8 % (unsigned __int64)v23);
        v21 = &v19[v20];
        v22 = *(_QWORD **)&v19[v20];
        if ( v22 )
          goto LABEL_16;
      }
      else
      {
        v19 = *a1;
        v20 = 8 * v11;
        v21 = &(*a1)[v20];
        v22 = *(_QWORD **)v21;
        if ( *(_QWORD *)v21 )
        {
LABEL_16:
          *(_QWORD *)v4 = *v22;
          **(_QWORD **)v21 = v4;
LABEL_17:
          ++a1[3];
          return v4;
        }
      }
      v31 = a1[2];
      a1[2] = v4;
      *(_QWORD *)v4 = v31;
      if ( v31 )
      {
        *(_QWORD *)&v19[8 * (*((unsigned int *)v31 + 2) % (unsigned __int64)a1[1])] = v4;
        v21 = &(*a1)[v20];
      }
      *(_QWORD *)v21 = a1 + 2;
      goto LABEL_17;
    }
LABEL_7:
    if ( !v9 )
      goto LABEL_14;
    v14 = *v9;
    if ( !*v9 )
      goto LABEL_14;
    if ( v4 )
      goto LABEL_10;
  }
  else
  {
    v14 = a1[2];
    if ( !v14 )
    {
LABEL_13:
      v7 = (unsigned __int64)a1[1];
      v8 = (unsigned int)v5;
      v11 = (unsigned int)v5 % v7;
      goto LABEL_14;
    }
    while ( *((_DWORD *)v14 + 2) != (_DWORD)v5 )
    {
      v14 = *(char **)v14;
      if ( !v14 )
        goto LABEL_13;
    }
    if ( v4 )
LABEL_10:
      operator delete(v4, 0x10u);
  }
  return v14;
}

