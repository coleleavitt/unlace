__int64 __fastcall sub_10D57D0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, size_t a6)
{
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  size_t v11; // r14
  size_t v12; // r15
  const void *v13; // r8
  const void *v14; // r9
  size_t v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  size_t v19; // r13
  size_t v20; // r15
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // r13
  size_t v28; // r14
  size_t v29; // r15
  const void *v30; // r9
  const void *v31; // r8
  size_t v32; // rcx
  int v33; // eax
  int v34; // eax
  size_t v35; // r13
  size_t v36; // r14
  const void *v37; // r8
  const void *v38; // rcx
  size_t v39; // r15
  int v40; // eax
  int v41; // eax
  void *s2; // [rsp+8h] [rbp-50h]
  _QWORD *s2a; // [rsp+8h] [rbp-50h]
  void *s2b; // [rsp+8h] [rbp-50h]
  void *s2c; // [rsp+8h] [rbp-50h]
  void *s1; // [rsp+10h] [rbp-48h]
  void *s1a; // [rsp+10h] [rbp-48h]
  void *s1b; // [rsp+10h] [rbp-48h]
  void *s1c; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]
  size_t na; // [rsp+18h] [rbp-40h]
  size_t nd; // [rsp+18h] [rbp-40h]
  size_t nb; // [rsp+18h] [rbp-40h]
  size_t nc; // [rsp+18h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
    v25 = a1[4];
    if ( *(_QWORD *)(v25 + 32) < *(_QWORD *)a3 )
      return 0;
    if ( *(_QWORD *)(v25 + 32) != *(_QWORD *)a3 )
      return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
    v35 = *(_QWORD *)(v25 + 48);
    v36 = *(_QWORD *)(a3 + 16);
    v37 = *(const void **)(v25 + 40);
    v38 = *(const void **)(a3 + 8);
    v39 = v35;
    if ( v36 <= v35 )
      v39 = *(_QWORD *)(a3 + 16);
    if ( v39 )
    {
      s1c = *(void **)(a3 + 8);
      s2c = *(void **)(v25 + 40);
      v40 = memcmp(s2c, s1c, v39);
      v37 = s2c;
      v38 = s1c;
      if ( v40 )
      {
        if ( v40 < 0 )
          return 0;
        v41 = memcmp(s1c, s2c, v39);
        if ( !v41 )
        {
          if ( v36 != v35 )
          {
LABEL_66:
            if ( v36 < v35 )
              return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
          }
LABEL_67:
          if ( *(_DWORD *)(v25 + 56) >= *(_DWORD *)(a3 + 24) )
            return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
          return 0;
        }
LABEL_111:
        if ( v41 < 0 )
          return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
        goto LABEL_67;
      }
      if ( v36 == v35 )
      {
        v41 = memcmp(s1c, s2c, v39);
        if ( !v41 )
          goto LABEL_67;
        goto LABEL_111;
      }
    }
    else if ( v36 == v35 )
    {
      goto LABEL_67;
    }
    if ( v36 > v35 )
      return 0;
    if ( !v39 )
      goto LABEL_66;
    v41 = memcmp(v38, v37, v39);
    if ( !v41 )
      goto LABEL_66;
    goto LABEL_111;
  }
  v7 = a2;
  v8 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 < a2[4] )
    goto LABEL_3;
  if ( *(_QWORD *)a3 != a2[4] )
  {
    if ( *(_QWORD *)a3 > a2[4] )
      goto LABEL_43;
    v20 = a2[6];
    v19 = *(_QWORD *)(a3 + 16);
    s1a = (void *)a2[5];
    a6 = v20;
    s2a = *(_QWORD **)(a3 + 8);
    if ( v19 <= v20 )
      a6 = *(_QWORD *)(a3 + 16);
    goto LABEL_29;
  }
  v19 = *(_QWORD *)(a3 + 16);
  v20 = a2[6];
  a2 = (_QWORD *)a2[5];
  a6 = v19;
  if ( v20 <= v19 )
    a6 = v7[6];
  s2a = *(_QWORD **)(a3 + 8);
  s1a = a2;
  if ( a6 )
  {
    na = a6;
    v21 = memcmp(*(const void **)(a3 + 8), a2, a6);
    a6 = na;
    if ( v21 )
    {
      if ( v21 < 0 )
        goto LABEL_3;
      a2 = s2a;
      v22 = memcmp(s1a, s2a, na);
      a6 = na;
      if ( v22 )
        goto LABEL_27;
      if ( v20 == v19 )
        goto LABEL_28;
      goto LABEL_72;
    }
    if ( v20 == v19 )
    {
      a2 = s2a;
      v22 = memcmp(s1a, s2a, na);
      a6 = na;
      if ( !v22 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
  else if ( v20 == v19 )
  {
    goto LABEL_28;
  }
  if ( v20 > v19 )
    goto LABEL_3;
  if ( !a6 || (a2 = s2a, nd = a6, v22 = memcmp(s1a, s2a, a6), a6 = nd, !v22) )
  {
LABEL_72:
    if ( v20 >= v19 )
      goto LABEL_28;
LABEL_29:
    if ( a6 )
    {
      a2 = s2a;
      nb = a6;
      v23 = memcmp(s1a, s2a, a6);
      a6 = nb;
      if ( v23 )
      {
        if ( v23 < 0 )
          goto LABEL_43;
        a2 = s1a;
        v24 = memcmp(s2a, s1a, nb);
        if ( !v24 )
        {
          if ( v19 != v20 )
          {
LABEL_35:
            if ( v19 < v20 )
              return (__int64)v7;
          }
LABEL_36:
          if ( *((_DWORD *)v7 + 14) >= *(_DWORD *)(a3 + 24) )
            return (__int64)v7;
LABEL_43:
          if ( (_QWORD *)a1[4] == v7 )
            return 0;
          v26 = (_QWORD *)std::_Rb_tree_increment(v7, (const char *)a2, a3, a4, a5, a6);
          v27 = v26;
          if ( v8 < v26[4] )
            goto LABEL_74;
          if ( v8 != v26[4] )
            return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
          v28 = *(_QWORD *)(a3 + 16);
          v29 = v26[6];
          v30 = *(const void **)(a3 + 8);
          v31 = (const void *)v26[5];
          v32 = v28;
          if ( v29 <= v28 )
            v32 = v26[6];
          if ( v32 )
          {
            nc = v32;
            s1b = (void *)v26[5];
            s2b = *(void **)(a3 + 8);
            v33 = memcmp(s2b, s1b, v32);
            v30 = s2b;
            v31 = s1b;
            v32 = nc;
            if ( v33 )
            {
              if ( v33 >= 0 )
              {
                v34 = memcmp(s1b, s2b, nc);
                if ( !v34 )
                {
                  if ( v29 != v28 )
                    goto LABEL_54;
LABEL_55:
                  if ( *(_DWORD *)(a3 + 24) >= *((_DWORD *)v27 + 14) )
                    return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
                  goto LABEL_74;
                }
LABEL_114:
                if ( v34 < 0 )
                  return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
                goto LABEL_55;
              }
LABEL_74:
              result = (__int64)v27;
              if ( v7[3] )
                return result;
              return 0;
            }
            if ( v29 == v28 )
            {
              v34 = memcmp(s1b, s2b, nc);
              if ( !v34 )
                goto LABEL_55;
              goto LABEL_114;
            }
          }
          else if ( v29 == v28 )
          {
            goto LABEL_55;
          }
          if ( v29 <= v28 )
          {
            if ( !v32 || (v34 = memcmp(v31, v30, v32)) == 0 )
            {
LABEL_54:
              if ( v29 < v28 )
                return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
              goto LABEL_55;
            }
            goto LABEL_114;
          }
          goto LABEL_74;
        }
LABEL_95:
        if ( v24 < 0 )
          return (__int64)v7;
        goto LABEL_36;
      }
      if ( v19 == v20 )
      {
        a2 = s1a;
        v24 = memcmp(s2a, s1a, nb);
        if ( !v24 )
          goto LABEL_36;
        goto LABEL_95;
      }
    }
    else if ( v19 == v20 )
    {
      goto LABEL_36;
    }
    if ( v19 > v20 )
      goto LABEL_43;
    if ( !a6 )
      goto LABEL_35;
    a2 = s1a;
    v24 = memcmp(s2a, s1a, a6);
    if ( !v24 )
      goto LABEL_35;
    goto LABEL_95;
  }
LABEL_27:
  if ( v22 < 0 )
    goto LABEL_29;
LABEL_28:
  if ( *(_DWORD *)(a3 + 24) >= *((_DWORD *)v7 + 14) )
    goto LABEL_29;
LABEL_3:
  if ( (_QWORD *)a1[3] == v7 )
    return (__int64)v7;
  v9 = (_QWORD *)std::_Rb_tree_decrement(v7);
  v10 = v9;
  if ( v8 > v9[4] )
    goto LABEL_16;
  if ( v8 != v9[4] )
    return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
  v11 = v9[6];
  v12 = *(_QWORD *)(a3 + 16);
  v13 = (const void *)v9[5];
  v14 = *(const void **)(a3 + 8);
  v15 = v11;
  if ( v12 <= v11 )
    v15 = *(_QWORD *)(a3 + 16);
  if ( !v15 )
  {
    if ( v12 != v11 )
    {
LABEL_11:
      if ( v12 > v11 )
        goto LABEL_16;
      if ( !v15 || (v17 = memcmp(v14, v13, v15)) == 0 )
      {
LABEL_14:
        if ( v12 < v11 )
          return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
        goto LABEL_15;
      }
      goto LABEL_104;
    }
    goto LABEL_15;
  }
  n = v15;
  s1 = *(void **)(a3 + 8);
  s2 = (void *)v9[5];
  v16 = memcmp(s2, s1, v15);
  v13 = s2;
  v14 = s1;
  v15 = n;
  if ( !v16 )
  {
    if ( v12 != v11 )
      goto LABEL_11;
    v17 = memcmp(s1, s2, n);
    if ( v17 )
    {
LABEL_104:
      if ( v17 < 0 )
        return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
    }
LABEL_15:
    if ( *((_DWORD *)v10 + 14) < *(_DWORD *)(a3 + 24) )
      goto LABEL_16;
    return sub_10D5500((__int64)a1, (unsigned __int64 *)a3);
  }
  if ( v16 >= 0 )
  {
    v17 = memcmp(s1, s2, n);
    if ( v17 )
      goto LABEL_104;
    if ( v12 != v11 )
      goto LABEL_14;
    goto LABEL_15;
  }
LABEL_16:
  result = 0;
  if ( v10[3] )
    return (__int64)v7;
  return result;
}
