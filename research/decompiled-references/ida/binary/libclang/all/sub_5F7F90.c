unsigned __int64 __fastcall sub_5F7F90(unsigned __int16 *a1)
{
  int v1; // edx
  __int64 v2; // rax
  unsigned __int64 result; // rax
  __int64 v4; // rax

  while ( 2 )
  {
    while ( 1 )
    {
      v1 = *a1;
      LOWORD(v1) = v1 & 0x1FF;
      if ( (unsigned __int16)v1 <= 0x2Fu )
        break;
      if ( (_WORD)v1 == 72 )
        return *((_QWORD *)a1 + 2);
      if ( (_WORD)v1 == 80 )
      {
        a1 = *((unsigned __int16 **)a1 + 2);
      }
      else
      {
LABEL_6:
        if ( (((_WORD)v1 + 422) & 0x1FFu) > 4 )
        {
          if ( (((_WORD)v1 + 398) & 0x1FFu) <= 1 )
          {
            result = 0;
            if ( (a1[1] & 8) != 0 )
              return result;
            return *((_QWORD *)a1 + 2);
          }
          goto LABEL_19;
        }
        a1 = *(unsigned __int16 **)((char *)a1 + *((unsigned __int8 *)a1 + 3));
      }
    }
    if ( (unsigned __int16)v1 > 0x11u )
    {
      v2 = (unsigned int)(v1 + 494);
      LOWORD(v2) = (v1 + 494) & 0x1FF;
      switch ( v2 )
      {
        case 0LL:
          a1 = *((unsigned __int16 **)a1 + 2);
          continue;
        case 9LL:
          a1 = *((unsigned __int16 **)a1 + 2);
          if ( a1 )
            continue;
          result = 0;
          break;
        case 15LL:
          v4 = *((_QWORD *)a1 + 2);
          if ( (v4 & 4) != 0 )
          {
            result = v4 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*((_QWORD *)a1 + 3) & 4) != 0 )
              result = *((_QWORD *)a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            result = v4 & 0xFFFFFFFFFFFFFFF8LL;
          }
          break;
        case 17LL:
          return *((_QWORD *)a1 + 2);
        case 29LL:
          result = *((_QWORD *)a1 + 3);
          break;
        default:
          goto LABEL_6;
      }
      return result;
    }
    break;
  }
LABEL_19:
  switch ( (_WORD)v1 )
  {
    case 0x6C:
      return *((_QWORD *)a1 + 2);
    case 0x22:
      result = 0;
      if ( (*((_BYTE *)a1 + 27) & 1) != 0 )
        return *((_QWORD *)a1 + 2);
      break;
    case 0x20:
      return *((_QWORD *)a1 + 2);
    case 8:
      return sub_8C70D0();
    default:
      result = 0;
      if ( (_WORD)v1 == 13 )
      {
        result = *((_QWORD *)a1 + 4);
        if ( (*(_BYTE *)(result + 28) & 0x7B) != 0x29 )
          return 0;
      }
      break;
  }
  return result;
}

