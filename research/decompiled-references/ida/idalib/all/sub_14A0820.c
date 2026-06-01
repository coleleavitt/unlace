char __fastcall sub_14A0820(__int64 a1, char a2)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 > 0x89u )
  {
    if ( v2 == 189 )
      goto LABEL_16;
    if ( v2 > 0xBDu )
    {
      if ( v2 == 328 )
        goto LABEL_37;
      if ( v2 <= 0x148u )
      {
        if ( v2 > 0x144u )
        {
          if ( v2 != 326 )
            goto LABEL_18;
        }
        else if ( v2 < 0x141u )
        {
          LOBYTE(v3) = 1;
          if ( v2 == 320 )
            return v3;
          goto LABEL_18;
        }
        LOBYTE(v3) = **(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) >> 7;
        return v3;
      }
      if ( v2 == 428 )
        goto LABEL_16;
      if ( v2 > 0x1ACu )
      {
        LOBYTE(v3) = 1;
        if ( (unsigned __int16)(v2 - 443) <= 2u )
          return v3;
        goto LABEL_18;
      }
      if ( (unsigned __int16)(v2 - 416) <= 2u )
        goto LABEL_16;
      goto LABEL_18;
    }
    if ( v2 == 162 )
      goto LABEL_37;
    if ( v2 > 0xA2u )
    {
      if ( v2 != 167 )
      {
        if ( v2 <= 0xA7u )
        {
          LOBYTE(v3) = 1;
          if ( v2 == 163 )
            return v3;
          goto LABEL_18;
        }
        if ( (unsigned __int16)(v2 - 173) > 1u )
        {
          LOBYTE(v3) = (unsigned __int16)(v2 - 406) <= 8u;
          return v3;
        }
      }
      goto LABEL_37;
    }
    if ( v2 != 154 )
    {
      if ( v2 <= 0x9Au )
      {
        LOBYTE(v3) = 1;
        if ( v2 == 140 )
          return v3;
        goto LABEL_18;
      }
      if ( (unsigned __int16)(v2 - 156) > 1u )
      {
LABEL_18:
        LOBYTE(v3) = (unsigned __int16)(v2 - 406) <= 8u;
        return v3;
      }
    }
  }
  else if ( v2 < 0x88u )
  {
    if ( v2 == 63 )
      goto LABEL_16;
    if ( v2 <= 0x3Fu )
    {
      if ( v2 == 25 )
      {
        LOBYTE(v3) = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 3) ^ 1) & 1;
        return v3;
      }
      if ( v2 <= 0x19u )
      {
        if ( v2 != 20 )
        {
          if ( v2 > 0x14u )
          {
            if ( (unsigned __int16)(v2 - 22) <= 1u )
            {
              LOBYTE(v3) = 1;
              return v3;
            }
          }
          else
          {
            LOBYTE(v3) = 1;
            if ( v2 == 5 )
              return v3;
          }
          goto LABEL_18;
        }
      }
      else if ( v2 != 31 )
      {
        if ( v2 > 0x1Fu )
        {
          if ( v2 == 52 )
          {
            LOBYTE(v3) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0;
            return v3;
          }
          if ( v2 == 62 )
          {
            LOBYTE(v3) = a2;
            if ( !a2 )
              LOBYTE(v3) = *(_BYTE *)(a1 + 2040);
            return v3;
          }
          goto LABEL_18;
        }
        if ( (unsigned __int16)(v2 - 27) > 2u )
          goto LABEL_18;
      }
LABEL_16:
      LOBYTE(v3) = 1;
      return v3;
    }
    if ( v2 != 87 )
    {
      if ( v2 > 0x57u )
      {
        if ( v2 != 105 )
        {
          if ( v2 > 0x69u )
          {
            if ( v2 != 109 && v2 != 113 )
              goto LABEL_18;
          }
          else if ( v2 != 96 && v2 != 102 )
          {
            goto LABEL_18;
          }
        }
        goto LABEL_37;
      }
      if ( v2 == 72 )
        goto LABEL_16;
      if ( v2 <= 0x48u )
      {
        LOBYTE(v3) = 1;
        if ( v2 == 66 )
          return v3;
        goto LABEL_18;
      }
      if ( v2 != 76 && v2 != 80 )
        goto LABEL_18;
    }
  }
LABEL_37:
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 2944);
  if ( v6 >= *(unsigned int *)(v5 + 2912) )
    v7 = sub_14180A0(v5, 1u);
  else
    v7 = *(_QWORD *)(v5 + 2904) + 24 * v6;
  return (unsigned int)sub_147E1A0(a1, v7) ^ 1;
}
