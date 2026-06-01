__int64 __fastcall sub_1D365B0(__int64 a1, int a2)
{
  unsigned __int16 i; // dx
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 result; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        for ( i = *(_WORD *)a1 & 0x1FF; i == 79; i = *(_WORD *)a1 & 0x1FF )
          a1 = *(_QWORD *)(a1 + 16);
        if ( i != 61 )
          break;
        a1 = *(_QWORD *)(a1 + 16);
      }
      if ( i != 8 )
        break;
      a1 = *(_QWORD *)(a1 + 16);
    }
    if ( (unsigned int)i - 113 > 1 || *(_DWORD *)(a1 + 24) && *(_DWORD *)(a1 + 28) )
      break;
    v3 = (__int64 *)(a1 + 48);
    v4 = (__int64 *)(a1 + 40);
    if ( i == 114 )
      v4 = v3;
    a1 = *v4;
  }
  result = 0;
  if ( i == 71 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x2F )
    {
      if ( a2 != (*(_DWORD *)(result + 68) & 0xFFFFF) )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
