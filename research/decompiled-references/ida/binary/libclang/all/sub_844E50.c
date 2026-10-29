__int64 __fastcall sub_844E50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int16 v9; // dx

  while ( 2 )
  {
    v3 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
    v4 = *(_QWORD *)v3;
    v5 = *(_BYTE *)(*(_QWORD *)v3 + 16LL);
    if ( v5 > 0x29u )
    {
      if ( v5 == 47 )
      {
        return (unsigned int)(unsigned __int8)sub_B07770(v4, a2, a3) + 12;
      }
      else
      {
        result = 19;
        if ( v5 <= 0x2Fu )
          return (*(_BYTE *)(a2 + 1) & 8) == 0 ? 1 : 3;
      }
    }
    else
    {
      switch ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) )
      {
        case 0:
        case 1:
        case 4:
        case 8:
        case 9:
        case 0xC:
        case 0xE:
          return 9;
        case 2:
        case 3:
        case 5:
        case 6:
          goto LABEL_11;
        case 7:
          a1 = *(_QWORD *)(v4 + 32);
          continue;
        case 0xA:
          return 18;
        case 0xB:
          goto LABEL_16;
        case 0xD:
          v9 = (*(_WORD *)(v4 + 18) >> 3) & 0x1FF;
          if ( v9 <= 0x1B3u )
          {
            result = 0;
            if ( v9 != 434 )
              return 5 * (unsigned int)(v9 == 435) - 1;
          }
          else if ( ((1LL << ((unsigned __int8)(*(_WORD *)(v4 + 18) >> 3) + 76)) & 0xE38E3FFFFFLL) != 0 )
          {
            return 1;
          }
          else
          {
            return ((1LL << ((unsigned __int8)(*(_WORD *)(v4 + 18) >> 3) + 76)) & 0xFF8071C71C00000LL) != 0 ? -1 : 8;
          }
          return result;
        default:
          if ( ((1LL << v5) & 0x10E48000000LL) != 0 )
          {
LABEL_16:
            result = 0xFFFFFFFFLL;
          }
          else if ( ((1LL << v5) & 0x20006000000LL) != 0 )
          {
LABEL_11:
            result = 5;
          }
          else
          {
            v6 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL;
            v7 = *(_QWORD *)v6;
            if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 26
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_B0D320(v7) )
            {
              result = 12;
            }
            else
            {
              result = 7;
            }
          }
          break;
      }
    }
    return result;
  }
}

