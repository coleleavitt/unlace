__int64 __fastcall clang_Comment_isWhitespace(__int64 a1)
{
  char v1; // dl
  char v2; // al
  __int64 result; // rax
  char v4; // al

  if ( !a1 )
    return 0;
  v1 = *(_BYTE *)(a1 + 12);
  if ( v1 == 2 )
  {
    v2 = *(_BYTE *)(a1 + 13);
    if ( (v2 & 2) == 0 )
    {
      v2 = *(_BYTE *)(a1 + 13) & 0xF9 | (4 * sub_7670D0() + 2) & 6;
      *(_BYTE *)(a1 + 13) = v2;
    }
    LOBYTE(result) = (v2 & 4) != 0;
    return (unsigned __int8)result;
  }
  result = 0;
  if ( v1 == 7 )
  {
    v4 = *(_BYTE *)(a1 + 13);
    if ( (v4 & 1) == 0 )
    {
      v4 = *(_BYTE *)(a1 + 13) & 0xFC | (2 * sub_767100() + 1) & 3;
      *(_BYTE *)(a1 + 13) = v4;
    }
    LOBYTE(result) = (v4 & 2) != 0;
    return (unsigned __int8)result;
  }
  return result;
}

