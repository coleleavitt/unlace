unsigned int *__fastcall sub_B8760(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned int *result; // rax
  unsigned int v4; // edx
  unsigned int *v5; // r9

  result = nullptr;
  if ( a2 )
  {
    result = sub_B85F0(a1, (__int64)&a1[3 * a2], a3);
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

