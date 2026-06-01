unsigned int *__fastcall sub_B87B0(unsigned int *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int *result; // rax
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int *v7; // r10

  if ( a3 >= a4 || !a2 )
    return nullptr;
  result = sub_B85F0(a1, (__int64)&a1[3 * a2], a3);
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

