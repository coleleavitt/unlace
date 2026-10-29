/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D755
// Address: 0x0047D755

//----- (0047D755) --------------------------------------------------------
char __cdecl sub_47D755(int a1)
{
  unsigned int j; // eax
  unsigned int k; // eax
  BYTE *LeadByte; // ecx
  unsigned int v4; // edx
  unsigned int m; // eax
  WORD v6; // cx
  char v7; // cl
  unsigned int i; // ecx
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-718h] BYREF
  WORD CharType[512]; // [esp+20h] [ebp-704h] BYREF
  WCHAR v12[128]; // [esp+420h] [ebp-304h] BYREF
  WCHAR DestStr[128]; // [esp+520h] [ebp-204h] BYREF
  CHAR MultiByteStr[256]; // [esp+620h] [ebp-104h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 65001 || !GetCPInfo(*(_DWORD *)(a1 + 4), &CPInfo) )
  {
    for ( i = 0; i < 0x100; ++i )
    {
      if ( i - 97 + 32 > 0x19 )
      {
        if ( i - 97 > 0x19 )
        {
          LOBYTE(m) = 0;
        }
        else
        {
          *(_BYTE *)(a1 + i + 25) |= 0x20u;
          LOBYTE(m) = i - 32;
        }
      }
      else
      {
        *(_BYTE *)(a1 + i + 25) |= 0x10u;
        LOBYTE(m) = i + 32;
      }
      *(_BYTE *)(a1 + i + 281) = m;
    }
  }
  else
  {
    for ( j = 0; j < 0x100; ++j )
      MultiByteStr[j] = j;
    LOBYTE(k) = CPInfo.LeadByte[0];
    LeadByte = CPInfo.LeadByte;
    MultiByteStr[0] = 32;
    while ( (_BYTE)k )
    {
      v4 = LeadByte[1];
      for ( k = (unsigned __int8)k; k <= v4 && k < 0x100; ++k )
        MultiByteStr[k] = 32;
      LeadByte += 2;
      LOBYTE(k) = *LeadByte;
    }
    sub_47E587(nullptr, 1u, MultiByteStr, 256, CharType, *(_DWORD *)(a1 + 4), 0);
    sub_478C49(
      nullptr,
      *(unsigned __int16 **)(a1 + 540),
      0x100u,
      MultiByteStr,
      256,
      DestStr,
      256,
      *(_DWORD *)(a1 + 4),
      0);
    sub_478C49(nullptr, *(unsigned __int16 **)(a1 + 540), 0x200u, MultiByteStr, 256, v12, 256, *(_DWORD *)(a1 + 4), 0);
    for ( m = 0; m < 0x100; ++m )
    {
      v6 = CharType[m];
      if ( (v6 & 1) != 0 )
      {
        *(_BYTE *)(a1 + m + 25) |= 0x10u;
        v7 = *((_BYTE *)DestStr + m);
      }
      else if ( (v6 & 2) != 0 )
      {
        *(_BYTE *)(a1 + m + 25) |= 0x20u;
        v7 = *((_BYTE *)v12 + m);
      }
      else
      {
        v7 = 0;
      }
      *(_BYTE *)(a1 + m + 281) = v7;
    }
  }
  return m;
}
