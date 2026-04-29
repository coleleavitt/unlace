__int64 __fastcall sub_7A010(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rbx

  result = debug;
  if ( (debug & 0x400000) != 0 )
  {
    sub_29350();
    v2 = *a1;
    if ( 24 * a1[1] )
    {
      do
      {
        v2 += 24;
        sub_29350();
      }
      while ( v2 != *a1 + 24 * a1[1] );
    }
    sub_29350();
    v3 = a1[3];
    result = 56 * a1[4];
    if ( result )
    {
      do
      {
        v3 += 56;
        sub_29350();
        result = a1[3] + 56 * a1[4];
      }
      while ( v3 != result );
    }
  }
  return result;
}
