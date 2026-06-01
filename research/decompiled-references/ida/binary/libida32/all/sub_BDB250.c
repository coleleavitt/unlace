__int64 __fastcall sub_BDB250(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // ax
  int v3; // eax
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int8 v6; // dl
  int v7; // eax

  while ( 2 )
  {
    if ( a1 )
      goto LABEL_6;
LABEL_11:
    while ( 2 )
    {
      v2 = 383;
LABEL_12:
      if ( v2 == 79 )
      {
        v3 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
        if ( v3 != 4 && ((*(_BYTE *)(a1 + 1) & 6) == 0 || v3 != 5) )
          return 0;
        a1 = *(_QWORD *)(a1 + 16);
        if ( a1 )
        {
          while ( 1 )
          {
            v2 = *(_WORD *)a1 & 0x1FF;
            if ( v2 == 20 )
              break;
            switch ( v2 )
            {
              case 4:
                if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
                  goto LABEL_9;
                v4 = *(_QWORD *)(a1 + 16);
                break;
              case 57:
                if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
                  return 0;
                v4 = *(_QWORD *)(a1
                               + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu))
                               + 32);
                break;
              case 77:
                if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
                  return 0;
                if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
                  goto LABEL_18;
                v4 = *(_QWORD *)(a1 + 32);
                break;
              case 18:
                if ( (*(_QWORD *)a1 & 0x1000000) == 0 || (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
                  return 0;
                v4 = *(_QWORD *)(a1 + 16);
                if ( !v4 )
                  return 0;
                break;
              default:
                goto LABEL_12;
            }
LABEL_19:
            if ( v4 == a1 )
              goto LABEL_12;
            a1 = v4;
          }
LABEL_18:
          v4 = *(_QWORD *)(a1 + 24);
          goto LABEL_19;
        }
        continue;
      }
      break;
    }
    if ( v2 != 46 )
    {
      if ( v2 == 34 )
      {
        result = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(result + 68) & 1) == 0 )
          return 0;
        return result;
      }
      if ( v2 == 71 )
      {
        result = *(_QWORD *)(a1 + 16);
        v6 = *(_BYTE *)(result + 28) & 0x7F;
        if ( (unsigned int)v6 - 49 <= 2 && (*(_BYTE *)(result + 68) & 1) != 0 )
          return result;
        if ( v6 != 52 )
          return 0;
        a1 = *(_QWORD *)(result + 64);
        if ( !a1 )
          return 0;
        continue;
      }
      if ( (unsigned __int16)v2 > 0x75u )
      {
        if ( (unsigned __int16)v2 > 0x77u )
          return 0;
        v7 = (*(_WORD *)(a1 + 2) >> 3) & 0x3F;
        if ( (unsigned int)(v7 - 21) > 0xA )
        {
          if ( v7 != 32 )
            return 0;
          a1 = *(_QWORD *)(a1 + 24);
          if ( !a1 )
            return 0;
        }
        else
        {
          a1 = *(_QWORD *)(a1 + 16);
          if ( !a1 )
            return 0;
        }
        continue;
      }
      if ( v2 != 4 )
        return 0;
LABEL_9:
      if ( (((*(_BYTE *)(a1 + 2) >> 3) + 30) & 0x1Fu) > 1 )
        return 0;
      a1 = *(_QWORD *)(a1 + 16);
      if ( !a1 )
        goto LABEL_11;
LABEL_6:
      while ( 1 )
      {
        v2 = *(_WORD *)a1 & 0x1FF;
        if ( v2 == 20 )
          break;
        switch ( v2 )
        {
          case 4:
            if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
              goto LABEL_9;
            v1 = *(_QWORD *)(a1 + 16);
            break;
          case 57:
            if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
              return 0;
            v1 = *(_QWORD *)(a1
                           + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu))
                           + 32);
            break;
          case 77:
            if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
              return 0;
            if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
              goto LABEL_3;
            v1 = *(_QWORD *)(a1 + 32);
            break;
          case 18:
            if ( (*(_QWORD *)a1 & 0x1000000) == 0 || (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
              return 0;
            v1 = *(_QWORD *)(a1 + 16);
            if ( !v1 )
              return 0;
            break;
          default:
            goto LABEL_12;
        }
LABEL_4:
        if ( a1 == v1 )
        {
          v2 = *(_WORD *)a1 & 0x1FF;
          goto LABEL_12;
        }
        a1 = v1;
      }
LABEL_3:
      v1 = *(_QWORD *)(a1 + 24);
      goto LABEL_4;
    }
    break;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 > 2 )
    return 0;
  if ( (*(_BYTE *)(result + 68) & 1) == 0 )
    return 0;
  return result;
}

