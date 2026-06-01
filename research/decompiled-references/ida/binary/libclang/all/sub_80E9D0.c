bool __fastcall sub_80E9D0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // dx
  __int64 v4; // rax
  bool result; // al
  unsigned __int8 v6; // al
  __int64 v7; // rdx

LABEL_1:
  if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
    return 0;
LABEL_2:
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 4) != 0 || (byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
  {
    while ( 1 )
    {
      v3 = *(_WORD *)a1 & 0x1FF;
      if ( v3 == 21 )
        break;
      if ( v3 > 0x15u )
      {
        if ( v3 == 58 )
        {
          if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0 )
            return 0;
          v4 = *(_QWORD *)(a1
                         + 8LL
                         * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                         + 32);
        }
        else
        {
          if ( v3 != 78 )
          {
            result = v3 == 47 || v3 == 124 || v3 == 72;
            if ( result )
              return result;
            if ( ((v3 + 393) & 0x1FFu) <= 1 )
            {
              if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) <= 1 )
                return 1;
              if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) == 0x20 )
              {
                a1 = *(_QWORD *)(a1 + 24);
                if ( (*(_BYTE *)(a1 + 1) & 6) != 0 )
                  goto LABEL_2;
                return 0;
              }
              goto LABEL_38;
            }
LABEL_27:
            if ( v3 == 129 )
            {
              if ( !(unsigned __int8)sub_80E9D0(*(_QWORD *)(a1 + 32)) )
                return 0;
              a1 = *(_QWORD *)(a1 + 40);
              goto LABEL_1;
            }
            if ( v3 != 130 )
            {
LABEL_38:
              result = 1;
              if ( v3 == 35 )
                return result;
              if ( v3 == 18 )
                return (((**(_WORD **)(a1 + 16) & 0x1FF) - 29) & 0xFFFB) == 0;
              return 0;
            }
            v7 = *(_QWORD *)(a1 + 40);
            if ( (*(_WORD *)v7 & 0x1FF) == 0x1B && (unsigned __int8)sub_80E9D0(*(_QWORD *)(v7 + 16)) )
            {
              a1 = *(_QWORD *)(a1 + 48);
              goto LABEL_1;
            }
            return 0;
          }
          if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
            return 0;
          if ( *(_BYTE *)(a1 + 48) )
            break;
          v4 = *(_QWORD *)(a1 + 32);
        }
      }
      else if ( v3 == 4 )
      {
        v6 = *(_BYTE *)(a1 + 2);
        if ( v6 >> 3 != 12 )
          return v6 >> 3 == 5;
        v4 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        if ( v3 != 19 )
          goto LABEL_27;
        if ( (*(_BYTE *)(a1 + 3) & 1) == 0 )
          return 0;
        if ( *(char *)(a1 + 2) >= 0 )
          return 0;
        v4 = *(_QWORD *)(a1 + 16);
        if ( !v4 )
          return 0;
      }
LABEL_18:
      if ( v4 == a1 )
      {
        if ( v3 == 4 )
        {
          v6 = *(_BYTE *)(v4 + 2);
          return v6 >> 3 == 5;
        }
        goto LABEL_27;
      }
      a1 = v4;
    }
    v4 = *(_QWORD *)(a1 + 24);
    goto LABEL_18;
  }
  return 0;
}

