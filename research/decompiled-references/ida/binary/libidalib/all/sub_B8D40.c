unsigned __int64 *__fastcall sub_B8D40(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 *v7; // r11

  if ( !a2 || a3 >= a4 )
    return nullptr;
  result = sub_B8B30(a1, (__int64)&a1[3 * a2], a4 - 1);
  if ( v7 == result )
    result -= 3;
  while ( v5 >= result[1] || *result >= v6 )
  {
    if ( result == a1 )
      return nullptr;
    result -= 3;
  }
  return result;
}

