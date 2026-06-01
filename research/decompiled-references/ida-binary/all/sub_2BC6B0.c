__int64 __fastcall sub_2BC6B0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx

  v2 = 0;
  if ( *a1 == *a2 )
  {
    switch ( *a1 )
    {
      case 1:
        v2 = 0;
        if ( a2[1] == a1[1] && a1[2] == a2[2] )
          goto LABEL_5;
        break;
      case 2:
LABEL_5:
        LOBYTE(v2) = a1[3] == a2[3];
        break;
      case 3:
        v2 = 0;
        if ( a1[3] == a2[3] )
          LOBYTE(v2) = a1[4] == a2[4];
        break;
      case 4:
        v2 = 0;
        if ( a1[3] == a2[3] && a1[5] == a2[5] )
          LOBYTE(v2) = a1[6] == a2[6];
        break;
      case 5:
        v2 = 0;
        if ( a1[7] == a2[7] && a1[8] == a2[8] )
          LOBYTE(v2) = a1[9] == a2[9];
        break;
      default:
        v2 = 1;
        break;
    }
  }
  return v2;
}
