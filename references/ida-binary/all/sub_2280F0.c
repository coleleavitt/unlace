unsigned __int64 *__fastcall sub_2280F0(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // r10

  if ( a3 >= a4 || !a2 )
    return nullptr;
  result = sub_227F30(a1, (__int64)&a1[3 * a2], a3);
  if ( result != a1 && v5 >= *(result - 3) && v5 < *(result - 2) )
  {
    result -= 3;
    return result;
  }
  if ( v7 == result )
    return nullptr;
  if ( *result >= v6 )
    return nullptr;
  return result;
}
