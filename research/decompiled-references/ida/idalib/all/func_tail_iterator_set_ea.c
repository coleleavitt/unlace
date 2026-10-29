bool __fastcall func_tail_iterator_set_ea(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 *v4; // rax
  unsigned __int64 *v6; // rax

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( a2 >= *(_QWORD *)(a1 + 16) )
      return a2 < *(_QWORD *)(a1 + 24);
    return 0;
  }
  v3 = *(int *)(a1 + 8);
  if ( (int)v3 < 0 || (int)v3 >= *(_DWORD *)(v2 + 128) )
  {
    if ( a2 >= *(_QWORD *)v2 && a2 < *(_QWORD *)(v2 + 8) )
      return 1;
    goto LABEL_14;
  }
  v4 = (unsigned __int64 *)(*(_QWORD *)(v2 + 136) + 16 * v3);
  if ( a2 >= *v4 && a2 < v4[1] )
    return 1;
  if ( a2 < *(_QWORD *)v2 || a2 >= *(_QWORD *)(v2 + 8) )
  {
LABEL_14:
    v6 = sub_5C93A0(*(_QWORD **)(qword_2CCB598 + 1672), *(_QWORD *)a1, a2);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 8) = ((__int64)v6 - *(_QWORD *)(v2 + 136)) >> 4;
      return 1;
    }
    return 0;
  }
  *(_DWORD *)(a1 + 8) = -1;
  return 1;
}
