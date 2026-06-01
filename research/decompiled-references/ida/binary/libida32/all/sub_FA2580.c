__int64 __fastcall sub_FA2580(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = a1[1];
  if ( !v1 )
  {
    LODWORD(v3) = -1;
    return (unsigned int)v3;
  }
  result = (unsigned int)**a1 - 42;
  if ( **a1 == 42 )
  {
    v3 = (__int64)(v1 - 1);
    result = 0x7FFFFFFF;
    if ( v3 <= 0x7FFFFFFF )
    {
      result = 0x80000000LL;
      if ( v3 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v3;
    }
  }
  return result;
}

