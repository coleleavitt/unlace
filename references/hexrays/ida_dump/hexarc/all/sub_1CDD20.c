__int64 __fastcall sub_1CDD20(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 first_cref_from; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // ebx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 next_cref_from; // r14
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  first_cref_from = get_first_cref_from(v3);
  if ( first_cref_from >= v3 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v5 + 1 != v6 && first_cref_from >= v6 && v5 >= first_cref_from )
    {
      v7 = *(_DWORD *)(a1 + 72) + 1;
      goto LABEL_11;
    }
    result = 2;
    if ( first_cref_from == -1 )
      return result;
  }
  v9 = sub_60B30(*(_QWORD *)(a1 + 64), first_cref_from);
  if ( v9 && v9[4] == first_cref_from )
  {
    v13 = *((_DWORD *)v9 + 18);
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v19 = qvector_reserve(a2, v15, v14 + 1, 4);
      *a2 = v19;
      v15 = v19;
      v14 = a2[1];
    }
    *(_DWORD *)(v15 + 4 * v14) = v13;
    ++a2[1];
    next_cref_from = get_next_cref_from(v3, first_cref_from);
    v17 = sub_60B30(*(_QWORD *)(a1 + 64), next_cref_from);
    if ( !v17 || v17[4] != next_cref_from )
      return 3;
  }
  v10 = sub_62A50(*(_QWORD *)(a1 + 64), v3, first_cref_from, 1);
  result = 0;
  if ( !v10 )
    return result;
  sub_AEC00((_QWORD *)a1, v3, *(_DWORD *)(v10 + 72));
  v7 = *(_DWORD *)(v10 + 72);
LABEL_11:
  v11 = a2[1];
  v12 = *a2;
  if ( a2[2] < (unsigned __int64)(v11 + 1) )
  {
    v18 = qvector_reserve(a2, v12, v11 + 1, 4);
    *a2 = v18;
    v12 = v18;
    v11 = a2[1];
  }
  *(_DWORD *)(v12 + 4 * v11) = v7;
  ++a2[1];
  return 3;
}
