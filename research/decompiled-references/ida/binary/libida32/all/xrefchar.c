__int64 __fastcall xrefchar(char a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // di

  result = 63;
  v2 = (a1 & 0x1F) - 1;
  if ( v2 <= 0x14u )
    return (unsigned __int8)aOwrtisPpjju[v2];
  return result;
}

