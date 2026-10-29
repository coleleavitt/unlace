__int64 __fastcall sub_107DD70(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a3 == 10 )
  {
    result = a1[584];
    if ( *(_QWORD *)a2 == 0x6F6C662D64726168LL && *(_WORD *)(a2 + 8) == 29793 )
      return result;
    return 0;
  }
  if ( a3 == 14 )
  {
    if ( *(_QWORD *)a2 == 0x6F6C662D64726168LL && *(_DWORD *)(a2 + 8) == 1630368865 && *(_WORD *)(a2 + 12) == 26978 )
      return a1[585];
    return 0;
  }
  result = a1[586];
  switch ( a3 )
  {
    case 8LL:
      if ( *(_QWORD *)a2 != 0x66735F3276757066LL )
      {
        if ( *(_QWORD *)a2 == 0x66645F3276757066LL )
          return a1[587];
        result = a1[588];
        if ( *(_QWORD *)a2 != 0x66735F3376757066LL )
        {
          result = a1[589];
          if ( *(_QWORD *)a2 != 0x66645F3376757066LL )
            return 0;
        }
      }
      break;
    case 6LL:
      result = a1[590];
      if ( *(_DWORD *)a2 != 1886610550 || *(_WORD *)(a2 + 4) != 12918 )
      {
        result = a1[591];
        if ( *(_DWORD *)a2 != 1886610550 || *(_WORD *)(a2 + 4) != 12662 )
          return 0;
      }
      break;
    case 5LL:
      result = a1[592];
      if ( *(_DWORD *)a2 != 1987081060 || *(_BYTE *)(a2 + 4) != 50 )
      {
        if ( *(_DWORD *)a2 == 1915970867 && *(_BYTE *)(a2 + 4) == 49 )
          return a1[593];
        return 0;
      }
      break;
    default:
      return 0;
  }
  return result;
}
