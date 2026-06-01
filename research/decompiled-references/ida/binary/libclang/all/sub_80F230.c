__int64 __fastcall sub_80F230(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // dx
  __int64 v3; // rdx

  for ( result = a1; ; result = v3 )
  {
    v2 = *(_WORD *)result & 0x1FF;
    if ( v2 == 21 )
    {
LABEL_14:
      v3 = *(_QWORD *)(result + 24);
      goto LABEL_15;
    }
    if ( v2 <= 0x15u )
    {
      if ( v2 == 4 )
      {
        if ( *(_BYTE *)(result + 2) >> 3 != 12 )
          return result;
        v3 = *(_QWORD *)(result + 16);
      }
      else
      {
        if ( v2 != 19 )
          return result;
        if ( (*(_BYTE *)(result + 3) & 1) == 0 )
          return result;
        if ( *(char *)(result + 2) >= 0 )
          return result;
        v3 = *(_QWORD *)(result + 16);
        if ( !v3 )
          return result;
      }
      goto LABEL_15;
    }
    if ( v2 == 58 )
    {
      if ( (~*(_DWORD *)(result + 16) & 0x3FFF8000) == 0 )
        return result;
      v3 = *(_QWORD *)(result
                     + 8LL
                     * (((*(_DWORD *)(result + 16) >> 15) & 0x7FFF)
                      + (unsigned int)((*(_BYTE *)(result + 19) & 0x40) != 0))
                     + 32);
      goto LABEL_15;
    }
    if ( v2 != 78 || ((**(_DWORD **)(result + 16) >> 14) & 0xC) != 0 )
      break;
    if ( *(_BYTE *)(result + 48) )
      goto LABEL_14;
    v3 = *(_QWORD *)(result + 32);
LABEL_15:
    if ( v3 == result )
      return result;
  }
  return result;
}

