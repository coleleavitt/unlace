unsigned int *__fastcall sub_848390(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  __int64 v3; // rdx

  result = *(unsigned int **)(sub_15D1F10(a2) + 24);
  if ( result )
  {
    v3 = *result;
    result = *(unsigned int **)(a1 + 208);
    if ( result )
    {
      if ( (unsigned int)v3 >= *(result - 1) )
        return nullptr;
      else
        return *(unsigned int **)&result[2 * v3];
    }
  }
  return result;
}

