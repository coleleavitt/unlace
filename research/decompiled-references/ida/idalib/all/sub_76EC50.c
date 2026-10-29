_WORD *__fastcall sub_76EC50(unsigned __int16 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  _WORD *result; // rax
  unsigned int v4; // edx

  v2 = *a1;
  if ( !(_WORD)v2 || (result = &byte_2CCCDE0[v2], result[4]) )
    sub_76E790(a1);
  v4 = (unsigned __int16)result[5];
  *a2 = v4;
  if ( v4 > 8 )
    return *(_WORD **)result;
  return result;
}
