__int64 __fastcall sub_3BD7D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *range; // rax
  __int64 result; // rax
  __int64 v5; // rbp

  v2 = *(_QWORD *)(a1 + 1672);
  range = (_QWORD *)rangeset_t_find_range(v2 + 1120, a2);
  if ( range )
    return range[1] - *range;
  v5 = *(_QWORD *)(v2 + 1016);
  result = sub_8B8E80(v5, a2);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL) - **(_QWORD **)(v5 + 56);
  return result;
}
