unsigned __int64 __fastcall sub_3BD580(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbx
  unsigned __int64 range; // rax
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
  v3 = sub_8B8F20(*(_QWORD *)(v2 + 1016));
  range = rangeset_t_next_range(v2 + 1120, a2);
  if ( v3 > range )
    v3 = range;
  if ( !(unsigned __int8)sub_3FC580(a1) )
    return v3;
  result = sub_3FCF70(a1, a2);
  if ( v3 != -1 && result >= v3 )
    return v3;
  return result;
}
