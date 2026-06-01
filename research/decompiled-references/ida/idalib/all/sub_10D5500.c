__int64 __fastcall sub_10D5500(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  bool v4; // zf
  size_t v5; // r12
  size_t v6; // r14
  const void *v7; // r9
  const void *v8; // r13
  size_t v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  char v13; // cl
  size_t v15; // rbp
  size_t v16; // r13
  const void *v17; // r8
  const void *v18; // rcx
  size_t v19; // r14
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  void *s2; // [rsp+8h] [rbp-50h]
  void *s2a; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]
  const void *na; // [rsp+10h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_40;
  }
  v3 = *a2;
  v4 = *a2 == *(_QWORD *)(v2 + 32);
  if ( *a2 < *(_QWORD *)(v2 + 32) )
    goto LABEL_15;
LABEL_3:
  if ( !v4 )
    goto LABEL_13;
  v5 = a2[2];
  v6 = *(_QWORD *)(v2 + 48);
  v7 = (const void *)a2[1];
  v8 = *(const void **)(v2 + 40);
  v9 = v5;
  if ( v6 <= v5 )
    v9 = *(_QWORD *)(v2 + 48);
  if ( v9 )
  {
    n = v9;
    s2 = (void *)a2[1];
    v10 = memcmp(s2, *(const void **)(v2 + 40), v9);
    v7 = s2;
    v9 = n;
    if ( v10 )
    {
      if ( v10 < 0 )
        goto LABEL_15;
      v11 = memcmp(v8, s2, n);
      if ( !v11 )
      {
        if ( v6 != v5 && v6 < v5 )
          goto LABEL_13;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    if ( v6 == v5 )
    {
      v11 = memcmp(v8, s2, n);
      if ( !v11 )
        goto LABEL_22;
      goto LABEL_21;
    }
  }
  else if ( v6 == v5 )
  {
    if ( *((_DWORD *)a2 + 6) < *(_DWORD *)(v2 + 56) )
      goto LABEL_23;
    goto LABEL_13;
  }
  if ( v6 <= v5 )
  {
    if ( !v9 || (v11 = memcmp(v8, v7, v9)) == 0 )
    {
      if ( v6 < v5 )
        goto LABEL_13;
LABEL_22:
      if ( *((_DWORD *)a2 + 6) < *(_DWORD *)(v2 + 56) )
      {
LABEL_23:
        v12 = *(_QWORD *)(v2 + 16);
        v13 = 1;
        goto LABEL_16;
      }
LABEL_13:
      v12 = *(_QWORD *)(v2 + 24);
      v13 = 0;
      if ( v12 )
        goto LABEL_14;
      goto LABEL_17;
    }
LABEL_21:
    if ( v11 < 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
LABEL_15:
  while ( 1 )
  {
    v12 = *(_QWORD *)(v2 + 16);
    v13 = 1;
LABEL_16:
    if ( !v12 )
      break;
LABEL_14:
    v2 = v12;
    v4 = v3 == *(_QWORD *)(v12 + 32);
    if ( v3 >= *(_QWORD *)(v12 + 32) )
      goto LABEL_3;
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_18;
LABEL_40:
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v22 = std::_Rb_tree_decrement(v2);
    v3 = *a2;
    v2 = v22;
LABEL_18:
    if ( *(_QWORD *)(v2 + 32) < v3 )
      return 0;
    if ( *(_QWORD *)(v2 + 32) != v3 )
      return v2;
    v15 = *(_QWORD *)(v2 + 48);
    v16 = a2[2];
    v17 = *(const void **)(v2 + 40);
    v18 = (const void *)a2[1];
    v19 = v15;
    if ( v16 <= v15 )
      v19 = a2[2];
    if ( v19 )
    {
      na = (const void *)a2[1];
      s2a = *(void **)(v2 + 40);
      v20 = memcmp(s2a, na, v19);
      v17 = s2a;
      v18 = na;
      if ( v20 )
      {
        if ( v20 < 0 )
          return 0;
        v21 = memcmp(na, s2a, v19);
        if ( v21 )
          goto LABEL_36;
        if ( v16 != v15 )
          goto LABEL_52;
      }
      else
      {
        if ( v16 != v15 )
        {
LABEL_33:
          if ( v16 > v15 )
            return 0;
          if ( v19 )
          {
            v21 = memcmp(v18, v17, v19);
            if ( v21 )
            {
LABEL_36:
              if ( v21 >= 0 )
                goto LABEL_37;
              return v2;
            }
          }
LABEL_52:
          if ( v16 < v15 )
            return v2;
          goto LABEL_37;
        }
        v21 = memcmp(na, s2a, v19);
        if ( v21 )
          goto LABEL_36;
      }
LABEL_37:
      if ( *(_DWORD *)(v2 + 56) < *((_DWORD *)a2 + 6) )
        return 0;
      return v2;
    }
    if ( v16 == v15 )
      goto LABEL_37;
    goto LABEL_33;
  }
  return 0;
}
