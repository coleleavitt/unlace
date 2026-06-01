__int64 __fastcall sub_22B3FD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 5LL:
      if ( *(_DWORD *)a1 == 1819308129 && *(_BYTE *)(a1 + 4) == 101 )
        return 1;
      goto LABEL_3;
    case 2LL:
      if ( *(_WORD *)a1 == 25456 )
        return 2;
      if ( *(_WORD *)a1 == 25967 )
        return 13;
      return 0;
    case 4LL:
      if ( *(_DWORD *)a1 == 1768252275 )
        return 3;
      if ( *(_DWORD *)a1 == 1634952557 )
        return 11;
      result = 12;
      if ( *(_DWORD *)a1 != 1702065523 )
        return 0;
      break;
    case 3LL:
      if ( *(_WORD *)a1 == 26995 && *(_BYTE *)(a1 + 2) == 101 )
        return 3;
      if ( *(_WORD *)a1 == 29542 && *(_BYTE *)(a1 + 2) == 108 )
        return 4;
      if ( *(_WORD *)a1 == 25193 && *(_BYTE *)(a1 + 2) == 109 )
        return 5;
      if ( *(_WORD *)a1 == 28009 && *(_BYTE *)(a1 + 2) == 103 )
        return 6;
      if ( *(_WORD *)a1 == 29805 && *(_BYTE *)(a1 + 2) == 105 )
        return 7;
      if ( *(_WORD *)a1 == 29539 && *(_BYTE *)(a1 + 2) == 114 )
        return 9;
      if ( *(_WORD *)a1 == 28001 && *(_BYTE *)(a1 + 2) == 100 )
        return 10;
      return 0;
    case 6LL:
      if ( *(_DWORD *)a1 != 1684633198 || *(_WORD *)(a1 + 4) != 24937 )
        return 0;
      return 8;
    default:
LABEL_3:
      if ( a2 == 5 && *(_DWORD *)a1 == 1702129257 && *(_BYTE *)(a1 + 4) == 108 )
        return 14;
      return 0;
  }
  return result;
}
