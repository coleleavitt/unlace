__int64 __fastcall sub_21FA440(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r8
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 20);
  switch ( (*(_BYTE *)(a2 + 20) & 7) + 4 * (v2 & 7) )
  {
    case 0:
      result = 1;
      if ( ((v2 ^ *(_BYTE *)(a2 + 20)) & 8) != 0 )
        goto LABEL_3;
      return result;
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xD:
      return 3;
    case 2:
    case 3:
    case 0xB:
      goto LABEL_3;
    case 8:
    case 0xC:
    case 0xE:
      if ( (*(_BYTE *)(a2 + 20) & 8) != 0 )
        return 2;
      return 0;
    case 0xA:
      if ( ((v2 ^ *(_BYTE *)(a2 + 20)) & 8) != 0 )
      {
LABEL_3:
        if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
          return 0;
        else
          return 2;
      }
      else
      {
        result = sub_21F9DB0(a1, a2);
        if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
        {
          if ( (_DWORD)result )
          {
            if ( (_DWORD)result == 2 )
              return 0;
          }
          else
          {
            return 2;
          }
        }
      }
      return result;
    case 0xF:
      return 1;
  }
}
