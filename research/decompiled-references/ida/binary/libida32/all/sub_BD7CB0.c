__int64 __fastcall sub_BD7CB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int16 v3; // dx

  for ( result = a1; ; result = v2 )
  {
    v3 = *(_WORD *)result & 0x1FF;
    switch ( v3 )
    {
      case 20:
LABEL_2:
        v2 = *(_QWORD *)(result + 24);
        goto LABEL_3;
      case 4:
        if ( *(_BYTE *)(result + 2) >> 3 != 12 )
          return result;
        v2 = *(_QWORD *)(result + 16);
        goto LABEL_3;
      case 57:
        if ( (*(_DWORD *)(result + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return result;
        v2 = *(_QWORD *)(result
                       + 8LL * (((*(_BYTE *)(result + 19) & 0x40) != 0) + ((*(_DWORD *)(result + 16) >> 15) & 0x7FFFu))
                       + 32);
        goto LABEL_3;
    }
    if ( v3 != 77 )
      break;
    if ( ((**(_DWORD **)(result + 16) >> 14) & 0xC) != 0 )
      return result;
    if ( (*(_BYTE *)(result + 2) & 8) != 0 )
      goto LABEL_2;
    v2 = *(_QWORD *)(result + 32);
LABEL_3:
    if ( v2 == result )
      return result;
  }
  if ( v3 == 18 && (*(_QWORD *)result & 0x1000000) != 0 && (BYTE2(*(_QWORD *)result) & 0x80u) != 0 )
  {
    v2 = *(_QWORD *)(result + 16);
    if ( v2 )
      goto LABEL_3;
  }
  return result;
}

