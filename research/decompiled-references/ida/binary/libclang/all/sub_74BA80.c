__int64 __fastcall sub_74BA80(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  switch ( a2 )
  {
    case 4LL:
      v3 = 0;
      if ( *(_DWORD *)a1 == 1701736302 )
      {
LABEL_5:
        *a3 = v3;
        return 1;
      }
      if ( *(_DWORD *)a1 == 2037411683 )
      {
        v3 = 2;
        goto LABEL_5;
      }
      v3 = 3;
      if ( *(_DWORD *)a1 == 1953066601 )
        goto LABEL_5;
      break;
    case 5LL:
      if ( *(_DWORD *)a1 == 1869376609 )
      {
        v3 = 1;
        if ( *(_BYTE *)(a1 + 4) == 99 )
          goto LABEL_5;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a1 == 0x43656C626174756DLL )
      {
        v3 = 4;
        if ( *(_DWORD *)(a1 + 7) == 2037411651 )
          goto LABEL_5;
      }
      break;
    default:
      if ( a2 == 3 && *(_WORD *)a1 == 25966 && *(_BYTE *)(a1 + 2) == 119 )
      {
        v3 = 5;
        goto LABEL_5;
      }
      break;
  }
  return 0;
}

