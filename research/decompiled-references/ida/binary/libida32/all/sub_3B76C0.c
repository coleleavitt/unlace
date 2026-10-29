__int64 __fastcall sub_3B76C0(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 0;
  if ( (unsigned __int8)sub_3EA400() || rangeset_t_find_range(a1 + 1032, a2) )
    return 1;
  result = 0;
  if ( !*a3 )
    return sub_3E9680(a1);
  return result;
}

