__int64 __fastcall sub_1EA5680(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  unsigned int v7; // r13d
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v11; // eax
  _BYTE v12[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(a2 + 248) != 37 && (a3 == 2579 || a3 == 3460) )
  {
    v11 = sub_EEB7E0(*(_QWORD *)(a4 + 32), a2, a5);
    sub_168B9F0((__int64)v12, a1, v11, 0xB35u, 0);
    v7 = v12[120];
    sub_15F7200(v12);
    return v7;
  }
  if ( (unsigned __int8)sub_1EA3650(a1, a3, a4, a5)
    || a3 >= 0x77F && (a3 <= 0x7A6 || a3 - 2659 <= 0x17) && (unsigned __int8)sub_1EA10D0(a1, a4, a5) )
  {
    return 1;
  }
  v7 = sub_1E9E880(a1, a3, a4, a5);
  if ( (_BYTE)v7 )
    return 1;
  if ( a3 > 0xA30 )
  {
    if ( a3 <= 0xBF7 )
    {
      if ( a3 < 0xBF6 )
      {
        if ( a3 == 2727 )
          goto LABEL_54;
        if ( a3 > 0xAA7 )
        {
          if ( a3 > 0xB82 )
          {
            if ( a3 > 0xBF2 )
            {
              v8 = 1;
              v9 = a3 < 0xBF5 ? 15 : 31;
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
            if ( a3 >= 0xBF1 )
            {
              v9 = 7;
              v8 = 1;
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
            if ( a3 != 3053 )
            {
              if ( a3 < 0xBED )
                return v7;
              goto LABEL_109;
            }
LABEL_112:
            v9 = 1;
            v8 = 1;
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
          if ( a3 < 0xB7E )
          {
            if ( a3 <= 0xAAE )
            {
              if ( a3 < 0xAAB )
              {
                v8 = 2;
                v9 = a3 < 0xAAA ? 3 : 15;
                return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
              }
            }
            else if ( a3 != 2834 )
            {
              if ( a3 > 0xB12 )
              {
                v9 = 255;
                v8 = 2;
                if ( a3 != 2836 )
                  return v7;
                return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
              }
              if ( a3 - 2789 > 0xB )
                return v7;
              goto LABEL_74;
            }
LABEL_54:
            v9 = 255;
            v8 = 2;
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
LABEL_126:
          v9 = 255;
          v8 = 1;
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
        if ( a3 <= 0xA43 )
        {
          if ( a3 >= 0xA40 )
          {
            v9 = 15;
            v8 = 1;
          }
          else if ( a3 <= 0xA36 )
          {
            v9 = 255;
            v8 = a3 < 0xA34 ? 4 : 1;
          }
          else
          {
            if ( a3 < 0xA39 )
              return v7;
            v9 = 255;
            v8 = a3 < 0xA3D ? 1 : 4;
          }
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
        if ( a3 != 2722 )
        {
          if ( a3 > 0xAA2 )
          {
            if ( a3 != 2724 )
            {
              if ( a3 >= 0xAA4 && a3 != 2725 )
              {
                v9 = 3;
                v8 = 2;
                return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
              }
              goto LABEL_54;
            }
          }
          else if ( a3 != 2717 )
          {
            if ( a3 > 0xA9D )
            {
              v9 = 255;
              v8 = 2;
              if ( a3 != 2721 )
                return v7;
            }
            else
            {
              if ( a3 > 0xA45 )
                return v7;
              v9 = 15;
              v8 = 2;
            }
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
        }
      }
LABEL_150:
      v9 = 3;
      v8 = 2;
      return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
    }
    if ( a3 != 3301 )
    {
      if ( a3 > 0xCE5 )
      {
        if ( a3 <= 0xD4F )
        {
          if ( a3 < 0xD4D )
          {
            if ( a3 > 0xD2F )
            {
              if ( a3 < 0xD39 )
                return v7;
              if ( a3 > 0xD3B )
              {
                if ( a3 - 3390 > 5 )
                  return v7;
                v9 = 255;
                v8 = 2;
                return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
              }
            }
            else if ( a3 < 0xD2A )
            {
              v9 = 15;
              v8 = 1;
              if ( a3 != 3302 )
              {
                if ( a3 > 0xCEA )
                  return v7;
                v9 = 255;
              }
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
          }
          goto LABEL_54;
        }
        if ( a3 <= 0xDAA )
        {
          v9 = 15;
          v8 = 3;
          if ( a3 < 0xDA9 )
          {
            if ( a3 < 0xD56 )
              return v7;
            v9 = 255;
            if ( a3 <= 0xD5B )
            {
              v8 = 1;
            }
            else if ( a3 != 3431 )
            {
              return v7;
            }
          }
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
        if ( a3 != 3644 )
        {
          if ( a3 != 3645 )
          {
            if ( a3 != 3643 )
              return v7;
            v9 = 3;
            v8 = 1;
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
          goto LABEL_150;
        }
        goto LABEL_174;
      }
      if ( a3 > 0xC6F )
      {
        if ( a3 > 0xC95 )
        {
          if ( a3 < 0xCCC )
            return v7;
          if ( a3 > 0xCCE )
          {
            if ( a3 < 0xCE1 )
              return v7;
            v9 = 3;
            v8 = 3;
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
          goto LABEL_54;
        }
        if ( a3 < 0xC8E )
        {
          if ( a3 - 3190 > 0xE )
            return v7;
          v9 = 255;
          v8 = 2;
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
LABEL_74:
        v9 = 7;
        v8 = 2;
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      }
      if ( a3 >= 0xC6D )
        goto LABEL_174;
      if ( a3 != 3068 )
      {
        if ( a3 > 0xBFC )
        {
          v9 = 1;
          v8 = 1;
          if ( a3 > 0xBFF )
          {
            if ( a3 - 3157 > 2 )
              return v7;
            v9 = 255;
          }
        }
        else
        {
          v8 = 2;
          v9 = a3 < 0xBFA ? 7 : 15;
        }
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      }
LABEL_65:
      v9 = 31;
      v8 = 2;
      return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
    }
LABEL_109:
    v9 = 3;
    v8 = 1;
    return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
  }
  if ( a3 >= 0xA28 )
    goto LABEL_126;
  if ( a3 > 0x77C )
  {
    if ( a3 != 2207 )
    {
      if ( a3 <= 0x89F )
      {
        if ( a3 != 1998 )
        {
          if ( a3 > 0x7CE )
          {
            if ( a3 != 2004 )
            {
              if ( a3 > 0x7D4 )
              {
                if ( a3 < 0x7F9 )
                  return v7;
                if ( a3 > 0x800 )
                {
                  if ( a3 - 2197 > 2 )
                    return v7;
                  v9 = 255;
                  v8 = 2;
                  return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
                }
                goto LABEL_126;
              }
              if ( a3 <= 0x7D2 )
              {
                v8 = 2;
                v9 = a3 < 0x7D0 ? 3 : 1;
                return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
              }
              goto LABEL_150;
            }
          }
          else if ( a3 != 1992 )
          {
            if ( a3 <= 0x7C8 )
            {
              if ( a3 < 0x7B3 )
                return v7;
              v9 = 15;
              v8 = 1;
              if ( a3 > 0x7BB )
              {
                if ( a3 > 0x7BE )
                  return v7;
                v8 = 2;
              }
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
            if ( a3 <= 0x7CC )
            {
              v8 = 2;
              v9 = a3 < 0x7CA ? 3 : 1;
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
            goto LABEL_150;
          }
        }
LABEL_174:
        v9 = 1;
        v8 = 2;
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      }
      if ( a3 <= 0x96B )
      {
        if ( a3 < 0x966 )
        {
          if ( a3 > 0x8BA )
          {
            if ( a3 == 2235 )
              goto LABEL_54;
            if ( a3 - 2394 > 5 )
              return v7;
          }
          else if ( a3 < 0x8B7 )
          {
            if ( a3 != 2208 )
            {
              if ( a3 - 2211 > 1 )
                return v7;
              v9 = 255;
              v8 = 2;
              return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
            }
            goto LABEL_54;
          }
        }
        goto LABEL_126;
      }
      if ( a3 <= 0x9C8 )
      {
        if ( a3 < 0x9C6 )
        {
          if ( a3 < 0x978 )
            return v7;
          if ( a3 > 0x980 )
          {
            if ( a3 - 2445 > 2 )
              return v7;
            v9 = 255;
            v8 = 1;
            return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
          }
        }
        goto LABEL_126;
      }
      if ( a3 < 0x9DE )
        return v7;
      v9 = 255;
      v8 = 3;
      if ( a3 <= 0x9E9 )
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      if ( a3 - 2545 > 5 )
        return v7;
    }
    v9 = 15;
    v8 = 2;
    return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
  }
  if ( a3 >= 0x771 )
    goto LABEL_126;
  if ( a3 > 0x677 )
  {
    if ( a3 != 1879 )
    {
      if ( a3 <= 0x757 )
      {
        if ( a3 > 0x753 )
        {
          v8 = 1;
          v9 = 2 * (a3 == 1876) + 1;
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
        if ( a3 < 0x752 )
        {
          if ( a3 < 0x67C )
            return v7;
          v9 = 7;
          v8 = 2;
          if ( a3 > 0x67E )
          {
            if ( a3 - 1817 > 2 )
              return v7;
            v9 = 255;
          }
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
      }
      else if ( a3 <= 0x75C )
      {
        if ( a3 < 0x75B )
        {
          v8 = 1;
          v9 = a3 < 0x75A ? 1 : 3;
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
      }
      else if ( a3 != 1886 )
      {
        if ( a3 >= 0x75E )
        {
          if ( a3 < 0x761 )
            return v7;
          v9 = 255;
          v8 = 3;
          return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
        }
        goto LABEL_109;
      }
      goto LABEL_112;
    }
    goto LABEL_109;
  }
  if ( a3 >= 0x676 )
    goto LABEL_65;
  if ( a3 > 0x646 )
  {
    if ( a3 > 0x66F )
    {
      if ( a3 > 0x672 )
      {
        if ( a3 > 0x674 )
          return v7;
        v9 = 31;
        v8 = 2;
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      }
      goto LABEL_74;
    }
    if ( a3 >= 0x66B || a3 - 1635 <= 4 )
      goto LABEL_65;
  }
  else
  {
    if ( a3 >= 0x641 )
      goto LABEL_74;
    if ( a3 == 1586 )
      goto LABEL_150;
    if ( a3 > 0x632 )
    {
      v9 = 15;
      v8 = 2;
      if ( a3 <= 0x634 )
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      v9 = 255;
      if ( a3 == 1589 )
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
    }
    else
    {
      v9 = 7;
      v8 = 1;
      if ( a3 == 1536 )
        return (unsigned int)sub_16D5460(*a1, a4, v8, 0, v9, 0, a5);
      if ( a3 >= 0x600 && a3 - 1576 <= 5 )
        goto LABEL_54;
    }
  }
  return v7;
}
