unsigned __int8 __fastcall sub_79BB90(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 result; // al
  __int64 v3; // rax

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (_BYTE)v1 == 60 )
    return (unsigned __int8)~*(_BYTE *)(a1 + 12) >> 7;
  result = 0;
  if ( (unsigned __int8)v1 <= 0x17u )
  {
    v3 = 8388688;
    return _bittest64(&v3, v1);
  }
  return result;
}

