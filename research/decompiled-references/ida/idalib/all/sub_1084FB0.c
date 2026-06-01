char __fastcall sub_1084FB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  char result; // al

  v3 = *(_DWORD *)(a1 + 248);
  result = v3 != 14;
  switch ( a3 )
  {
    case 11LL:
      if ( *(_QWORD *)a2 == 0x637261676E6F6F6CLL && *(_WORD *)(a2 + 8) == 13160 && *(_BYTE *)(a2 + 10) == 50 )
        return result;
      if ( *(_QWORD *)a2 == 0x637261676E6F6F6CLL && *(_WORD *)(a2 + 8) == 13928 && *(_BYTE *)(a2 + 10) == 52 )
        return v3 == 14;
      return 0;
    case 5LL:
      if ( *(_DWORD *)a2 != 1768043059 || *(_BYTE *)(a2 + 4) != 116 )
      {
        if ( *(_DWORD *)a2 == 1768043574 && *(_BYTE *)(a2 + 4) == 116 )
          return v3 == 14;
        return 0;
      }
      break;
    case 3LL:
      result = *(_BYTE *)(a1 + 578);
      if ( *(_WORD *)a2 != 29548 || *(_BYTE *)(a2 + 2) != 120 )
        return 0;
      break;
    case 4LL:
      result = 0;
      if ( *(_DWORD *)a2 == 2020827500 )
        return *(_BYTE *)(a1 + 579);
      break;
    default:
      return 0;
  }
  return result;
}
