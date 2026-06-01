__int64 __fastcall proxim_data_t::item_t::get_present(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 func; // rax
  __int64 *v8; // rdx
  _QWORD *v9; // rsi
  __int64 *v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx

  v4 = a1[1];
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)v4 + 40LL * *(_QWORD *)(v4 + 8);
  if ( v5 == (_QWORD *)v6 )
    return 1;
  while ( *v5 != a3 )
  {
    v5 += 5;
    if ( (_QWORD *)v6 == v5 )
      return 1;
  }
  if ( !v5 )
    return 1;
  func = get_func(a3);
  v8 = (__int64 *)a1[3];
  if ( func )
    v8 = (__int64 *)a1[2];
  v9 = (_QWORD *)*v8;
  v10 = v8;
  v11 = v8[1];
  v12 = &v9[v11];
  if ( v9 != v12 )
  {
    v13 = v9;
    while ( *v13 != a3 )
    {
      if ( v12 == ++v13 )
        goto LABEL_14;
    }
    if ( v12 != v13 )
      return 1;
  }
LABEL_14:
  v15 = v11 + 1;
  if ( v10[2] < v15 )
  {
    v16 = qvector_reserve(v10, v9, v15, 8);
    v17 = v10[1];
    *v10 = v16;
    v12 = (_QWORD *)(v16 + 8 * v17);
  }
  *v12 = a3;
  ++v10[1];
  return 1;
}
