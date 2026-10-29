__int64 __fastcall sub_5E5A10(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // ebp

  result = *(unsigned __int8 *)(a1 + 186);
  v3 = *(_BYTE *)(a1 + 186) & 0xF;
  if ( v3 == 10 )
  {
    result = (unsigned int)result & 0xFFFFFFCF;
    *(_DWORD *)(a1 + 56) = 0;
    *(_BYTE *)(a1 + 186) = result;
    if ( a2 == 224 )
    {
      *(_BYTE *)(a1 + 60) |= 0x20u;
      return result;
    }
    if ( a2 > 0xE0 )
    {
      if ( a2 == 256 )
      {
        *(_BYTE *)(a1 + 60) |= 0x40u;
      }
      else if ( a2 == 288 )
      {
        *(_BYTE *)(a1 + 60) |= 0x60u;
      }
    }
    else
    {
      if ( a2 == 64 )
      {
        result = (unsigned int)result | 0x10;
        *(_BYTE *)(a1 + 186) = result;
        return result;
      }
      if ( a2 <= 0x40 )
      {
        result = (unsigned int)result | 0x20;
        *(_BYTE *)(a1 + 186) = result;
        return result;
      }
      if ( a2 == 160 )
      {
        v4 = 3;
      }
      else if ( a2 > 0xA0 )
      {
        v4 = 4;
        if ( a2 != 192 )
          return result;
      }
      else
      {
        result = (a2 - 96) & 0xFFFFFFDF;
        if ( ((a2 - 96) & 0xFFFFFFDF) != 0 )
          return result;
        v4 = (a2 != 96) + 1;
      }
      result = sub_3792E0(0x7D2u);
      if ( !result )
        result = 4;
      *(_BYTE *)(a1 + 186) |= 0x30u;
      *(_DWORD *)(a1 + 56) = result + v4;
    }
  }
  else if ( v3 == 12 )
  {
    if ( a2 == 32 )
    {
      *(_BYTE *)(a1 + 186) = 44;
    }
    else if ( a2 == 64 )
    {
      *(_BYTE *)(a1 + 186) = 28;
    }
  }
  return result;
}
