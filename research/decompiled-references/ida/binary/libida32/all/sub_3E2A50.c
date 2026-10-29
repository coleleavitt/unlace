__int64 __fastcall sub_3E2A50(__int64 *a1, int a2, int a3)
{
  _QWORD *v5; // rbp
  int *v6; // rsi
  __int64 v7; // rdx
  int *v8; // rcx
  int *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a2 && (a2 <= 0 || a2 >= (unsigned __int64)a1[1] || !*(_QWORD *)(*a1 + 40LL * a2))
    || a3 <= 0
    || a3 >= (unsigned __int64)a1[15]
    || !*(_QWORD *)(a1[14] + 16LL * a3) )
  {
    return 0;
  }
  if ( !a2 && !a1[1] )
    sub_3E1240(a1, 1u);
  v5 = (_QWORD *)(*a1 + 40LL * a2);
  v6 = (int *)v5[2];
  v7 = v5[3];
  v8 = &v6[v7];
  if ( v6 != v8 )
  {
    v9 = (int *)v5[2];
    while ( *v9 != a3 )
    {
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
    if ( v9 != v8 )
      return 0;
  }
LABEL_17:
  v10 = v7 + 1;
  if ( v5[4] < v10 )
  {
    v11 = qvector_reserve(v5 + 2, v6, v10, 4);
    v12 = v5[3];
    v5[2] = v11;
    v8 = (int *)(v11 + 4 * v12);
  }
  *v8 = a3;
  ++v5[3];
  return 1;
}

