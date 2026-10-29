__int64 __fastcall sub_BBC5B0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // rsi

  v1 = *(__int64 **)(a1 + 1064);
  if ( !v1 )
    return 0;
  v2 = &v1[*((unsigned int *)v1 - 1)];
  if ( v2 == v1 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *v1++;
    v3 |= sub_BBBEE0(a1, v4);
  }
  while ( v2 != v1 );
  return v3;
}

