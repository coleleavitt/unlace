unsigned __int64 __fastcall next_addr(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r12
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( (unsigned __int8)sub_3FC580(v1) )
  {
    v2 = sub_3FCE10(v1, a1);
    result = a1 + 1;
    if ( v2 == a1 + 1 )
      return result;
  }
  else
  {
    v2 = -1;
  }
  result = rangeset_t_next_addr(v1 + 1040, a1);
  if ( result > v2 )
    return v2;
  return result;
}
