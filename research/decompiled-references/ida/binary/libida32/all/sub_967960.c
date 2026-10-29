char **__fastcall sub_967960(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  unsigned int *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  char **result; // rax

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 40) & 7) != 0 || !v2 )
    return (char **)&off_2B162C0;
  v3 = *(unsigned int **)(v2 + 16);
  if ( *v3 != 14
    || *((_QWORD *)v3 + 2) != 0x6863746170736964LL
    || v3[6] != 2037604703
    || *((_WORD *)v3 + 14) != 25454
    || (result = &off_2B16200, a2 != 1) )
  {
    v4 = *v3;
    v5 = v3 + 4;
    if ( v4 == 23 )
    {
      if ( !(*((_QWORD *)v3 + 2) ^ 0x6863746170736964LL | *((_QWORD *)v3 + 3) ^ 0x615F636E7973615FLL)
        && v3[8] == 2002740334
        && *((_WORD *)v3 + 18) == 26977
        && *((_BYTE *)v3 + 38) == 116 )
      {
        result = &off_2B16218;
        if ( a2 == 1 )
          return result;
      }
      v4 = *v3;
      v5 = v3 + 4;
      if ( v4 == 14 )
      {
LABEL_6:
        if ( *(_QWORD *)v5 == 0x6863746170736964LL && v5[2] == 1952866655 && *((_WORD *)v5 + 6) == 29285 )
        {
          result = &off_2B16230;
          if ( a2 == 2 )
            return result;
        }
        if ( *v3 != 13 )
          goto LABEL_11;
        if ( *((_QWORD *)v3 + 2) == 0x6863746170736964LL && v3[6] == 1853453151 && *((_BYTE *)v3 + 28) == 99 )
          goto LABEL_32;
        goto LABEL_10;
      }
    }
    else if ( v4 == 14 )
    {
      goto LABEL_6;
    }
    if ( v4 == 13 && *(_QWORD *)v5 == 0x6863746170736964LL && v5[2] == 1853453151 && *((_BYTE *)v5 + 12) == 99 )
    {
LABEL_32:
      result = &off_2B16248;
      if ( a2 == 1 )
        return result;
    }
LABEL_10:
    v3 = *(unsigned int **)(v2 + 16);
LABEL_11:
    if ( *v3 == 13 && *((_QWORD *)v3 + 2) == 0x6863746170736964LL && v3[6] == 1668181855 && *((_BYTE *)v3 + 28) == 101 )
    {
      result = &off_2B16260;
      if ( a2 == 1 )
        return result;
    }
    v6 = *v3;
    v7 = v3 + 4;
    if ( v6 == 22 )
    {
      if ( !(*((_QWORD *)v3 + 2) ^ 0x6863746170736964LL | *((_QWORD *)v3 + 3) ^ 0x726569727261625FLL)
        && v3[8] == 2037604703
        && *((_WORD *)v3 + 18) == 25454 )
      {
        result = &off_2B16278;
        if ( a2 == 1 )
          return result;
      }
      v6 = *v3;
      v7 = v3 + 4;
    }
    if ( v6 == 31 )
    {
      if ( !memcmp("dispatch_barrier_async_and_wait", v7, 0x1Fu) )
      {
        result = &off_2B16290;
        if ( a2 == 1 )
          return result;
      }
      v6 = *v3;
      v7 = v3 + 4;
    }
    if ( v6 == 21
      && !(*v7 ^ 0x6863746170736964LL | v7[1] ^ 0x726569727261625FLL)
      && *((_DWORD *)v7 + 4) == 1853453151
      && *((_BYTE *)v7 + 20) == 99 )
    {
      result = &off_2B162A8;
      if ( a2 == 1 )
        return result;
    }
    return (char **)&off_2B162C0;
  }
  return result;
}

