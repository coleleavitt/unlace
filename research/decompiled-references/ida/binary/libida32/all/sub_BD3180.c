__int64 __fastcall sub_BD3180(__int64 a1)
{
  __int16 v1; // ax
  __int64 result; // rax

  v1 = *(_WORD *)a1 & 0x1FF;
  switch ( v1 )
  {
    case 20:
      return *(_QWORD *)(a1 + 24);
    case 4:
      if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
        return a1;
      return *(_QWORD *)(a1 + 16);
    case 57:
      if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
        return a1;
      return *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
    case 77:
      if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
        return a1;
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        return *(_QWORD *)(a1 + 24);
      return *(_QWORD *)(a1 + 32);
    case 18:
      if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
        return a1;
      if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
        return a1;
      result = *(_QWORD *)(a1 + 16);
      if ( !result )
        return a1;
      break;
    default:
      return a1;
  }
  return result;
}

