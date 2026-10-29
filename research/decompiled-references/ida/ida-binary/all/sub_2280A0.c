unsigned __int64 *__fastcall sub_2280A0(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r9

  result = nullptr;
  if ( a2 )
  {
    result = sub_227F30(a1, (__int64)&a1[3 * a2], a3);
    if ( result == a1 || v4 < *(result - 3) || v4 >= *(result - 2) )
    {
      if ( v5 == result || v4 < *result || v4 >= result[1] )
        return nullptr;
    }
    else
    {
      result -= 3;
    }
  }
  return result;
}
