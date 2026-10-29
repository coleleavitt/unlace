__int64 __fastcall sub_3C4270(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  char v7; // al
  unsigned int v8; // edx

  v6 = sub_505D70(a1 + 1624, a2);
  if ( !v6 )
    return a3;
  v7 = *(_BYTE *)(v6 + 43);
  if ( a4 <= 1 || !v7 )
    return a3;
  if ( a3 == 1 )
  {
    a3 = 2;
    if ( a4 == 2 )
      return a3;
    if ( v7 != 2 )
      return 2 * (unsigned int)(a4 != 3) + 2;
    a3 = 3;
    goto LABEL_20;
  }
  if ( a4 == 2 )
    return a3;
  if ( v7 == 2 )
  {
    if ( (int)a3 > 2 )
    {
      if ( a4 == 3 || (int)a3 > 4 )
        return a3;
      return (unsigned int)(a4 != 4) + 4;
    }
    ++a3;
LABEL_20:
    if ( a4 == 3 )
      return a3;
    return (unsigned int)(a4 != 4) + 4;
  }
  v8 = a3;
  if ( (int)a3 < 4 )
    a3 = 4;
  if ( a4 == 3 )
    return v8;
  return a3;
}
