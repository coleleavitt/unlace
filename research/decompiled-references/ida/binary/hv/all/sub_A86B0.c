__int64 __fastcall sub_A86B0(_WORD *a1, int a2)
{
  _WORD *v2; // rdx

  v2 = &a1[a2];
  while ( *a1 )
  {
    if ( a1 == v2 )
      return 2;
    ++a1;
  }
  return 1;
}

