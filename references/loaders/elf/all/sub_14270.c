const char *__fastcall sub_14270(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  const char *v5; // rcx
  int v6; // ecx

  v2 = *a2;
  v3 = *a2 & 0x3818000;
  if ( v3 == 0x1000000 )
  {
    *a2 = v2 & 0xFC7E7FFF;
    return "-march=68000";
  }
  else
  {
    if ( v3 > 0x1000000 )
    {
      if ( v3 == 0x2000000 )
      {
        v5 = "-march=fidoa";
        *a2 = v2 & 0xFC7E7FFF;
        return v5;
      }
LABEL_9:
      switch ( v2 & 0xF )
      {
        case 1u:
          v5 = "-march=isaa -mno-div";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 2u:
          v5 = "-march=isaa";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 3u:
          v5 = "-march=isaaplus";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 4u:
          v5 = "-march=isab -mno-usp";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 5u:
          v5 = "-march=isab";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 6u:
          v5 = "-march=isac";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        case 7u:
          v5 = "-march=isac -mno-div";
          *a2 = v2 & 0xFFFFFFF0;
          break;
        default:
          v6 = *a2 & 0x30;
          switch ( v6 )
          {
            case 32:
              v5 = "-memac";
              *a2 = v2 & 0xFFFFFFCF;
              break;
            case 48:
              v5 = "-memacb";
              *a2 = v2 & 0xFFFFFFCF;
              break;
            case 16:
              v5 = "-mmac";
              *a2 = v2 & 0xFFFFFFCF;
              break;
            default:
              v5 = nullptr;
              if ( (v2 & 0x40) != 0 )
              {
                v5 = "-mfloat";
                *a2 = v2 & 0xFFFFFFBF;
              }
              break;
          }
          break;
      }
      return v5;
    }
    if ( v3 != 0x8000 )
    {
      if ( v3 == 8454144 )
      {
        *a2 = v2 & 0xFC7E7FFF;
        return "-march=cpu32";
      }
      goto LABEL_9;
    }
    *a2 = v2 & 0xFC7E7FFF;
    return "-march=cfv4e";
  }
}
