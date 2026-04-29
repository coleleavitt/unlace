__int64 __fastcall sub_28750(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rbx

  sub_283D0(a1, a2);
  v2 = *a2;
  result = 24 * a2[1];
  if ( result )
  {
    do
    {
      v2 += 24;
      ea2node();
      ea2node();
      netnode_altshift();
      v4 = *a2;
      result = *a2 + 24 * a2[1];
    }
    while ( v2 != result );
    if ( v4 != v2 )
    {
      do
      {
        v4 += 24;
        ea2node();
        ea2node();
        netnode_altshift();
        result = *a2 + 24 * a2[1];
      }
      while ( v4 != result );
    }
  }
  return result;
}
