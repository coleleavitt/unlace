unsigned __int64 __fastcall sub_3BD700(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 *range; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 result; // rax
  __int64 v6; // r13

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
  range = (unsigned __int64 *)rangeset_t_find_range(v2 + 1120, a2);
  if ( !range )
  {
    v6 = *(_QWORD *)(v2 + 1016);
    v4 = -1;
    if ( !sub_8B8E80(v6, a2) )
      goto LABEL_3;
    range = *(unsigned __int64 **)(v6 + 56);
  }
  v4 = *range;
LABEL_3:
  if ( !(unsigned __int8)sub_3FC580(a1) )
    return v4;
  result = sub_3FCED0(a1, a2);
  if ( (v4 >= result || result == -1) && v4 != -1 )
    return v4;
  return result;
}
