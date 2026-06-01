__int64 __fastcall sub_3C45A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // edx

  if ( a3 == -1 )
  {
LABEL_5:
    netnode_supset();
  }
  else
  {
    switch ( a5 )
    {
      case 'A':
      case 'F':
      case 'a':
      case 't':
        return 1;
      case 'c':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BF670(a1, a3, 0);
        break;
      case 'd':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D2630(a1, a3, 0);
        break;
      case 'f':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BF720(a1, a3, 0);
        break;
      case 'g':
        sub_2C1B90(a1, a3, a6, a7, a8);
        return 1;
      case 'i':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BF950(a1, a3, 0);
        break;
      case 'l':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2CDA70(a1, a3, 0);
        break;
      case 'm':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BFC50(a1, a3, 0);
        break;
      case 'n':
        v9 = 0;
        if ( a8 == 4 )
          goto LABEL_5;
        return v9;
      case 'u':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BFBA0(a1, a3, 0);
        break;
      case 'v':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D4FA0(a1, a3, 0);
        break;
      default:
        return 0;
    }
  }
  return 1;
}
