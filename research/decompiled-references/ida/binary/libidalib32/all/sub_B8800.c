unsigned int *__fastcall sub_B8800(unsigned int *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int *result; // rax
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  unsigned int *v7; // r11

  if ( !a2 || a3 >= a4 )
    return nullptr;
  result = sub_B85F0(a1, (__int64)&a1[3 * a2], a4 - 1);
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

