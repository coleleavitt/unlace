__int64 __fastcall sub_818430(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // ax
  bool v4; // cc
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax

LABEL_9:
  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    v4 = v3 <= 0x15u;
    if ( v3 != 21 )
      break;
    while ( 1 )
    {
LABEL_41:
      v2 = *(_QWORD *)(a1 + 24);
LABEL_7:
      if ( v2 != a1 )
      {
        a1 = v2;
        goto LABEL_9;
      }
LABEL_46:
      if ( v3 == 47 )
      {
        result = *(_QWORD *)(a1 + 24);
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 47 > 2 || (*(_BYTE *)(result + 68) & 1) == 0 )
          return 0;
        return result;
      }
      if ( v3 == 35 )
      {
        result = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(result + 68) & 1) == 0 )
          return 0;
        return result;
      }
      if ( v3 == 72 )
        break;
      if ( v3 > 0x76u )
      {
        if ( v3 > 0x78u )
          return 0;
        v8 = (*(_WORD *)(a1 + 2) >> 3) & 0x3F;
        if ( (unsigned int)(v8 - 21) > 0xA )
        {
          if ( v8 != 32 )
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
        goto LABEL_9;
      }
      if ( v3 != 4 )
        return 0;
LABEL_39:
      if ( (unsigned int)(*(_BYTE *)(a1 + 2) >> 3) - 2 > 1 )
        return 0;
      a1 = *(_QWORD *)(a1 + 16);
      v3 = *(_WORD *)a1 & 0x1FF;
      v4 = v3 <= 0x15u;
      if ( v3 != 21 )
        goto LABEL_10;
    }
    result = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 47 <= 2 )
    {
      if ( (*(_BYTE *)(result + 68) & 1) == 0 )
        return 0;
      return result;
    }
    if ( (*(_BYTE *)(result + 28) & 0x7F) != 0x32 )
      return 0;
    a1 = *(_QWORD *)(result + 64);
    if ( !a1 )
      return 0;
  }
LABEL_10:
  if ( v4 )
  {
    if ( v3 == 4 )
    {
      if ( *(_BYTE *)(a1 + 2) >> 3 == 12 )
      {
        v2 = *(_QWORD *)(a1 + 16);
        goto LABEL_7;
      }
      goto LABEL_39;
    }
    if ( v3 == 19 )
    {
      if ( (*(_BYTE *)(a1 + 3) & 1) == 0 )
        return 0;
      if ( *(char *)(a1 + 2) >= 0 )
        return 0;
      v2 = *(_QWORD *)(a1 + 16);
      if ( !v2 )
        return 0;
      goto LABEL_7;
    }
    goto LABEL_46;
  }
  if ( v3 != 58 )
  {
    if ( v3 == 78 )
    {
      if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) == 0 )
      {
        if ( !*(_BYTE *)(a1 + 48) )
        {
          v2 = *(_QWORD *)(a1 + 32);
          goto LABEL_7;
        }
        goto LABEL_41;
      }
      return 0;
    }
LABEL_15:
    if ( v3 != 80 )
      goto LABEL_46;
    v6 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
    if ( v6 != 4 && ((*(_BYTE *)(a1 + 1) & 6) == 0 || v6 != 5) )
      return 0;
    a1 = *(_QWORD *)(a1 + 16);
    if ( !a1 )
      BUG();
    while ( 1 )
    {
      v3 = *(_WORD *)a1 & 0x1FF;
      if ( v3 == 21 )
        goto LABEL_35;
      if ( v3 <= 0x15u )
      {
        if ( v3 == 4 )
        {
          if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
            goto LABEL_39;
          v7 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          if ( v3 != 19 )
            goto LABEL_46;
          if ( (*(_BYTE *)(a1 + 3) & 1) == 0 )
            return 0;
          if ( *(char *)(a1 + 2) >= 0 )
            return 0;
          v7 = *(_QWORD *)(a1 + 16);
          if ( !v7 )
            return 0;
        }
      }
      else
      {
        if ( v3 != 58 )
        {
          if ( v3 != 78 )
            goto LABEL_15;
          if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
            return 0;
          if ( !*(_BYTE *)(a1 + 48) )
          {
            v7 = *(_QWORD *)(a1 + 32);
            goto LABEL_26;
          }
LABEL_35:
          v7 = *(_QWORD *)(a1 + 24);
          goto LABEL_26;
        }
        if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0 )
          return 0;
        v7 = *(_QWORD *)(a1
                       + 8LL
                       * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                       + 32);
      }
LABEL_26:
      if ( v7 == a1 )
        goto LABEL_46;
      a1 = v7;
    }
  }
  if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) != 0 )
  {
    v2 = *(_QWORD *)(a1
                   + 8LL * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                   + 32);
    goto LABEL_7;
  }
  return 0;
}

