unsigned int *__fastcall sub_5AFCE0(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax

  result = sub_4EE820(a1 + 1624, a2);
  if ( result )
  {
    if ( *((char *)result + 9) < 0 )
      return sub_4EE820(a1 + 1624, result[4]);
  }
  return result;
}

