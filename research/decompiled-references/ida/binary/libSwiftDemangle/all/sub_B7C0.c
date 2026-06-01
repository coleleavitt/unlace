__int64 __fastcall sub_B7C0(_WORD *a1, __int64 a2)
{
  bool v2; // r8
  __int64 result; // rax
  bool v4; // r8
  bool v5; // r8
  bool v6; // r8
  bool v7; // r8
  bool v8; // r8
  bool v9; // r8
  bool v10; // r8
  bool v11; // r8
  bool v12; // r8

  if ( a2 != 2 )
    goto LABEL_2;
  switch ( *a1 )
  {
    case 0x6C61:
      return 0;
    case 0x6163:
      return 1;
    case 0x6174:
      return 2;
    case 0x6564:
      return 3;
    case 0x7878:
      return 4;
    case 0x5858:
      return 5;
    case 0x7858:
      return 6;
    case 0x5043:
      return 7;
    case 0x7043:
      return 8;
    case 0x7063:
      return 9;
    case 0x6B54:
      return 10;
    case 0x6B74:
      return 11;
    case 0x7270:
      return 12;
  }
LABEL_2:
  v2 = sub_B5C0(a1, a2, &unk_38000, 2u);
  result = 13;
  if ( !v2 )
  {
    v4 = sub_B5C0(a1, a2, &unk_38003, 2u);
    result = 14;
    if ( !v4 )
    {
      v5 = sub_B5C0(a1, a2, &unk_38006, 2u);
      result = 15;
      if ( !v5 )
      {
        v6 = sub_B5C0(a1, a2, &unk_38009, 2u);
        result = 16;
        if ( !v6 )
        {
          v7 = sub_B5C0(a1, a2, &unk_3800C, 2u);
          result = 17;
          if ( !v7 )
          {
            v8 = sub_B5C0(a1, a2, &unk_3800F, 2u);
            result = 18;
            if ( !v8 )
            {
              v9 = sub_B5C0(a1, a2, &unk_38012, 2u);
              result = 19;
              if ( !v9 )
              {
                v10 = sub_B5C0(a1, a2, "up", 2u);
                result = 20;
                if ( !v10 )
                {
                  v11 = sub_B5C0(a1, a2, &unk_38015, 2u);
                  result = 21;
                  if ( !v11 )
                  {
                    v12 = sub_B5C0(a1, a2, "et", 2u);
                    result = 22;
                    if ( !v12 )
                      return !sub_B5C0(a1, a2, "st", 2u) ? -1 : 0x17;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

