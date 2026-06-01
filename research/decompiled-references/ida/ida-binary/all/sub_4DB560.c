char *__fastcall sub_4DB560(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char **v7; // r9
  __int64 v8; // r13
  char *v9; // rsi
  char *v10; // rdi
  char *v11; // rbp
  char *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // r14
  char *v22; // rax
  _QWORD *v23; // rdx
  char *v24; // r13
  size_t v25; // r15
  char *v26; // r10
  char *v27; // rsi
  unsigned __int64 v28; // r9
  char *v29; // rcx
  unsigned __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rdx

  v4 = *a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *a2 % v5;
  v7 = *(char ***)&(*a1)[8 * v6];
  v8 = 8 * v6;
  if ( !v7 )
    goto LABEL_9;
  v9 = *v7;
  if ( v4 != *((_QWORD *)*v7 + 1) )
  {
    while ( 1 )
    {
      v10 = *(char **)v9;
      if ( !*(_QWORD *)v9 )
        break;
      v7 = (char **)v9;
      if ( v6 != *((_QWORD *)v10 + 1) % v5 )
        break;
      v9 = *(char **)v9;
      if ( v4 == *((_QWORD *)v10 + 1) )
        goto LABEL_6;
    }
LABEL_9:
    v13 = (char *)operator new(0x18u);
    v14 = (unsigned __int64)a1[3];
    v15 = (unsigned __int64)a1[1];
    *(_QWORD *)v13 = 0;
    v11 = v13;
    v16 = *a2;
    *((_QWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 1) = v16;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                            v15,
                            v14,
                            1u) )
    {
      v24 = (char *)v17;
      if ( v17 == 1 )
      {
        v26 = (char *)(a1 + 6);
        a1[6] = nullptr;
        v21 = (char *)(a1 + 6);
      }
      else
      {
        if ( v17 >> 60 )
        {
          if ( v17 >> 61 )
            sub_162118(a1 + 4, v15, v17, v18, v19, v20);
          std::__throw_bad_alloc();
        }
        v25 = 8 * v17;
        v21 = (char *)operator new(8 * v17);
        memset(v21, 0, v25);
        v26 = (char *)(a1 + 6);
      }
      v27 = a1[2];
      a1[2] = nullptr;
      v28 = 0;
      while ( v27 )
      {
        while ( 1 )
        {
          v29 = v27;
          v27 = *(char **)v27;
          v30 = *((_QWORD *)v29 + 1) % (unsigned __int64)v24;
          v31 = &v21[8 * v30];
          if ( !*(_QWORD *)v31 )
            break;
          *(_QWORD *)v29 = **(_QWORD **)v31;
          **(_QWORD **)v31 = v29;
          if ( !v27 )
            goto LABEL_20;
        }
        *(_QWORD *)v29 = a1[2];
        a1[2] = v29;
        *(_QWORD *)v31 = a1 + 2;
        if ( *(_QWORD *)v29 )
          *(_QWORD *)&v21[8 * v28] = v29;
        v28 = v30;
      }
LABEL_20:
      if ( *a1 != v26 )
        operator delete(*a1, 8LL * (_QWORD)a1[1]);
      a1[1] = v24;
      *a1 = v21;
      v8 = 8 * (v4 % (unsigned __int64)v24);
      v22 = &v21[v8];
      v23 = *(_QWORD **)&v21[v8];
      if ( v23 )
        goto LABEL_11;
    }
    else
    {
      v21 = *a1;
      v22 = &(*a1)[v8];
      v23 = *(_QWORD **)v22;
      if ( *(_QWORD *)v22 )
      {
LABEL_11:
        *(_QWORD *)v11 = *v23;
        **(_QWORD **)v22 = v11;
LABEL_12:
        ++a1[3];
        return v11 + 16;
      }
    }
    v32 = a1[2];
    a1[2] = v11;
    *(_QWORD *)v11 = v32;
    if ( v32 )
    {
      *(_QWORD *)&v21[8 * (*((_QWORD *)v32 + 1) % (unsigned __int64)a1[1])] = v11;
      v22 = &(*a1)[v8];
    }
    *(_QWORD *)v22 = a1 + 2;
    goto LABEL_12;
  }
LABEL_6:
  if ( !v7 )
    goto LABEL_9;
  v11 = *v7;
  if ( !*v7 )
    goto LABEL_9;
  return v11 + 16;
}
