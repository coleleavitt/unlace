unsigned __int64 __fastcall sub_BD7DA0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  __int16 v2; // dx
  unsigned __int64 result; // rax

  while ( 1 )
  {
    v2 = *(_WORD *)a1 & 0x1FF;
    if ( v2 == 20 )
      goto LABEL_2;
    if ( v2 == 4 )
    {
      if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
        goto LABEL_10;
      v1 = *(_QWORD *)(a1 + 16);
      v2 = *(_WORD *)v1 & 0x1FF;
      goto LABEL_3;
    }
    if ( v2 != 57 )
    {
      if ( v2 == 77 )
      {
        if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
          goto LABEL_10;
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
LABEL_2:
          v1 = *(_QWORD *)(a1 + 24);
          v2 = *(_WORD *)v1 & 0x1FF;
        }
        else
        {
          v1 = *(_QWORD *)(a1 + 32);
          v2 = *(_WORD *)v1 & 0x1FF;
        }
      }
      else if ( v2 == 18 )
      {
        if ( (*(_QWORD *)a1 & 0x1000000) == 0 || (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 || (v1 = *(_QWORD *)(a1 + 16)) == 0 )
        {
LABEL_10:
          v1 = a1;
          goto LABEL_11;
        }
        v2 = *(_WORD *)v1 & 0x1FF;
      }
      else
      {
        v1 = a1;
      }
LABEL_3:
      if ( v2 == 79 )
        goto LABEL_4;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
      goto LABEL_10;
    v1 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
    v2 = *(_WORD *)v1 & 0x1FF;
    if ( v2 == 79 )
      goto LABEL_4;
LABEL_18:
    if ( ((v2 + 452) & 0x1FFu) <= 1 )
    {
      result = *(_QWORD *)(v1 + 16);
      if ( result != v1 )
        goto LABEL_5;
      goto LABEL_20;
    }
LABEL_11:
    if ( v2 == 48 )
      break;
LABEL_20:
    if ( v2 == 8 )
    {
LABEL_4:
      result = *(_QWORD *)(v1 + 16);
      goto LABEL_5;
    }
    result = v1;
LABEL_5:
    if ( result == a1 )
      return result;
LABEL_6:
    a1 = result;
  }
  result = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v1 + 16) & 4) == 0 )
    goto LABEL_5;
  result = *(_QWORD *)(result + 40);
  if ( result != a1 )
    goto LABEL_6;
  return result;
}

