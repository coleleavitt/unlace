__int64 __fastcall sub_3C7EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7,
        __int64 a8)
{
  unsigned int v9; // edx
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    netnode_supset(a4, a6, a7, a8, (unsigned __int8)a5);
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
        sub_2BD270(a1, a3);
        break;
      case 'd':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D0230(a1, a3);
        break;
      case 'f':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BD320(a1, a3);
        break;
      case 'g':
        sub_2BF790(a1, a3, a6, a7, a8);
        return 1;
      case 'i':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BD550(a1, a3);
        break;
      case 'l':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2CB670(a1, a3);
        break;
      case 'm':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BD850(a1, a3);
        break;
      case 'n':
        v9 = 0;
        if ( a8 != 4 )
          return v9;
        v11[0] = (int)*a7;
        netnode_supset(a4, a6, v11, 8, 110);
        break;
      case 'u':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BD7A0(a1, a3);
        break;
      case 'v':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D2BA0(a1, a3);
        break;
      default:
        return 0;
    }
  }
  return 1;
}
