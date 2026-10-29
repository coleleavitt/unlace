__int64 __fastcall sub_102CD50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  bool v4; // zf

  v2 = a2[1];
  v3 = *a2;
  *(_DWORD *)(a1 + 516) = 0;
  if ( v3 == v2 )
    return 1;
  do
  {
    while ( !sub_990D60(v3, "+transactional-execution") )
    {
      *(_BYTE *)(a1 + 516) = 1;
LABEL_4:
      v3 += 32;
      if ( v2 == v3 )
        goto LABEL_8;
    }
    if ( sub_990D60(v3, "+vector") )
    {
      if ( sub_990D60(v3, "+soft-float") )
      {
        if ( !sub_990D60(v3, "+unaligned-symbols") )
          *(_BYTE *)(a1 + 519) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 518) = 1;
      }
      goto LABEL_4;
    }
    v3 += 32;
    *(_BYTE *)(a1 + 517) = 1;
  }
  while ( v2 != v3 );
LABEL_8:
  v4 = ((*(_BYTE *)(a1 + 518) ^ 1) & *(_BYTE *)(a1 + 517)) == 0;
  *(_BYTE *)(a1 + 517) &= *(_BYTE *)(a1 + 518) ^ 1;
  if ( !v4 && *(_DWORD *)(a1 + 260) != 16 )
    *(_DWORD *)(a1 + 68) = 64;
  return 1;
}

