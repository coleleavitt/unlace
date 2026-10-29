__int64 __fastcall sub_330DE0(char *a1, unsigned __int8 a2)
{
  char v2; // al
  unsigned int v3; // ecx
  int v5; // eax
  _BYTE *v6; // rdx
  _BYTE *v7; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = 0;
    while ( v2 != 3 )
    {
      if ( v2 > 3 )
      {
        if ( v2 != 4 )
          goto LABEL_17;
        v2 = *++a1;
      }
      else
      {
        if ( v2 != 1 )
        {
          if ( v2 == 2 )
          {
            if ( !a1[1] )
              return (unsigned int)-1;
            v2 = a1[2];
            a1 += 2;
            goto LABEL_9;
          }
LABEL_17:
          v2 = *++a1;
LABEL_16:
          ++v3;
          goto LABEL_9;
        }
        v5 = a1[1];
        v6 = a1 + 2;
        if ( a1[1] == 40 )
        {
          v7 = a1 + 18;
          while ( *v6 )
          {
            a1 = v6 + 1;
            if ( v6 + 1 == v7 )
            {
              v2 = v6[1];
              goto LABEL_9;
            }
            ++v6;
          }
          return (unsigned int)-1;
        }
        if ( a1[1] > 40 )
        {
          if ( (unsigned __int8)(v5 - 41) <= 7u )
          {
            v2 = a1[2];
            a1 += 2;
            goto LABEL_9;
          }
        }
        else if ( !(_BYTE)v5 )
        {
          return (unsigned int)-1;
        }
        if ( a2 == v5 )
          return v3;
        v2 = a1[2];
        a1 += 2;
      }
LABEL_9:
      if ( !v2 )
        return (unsigned int)-1;
    }
    if ( !a1[1] )
      return (unsigned int)-1;
    v2 = a1[2];
    a1 += 2;
    goto LABEL_16;
  }
  return (unsigned int)-1;
}
