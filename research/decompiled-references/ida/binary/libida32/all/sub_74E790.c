_WORD *__fastcall sub_74E790(unsigned __int16 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  _WORD *result; // rax
  unsigned int v4; // edx

  v2 = *a1;
  if ( !(_WORD)v2 || (result = &byte_2CA2EE0[v2], result[4]) )
    sub_74E2D0(a1);
  v4 = (unsigned __int16)result[5];
  *a2 = v4;
  if ( v4 > 8 )
    return *(_WORD **)result;
  return result;
}

