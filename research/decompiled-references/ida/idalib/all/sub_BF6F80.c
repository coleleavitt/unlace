unsigned __int64 __fastcall sub_BF6F80(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // rdx
  unsigned __int16 v4; // si
  int v5; // edi
  __int64 v6; // rdx
  int v7; // edx

  result = a1;
  while ( 2 )
  {
    v2 = *(_WORD *)result & 0x1FF;
    while ( 1 )
    {
      switch ( v2 )
      {
        case 0x14u:
LABEL_3:
          v3 = *(_QWORD *)(result + 24);
          goto LABEL_4;
        case 4u:
          if ( *(_BYTE *)(result + 2) >> 3 != 12 )
            return result;
          v3 = *(_QWORD *)(result + 16);
          goto LABEL_4;
        case 0x39u:
          if ( (*(_DWORD *)(result + 16) & 0x3FFF8000) == 0x3FFF8000 )
            return result;
          v3 = *(_QWORD *)(result
                         + 8LL
                         * (((*(_BYTE *)(result + 19) & 0x40) != 0) + ((*(_DWORD *)(result + 16) >> 15) & 0x7FFFu))
                         + 32);
          goto LABEL_4;
      }
      if ( v2 != 77 )
        break;
      if ( ((**(_DWORD **)(result + 16) >> 14) & 0xC) != 0 )
        return result;
      if ( (*(_BYTE *)(result + 2) & 8) != 0 )
        goto LABEL_3;
      v3 = *(_QWORD *)(result + 32);
LABEL_4:
      v4 = *(_WORD *)v3 & 0x1FF;
      if ( ((v4 + 433) & 0x1FFu) > 9 )
        goto LABEL_5;
      v5 = (*(_WORD *)(v3 + 2) >> 3) & 0x7F;
      if ( (unsigned int)(v5 - 7) <= 1 || v5 == 5 )
        goto LABEL_18;
      if ( v3 == result )
        return v3;
LABEL_7:
      v2 = v4;
      result = v3;
    }
    if ( v2 == 18 )
    {
      if ( (*(_QWORD *)result & 0x1000000) == 0 )
        return result;
      if ( (BYTE2(*(_QWORD *)result) & 0x80u) == 0 )
        return result;
      v3 = *(_QWORD *)(result + 16);
      if ( !v3 )
        return result;
      goto LABEL_4;
    }
    if ( ((v2 + 433) & 0x1FFu) <= 9 )
    {
      v7 = (*(_WORD *)(result + 2) >> 3) & 0x7F;
      if ( (unsigned int)(v7 - 7) > 1 && v7 != 5 )
        return result;
      v3 = result;
LABEL_18:
      v3 = *(_QWORD *)(v3 + 16);
LABEL_5:
      if ( v3 == result )
        goto LABEL_27;
      v4 = *(_WORD *)v3 & 0x1FF;
      goto LABEL_7;
    }
LABEL_27:
    if ( v2 <= 0x75u )
    {
      if ( v2 != 48 )
        return result;
      v6 = *(_QWORD *)(result + 16);
      result = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) != 0 )
        result = *(_QWORD *)(result + 40);
      goto LABEL_34;
    }
    if ( v2 <= 0x77u && ((*(_WORD *)(result + 2) >> 3) & 0x3F) == 0x20 )
    {
      result = *(_QWORD *)(result + 24);
LABEL_34:
      if ( !result )
        BUG();
      continue;
    }
    return result;
  }
}
