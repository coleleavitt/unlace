__int64 __fastcall sub_D8F0(__int64 a1, __int64 a2)
{
  __int16 v2; // cx
  char v4; // cl
  char v5; // di
  char v6; // cl
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // esi
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 24);
  if ( ((v2 - 26) & 0xFFFD) != 0 )
  {
    if ( v2 == 480 )
    {
      return 100;
    }
    else
    {
      result = 0;
      if ( v2 == 114 && *(_BYTE *)(a2 + 33) == 3 && *(_BYTE *)(a2 + 121) == 5 )
        return ((int)*(_QWORD *)(a2 + 128) >> 31) & 0x4B;
    }
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 33);
    v5 = *(_BYTE *)(a2 + 161);
    if ( (unsigned __int8)(v4 - 6) > 7u )
    {
      result = 0;
      if ( (unsigned __int8)(v4 - 14) > 7u )
        return result;
      v6 = v4 - 14;
    }
    else
    {
      v6 = v4 - 6;
    }
    v7 = v6 & 2;
    v8 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
    LOBYTE(v8) = v8 == 0x1F000000000300LL;
    v9 = v8 & (v7 >> 1);
    if ( v5 == 5 && *(_QWORD *)(a2 + 168) )
    {
      result = 100;
      if ( !(_BYTE)v9 )
        return v7 != 0 ? 0x46 : 0;
    }
    else
    {
      result = 90;
      if ( !(_BYTE)v9 )
        return v7 != 0 ? 0x46 : 0;
    }
  }
  return result;
}
