unsigned __int64 *__fastcall sub_5CAA10(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax

  result = sub_505D70(a1 + 1704, a2);
  if ( result )
  {
    if ( *((char *)result + 17) < 0 )
      return sub_505D70(a1 + 1704, result[3]);
  }
  return result;
}
