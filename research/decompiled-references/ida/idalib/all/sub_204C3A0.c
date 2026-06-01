__int64 __fastcall sub_204C3A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    if ( *(_BYTE *)v2 > 0x1Cu )
      break;
    v1 = *(_QWORD *)(v1 + 8);
    if ( !v1 )
      return 0;
  }
  v3 = *(_QWORD *)(v1 + 8);
  result = *(_QWORD *)(v2 + 40);
  if ( v3 )
  {
    while ( **(_BYTE **)(v3 + 24) <= 0x1Cu )
    {
      v3 = *(_QWORD *)(v3 + 8);
      if ( !v3 )
        return result;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 24) + 40LL) != result )
      return 0;
    while ( 1 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      if ( !v3 )
        break;
      while ( **(_BYTE **)(v3 + 24) <= 0x1Cu )
      {
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v3 )
          return result;
      }
      if ( result != *(_QWORD *)(*(_QWORD *)(v3 + 24) + 40LL) )
        return 0;
    }
  }
  return result;
}
