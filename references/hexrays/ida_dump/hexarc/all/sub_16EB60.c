unsigned __int64 __fastcall sub_16EB60(unsigned __int8 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *a1;
  if ( (unsigned __int8)result <= 9u )
  {
    v2 = 610;
    if ( _bittest64(&v2, result) )
      a1[1] |= 8u;
  }
  return result;
}
