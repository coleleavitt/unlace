__int64 __fastcall sub_10B1A90(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  size_t v8; // r14
  size_t v9; // r15
  const void *v10; // r8
  const void *v11; // r9
  size_t v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  size_t v16; // r13
  size_t v17; // r15
  void *v18; // rsi
  size_t v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // r13
  size_t v27; // r14
  size_t v28; // r15
  const void *v29; // r9
  const void *v30; // r8
  size_t v31; // rcx
  int v32; // eax
  int v33; // eax
  size_t v34; // r13
  size_t v35; // r14
  const void *v36; // r8
  const void *v37; // rcx
  size_t v38; // r15
  int v39; // eax
  int v40; // eax
  void *s2; // [rsp+8h] [rbp-50h]
  void *s2a; // [rsp+8h] [rbp-50h]
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

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
    v24 = a1[4];
    if ( *(_QWORD *)(v24 + 32) < *(_QWORD *)a3 )
      return 0;
    if ( *(_QWORD *)(v24 + 32) != *(_QWORD *)a3 )
      return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
    v34 = *(_QWORD *)(v24 + 48);
    v35 = *(_QWORD *)(a3 + 16);
    v36 = *(const void **)(v24 + 40);
    v37 = *(const void **)(a3 + 8);
    v38 = v34;
    if ( v35 <= v34 )
      v38 = *(_QWORD *)(a3 + 16);
    if ( v38 )
    {
      s1c = *(void **)(a3 + 8);
      s2c = *(void **)(v24 + 40);
      v39 = memcmp(s2c, s1c, v38);
      v36 = s2c;
      v37 = s1c;
      if ( v39 )
      {
        if ( v39 < 0 )
          return 0;
        v40 = memcmp(s1c, s2c, v38);
        if ( !v40 )
        {
          if ( v35 != v34 )
          {
LABEL_66:
            if ( v35 < v34 )
              return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
          }
LABEL_67:
          if ( *(_DWORD *)(v24 + 56) >= *(_DWORD *)(a3 + 24) )
            return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
          return 0;
        }
LABEL_111:
        if ( v40 < 0 )
          return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
        goto LABEL_67;
      }
      if ( v35 == v34 )
      {
        v40 = memcmp(s1c, s2c, v38);
        if ( !v40 )
          goto LABEL_67;
        goto LABEL_111;
      }
    }
    else if ( v35 == v34 )
    {
      goto LABEL_67;
    }
    if ( v35 > v34 )
      return 0;
    if ( !v38 )
      goto LABEL_66;
    v40 = memcmp(v37, v36, v38);
    if ( !v40 )
      goto LABEL_66;
    goto LABEL_111;
  }
  v5 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 < *(_QWORD *)(a2 + 32) )
    goto LABEL_3;
  if ( *(_QWORD *)a3 != *(_QWORD *)(a2 + 32) )
  {
    if ( *(_QWORD *)a3 > *(_QWORD *)(a2 + 32) )
      goto LABEL_43;
    v17 = *(_QWORD *)(a2 + 48);
    v16 = *(_QWORD *)(a3 + 16);
    s1a = *(void **)(a2 + 40);
    v19 = v17;
    s2a = *(void **)(a3 + 8);
    if ( v16 <= v17 )
      v19 = *(_QWORD *)(a3 + 16);
    goto LABEL_29;
  }
  v16 = *(_QWORD *)(a3 + 16);
  v17 = *(_QWORD *)(a2 + 48);
  v18 = *(void **)(a2 + 40);
  v19 = v16;
  if ( v17 <= v16 )
    v19 = *(_QWORD *)(a2 + 48);
  s2a = *(void **)(a3 + 8);
  s1a = v18;
  if ( v19 )
  {
    na = v19;
    v20 = memcmp(*(const void **)(a3 + 8), v18, v19);
    v19 = na;
    if ( v20 )
    {
      if ( v20 < 0 )
        goto LABEL_3;
      v21 = memcmp(v18, s2a, na);
      v19 = na;
      if ( v21 )
        goto LABEL_27;
      if ( v17 == v16 )
        goto LABEL_28;
      goto LABEL_72;
    }
    if ( v17 == v16 )
    {
      v21 = memcmp(v18, s2a, na);
      v19 = na;
      if ( !v21 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
  else if ( v17 == v16 )
  {
    goto LABEL_28;
  }
  if ( v17 > v16 )
    goto LABEL_3;
  if ( !v19 || (nd = v19, v21 = memcmp(v18, s2a, v19), v19 = nd, !v21) )
  {
LABEL_72:
    if ( v17 >= v16 )
      goto LABEL_28;
LABEL_29:
    if ( v19 )
    {
      nb = v19;
      v22 = memcmp(s1a, s2a, v19);
      v19 = nb;
      if ( v22 )
      {
        if ( v22 < 0 )
          goto LABEL_43;
        v23 = memcmp(s2a, s1a, nb);
        if ( !v23 )
        {
          if ( v16 != v17 )
          {
LABEL_35:
            if ( v16 < v17 )
              return a2;
          }
LABEL_36:
          if ( *(_DWORD *)(a2 + 56) >= *(_DWORD *)(a3 + 24) )
            return a2;
LABEL_43:
          if ( a1[4] == a2 )
            return 0;
          v25 = (_QWORD *)std::_Rb_tree_increment();
          v26 = v25;
          if ( v5 < v25[4] )
            goto LABEL_74;
          if ( v5 != v25[4] )
            return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
          v27 = *(_QWORD *)(a3 + 16);
          v28 = v25[6];
          v29 = *(const void **)(a3 + 8);
          v30 = (const void *)v25[5];
          v31 = v27;
          if ( v28 <= v27 )
            v31 = v25[6];
          if ( v31 )
          {
            nc = v31;
            s1b = (void *)v25[5];
            s2b = *(void **)(a3 + 8);
            v32 = memcmp(s2b, s1b, v31);
            v29 = s2b;
            v30 = s1b;
            v31 = nc;
            if ( v32 )
            {
              if ( v32 >= 0 )
              {
                v33 = memcmp(s1b, s2b, nc);
                if ( !v33 )
                {
                  if ( v28 != v27 )
                    goto LABEL_54;
LABEL_55:
                  if ( *(_DWORD *)(a3 + 24) >= *((_DWORD *)v26 + 14) )
                    return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
                  goto LABEL_74;
                }
LABEL_114:
                if ( v33 < 0 )
                  return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
                goto LABEL_55;
              }
LABEL_74:
              result = (__int64)v26;
              if ( *(_QWORD *)(a2 + 24) )
                return result;
              return 0;
            }
            if ( v28 == v27 )
            {
              v33 = memcmp(s1b, s2b, nc);
              if ( !v33 )
                goto LABEL_55;
              goto LABEL_114;
            }
          }
          else if ( v28 == v27 )
          {
            goto LABEL_55;
          }
          if ( v28 <= v27 )
          {
            if ( !v31 || (v33 = memcmp(v30, v29, v31)) == 0 )
            {
LABEL_54:
              if ( v28 < v27 )
                return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
              goto LABEL_55;
            }
            goto LABEL_114;
          }
          goto LABEL_74;
        }
LABEL_95:
        if ( v23 < 0 )
          return a2;
        goto LABEL_36;
      }
      if ( v16 == v17 )
      {
        v23 = memcmp(s2a, s1a, nb);
        if ( !v23 )
          goto LABEL_36;
        goto LABEL_95;
      }
    }
    else if ( v16 == v17 )
    {
      goto LABEL_36;
    }
    if ( v16 > v17 )
      goto LABEL_43;
    if ( !v19 )
      goto LABEL_35;
    v23 = memcmp(s2a, s1a, v19);
    if ( !v23 )
      goto LABEL_35;
    goto LABEL_95;
  }
LABEL_27:
  if ( v21 < 0 )
    goto LABEL_29;
LABEL_28:
  if ( *(_DWORD *)(a3 + 24) >= *(_DWORD *)(a2 + 56) )
    goto LABEL_29;
LABEL_3:
  if ( a1[3] == a2 )
    return a2;
  v6 = (_QWORD *)std::_Rb_tree_decrement();
  v7 = v6;
  if ( v5 > v6[4] )
    goto LABEL_16;
  if ( v5 != v6[4] )
    return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
  v8 = v6[6];
  v9 = *(_QWORD *)(a3 + 16);
  v10 = (const void *)v6[5];
  v11 = *(const void **)(a3 + 8);
  v12 = v8;
  if ( v9 <= v8 )
    v12 = *(_QWORD *)(a3 + 16);
  if ( !v12 )
  {
    if ( v9 != v8 )
    {
LABEL_11:
      if ( v9 > v8 )
        goto LABEL_16;
      if ( !v12 || (v14 = memcmp(v11, v10, v12)) == 0 )
      {
LABEL_14:
        if ( v9 < v8 )
          return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
        goto LABEL_15;
      }
      goto LABEL_104;
    }
    goto LABEL_15;
  }
  n = v12;
  s1 = *(void **)(a3 + 8);
  s2 = (void *)v6[5];
  v13 = memcmp(s2, s1, v12);
  v10 = s2;
  v11 = s1;
  v12 = n;
  if ( !v13 )
  {
    if ( v9 != v8 )
      goto LABEL_11;
    v14 = memcmp(s1, s2, n);
    if ( v14 )
    {
LABEL_104:
      if ( v14 < 0 )
        return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
    }
LABEL_15:
    if ( *((_DWORD *)v7 + 14) < *(_DWORD *)(a3 + 24) )
      goto LABEL_16;
    return sub_10B17C0((__int64)a1, (unsigned __int64 *)a3);
  }
  if ( v13 >= 0 )
  {
    v14 = memcmp(s1, s2, n);
    if ( v14 )
      goto LABEL_104;
    if ( v9 != v8 )
      goto LABEL_14;
    goto LABEL_15;
  }
LABEL_16:
  result = 0;
  if ( v7[3] )
    return a2;
  return result;
}

