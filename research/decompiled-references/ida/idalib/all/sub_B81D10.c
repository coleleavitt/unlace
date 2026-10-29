__int64 __fastcall sub_B81D10(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  unsigned int v3; // eax
  __int64 *v5; // r12
  __int64 v6; // r13
  _DWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 40) & 7LL;
  if ( (*(_QWORD *)(a1 + 40) & 7) != 0 )
  {
    LODWORD(v1) = 0;
    return (unsigned int)v1;
  }
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    return (unsigned int)v1;
  v3 = sub_B75A50(a1, 0);
  if ( v3 > 0x3BC )
  {
    if ( v3 == 1265 )
    {
      LODWORD(v1) = 1265;
      return (unsigned int)v1;
    }
    if ( v3 <= 0x4F1 )
    {
      if ( v3 > 0x4DD )
      {
        if ( v3 <= 0x4DF )
          goto LABEL_46;
        if ( v3 <= 0x4E1 )
        {
LABEL_44:
          LODWORD(v1) = 1249;
          return (unsigned int)v1;
        }
      }
      else
      {
        if ( v3 >= 0x4DC )
          goto LABEL_66;
        if ( v3 == 957 )
          goto LABEL_34;
        if ( v3 >= 0x4DA )
          goto LABEL_42;
      }
    }
    else
    {
      if ( v3 <= 0x4F6 )
      {
        LODWORD(v1) = 1270;
        if ( v3 < 0x4F5 )
          LODWORD(v1) = (v3 != 1267) + 1265;
        return (unsigned int)v1;
      }
      if ( v3 == 1273 )
        goto LABEL_66;
      if ( v3 < 0x4F9 )
        goto LABEL_37;
      if ( v3 == 1274 )
        goto LABEL_44;
    }
    goto LABEL_48;
  }
  if ( v3 >= 0x3BB )
    return 955;
  if ( v3 == 641 )
  {
    LODWORD(v1) = 641;
    return (unsigned int)v1;
  }
  if ( v3 > 0x281 )
  {
    if ( v3 > 0x3B4 )
    {
      if ( v3 == 953 )
        goto LABEL_25;
      if ( v3 <= 0x3B9 )
      {
        if ( v3 <= 0x3B6 )
          goto LABEL_34;
        goto LABEL_48;
      }
    }
    else if ( v3 < 0x3B3 )
    {
      if ( v3 == 944 )
        goto LABEL_64;
      if ( v3 >= 0x3B0 )
        goto LABEL_25;
      goto LABEL_48;
    }
  }
  else
  {
    if ( v3 <= 0xBA )
    {
      if ( v3 >= 0xB9 )
      {
        LODWORD(v1) = 186;
        return (unsigned int)v1;
      }
      if ( v3 != 179 )
      {
        if ( v3 > 0xB6 )
        {
LABEL_11:
          LODWORD(v1) = 184;
          return (unsigned int)v1;
        }
        goto LABEL_48;
      }
      return 179;
    }
    if ( v3 == 221 )
      goto LABEL_64;
    if ( v3 <= 0xDD )
    {
      if ( v3 != 204 )
      {
LABEL_48:
        if ( !(unsigned __int8)sub_B81BF0(a1) )
        {
          if ( (unsigned __int8)sub_B8EC80(a1) )
          {
            v7 = *(_DWORD **)(v2 + 16);
            if ( *v7 == 4 && v7[4] == 1701147238 )
              LODWORD(v1) = 641;
          }
          return (unsigned int)v1;
        }
        v5 = *(__int64 **)(v2 + 16);
        v6 = *v5;
        if ( (unsigned int)*v5 != 6 )
        {
LABEL_50:
          if ( !sub_B7BA30(v2, (__int64)"mempcpy") )
          {
            if ( !sub_B7BA30(v2, (__int64)"memmove") )
            {
              if ( !sub_B7B9F0(v2, (__int64)"memcmp") )
              {
                if ( (_DWORD)v6 != 4 || *((_DWORD *)v5 + 4) != 1886217058 )
                {
                  if ( !sub_B7BA30(v2, (__int64)"strncpy") )
                  {
                    if ( !sub_B7BA30(v2, (__int64)"strncmp") )
                    {
                      if ( (_DWORD)v6 == 11 && !memcmp(v5 + 2, "strncasecmp", 0xBu) )
                      {
                        LODWORD(v1) = 1270;
                        return (unsigned int)v1;
                      }
                      if ( !sub_B7BA30(v2, (__int64)"strncat") )
                      {
                        if ( !sub_B7BA30(v2, (__int64)"strndup") )
                        {
                          if ( !sub_B7B9F0(v2, (__int64)"strlen") )
                          {
                            if ( !sub_B7BA70(v2, (__int64)"bzero") )
                            {
                              if ( sub_B7BA70(v2, (__int64)"bcopy") )
                                LODWORD(v1) = 186;
                              return (unsigned int)v1;
                            }
                            goto LABEL_11;
                          }
LABEL_42:
                          LODWORD(v1) = 1243;
                          return (unsigned int)v1;
                        }
LABEL_37:
                        LODWORD(v1) = 1272;
                        return (unsigned int)v1;
                      }
LABEL_66:
                      LODWORD(v1) = 1245;
                      return (unsigned int)v1;
                    }
LABEL_46:
                    LODWORD(v1) = 1247;
                    return (unsigned int)v1;
                  }
                  goto LABEL_44;
                }
                return 179;
              }
LABEL_64:
              LODWORD(v1) = 944;
              return (unsigned int)v1;
            }
            return 948;
          }
          return 955;
        }
        if ( *((_DWORD *)v5 + 4) == 1936549229 && *((_WORD *)v5 + 10) == 29797 )
        {
LABEL_34:
          LODWORD(v1) = 950;
          return (unsigned int)v1;
        }
        if ( *((_DWORD *)v5 + 4) != 1668113773 || *((_WORD *)v5 + 10) != 31088 )
          goto LABEL_50;
LABEL_25:
        LODWORD(v1) = 946;
        return (unsigned int)v1;
      }
      return 179;
    }
    if ( v3 == 223 )
      return 955;
    if ( v3 != 236 )
      goto LABEL_48;
  }
  return 948;
}
