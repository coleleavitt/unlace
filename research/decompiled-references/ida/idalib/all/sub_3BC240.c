__int64 __fastcall sub_3BC240(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 0;
  if ( (unsigned __int8)sub_3FD360() || rangeset_t_find_range(a1 + 1040, a2) )
    return 1;
  result = 0;
  if ( !*a3 )
    return sub_3FC5C0(a1);
  return result;
}
