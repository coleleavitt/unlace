__int64 __fastcall sub_1D4E20(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 first_cref_from; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // ebx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 next_cref_from; // r14
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  first_cref_from = get_first_cref_from();
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
  v9 = sub_670B0(*(_QWORD *)(a1 + 64), first_cref_from);
  if ( v9 && v9[4] == first_cref_from )
  {
    v14 = *((_DWORD *)v9 + 18);
    v15 = a2[1];
    v16 = *a2;
    if ( a2[2] < (unsigned __int64)(v15 + 1) )
    {
      v20 = qvector_reserve((__int64)a2, v16, v15 + 1, 4);
      *a2 = v20;
      v16 = v20;
      v15 = a2[1];
    }
    *(_DWORD *)(v16 + 4 * v15) = v14;
    ++a2[1];
    next_cref_from = get_next_cref_from();
    v18 = sub_670B0(*(_QWORD *)(a1 + 64), next_cref_from);
    if ( !v18 || v18[4] != next_cref_from )
      return 3;
  }
  v11 = sub_68FD0(*(_QWORD *)(a1 + 64), v3, first_cref_from, 1);
  result = 0;
  if ( !v11 )
    return result;
  sub_B52C0((_QWORD *)a1, v3, *(unsigned int *)(v11 + 72), v10);
  v7 = *(_DWORD *)(v11 + 72);
LABEL_11:
  v12 = a2[1];
  v13 = *a2;
  if ( a2[2] < (unsigned __int64)(v12 + 1) )
  {
    v19 = qvector_reserve((__int64)a2, v13, v12 + 1, 4);
    *a2 = v19;
    v13 = v19;
    v12 = a2[1];
  }
  *(_DWORD *)(v13 + 4 * v12) = v7;
  ++a2[1];
  return 3;
}
