__int64 __fastcall sub_6C76C0(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  char *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  char *v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r15
  char *v20; // rax
  _QWORD *v21; // rdx
  char *v22; // r14
  char *v23; // r9
  char *v24; // rsi
  unsigned __int64 v25; // r8
  char *v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  char *v29; // rdx
  __int64 n; // [rsp+8h] [rbp-40h]

  v4 = *a2;
  v5 = (unsigned __int64)a1[1];
  v6 = *a2 % v5;
  v7 = *(_QWORD **)&(*a1)[8 * v6];
  v8 = 8 * v6;
  if ( v7 )
  {
    v9 = (_QWORD *)*v7;
    if ( v4 == *(_QWORD *)(*v7 + 8LL) )
    {
LABEL_6:
      if ( v7 && *v7 )
        return *v7 + 16LL;
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
        v7 = v9;
        if ( v6 != v10[1] % v5 )
          break;
        v9 = (_QWORD *)*v9;
        if ( v4 == v10[1] )
          goto LABEL_6;
      }
    }
  }
  v12 = (char *)operator new(0xC8u);
  v13 = (unsigned __int64)a1[3];
  v14 = (unsigned __int64)a1[1];
  v15 = v12;
  *(_QWORD *)v12 = 0;
  *((_QWORD *)v12 + 1) = *a2;
  memset(v12 + 16, 0, 0xB8u);
  *((_QWORD *)v12 + 5) = -1;
  *((_QWORD *)v12 + 10) = v12 + 128;
  *((_QWORD *)v12 + 11) = 1;
  *((_QWORD *)v12 + 14) = 1065353216;
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                          v14,
                          v13,
                          1u) )
  {
    v22 = (char *)v16;
    if ( v16 == 1 )
    {
      v23 = (char *)(a1 + 6);
      a1[6] = nullptr;
      v19 = (char *)(a1 + 6);
    }
    else
    {
      if ( v16 >> 60 )
      {
        if ( v16 >> 61 )
          sub_2EBC5E(a1 + 4, v14, v16, v17, v18);
        std::__throw_bad_alloc();
      }
      n = 8 * v16;
      v19 = (char *)operator new(8 * v16);
      memset(v19, 0, n);
      v23 = (char *)(a1 + 6);
    }
    v24 = a1[2];
    a1[2] = nullptr;
    v25 = 0;
    while ( v24 )
    {
      while ( 1 )
      {
        v26 = v24;
        v24 = *(char **)v24;
        v27 = *((_QWORD *)v26 + 1) % (unsigned __int64)v22;
        v28 = &v19[8 * v27];
        if ( !*(_QWORD *)v28 )
          break;
        *(_QWORD *)v26 = **(_QWORD **)v28;
        **(_QWORD **)v28 = v26;
        if ( !v24 )
          goto LABEL_20;
      }
      *(_QWORD *)v26 = a1[2];
      a1[2] = v26;
      *(_QWORD *)v28 = a1 + 2;
      if ( *(_QWORD *)v26 )
        *(_QWORD *)&v19[8 * v25] = v26;
      v25 = v27;
    }
LABEL_20:
    if ( *a1 != v23 )
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
    a1[1] = v22;
    *a1 = v19;
    v8 = 8 * (v4 % (unsigned __int64)v22);
    v20 = &v19[v8];
    v21 = *(_QWORD **)&v19[v8];
    if ( v21 )
      goto LABEL_11;
LABEL_23:
    v29 = a1[2];
    a1[2] = v15;
    *(_QWORD *)v15 = v29;
    if ( v29 )
    {
      *(_QWORD *)&v19[8 * (*((_QWORD *)v29 + 1) % (unsigned __int64)a1[1])] = v15;
      v20 = &(*a1)[v8];
    }
    *(_QWORD *)v20 = a1 + 2;
    goto LABEL_12;
  }
  v19 = *a1;
  v20 = &(*a1)[v8];
  v21 = *(_QWORD **)v20;
  if ( !*(_QWORD *)v20 )
    goto LABEL_23;
LABEL_11:
  *(_QWORD *)v15 = *v21;
  **(_QWORD **)v20 = v15;
LABEL_12:
  ++a1[3];
  return (__int64)(v15 + 16);
}
