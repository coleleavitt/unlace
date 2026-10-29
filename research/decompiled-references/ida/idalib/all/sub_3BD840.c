unsigned __int64 __fastcall sub_3BD840(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 result; // rax

  v2 = sub_3BD7D0(*a1, a2);
  if ( !(unsigned __int8)sub_3FC580(a1) )
    return v2;
  result = sub_3FCF20(a1, a2);
  if ( result >= v2 || result == 0 )
  {
    if ( v2 )
      return v2;
  }
  return result;
}
