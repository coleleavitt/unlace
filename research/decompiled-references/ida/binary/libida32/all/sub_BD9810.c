unsigned __int64 __fastcall sub_BD9810(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rcx
  unsigned __int16 v3; // dx
  __int64 v4; // rdx

  for ( result = a1; ; result = v2 )
  {
    v3 = *(_WORD *)result & 0x1FF;
    switch ( v3 )
    {
      case 0x14u:
LABEL_7:
        v2 = *(_QWORD *)(result + 24);
        v3 = *(_WORD *)v2 & 0x1FF;
        goto LABEL_8;
      case 4u:
        if ( *(_BYTE *)(result + 2) >> 3 != 12 )
          return result;
        v2 = *(_QWORD *)(result + 16);
        v3 = *(_WORD *)v2 & 0x1FF;
        goto LABEL_8;
      case 0x39u:
        if ( (*(_DWORD *)(result + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return result;
        v2 = *(_QWORD *)(result
                       + 8LL * (((*(_BYTE *)(result + 19) & 0x40) != 0) + ((*(_DWORD *)(result + 16) >> 15) & 0x7FFFu))
                       + 32);
        v3 = *(_WORD *)v2 & 0x1FF;
        goto LABEL_8;
    }
    if ( v3 != 77 )
      break;
    if ( ((**(_DWORD **)(result + 16) >> 14) & 0xC) != 0 )
      return result;
    if ( (*(_BYTE *)(result + 2) & 8) != 0 )
      goto LABEL_7;
    v2 = *(_QWORD *)(result + 32);
    v3 = *(_WORD *)v2 & 0x1FF;
LABEL_8:
    if ( v3 > 0x4Eu )
    {
      if ( v3 > 0x58u )
        goto LABEL_4;
LABEL_3:
      v2 = *(_QWORD *)(v2 + 16);
      goto LABEL_4;
    }
    if ( v3 > 0x3Bu )
    {
      if ( v3 <= 0x3Du )
        goto LABEL_3;
    }
    else if ( v3 == 48 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v4 & 4) != 0 )
        v2 = *(_QWORD *)(v2 + 40);
    }
    else if ( v3 == 8 )
    {
      goto LABEL_3;
    }
LABEL_4:
    if ( v2 == result )
      return result;
  }
  if ( v3 != 18 )
  {
    v2 = result;
    goto LABEL_8;
  }
  if ( (*(_QWORD *)result & 0x1000000) != 0 && (BYTE2(*(_QWORD *)result) & 0x80u) != 0 )
  {
    v2 = *(_QWORD *)(result + 16);
    if ( v2 )
    {
      v3 = *(_WORD *)v2 & 0x1FF;
      goto LABEL_8;
    }
  }
  return result;
}

