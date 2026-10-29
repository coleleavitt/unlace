__int64 __fastcall sub_102BC50(unsigned __int8 *a1, int a2, char a3)
{
  __int64 result; // rax

  if ( a2 == 8 )
    return (unsigned int)(a3 == 0) + 1;
  if ( a2 == a1[12] )
    return (unsigned int)(a3 == 0) + 3;
  if ( a2 == a1[14] )
    return (unsigned int)(a3 == 0) + 5;
  if ( a2 == a1[30] )
    return (unsigned int)(a3 == 0) + 7;
  result = 0;
  if ( a2 == a1[32] )
    return (unsigned int)(a3 == 0) + 9;
  return result;
}
