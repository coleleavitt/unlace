unsigned __int64 __fastcall sub_220A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx

  if ( (unsigned int)(a2 - 96) > 0xC )
  {
    result = 0;
    if ( (unsigned int)(a2 - 128) <= 9 )
    {
      switch ( a2 )
      {
        case 129:
        case 130:
        case 131:
          result = 2;
          break;
        case 132:
        case 133:
        case 134:
          result = 4;
          break;
        case 135:
          result = (-(__int64)((*(_BYTE *)(a1 + 64) & 4) == 0) & 0xFFFFFFFFFFFFFFFELL) + 4;
          break;
        case 136:
          result = (-(__int64)((*(_BYTE *)(a1 + 64) & 2) == 0) & 0xFFFFFFFFFFFFFFFELL) + 4;
          break;
        case 137:
          result = (-(__int64)((*(_BYTE *)(a1 + 64) & 1) == 0) & 0xFFFFFFFFFFFFFFFELL) + 4;
          break;
        default:
          result = 1;
          break;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 'a':
        v10 = 23;
        v11 = 8;
        v12 = 4;
        goto LABEL_12;
      case 'b':
        return sub_21F90(a1, 5, 19, 6, 4, 1, 2);
      case 'c':
        v10 = 32;
        v11 = 6;
        goto LABEL_11;
      case 'd':
        v8 = 8;
        v9 = 4;
        goto LABEL_9;
      case 'e':
        v8 = 23;
        v9 = 20;
        goto LABEL_9;
      case 'f':
        v10 = 39;
        v11 = 35;
        v12 = 38;
        goto LABEL_12;
      case 'g':
        v8 = 6;
        v9 = 4;
        goto LABEL_9;
      case 'h':
        return sub_21F90(a1, 3, 5, 2, 1, 26, 6);
      case 'i':
        v8 = 10;
        v9 = 6;
        goto LABEL_9;
      case 'j':
        return sub_21F90(a1, 2, 4, 0, 26, 35, 1);
      case 'k':
        v10 = 27;
        v11 = 1;
LABEL_11:
        v12 = 2;
LABEL_12:
        result = sub_21F90(a1, 2, 3, v12, v11, v10, a7);
        break;
      case 'l':
        v8 = 6;
        v9 = 2;
LABEL_9:
        result = sub_21F90(a1, 1, 2, v9, v8, a6, a7);
        break;
      default:
        result = sub_21F90(a1, 3, 2, 6, 10, a6, a7);
        break;
    }
  }
  return result;
}
