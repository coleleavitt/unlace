__int64 __fastcall sub_1CAFA60(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rbp

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 3);
  v3 = a1;
  if ( v2 >> 2 > 0 )
  {
    v4 = a1 + 96 * (v2 >> 2);
    do
    {
      if ( sub_F1D530(v3) )
        return v3;
      v5 = v3 + 24;
      if ( sub_F1D530(v3 + 24) )
        return v5;
      v5 = v3 + 48;
      if ( sub_F1D530(v3 + 48) )
        return v5;
      v5 = v3 + 72;
      if ( sub_F1D530(v3 + 72) )
        return v5;
      v3 += 96;
    }
    while ( v3 != v4 );
    v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v3) >> 3);
  }
  if ( v2 == 2 )
  {
LABEL_19:
    v5 = v3;
    if ( !sub_F1D530(v3) )
    {
      v3 += 24;
      goto LABEL_14;
    }
    return v5;
  }
  if ( v2 == 3 )
  {
    v5 = v3;
    if ( sub_F1D530(v3) )
      return v5;
    v3 += 24;
    goto LABEL_19;
  }
  v5 = a2;
  if ( v2 != 1 )
    return v5;
LABEL_14:
  if ( !sub_F1D530(v3) )
    return a2;
  return v3;
}
