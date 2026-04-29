unsigned __int64 __fastcall sub_11680(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  __int16 v8; // si
  char v9; // al
  char v10; // al

  v3 = a1[9];
  v4 = a1[8];
  if ( v3 < v4 )
  {
    v5 = a1[7];
    v6 = v3 + 1;
    a1[9] = v3 + 1;
    switch ( *(_BYTE *)(v5 + v3) )
    {
      case 'G':
        v8 = 97;
        return sub_CD20(a1, v8, a2);
      case 'M':
        v8 = 142;
        return sub_CD20(a1, v8, a2);
      case 'W':
        v8 = 48;
        return sub_CD20(a1, v8, a2);
      case 'a':
        if ( v4 <= v6 )
          return 0;
        a1[9] = v3 + 2;
        v10 = *(_BYTE *)(v5 + v3 + 1);
        if ( v10 == 111 )
        {
          v8 = 145;
          return sub_CD20(a1, v8, a2);
        }
        if ( v10 <= 111 )
        {
          if ( v10 == 79 )
          {
            v8 = 159;
          }
          else
          {
            if ( v10 != 80 )
              return 0;
            v8 = 147;
          }
          return sub_CD20(a1, v8, a2);
        }
        v8 = 240;
        if ( v10 == 117 )
          return sub_CD20(a1, v8, a2);
        return 0;
      case 'g':
        v8 = 95;
        return sub_CD20(a1, v8, a2);
      case 'i':
        v8 = 120;
        return sub_CD20(a1, v8, a2);
      case 'l':
        if ( v4 <= v6 )
          return 0;
        a1[9] = v3 + 2;
        v9 = *(_BYTE *)(v5 + v3 + 1);
        if ( v9 == 112 )
        {
          v8 = 146;
          return sub_CD20(a1, v8, a2);
        }
        if ( v9 > 112 )
        {
          v8 = 239;
          if ( v9 == 117 )
            return sub_CD20(a1, v8, a2);
        }
        else
        {
          if ( v9 == 79 )
          {
            v8 = 158;
            return sub_CD20(a1, v8, a2);
          }
          if ( v9 == 111 )
          {
            v8 = 144;
            return sub_CD20(a1, v8, a2);
          }
        }
        break;
      case 'm':
        v8 = 131;
        return sub_CD20(a1, v8, a2);
      case 'p':
        return a2;
      case 'r':
        v8 = 193;
        return sub_CD20(a1, v8, a2);
      case 's':
        v8 = 204;
        return sub_CD20(a1, v8, a2);
      case 'w':
        v8 = 246;
        return sub_CD20(a1, v8, a2);
      default:
        return 0;
    }
  }
  return 0;
}
