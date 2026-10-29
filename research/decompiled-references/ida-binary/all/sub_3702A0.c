__int64 __fastcall proxim_data_t::item_t::count_missing(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 func; // rax
  __int64 *v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 *v12; // rbp
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx

  v4 = a1[1];
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)v4 + 40LL * *(_QWORD *)(v4 + 8);
  if ( v5 == (_QWORD *)v6 )
    goto LABEL_7;
  while ( *v5 != a3 )
  {
    v5 += 5;
    if ( (_QWORD *)v6 == v5 )
      goto LABEL_7;
  }
  if ( !v5 )
  {
LABEL_7:
    func = get_func(a3);
    v9 = (__int64 *)a1[3];
    if ( func )
      v9 = (__int64 *)a1[2];
    v10 = (_QWORD *)*v9;
    v11 = v9[1];
    v12 = v9;
    v13 = (_QWORD *)(*v9 + 8 * v11);
    if ( v10 == v13 )
      goto LABEL_14;
    v14 = v10;
    while ( *v14 != a3 )
    {
      if ( v13 == ++v14 )
        goto LABEL_14;
    }
    if ( v13 == v14 )
    {
LABEL_14:
      if ( v12[2] < (unsigned __int64)(v11 + 1) )
      {
        v15 = qvector_reserve(v12, v10, v11 + 1, 8);
        v16 = v12[1];
        *v12 = v15;
        v13 = (_QWORD *)(v15 + 8 * v16);
      }
      *v13 = a3;
      ++v12[1];
    }
  }
  return 1;
}
