unsigned __int64 __fastcall sub_BD99D0(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int16 v4; // dx

  for ( result = a1; ; result = v3 )
  {
    v4 = *(_WORD *)result & 0x1FF;
    switch ( v4 )
    {
      case 0x14u:
LABEL_9:
        v3 = *(_QWORD *)(result + 24);
        v4 = *(_WORD *)v3 & 0x1FF;
        goto LABEL_10;
      case 4u:
        if ( *(_BYTE *)(result + 2) >> 3 != 12 )
          return result;
        v3 = *(_QWORD *)(result + 16);
        v4 = *(_WORD *)v3 & 0x1FF;
        goto LABEL_10;
      case 0x39u:
        if ( (*(_DWORD *)(result + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return result;
        v3 = *(_QWORD *)(result
                       + 8LL * (((*(_BYTE *)(result + 19) & 0x40) != 0) + ((*(_DWORD *)(result + 16) >> 15) & 0x7FFFu))
                       + 32);
        v4 = *(_WORD *)v3 & 0x1FF;
        goto LABEL_10;
    }
    if ( v4 != 77 )
      break;
    if ( ((**(_DWORD **)(result + 16) >> 14) & 0xC) != 0 )
      return result;
    if ( (*(_BYTE *)(result + 2) & 8) != 0 )
      goto LABEL_9;
    v3 = *(_QWORD *)(result + 32);
    v4 = *(_WORD *)v3 & 0x1FF;
LABEL_10:
    if ( v4 <= 0x4Eu )
    {
      if ( v4 > 0x3Bu )
      {
        if ( v4 <= 0x3Du )
          goto LABEL_13;
      }
      else if ( v4 == 48 )
      {
        v2 = *(_QWORD *)(v3 + 16);
        v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v2 & 4) != 0 )
          v3 = *(_QWORD *)(v3 + 40);
      }
      else if ( v4 == 8 )
      {
        goto LABEL_13;
      }
    }
    else if ( v4 <= 0x58u && ((*(_WORD *)(v3 + 2) >> 3) & 0x7F) == 4 )
    {
LABEL_13:
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( v3 == result )
      return result;
  }
  if ( v4 != 18 )
  {
    v3 = result;
    goto LABEL_10;
  }
  if ( (*(_QWORD *)result & 0x1000000) != 0 && (BYTE2(*(_QWORD *)result) & 0x80u) != 0 )
  {
    v3 = *(_QWORD *)(result + 16);
    if ( v3 )
    {
      v4 = *(_WORD *)v3 & 0x1FF;
      goto LABEL_10;
    }
  }
  return result;
}

