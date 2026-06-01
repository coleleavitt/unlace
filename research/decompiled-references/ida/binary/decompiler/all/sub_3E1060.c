__int64 __fastcall sub_3E1060(unsigned __int16 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  char v3; // cl

  if ( a1 > 0x155u )
  {
    if ( a1 != 515 )
      return (unsigned int)-(a1 == 604);
    return 0xFFFFFFFFLL;
  }
  if ( a1 > 0x117u )
  {
    v1 = 1LL << ((unsigned __int8)a1 - 24);
    if ( (v1 & 0x10100007F080200LL) != 0 )
      return 1;
    if ( (v1 & 0x1000800000D12009LL) == 0 )
      return (v1 & 0x2000000000004000LL) != 0 ? 0xFFFFFFFE : 0;
    return 0xFFFFFFFFLL;
  }
  v3 = a1 + 1;
  if ( (unsigned __int16)(a1 - 255) > 0x16u )
    return 0;
  result = 0xFFFFFFFFLL;
  if ( ((1LL << v3) & 0x492A23) == 0 )
    return ((1LL << v3) & 0x488) != 0;
  return result;
}
