bool __fastcall func_tail_iterator_set_ea(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int *v4; // rax
  unsigned int *v6; // rax

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( a2 >= *(_DWORD *)(a1 + 12) )
      return a2 < *(_DWORD *)(a1 + 16);
    return 0;
  }
  v3 = *(int *)(a1 + 8);
  if ( (int)v3 < 0 || (int)v3 >= *(_DWORD *)(v2 + 104) )
  {
    if ( a2 >= *(_DWORD *)v2 && a2 < *(_DWORD *)(v2 + 4) )
      return 1;
    goto LABEL_14;
  }
  v4 = (unsigned int *)(*(_QWORD *)(v2 + 112) + 8 * v3);
  if ( a2 >= *v4 && a2 < v4[1] )
    return 1;
  if ( a2 < *(_DWORD *)v2 || a2 >= *(_DWORD *)(v2 + 4) )
  {
LABEL_14:
    v6 = sub_5AE770(*(_QWORD **)(qword_2CA1698 + 1480), *(_QWORD *)a1, a2);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 8) = ((__int64)v6 - *(_QWORD *)(v2 + 112)) >> 3;
      return 1;
    }
    return 0;
  }
  *(_DWORD *)(a1 + 8) = -1;
  return 1;
}

